void __fastcall BillBoardVariant___ctor(BillBoardVariant_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  void *v9; // x1

  if ( (byte_4B15633 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B15633 = 1;
  }
  this->fields.enableRotationY = 1;
  v9 = StringLiteral_1/*""*/;
  this->fields.searchCameraName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.searchCameraName, (int64_t)v9, v2, v3, v4, v5, v6, v7);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BillBoardVariant__ResetFlip(BillBoardVariant_o *this, const MethodInfo *method)
{
  this->fields.rotationFlip = this->fields.saveFlipFlag;
}


void __fastcall BillBoardVariant__Start(BillBoardVariant_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct UnityEngine_Camera_o **p_targetCamera; // x20
  UnityEngine_Object_o *targetCamera; // x21
  __int64 v8; // x1
  UnityEngine_Camera_o *main; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  struct UnityEngine_Camera_o **v16; // x0
  void *ObjectsOfType_object; // x0
  __int64 v18; // x1
  int v19; // w8
  _DWORD *v20; // x21
  unsigned int v21; // w23
  char *v22; // x8
  struct UnityEngine_Camera_o *v23; // x22

  if ( (byte_4B15631 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Object_FindObjectsOfType_Camera___, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B15631 = 1;
  }
  p_targetCamera = &this->fields.targetCamera;
  targetCamera = (UnityEngine_Object_o *)this->fields.targetCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(targetCamera, 0LL, 0LL) )
  {
    if ( System_String__IsNullOrEmpty(this->fields.searchCameraName, 0LL) )
    {
      main = UnityEngine_Camera__get_main(0LL);
      *p_targetCamera = main;
      v16 = &this->fields.targetCamera;
LABEL_20:
      sub_1BCA784((PartyOrganizationUtility_o *)v16, (int64_t)main, v10, v11, v12, v13, v14, v15);
      goto LABEL_21;
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    ObjectsOfType_object = UnityEngine_Object__FindObjectsOfType_object_((const MethodInfo_2F97640 *)Method_UnityEngine_Object_FindObjectsOfType_Camera___);
    if ( !ObjectsOfType_object )
LABEL_22:
      sub_1BCAA3C(ObjectsOfType_object, v18);
    v19 = *((_DWORD *)ObjectsOfType_object + 6);
    v20 = ObjectsOfType_object;
    if ( v19 >= 1 )
    {
      v21 = 0;
      while ( 1 )
      {
        if ( v21 >= v19 )
          sub_1BCAA44(ObjectsOfType_object, v18);
        v22 = (char *)&v20[2 * v21];
        v23 = (struct UnityEngine_Camera_o *)*((_QWORD *)v22 + 4);
        if ( !v23 )
          goto LABEL_22;
        ObjectsOfType_object = UnityEngine_Object__get_name(*((UnityEngine_Object_o **)v22 + 4), 0LL);
        if ( !ObjectsOfType_object )
          goto LABEL_22;
        ObjectsOfType_object = (void *)System_String__Equals_62409536(
                                         (System_String_o *)ObjectsOfType_object,
                                         this->fields.searchCameraName,
                                         0LL);
        if ( ((unsigned __int8)ObjectsOfType_object & 1) != 0 )
          break;
        v19 = v20[6];
        if ( (int)++v21 >= v19 )
          goto LABEL_21;
      }
      *p_targetCamera = v23;
      v16 = &this->fields.targetCamera;
      main = v23;
      goto LABEL_20;
    }
  }
LABEL_21:
  this->fields.saveFlipFlag = this->fields.rotationFlip;
}


void __fastcall BillBoardVariant__UpdateBillboard(BillBoardVariant_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *targetCamera; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *transform; // x0
  float x; // s10
  float y; // s9
  float z; // s8
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

  if ( (byte_4B15632 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B15632 = 1;
  }
  targetCamera = (UnityEngine_Object_o *)this->fields.targetCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
        v10 = (UnityEngine_Transform_o *)transform;
        if ( !this->fields.enableRotationX )
        {
          if ( !transform )
            goto LABEL_25;
          v16 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0LL);
          y = v16.fields.y;
        }
        if ( !this->fields.enableRotationY )
        {
          if ( !v10 )
            goto LABEL_25;
          LODWORD(x) = (unsigned int)UnityEngine_Transform__get_position(v10, 0LL);
        }
        if ( this->fields.enableRotationZ )
        {
          if ( !v10 )
            goto LABEL_25;
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
            goto LABEL_22;
          }
        }
        else if ( v10 )
        {
LABEL_22:
          v20.fields.x = x;
          v20.fields.y = y;
          v20.fields.z = z;
          UnityEngine_Transform__LookAt_70177976(v10, v20, 0LL);
          if ( this->fields.enableRotationZ )
            UnityEngine_Transform__Rotate_70176908(v10, 0.0, 0.0, v11, 0LL);
          return;
        }
      }
    }
LABEL_25:
    sub_1BCAA3C(transform, v5);
  }
}


void __fastcall BillBoardVariant__setCamera(
        BillBoardVariant_o *this,
        UnityEngine_Camera_o *wkcamera,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.targetCamera = wkcamera;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.targetCamera,
    (int64_t)wkcamera,
    (int64_t)method,
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