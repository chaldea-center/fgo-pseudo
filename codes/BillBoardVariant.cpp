void __fastcall BillBoardVariant___ctor(BillBoardVariant_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1

  if ( (byte_42E7E64 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E7E64 = 1;
  }
  this->fields.enableRotationY = 1;
  v9 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.searchCameraName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.searchCameraName, v9, v2, v3, v4, v5, v6, v7);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BillBoardVariant__ResetFlip(BillBoardVariant_o *this, const MethodInfo *method)
{
  this->fields.rotationFlip = this->fields.saveFlipFlag;
}


void __fastcall BillBoardVariant__Start(BillBoardVariant_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct UnityEngine_Camera_o **p_targetCamera; // x20
  UnityEngine_Object_o *targetCamera; // x21
  System_Int32_array **main; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct UnityEngine_Camera_o **v17; // x0
  void *ObjectsOfType_object; // x0
  __int64 v19; // x1
  int v20; // w8
  _DWORD *v21; // x21
  unsigned int v22; // w23
  char *v23; // x8
  struct UnityEngine_Camera_o *v24; // x22
  __int64 v25; // x0

  if ( (byte_42E7E62 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Object_FindObjectsOfType_Camera___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42E7E62 = 1;
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
      v17 = &this->fields.targetCamera;
LABEL_22:
      sub_B5D560((BattleServantConfConponent_o *)v17, main, v11, v12, v13, v14, v15, v16);
      goto LABEL_23;
    }
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    ObjectsOfType_object = UnityEngine_Object__FindObjectsOfType_object_((const MethodInfo_1E6614C *)Method_UnityEngine_Object_FindObjectsOfType_Camera___);
    if ( !ObjectsOfType_object )
LABEL_24:
      sub_B5D69C(ObjectsOfType_object, v19);
    v20 = *((_DWORD *)ObjectsOfType_object + 6);
    v21 = ObjectsOfType_object;
    if ( v20 >= 1 )
    {
      v22 = 0;
      while ( 1 )
      {
        if ( v22 >= v20 )
        {
          v25 = sub_B5D6C8(ObjectsOfType_object);
          sub_B5D668(v25, 0LL);
        }
        v23 = (char *)&v21[2 * v22];
        v24 = (struct UnityEngine_Camera_o *)*((_QWORD *)v23 + 4);
        if ( !v24 )
          goto LABEL_24;
        ObjectsOfType_object = UnityEngine_Object__get_name(*((UnityEngine_Object_o **)v23 + 4), 0LL);
        if ( !ObjectsOfType_object )
          goto LABEL_24;
        ObjectsOfType_object = (void *)System_String__Equals_44565128(
                                         (System_String_o *)ObjectsOfType_object,
                                         this->fields.searchCameraName,
                                         0LL);
        if ( ((unsigned __int8)ObjectsOfType_object & 1) != 0 )
          break;
        v20 = v21[6];
        if ( (int)++v22 >= v20 )
          goto LABEL_23;
      }
      *p_targetCamera = v24;
      v17 = &this->fields.targetCamera;
      main = (System_Int32_array **)v24;
      goto LABEL_22;
    }
  }
LABEL_23:
  this->fields.saveFlipFlag = this->fields.rotationFlip;
}


void __fastcall BillBoardVariant__UpdateBillboard(BillBoardVariant_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *targetCamera; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *transform; // x0
  float x; // s10
  float y; // s9
  float z; // s8
  UnityEngine_Transform_o *v11; // x20
  float v12; // s11
  float v13; // s10
  float v14; // s9
  float v15; // s8
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localEulerAngles; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E7E63 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7E63 = 1;
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
    if ( transform )
    {
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
      if ( transform )
      {
        position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0LL);
        x = position.fields.x;
        y = position.fields.y;
        z = position.fields.z;
        transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
        v11 = (UnityEngine_Transform_o *)transform;
        if ( !this->fields.enableRotationX )
        {
          if ( !transform )
            goto LABEL_26;
          v17 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0LL);
          y = v17.fields.y;
        }
        if ( !this->fields.enableRotationY )
        {
          if ( !v11 )
            goto LABEL_26;
          LODWORD(x) = (unsigned int)UnityEngine_Transform__get_position(v11, 0LL);
        }
        if ( this->fields.enableRotationZ )
        {
          if ( !v11 )
            goto LABEL_26;
          localEulerAngles = UnityEngine_Transform__get_localEulerAngles(v11, 0LL);
          v12 = localEulerAngles.fields.z;
        }
        else
        {
          v12 = 0.0;
        }
        if ( this->fields.rotationFlip )
        {
          if ( v11 )
          {
            v19 = UnityEngine_Transform__get_position(v11, 0LL);
            v13 = x - v19.fields.x;
            v14 = y - v19.fields.y;
            v15 = z - v19.fields.z;
            v20 = UnityEngine_Transform__get_position(v11, 0LL);
            x = v20.fields.x - v13;
            y = v20.fields.y - v14;
            z = v20.fields.z - v15;
            goto LABEL_23;
          }
        }
        else if ( v11 )
        {
LABEL_23:
          v21.fields.x = x;
          v21.fields.y = y;
          v21.fields.z = z;
          UnityEngine_Transform__LookAt_35743444(v11, v21, 0LL);
          if ( this->fields.enableRotationZ )
            UnityEngine_Transform__Rotate_35742360(v11, 0.0, 0.0, v12, 0LL);
          return;
        }
      }
    }
LABEL_26:
    sub_B5D69C(transform, v6);
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
  sub_B5D560(
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