void BillBoard___ctor(BillBoard_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w1

  if ( (byte_4D2FD81 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2FD81 = 1;
  }
  v9 = StringLiteral_1/*""*/;
  this->fields.searchCameraName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.searchCameraName, v9, v2, v3, v4, v5, v6, v7);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BillBoard__ResetFlip(BillBoard_o *this, const MethodInfo *method)
{
  this->fields.rotationFlip = this->fields.saveFlipFlag;
}


void BillBoard__Start(BillBoard_o *this, const MethodInfo *method)
{
  struct UnityEngine_Camera_o **p_targetCamera; // x20
  UnityEngine_Object_o *targetCamera; // x21
  UnityEngine_Camera_o *main; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  int32_t v12; // w1
  struct UnityEngine_Camera_o **v13; // x0
  void *ObjectsOfType_object; // x0
  __int64 v15; // x1
  int v16; // w8
  _DWORD *v17; // x21
  unsigned int v18; // w23
  char *v19; // x8
  struct UnityEngine_Camera_o *v20; // x22
  struct UnityEngine_Transform_o *transform; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7

  if ( (byte_4D2FD7F & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Object_FindObjectsOfType_Camera___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2FD7F = 1;
  }
  p_targetCamera = &this->fields.targetCamera;
  targetCamera = (UnityEngine_Object_o *)this->fields.targetCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(targetCamera, 0, 0) )
  {
    if ( System_String__IsNullOrEmpty(this->fields.searchCameraName, 0) )
    {
      main = UnityEngine_Camera__get_main(0);
      v12 = (int)main;
      *p_targetCamera = main;
      v13 = &this->fields.targetCamera;
LABEL_20:
      sub_1C93A78((GrandQuestFolderBoardItem_o *)v13, v12, v6, v7, v8, v9, v10, v11);
      goto LABEL_21;
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    ObjectsOfType_object = UnityEngine_Object__FindObjectsOfType_object_((const MethodInfo_3230D10 *)Method_UnityEngine_Object_FindObjectsOfType_Camera___);
    if ( !ObjectsOfType_object )
LABEL_22:
      sub_1C93D2C(ObjectsOfType_object, v15);
    v16 = *((_DWORD *)ObjectsOfType_object + 6);
    v17 = ObjectsOfType_object;
    if ( v16 >= 1 )
    {
      v18 = 0;
      while ( 1 )
      {
        if ( v18 >= v16 )
          sub_1C93D34(ObjectsOfType_object);
        v19 = (char *)&v17[2 * v18];
        v20 = (struct UnityEngine_Camera_o *)*((_QWORD *)v19 + 4);
        if ( !v20 )
          goto LABEL_22;
        ObjectsOfType_object = UnityEngine_Object__get_name(*((UnityEngine_Object_o **)v19 + 4), 0);
        if ( !ObjectsOfType_object )
          goto LABEL_22;
        ObjectsOfType_object = (void *)System_String__Equals_64461044(
                                         (System_String_o *)ObjectsOfType_object,
                                         this->fields.searchCameraName,
                                         0);
        if ( ((unsigned __int8)ObjectsOfType_object & 1) != 0 )
          break;
        v16 = v17[6];
        if ( (int)++v18 >= v16 )
          goto LABEL_21;
      }
      *p_targetCamera = v20;
      v13 = &this->fields.targetCamera;
      v12 = (int)v20;
      goto LABEL_20;
    }
  }
LABEL_21:
  this->fields.saveFlipFlag = this->fields.rotationFlip;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  this->fields.mTrf = transform;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mTrf, (int32_t)transform, v22, v23, v24, v25, v26, v27);
}


void BillBoard__UpdateBillboard(BillBoard_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *targetCamera; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *transform; // x0
  float x; // s8
  float z; // s9
  float y; // s11
  float v9; // s10
  UnityEngine_Vector3_o position; // 0:kr00_12.12
  UnityEngine_Vector3_o v11; // 0:kr34_12.12
  UnityEngine_Vector3_o v12; // 0:kr40_12.12
  UnityEngine_Vector3_o v13; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2FD80 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2FD80 = 1;
  }
  targetCamera = (UnityEngine_Object_o *)this->fields.targetCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    y = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0).fields.y;
    if ( this->fields.enableRotationZ )
    {
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( !transform )
        goto LABEL_22;
      v9 = UnityEngine_Transform__get_localEulerAngles((UnityEngine_Transform_o *)transform, 0).fields.z;
    }
    else
    {
      v9 = 0.0;
    }
    if ( this->fields.rotationFlip )
    {
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( !transform )
        goto LABEL_22;
      v11 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0);
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( !transform )
        goto LABEL_22;
      v12 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0);
      x = v12.fields.x - (float)(position.fields.x - v11.fields.x);
      y = v12.fields.y - (float)(y - v11.fields.y);
      z = v12.fields.z - (float)(position.fields.z - v11.fields.z);
    }
    transform = (UnityEngine_Component_o *)this->fields.mTrf;
    if ( !transform )
      goto LABEL_22;
    v13.fields.x = x;
    v13.fields.y = y;
    v13.fields.z = z;
    UnityEngine_Transform__LookAt_72145832((UnityEngine_Transform_o *)transform, v13, 0);
    if ( this->fields.enableRotationZ )
    {
      transform = (UnityEngine_Component_o *)this->fields.mTrf;
      if ( transform )
      {
        UnityEngine_Transform__Rotate_72144764((UnityEngine_Transform_o *)transform, 0.0, 0.0, v9, 0);
        return;
      }
LABEL_22:
      sub_1C93D2C(transform, v4);
    }
  }
}


void BillBoard__setCamera(BillBoard_o *this, UnityEngine_Camera_o *wkcamera, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.targetCamera = wkcamera;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.targetCamera,
    (int32_t)wkcamera,
    (int32_t)method,
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