void __fastcall BillBoardVariant___ctor(BillBoardVariant_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1

  if ( (byte_40F9089 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1, method);
    byte_40F9089 = 1;
  }
  this->fields.enableRotationY = 1;
  v9 = (System_Int32_array **)StringLiteral_1;
  this->fields.searchCameraName = (struct System_String_o *)StringLiteral_1;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.searchCameraName, v9, v2, v3, v4, v5, v6, v7);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BillBoardVariant__ResetFlip(BillBoardVariant_o *this, const MethodInfo *method)
{
  this->fields.rotationFlip = this->fields.saveFlipFlag;
}


void __fastcall BillBoardVariant__Start(BillBoardVariant_o *this, const MethodInfo *method)
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
  System_Object_array *ObjectsOfType_object; // x0
  __int64 v15; // x1
  int max_length; // w8
  System_Object_array *v17; // x21
  unsigned int v18; // w23
  Il2CppClass **v19; // x8
  struct UnityEngine_Camera_o *v20; // x22
  System_String_o *name; // x0

  if ( (byte_40F9087 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Object_FindObjectsOfType_Camera___, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40F9087 = 1;
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
      sub_B16F98((BattleServantConfConponent_o *)v13, main, v7, v8, v9, v10, v11, v12);
      goto LABEL_23;
    }
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    ObjectsOfType_object = UnityEngine_Object__FindObjectsOfType_object_((const MethodInfo_19DE080 *)Method_UnityEngine_Object_FindObjectsOfType_Camera___);
    if ( !ObjectsOfType_object )
LABEL_24:
      sub_B170D4();
    max_length = ObjectsOfType_object->max_length;
    v17 = ObjectsOfType_object;
    if ( max_length >= 1 )
    {
      v18 = 0;
      while ( 1 )
      {
        if ( v18 >= max_length )
        {
          sub_B17100(ObjectsOfType_object, v15, v7);
          sub_B170A0();
        }
        v19 = &v17->obj.klass + (int)v18;
        v20 = (struct UnityEngine_Camera_o *)v19[4];
        if ( !v20 )
          goto LABEL_24;
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v19[4], 0LL);
        if ( !name )
          goto LABEL_24;
        ObjectsOfType_object = (System_Object_array *)System_String__Equals_43731072(
                                                        name,
                                                        this->fields.searchCameraName,
                                                        0LL);
        if ( ((unsigned __int8)ObjectsOfType_object & 1) != 0 )
          break;
        max_length = v17->max_length;
        if ( (int)++v18 >= max_length )
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
}


void __fastcall BillBoardVariant__UpdateBillboard(BillBoardVariant_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *targetCamera; // x20
  UnityEngine_Component_o *v4; // x0
  UnityEngine_Transform_o *transform; // x0
  float x; // s10
  float y; // s9
  float z; // s8
  UnityEngine_Transform_o *v9; // x0
  UnityEngine_Transform_o *v10; // x20
  float v11; // s11
  float v12; // s10
  float v13; // s9
  float v14; // s8
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localEulerAngles; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F9088 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F9088 = 1;
  }
  targetCamera = (UnityEngine_Object_o *)this->fields.targetCamera;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(targetCamera, 0LL, 0LL) )
  {
    v4 = (UnityEngine_Component_o *)this->fields.targetCamera;
    if ( v4 )
    {
      transform = UnityEngine_Component__get_transform(v4, 0LL);
      if ( transform )
      {
        position = UnityEngine_Transform__get_position(transform, 0LL);
        x = position.fields.x;
        y = position.fields.y;
        z = position.fields.z;
        v9 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
        v10 = v9;
        if ( !this->fields.enableRotationX )
        {
          if ( !v9 )
            goto LABEL_26;
          v16 = UnityEngine_Transform__get_position(v9, 0LL);
          y = v16.fields.y;
        }
        if ( !this->fields.enableRotationY )
        {
          if ( !v10 )
            goto LABEL_26;
          LODWORD(x) = (unsigned int)UnityEngine_Transform__get_position(v10, 0LL);
        }
        if ( this->fields.enableRotationZ )
        {
          if ( !v10 )
            goto LABEL_26;
          localEulerAngles = UnityEngine_Transform__get_localEulerAngles(v10, 0LL);
          v11 = localEulerAngles.fields.z;
        }
        else
        {
          v11 = 0.0;
        }
        if ( this->fields.rotationFlip )
        {
          if ( v10 )
          {
            v18 = UnityEngine_Transform__get_position(v10, 0LL);
            v12 = x - v18.fields.x;
            v13 = y - v18.fields.y;
            v14 = z - v18.fields.z;
            v19 = UnityEngine_Transform__get_position(v10, 0LL);
            x = v19.fields.x - v12;
            y = v19.fields.y - v13;
            z = v19.fields.z - v14;
            goto LABEL_23;
          }
        }
        else if ( v10 )
        {
LABEL_23:
          v20.fields.x = x;
          v20.fields.y = y;
          v20.fields.z = z;
          UnityEngine_Transform__LookAt_34932516(v10, v20, 0LL);
          if ( this->fields.enableRotationZ )
            UnityEngine_Transform__Rotate_34931432(v10, 0.0, 0.0, v11, 0LL);
          return;
        }
      }
    }
LABEL_26:
    sub_B170D4();
  }
}


void __fastcall BillBoardVariant__setCamera(
        BillBoardVariant_o *this,
        UnityEngine_Camera_o *wkcamera,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.targetCamera = wkcamera;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.targetCamera,
    (System_Int32_array **)wkcamera,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BillBoardVariant__setFlip(BillBoardVariant_o *this, bool flg, bool init, const MethodInfo *method)
{
  this->fields.rotationFlip = flg;
  if ( init )
    this->fields.saveFlipFlag = flg;
}