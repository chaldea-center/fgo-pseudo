void BillBoardVariant___ctor(BillBoardVariant_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1

  if ( (byte_4C42354 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C42354 = 1;
  }
  this->fields.enableRotationY = 1;
  v5 = StringLiteral_1/*""*/;
  this->fields.searchCameraName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.searchCameraName, v5, v2, v3);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BillBoardVariant__ResetFlip(BillBoardVariant_o *this, const MethodInfo *method)
{
  this->fields.rotationFlip = this->fields.saveFlipFlag;
}


void BillBoardVariant__Start(BillBoardVariant_o *this, const MethodInfo *method)
{
  struct UnityEngine_Camera_o **p_targetCamera; // x20
  UnityEngine_Object_o *targetCamera; // x21
  UnityEngine_Camera_o *main; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w1
  struct UnityEngine_Camera_o **v9; // x0
  void *ObjectsOfType_object; // x0
  int v11; // w8
  _DWORD *v12; // x21
  unsigned int v13; // w23
  char *v14; // x8
  struct UnityEngine_Camera_o *v15; // x22

  if ( (byte_4C42352 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Object_FindObjectsOfType_Camera___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C42352 = 1;
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
      v8 = (int)main;
      *p_targetCamera = main;
      v9 = &this->fields.targetCamera;
LABEL_20:
      sub_1C36FFC((CGThumbnailListItem_o *)v9, v8, v6, v7);
      goto LABEL_21;
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    ObjectsOfType_object = UnityEngine_Object__FindObjectsOfType_object_((const MethodInfo_3173E64 *)Method_UnityEngine_Object_FindObjectsOfType_Camera___);
    if ( !ObjectsOfType_object )
LABEL_22:
      sub_1C372B4(ObjectsOfType_object);
    v11 = *((_DWORD *)ObjectsOfType_object + 6);
    v12 = ObjectsOfType_object;
    if ( v11 >= 1 )
    {
      v13 = 0;
      while ( 1 )
      {
        if ( v13 >= v11 )
          sub_1C372BC(ObjectsOfType_object);
        v14 = (char *)&v12[2 * v13];
        v15 = (struct UnityEngine_Camera_o *)*((_QWORD *)v14 + 4);
        if ( !v15 )
          goto LABEL_22;
        ObjectsOfType_object = UnityEngine_Object__get_name(*((UnityEngine_Object_o **)v14 + 4), 0);
        if ( !ObjectsOfType_object )
          goto LABEL_22;
        ObjectsOfType_object = (void *)System_String__Equals_63596960(
                                         (System_String_o *)ObjectsOfType_object,
                                         this->fields.searchCameraName,
                                         0);
        if ( ((unsigned __int8)ObjectsOfType_object & 1) != 0 )
          break;
        v11 = v12[6];
        if ( (int)++v13 >= v11 )
          goto LABEL_21;
      }
      *p_targetCamera = v15;
      v9 = &this->fields.targetCamera;
      v8 = (int)v15;
      goto LABEL_20;
    }
  }
LABEL_21:
  this->fields.saveFlipFlag = this->fields.rotationFlip;
}


void BillBoardVariant__UpdateBillboard(BillBoardVariant_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *targetCamera; // x20
  UnityEngine_Component_o *transform; // x0
  float x; // s10
  float y; // s9
  float z; // s8
  UnityEngine_Transform_o *v8; // x20
  float v9; // s11
  float v10; // s10
  float v11; // s9
  float v12; // s8
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localEulerAngles; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C42353 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C42353 = 1;
  }
  targetCamera = (UnityEngine_Object_o *)this->fields.targetCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(targetCamera, 0, 0) )
  {
    transform = (UnityEngine_Component_o *)this->fields.targetCamera;
    if ( transform )
    {
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0);
      if ( transform )
      {
        position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0);
        x = position.fields.x;
        y = position.fields.y;
        z = position.fields.z;
        transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
        v8 = (UnityEngine_Transform_o *)transform;
        if ( !this->fields.enableRotationX )
        {
          if ( !transform )
            goto LABEL_25;
          v14 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0);
          y = v14.fields.y;
        }
        if ( !this->fields.enableRotationY )
        {
          if ( !v8 )
            goto LABEL_25;
          LODWORD(x) = (unsigned int)UnityEngine_Transform__get_position(v8, 0);
        }
        if ( this->fields.enableRotationZ )
        {
          if ( !v8 )
            goto LABEL_25;
          localEulerAngles = UnityEngine_Transform__get_localEulerAngles(v8, 0);
          v9 = localEulerAngles.fields.z;
        }
        else
        {
          v9 = 0.0;
        }
        if ( this->fields.rotationFlip )
        {
          if ( v8 )
          {
            v16 = UnityEngine_Transform__get_position(v8, 0);
            v10 = x - v16.fields.x;
            v11 = y - v16.fields.y;
            v12 = z - v16.fields.z;
            v17 = UnityEngine_Transform__get_position(v8, 0);
            x = v17.fields.x - v10;
            y = v17.fields.y - v11;
            z = v17.fields.z - v12;
            goto LABEL_22;
          }
        }
        else if ( v8 )
        {
LABEL_22:
          v18.fields.x = x;
          v18.fields.y = y;
          v18.fields.z = z;
          UnityEngine_Transform__LookAt_71292496(v8, v18, 0);
          if ( this->fields.enableRotationZ )
            UnityEngine_Transform__Rotate_71291428(v8, 0.0, 0.0, v9, 0);
          return;
        }
      }
    }
LABEL_25:
    sub_1C372B4(transform);
  }
}


void BillBoardVariant__setCamera(BillBoardVariant_o *this, UnityEngine_Camera_o *wkcamera, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.targetCamera = wkcamera;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.targetCamera, (int32_t)wkcamera, (int32_t)method, v3);
}


void BillBoardVariant__setFlip(BillBoardVariant_o *this, bool flg, bool init, const MethodInfo *method)
{
  this->fields.rotationFlip = flg;
  if ( init )
    this->fields.saveFlipFlag = flg;
}