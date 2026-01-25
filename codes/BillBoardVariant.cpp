void BillBoardVariant___ctor(BillBoardVariant_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w1

  if ( (byte_4CEDA37 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEDA37 = 1;
  }
  this->fields.enableRotationY = 1;
  v9 = StringLiteral_1/*""*/;
  this->fields.searchCameraName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.searchCameraName, v9, v2, v3, v4, v5, v6, v7);
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

  if ( (byte_4CEDA35 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_Object_FindObjectsOfType_Camera___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEDA35 = 1;
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
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)v13, v12, v6, v7, v8, v9, v10, v11);
      goto LABEL_21;
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    ObjectsOfType_object = UnityEngine_Object__FindObjectsOfType_object_((const MethodInfo_31FBD54 *)Method_UnityEngine_Object_FindObjectsOfType_Camera___);
    if ( !ObjectsOfType_object )
LABEL_22:
      sub_1C7BD40(ObjectsOfType_object, v15);
    v16 = *((_DWORD *)ObjectsOfType_object + 6);
    v17 = ObjectsOfType_object;
    if ( v16 >= 1 )
    {
      v18 = 0;
      while ( 1 )
      {
        if ( v18 >= v16 )
          sub_1C7BD48(ObjectsOfType_object);
        v19 = (char *)&v17[2 * v18];
        v20 = (struct UnityEngine_Camera_o *)*((_QWORD *)v19 + 4);
        if ( !v20 )
          goto LABEL_22;
        ObjectsOfType_object = UnityEngine_Object__get_name(*((UnityEngine_Object_o **)v19 + 4), 0);
        if ( !ObjectsOfType_object )
          goto LABEL_22;
        ObjectsOfType_object = (void *)System_String__Equals_64212232(
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
}


void BillBoardVariant__UpdateBillboard(BillBoardVariant_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *targetCamera; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *transform; // x0
  float x; // s10
  float y; // s9
  float z; // s8
  UnityEngine_Transform_o *v9; // x20
  float v10; // s11
  float v11; // s10
  float v12; // s9
  float v13; // s8
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localEulerAngles; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CEDA36 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEDA36 = 1;
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
        v9 = (UnityEngine_Transform_o *)transform;
        if ( !this->fields.enableRotationX )
        {
          if ( !transform )
            goto LABEL_25;
          v15 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0);
          y = v15.fields.y;
        }
        if ( !this->fields.enableRotationY )
        {
          if ( !v9 )
            goto LABEL_25;
          LODWORD(x) = (unsigned int)UnityEngine_Transform__get_position(v9, 0);
        }
        if ( this->fields.enableRotationZ )
        {
          if ( !v9 )
            goto LABEL_25;
          localEulerAngles = UnityEngine_Transform__get_localEulerAngles(v9, 0);
          v10 = localEulerAngles.fields.z;
        }
        else
        {
          v10 = 0.0;
        }
        if ( this->fields.rotationFlip )
        {
          if ( v9 )
          {
            v17 = UnityEngine_Transform__get_position(v9, 0);
            v11 = x - v17.fields.x;
            v12 = y - v17.fields.y;
            v13 = z - v17.fields.z;
            v18 = UnityEngine_Transform__get_position(v9, 0);
            x = v18.fields.x - v11;
            y = v18.fields.y - v12;
            z = v18.fields.z - v13;
            goto LABEL_22;
          }
        }
        else if ( v9 )
        {
LABEL_22:
          v19.fields.x = x;
          v19.fields.y = y;
          v19.fields.z = z;
          UnityEngine_Transform__LookAt_71896072(v9, v19, 0);
          if ( this->fields.enableRotationZ )
            UnityEngine_Transform__Rotate_71895004(v9, 0.0, 0.0, v10, 0);
          return;
        }
      }
    }
LABEL_25:
    sub_1C7BD40(transform, v4);
  }
}


void BillBoardVariant__setCamera(BillBoardVariant_o *this, UnityEngine_Camera_o *wkcamera, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.targetCamera = wkcamera;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.targetCamera,
    (int32_t)wkcamera,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BillBoardVariant__setFlip(BillBoardVariant_o *this, bool flg, bool init, const MethodInfo *method)
{
  this->fields.rotationFlip = flg;
  if ( init )
    this->fields.saveFlipFlag = flg;
}