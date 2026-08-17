void BillBoard___ctor(BillBoard_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v9; // w1

  if ( (byte_596FB44 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596FB44 = 1;
  }
  v9 = (int)StringLiteral_1/*""*/;
  this->fields.searchCameraName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.searchCameraName, v9, v2, v3, v4, v5, v6, v7);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BillBoard__ResetFlip(BillBoard_o *this, const MethodInfo *method)
{
  this->fields.rotationFlip = this->fields.saveFlipFlag;
}


void BillBoard__Start(BillBoard_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct UnityEngine_Camera_o **p_targetCamera; // x20
  UnityEngine_Object_o *targetCamera; // x21
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Camera_o *main; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  int32_t v15; // w1
  struct UnityEngine_Camera_o **v16; // x0
  void *ObjectsOfType_object; // x0
  __int64 v18; // x1
  int v19; // w8
  void *v20; // x21
  __int64 v21; // x23
  struct UnityEngine_Camera_o *v22; // x22
  struct UnityEngine_Transform_o *transform; // x0
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7

  if ( (byte_596FB42 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Object_FindObjectsOfType_Camera___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596FB42 = 1;
  }
  p_targetCamera = &this->fields.targetCamera;
  targetCamera = (UnityEngine_Object_o *)this->fields.targetCamera;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(targetCamera, 0, 0) )
  {
    if ( System_String__IsNullOrEmpty(this->fields.searchCameraName, 0) )
    {
      main = UnityEngine_Camera__get_main(0);
      v15 = (int)main;
      *p_targetCamera = main;
      v16 = &this->fields.targetCamera;
LABEL_20:
      sub_2213A04((MissionNaviTransitionBoardItem_o *)v16, v15, v9, v10, v11, v12, v13, v14);
      goto LABEL_21;
    }
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    ObjectsOfType_object = UnityEngine_Object__FindObjectsOfType_object_((const MethodInfo_38F3388 *)Method_UnityEngine_Object_FindObjectsOfType_Camera___);
    if ( !ObjectsOfType_object )
LABEL_22:
      sub_2213CDC(ObjectsOfType_object, v18);
    v19 = *((_DWORD *)ObjectsOfType_object + 6);
    v20 = ObjectsOfType_object;
    if ( v19 >= 1 )
    {
      v21 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v21 >= v19 )
          sub_2213CE4(ObjectsOfType_object);
        v22 = (struct UnityEngine_Camera_o *)*((_QWORD *)v20 + v21 + 4);
        if ( !v22 )
          goto LABEL_22;
        ObjectsOfType_object = UnityEngine_Object__get_name(*((UnityEngine_Object_o **)v20 + v21 + 4), 0);
        if ( !ObjectsOfType_object )
          goto LABEL_22;
        ObjectsOfType_object = (void *)System_String__Equals_75686512(
                                         (System_String_o *)ObjectsOfType_object,
                                         this->fields.searchCameraName,
                                         0);
        if ( ((unsigned __int8)ObjectsOfType_object & 1) != 0 )
          break;
        v19 = *((_DWORD *)v20 + 6);
        if ( (int)++v21 >= v19 )
          goto LABEL_21;
      }
      *p_targetCamera = v22;
      v16 = &this->fields.targetCamera;
      v15 = (int)v22;
      goto LABEL_20;
    }
  }
LABEL_21:
  this->fields.saveFlipFlag = this->fields.rotationFlip;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  this->fields.mTrf = transform;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mTrf, (int32_t)transform, v24, v25, v26, v27, v28, v29);
}


void BillBoard__UpdateBillboard(BillBoard_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *targetCamera; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *transform; // x0
  float x; // s8
  float z; // s9
  float y; // s11
  float v10; // s10
  float v11; // s12
  float v12; // s13
  float v13; // s14
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localEulerAngles; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596FB43 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596FB43 = 1;
  }
  targetCamera = (UnityEngine_Object_o *)this->fields.targetCamera;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(targetCamera, 0, 0) )
  {
    transform = (UnityEngine_Component_o *)this->fields.targetCamera;
    if ( !transform )
      goto LABEL_22;
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0);
    if ( !transform )
      goto LABEL_22;
    position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0);
    x = position.fields.x;
    z = position.fields.z;
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !transform )
      goto LABEL_22;
    v15 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0);
    y = v15.fields.y;
    if ( this->fields.enableRotationZ )
    {
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( !transform )
        goto LABEL_22;
      localEulerAngles = UnityEngine_Transform__get_localEulerAngles((UnityEngine_Transform_o *)transform, 0);
      v10 = localEulerAngles.fields.z;
    }
    else
    {
      v10 = 0.0;
    }
    if ( this->fields.rotationFlip )
    {
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( !transform )
        goto LABEL_22;
      v17 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0);
      v11 = v17.fields.x;
      v12 = v17.fields.y;
      v13 = v17.fields.z;
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( !transform )
        goto LABEL_22;
      v18 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0);
      x = v18.fields.x - (float)(x - v11);
      y = v18.fields.y - (float)(y - v12);
      z = v18.fields.z - (float)(z - v13);
    }
    transform = (UnityEngine_Component_o *)this->fields.mTrf;
    if ( !transform )
      goto LABEL_22;
    v19.fields.x = x;
    v19.fields.y = y;
    v19.fields.z = z;
    UnityEngine_Transform__LookAt_83495412((UnityEngine_Transform_o *)transform, v19, 0);
    if ( this->fields.enableRotationZ )
    {
      transform = (UnityEngine_Component_o *)this->fields.mTrf;
      if ( transform )
      {
        UnityEngine_Transform__Rotate_83494228((UnityEngine_Transform_o *)transform, 0.0, 0.0, v10, 0);
        return;
      }
LABEL_22:
      sub_2213CDC(transform, v5);
    }
  }
}


void BillBoard__setCamera(BillBoard_o *this, UnityEngine_Camera_o *wkcamera, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.targetCamera = wkcamera;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.targetCamera,
    (int32_t)wkcamera,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BillBoard__setFlip(BillBoard_o *this, bool flg, bool init, const MethodInfo *method)
{
  this->fields.rotationFlip = flg;
  if ( init )
    this->fields.saveFlipFlag = flg;
}