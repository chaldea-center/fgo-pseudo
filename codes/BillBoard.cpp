void __fastcall BillBoard___ctor(BillBoard_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1

  if ( (byte_41875D2 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_41875D2 = 1;
  }
  v9 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.searchCameraName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.searchCameraName, v9, v2, v3, v4, v5, v6, v7);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BillBoard__ResetFlip(BillBoard_o *this, const MethodInfo *method)
{
  this->fields.rotationFlip = this->fields.saveFlipFlag;
}


void __fastcall BillBoard__Start(BillBoard_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct UnityEngine_Camera_o **p_targetCamera; // x20
  UnityEngine_Object_o *targetCamera; // x21
  System_Int32_array **main; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct UnityEngine_Camera_o **v13; // x0
  void *ObjectsOfType_object; // x0
  __int64 v15; // x1
  int v16; // w8
  _DWORD *v17; // x21
  unsigned int v18; // w23
  char *v19; // x8
  struct UnityEngine_Camera_o *v20; // x22
  struct UnityEngine_Transform_o *transform; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  __int64 v28; // x0

  if ( (byte_41875D0 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Object_FindObjectsOfType_Camera___, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_41875D0 = 1;
  }
  p_targetCamera = &this->fields.targetCamera;
  targetCamera = (UnityEngine_Object_o *)this->fields.targetCamera;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(targetCamera, 0LL, 0LL) )
  {
    if ( System_String__IsNullOrEmpty(this->fields.searchCameraName, 0LL) )
    {
      main = (System_Int32_array **)UnityEngine_Camera__get_main(0LL);
      *p_targetCamera = (struct UnityEngine_Camera_o *)main;
      v13 = &this->fields.targetCamera;
LABEL_22:
      sub_B2C2F8((BattleServantConfConponent_o *)v13, main, v7, v8, v9, v10, v11, v12);
      goto LABEL_23;
    }
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    ObjectsOfType_object = UnityEngine_Object__FindObjectsOfType_object_((const MethodInfo_2095CAC *)Method_UnityEngine_Object_FindObjectsOfType_Camera___);
    if ( !ObjectsOfType_object )
LABEL_24:
      sub_B2C434(ObjectsOfType_object, v15);
    v16 = *((_DWORD *)ObjectsOfType_object + 6);
    v17 = ObjectsOfType_object;
    if ( v16 >= 1 )
    {
      v18 = 0;
      while ( 1 )
      {
        if ( v18 >= v16 )
        {
          v28 = sub_B2C460(ObjectsOfType_object);
          sub_B2C400(v28, 0LL);
        }
        v19 = (char *)&v17[2 * v18];
        v20 = (struct UnityEngine_Camera_o *)*((_QWORD *)v19 + 4);
        if ( !v20 )
          goto LABEL_24;
        ObjectsOfType_object = UnityEngine_Object__get_name(*((UnityEngine_Object_o **)v19 + 4), 0LL);
        if ( !ObjectsOfType_object )
          goto LABEL_24;
        ObjectsOfType_object = (void *)System_String__Equals_44292872(
                                         (System_String_o *)ObjectsOfType_object,
                                         this->fields.searchCameraName,
                                         0LL);
        if ( ((unsigned __int8)ObjectsOfType_object & 1) != 0 )
          break;
        v16 = v17[6];
        if ( (int)++v18 >= v16 )
          goto LABEL_23;
      }
      *p_targetCamera = v20;
      v13 = &this->fields.targetCamera;
      main = (System_Int32_array **)v20;
      goto LABEL_22;
    }
  }
LABEL_23:
  this->fields.saveFlipFlag = this->fields.rotationFlip;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  this->fields.mTrf = transform;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.mTrf,
    (System_Int32_array **)transform,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
}


void __fastcall BillBoard__UpdateBillboard(BillBoard_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *targetCamera; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *transform; // x0
  float x; // s8
  float z; // s9
  float y; // s11
  float v9; // s10
  float v10; // s13
  float v11; // s12
  float v12; // s14
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localEulerAngles; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_41875D1 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_41875D1 = 1;
  }
  targetCamera = (UnityEngine_Object_o *)this->fields.targetCamera;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(targetCamera, 0LL, 0LL) )
  {
    transform = (UnityEngine_Component_o *)this->fields.targetCamera;
    if ( !transform )
      goto LABEL_23;
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
    if ( !transform )
      goto LABEL_23;
    position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0LL);
    x = position.fields.x;
    z = position.fields.z;
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform )
      goto LABEL_23;
    v14 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0LL);
    y = v14.fields.y;
    if ( this->fields.enableRotationZ )
    {
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !transform )
        goto LABEL_23;
      localEulerAngles = UnityEngine_Transform__get_localEulerAngles((UnityEngine_Transform_o *)transform, 0LL);
      v9 = localEulerAngles.fields.z;
    }
    else
    {
      v9 = 0.0;
    }
    if ( this->fields.rotationFlip )
    {
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !transform )
        goto LABEL_23;
      v16 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0LL);
      v10 = v16.fields.x;
      v11 = v16.fields.y;
      v12 = v16.fields.z;
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !transform )
        goto LABEL_23;
      v17 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0LL);
      x = v17.fields.x - (float)(x - v10);
      y = v17.fields.y - (float)(y - v11);
      z = v17.fields.z - (float)(z - v12);
    }
    transform = (UnityEngine_Component_o *)this->fields.mTrf;
    if ( !transform )
      goto LABEL_23;
    v18.fields.x = x;
    v18.fields.y = y;
    v18.fields.z = z;
    UnityEngine_Transform__LookAt_35438000((UnityEngine_Transform_o *)transform, v18, 0LL);
    if ( this->fields.enableRotationZ )
    {
      transform = (UnityEngine_Component_o *)this->fields.mTrf;
      if ( transform )
      {
        UnityEngine_Transform__Rotate_35436916((UnityEngine_Transform_o *)transform, 0.0, 0.0, v9, 0LL);
        return;
      }
LABEL_23:
      sub_B2C434(transform, v4);
    }
  }
}


void __fastcall BillBoard__setCamera(BillBoard_o *this, UnityEngine_Camera_o *wkcamera, const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.targetCamera = wkcamera;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.targetCamera,
    (System_Int32_array **)wkcamera,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BillBoard__setFlip(BillBoard_o *this, bool flg, bool init, const MethodInfo *method)
{
  this->fields.rotationFlip = flg;
  if ( init )
    this->fields.saveFlipFlag = flg;
}