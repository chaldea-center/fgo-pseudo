void __fastcall BillBoardVariant___ctor(BillBoardVariant_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w1

  if ( (byte_4A5A5C9 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5A5C9 = 1;
  }
  this->fields.enableRotationY = 1;
  v5 = (int)StringLiteral_1/*""*/;
  this->fields.searchCameraName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.searchCameraName, v5, v2, v3);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BillBoardVariant__ResetFlip(BillBoardVariant_o *this, const MethodInfo *method)
{
  this->fields.rotationFlip = this->fields.saveFlipFlag;
}


void __fastcall BillBoardVariant__Start(BillBoardVariant_o *this, const MethodInfo *method)
{
  struct UnityEngine_Camera_o **p_targetCamera; // x20
  UnityEngine_Object_o *targetCamera; // x21
  UnityEngine_Camera_o *main; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  int32_t v8; // w1
  struct UnityEngine_Camera_o **v9; // x0
  void *ObjectsOfType_object; // x0
  __int64 v11; // x1
  int v12; // w8
  _DWORD *v13; // x21
  unsigned int v14; // w23
  char *v15; // x8
  struct UnityEngine_Camera_o *v16; // x22

  if ( (byte_4A5A5C7 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Object_FindObjectsOfType_Camera___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5A5C7 = 1;
  }
  p_targetCamera = &this->fields.targetCamera;
  targetCamera = (UnityEngine_Object_o *)this->fields.targetCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(targetCamera, 0LL, 0LL) )
  {
    if ( System_String__IsNullOrEmpty(this->fields.searchCameraName, 0LL) )
    {
      main = UnityEngine_Camera__get_main(0LL);
      v8 = (int)main;
      *p_targetCamera = main;
      v9 = &this->fields.targetCamera;
LABEL_20:
      sub_1B88554((ServantStatusBattleListViewItem_o *)v9, v8, v6, v7);
      goto LABEL_21;
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    ObjectsOfType_object = UnityEngine_Object__FindObjectsOfType_object_((const MethodInfo_2F03700 *)Method_UnityEngine_Object_FindObjectsOfType_Camera___);
    if ( !ObjectsOfType_object )
LABEL_22:
      sub_1B8880C(ObjectsOfType_object, v11);
    v12 = *((_DWORD *)ObjectsOfType_object + 6);
    v13 = ObjectsOfType_object;
    if ( v12 >= 1 )
    {
      v14 = 0;
      while ( 1 )
      {
        if ( v14 >= v12 )
          sub_1B88814(ObjectsOfType_object, v11);
        v15 = (char *)&v13[2 * v14];
        v16 = (struct UnityEngine_Camera_o *)*((_QWORD *)v15 + 4);
        if ( !v16 )
          goto LABEL_22;
        ObjectsOfType_object = UnityEngine_Object__get_name(*((UnityEngine_Object_o **)v15 + 4), 0LL);
        if ( !ObjectsOfType_object )
          goto LABEL_22;
        ObjectsOfType_object = (void *)System_String__Equals_61715348(
                                         (System_String_o *)ObjectsOfType_object,
                                         this->fields.searchCameraName,
                                         0LL);
        if ( ((unsigned __int8)ObjectsOfType_object & 1) != 0 )
          break;
        v12 = v13[6];
        if ( (int)++v14 >= v12 )
          goto LABEL_21;
      }
      *p_targetCamera = v16;
      v9 = &this->fields.targetCamera;
      v8 = (int)v16;
      goto LABEL_20;
    }
  }
LABEL_21:
  this->fields.saveFlipFlag = this->fields.rotationFlip;
}


void __fastcall BillBoardVariant__UpdateBillboard(BillBoardVariant_o *this, const MethodInfo *method)
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

  if ( (byte_4A5A5C8 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5A5C8 = 1;
  }
  targetCamera = (UnityEngine_Object_o *)this->fields.targetCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
        v9 = (UnityEngine_Transform_o *)transform;
        if ( !this->fields.enableRotationX )
        {
          if ( !transform )
            goto LABEL_25;
          v15 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0LL);
          y = v15.fields.y;
        }
        if ( !this->fields.enableRotationY )
        {
          if ( !v9 )
            goto LABEL_25;
          LODWORD(x) = (unsigned int)UnityEngine_Transform__get_position(v9, 0LL);
        }
        if ( this->fields.enableRotationZ )
        {
          if ( !v9 )
            goto LABEL_25;
          localEulerAngles = UnityEngine_Transform__get_localEulerAngles(v9, 0LL);
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
            v17 = UnityEngine_Transform__get_position(v9, 0LL);
            v11 = x - v17.fields.x;
            v12 = y - v17.fields.y;
            v13 = z - v17.fields.z;
            v18 = UnityEngine_Transform__get_position(v9, 0LL);
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
          UnityEngine_Transform__LookAt_69483112(v9, v19, 0LL);
          if ( this->fields.enableRotationZ )
            UnityEngine_Transform__Rotate_69482044(v9, 0.0, 0.0, v10, 0LL);
          return;
        }
      }
    }
LABEL_25:
    sub_1B8880C(transform, v4);
  }
}


void __fastcall BillBoardVariant__setCamera(
        BillBoardVariant_o *this,
        UnityEngine_Camera_o *wkcamera,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.targetCamera = wkcamera;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.targetCamera, (int32_t)wkcamera, (int32_t)method, v3);
}


void __fastcall BillBoardVariant__setFlip(BillBoardVariant_o *this, bool flg, bool init, const MethodInfo *method)
{
  this->fields.rotationFlip = flg;
  if ( init )
    this->fields.saveFlipFlag = flg;
}