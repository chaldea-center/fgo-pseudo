void __fastcall BillBoard___ctor(BillBoard_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1

  if ( (byte_42AFCEF & 1) == 0 )
  {
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42AFCEF = 1;
  }
  v9 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.searchCameraName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.searchCameraName, v9, v2, v3, v4, v5, v6, v7);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BillBoard__ResetFlip(BillBoard_o *this, const MethodInfo *method)
{
  this->fields.rotationFlip = this->fields.saveFlipFlag;
}


void __fastcall BillBoard__Start(BillBoard_o *this, const MethodInfo *method)
{
  struct UnityEngine_Camera_o **p_targetCamera; // x20
  UnityEngine_Object_o *targetCamera; // x21
  System_Int32_array **main; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  struct UnityEngine_Camera_o **v12; // x0
  void *ObjectsOfType_object; // x0
  __int64 v14; // x1
  int v15; // w8
  _DWORD *v16; // x21
  unsigned int v17; // w23
  char *v18; // x8
  struct UnityEngine_Camera_o *v19; // x22
  struct UnityEngine_Transform_o *transform; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  __int64 v27; // x0

  if ( (byte_42AFCED & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Object_FindObjectsOfType_Camera___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AFCED = 1;
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
      v12 = &this->fields.targetCamera;
LABEL_22:
      sub_B52920((BattleServantConfConponent_o *)v12, main, v6, v7, v8, v9, v10, v11);
      goto LABEL_23;
    }
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    ObjectsOfType_object = UnityEngine_Object__FindObjectsOfType_object_((const MethodInfo_1F7102C *)Method_UnityEngine_Object_FindObjectsOfType_Camera___);
    if ( !ObjectsOfType_object )
LABEL_24:
      sub_B52A5C(ObjectsOfType_object, v14);
    v15 = *((_DWORD *)ObjectsOfType_object + 6);
    v16 = ObjectsOfType_object;
    if ( v15 >= 1 )
    {
      v17 = 0;
      while ( 1 )
      {
        if ( v17 >= v15 )
        {
          v27 = sub_B52A88(ObjectsOfType_object);
          sub_B52A28(v27, 0LL);
        }
        v18 = (char *)&v16[2 * v17];
        v19 = (struct UnityEngine_Camera_o *)*((_QWORD *)v18 + 4);
        if ( !v19 )
          goto LABEL_24;
        ObjectsOfType_object = UnityEngine_Object__get_name(*((UnityEngine_Object_o **)v18 + 4), 0LL);
        if ( !ObjectsOfType_object )
          goto LABEL_24;
        ObjectsOfType_object = (void *)System_String__Equals_44555656(
                                         (System_String_o *)ObjectsOfType_object,
                                         this->fields.searchCameraName,
                                         0LL);
        if ( ((unsigned __int8)ObjectsOfType_object & 1) != 0 )
          break;
        v15 = v16[6];
        if ( (int)++v17 >= v15 )
          goto LABEL_23;
      }
      *p_targetCamera = v19;
      v12 = &this->fields.targetCamera;
      main = (System_Int32_array **)v19;
      goto LABEL_22;
    }
  }
LABEL_23:
  this->fields.saveFlipFlag = this->fields.rotationFlip;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  this->fields.mTrf = transform;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.mTrf,
    (System_Int32_array **)transform,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
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

  if ( (byte_42AFCEE & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AFCEE = 1;
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
    UnityEngine_Transform__LookAt_35740164((UnityEngine_Transform_o *)transform, v18, 0LL);
    if ( this->fields.enableRotationZ )
    {
      transform = (UnityEngine_Component_o *)this->fields.mTrf;
      if ( transform )
      {
        UnityEngine_Transform__Rotate_35739080((UnityEngine_Transform_o *)transform, 0.0, 0.0, v9, 0LL);
        return;
      }
LABEL_23:
      sub_B52A5C(transform, v4);
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
  sub_B52920(
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