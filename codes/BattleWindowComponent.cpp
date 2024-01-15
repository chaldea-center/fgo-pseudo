void __fastcall BattleWindowComponent___ctor(BattleWindowComponent_o *this, const MethodInfo *method)
{
  this->fields.type = 1;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleWindowComponent__Close(
        BattleWindowComponent_o *this,
        BattleWindowComponent_EndCall_o *call,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  BattleWindowComponent_EndCall_o **p_call_closeComp; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v27; // x20
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  System_Collections_Hashtable_o *v32; // x20
  __int64 v33; // x0
  UnityEngine_GameObject_o *v34; // x0
  __int64 v35; // x0
  int32_t type; // w8
  __int64 v37; // x8
  __int64 v38; // x0
  __int64 v39; // x0
  UnityEngine_GameObject_o *v40; // x21
  __int64 v41; // x0
  __int64 v42; // x0
  UnityEngine_GameObject_o *v43; // x21
  UnityEngine_GameObject_o *v44; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  UnityEngine_GameObject_o *v46; // x0
  TweenAlpha_o *v47; // x0
  __int64 v48; // x0
  __int64 v49; // x0
  UnityEngine_GameObject_o *v50; // x21
  _BYTE v51[12]; // [xsp+0h] [xbp-30h] BYREF
  int v52; // [xsp+1Ch] [xbp-14h] BYREF

  if ( (byte_40F9022 & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, call);
    sub_B16FFC(&iTween_EaseType_TypeInfo, v10);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v11);
    sub_B16FFC(&System_Collections_Hashtable_TypeInfo, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    sub_B16FFC(&float_TypeInfo, v14);
    sub_B16FFC(&UnityEngine_Vector3_TypeInfo, v15);
    sub_B16FFC(&StringLiteral_18046/*"easetype"*/, v16);
    sub_B16FFC(&StringLiteral_4175/*"CompClose"*/, v17);
    sub_B16FFC(&StringLiteral_22584/*"time"*/, v18);
    sub_B16FFC(&StringLiteral_21175/*"oncompletetarget"*/, v19);
    sub_B16FFC(&StringLiteral_21419/*"position"*/, v20);
    sub_B16FFC(&StringLiteral_19856/*"isLocal"*/, v21);
    sub_B16FFC(&StringLiteral_21173/*"oncomplete"*/, v22);
    sub_B16FFC(&StringLiteral_21803/*"scale"*/, v23);
    sub_B16FFC(&iTween_TypeInfo, v24);
    byte_40F9022 = 1;
  }
  this->fields.call_closeComp = call;
  p_call_closeComp = &this->fields.call_closeComp;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.call_closeComp,
    (System_Int32_array **)call,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_35;
  if ( UnityEngine_GameObject__get_activeSelf(gameObject, 0LL) )
  {
    v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__Stop_18552136(v27, 0LL);
    v32 = (System_Collections_Hashtable_o *)sub_B170CC(System_Collections_Hashtable_TypeInfo, v28, v29, v30, v31);
    System_Collections_Hashtable___ctor_38240048(v32, 0LL);
    LOBYTE(v52) = 1;
    v33 = j_il2cpp_value_box_0(bool_TypeInfo, &v52);
    if ( v32 )
    {
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v32->klass->vtable._23_Add.method)(
        v32,
        StringLiteral_19856/*"isLocal"*/,
        v33,
        v32->klass->vtable._24_Clear.methodPtr);
      v34 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v32->klass->vtable._23_Add.method)(
        v32,
        StringLiteral_21175/*"oncompletetarget"*/,
        v34,
        v32->klass->vtable._24_Clear.methodPtr);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v32->klass->vtable._23_Add.method)(
        v32,
        StringLiteral_21173/*"oncomplete"*/,
        StringLiteral_4175/*"CompClose"*/,
        v32->klass->vtable._24_Clear.methodPtr);
      *(float *)v51 = this->fields.movetime;
      v35 = j_il2cpp_value_box_0(float_TypeInfo, v51);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v32->klass->vtable._23_Add.method)(
        v32,
        StringLiteral_22584/*"time"*/,
        v35,
        v32->klass->vtable._24_Clear.methodPtr);
      type = this->fields.type;
      if ( type != 2 )
      {
        if ( type == 1 )
        {
          *(int32x2_t *)v51 = vdup_n_s32(0x3F333333u);
          *(_DWORD *)&v51[8] = 0;
          v48 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, v51);
          ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v32->klass->vtable._23_Add.method)(
            v32,
            StringLiteral_21803/*"scale"*/,
            v48,
            v32->klass->vtable._24_Clear.methodPtr);
          v52 = 26;
          v49 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v52);
          ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v32->klass->vtable._23_Add.method)(
            v32,
            StringLiteral_18046/*"easetype"*/,
            v49,
            v32->klass->vtable._24_Clear.methodPtr);
          v50 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
          iTween__ScaleTo_18439972(v50, v32, 0LL);
        }
        else if ( !type )
        {
          v37 = *(_QWORD *)&this->fields.tmp_pos.fields.y;
          *(float *)v51 = this->fields.tmp_pos.fields.x + 80.0;
          *(_QWORD *)&v51[4] = v37;
          v38 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, v51);
          ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v32->klass->vtable._23_Add.method)(
            v32,
            StringLiteral_21419/*"position"*/,
            v38,
            v32->klass->vtable._24_Clear.methodPtr);
          v52 = 26;
          v39 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v52);
          ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v32->klass->vtable._23_Add.method)(
            v32,
            StringLiteral_18046/*"easetype"*/,
            v39,
            v32->klass->vtable._24_Clear.methodPtr);
          v40 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
          iTween__MoveTo_18434272(v40, v32, 0LL);
        }
        goto LABEL_33;
      }
      *(int32x2_t *)v51 = vdup_n_s32(0x3F666666u);
      *(_DWORD *)&v51[8] = 0;
      v41 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, v51);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v32->klass->vtable._23_Add.method)(
        v32,
        StringLiteral_21803/*"scale"*/,
        v41,
        v32->klass->vtable._24_Clear.methodPtr);
      v52 = 26;
      v42 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v52);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v32->klass->vtable._23_Add.method)(
        v32,
        StringLiteral_18046/*"easetype"*/,
        v42,
        v32->klass->vtable._24_Clear.methodPtr);
      v43 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
      iTween__ScaleTo_18439972(v43, v32, 0LL);
      v44 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( v44 )
      {
        Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                            v44,
                                                            (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( !UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL) )
          goto LABEL_33;
        if ( Component_srcLineSprite )
        {
          ((void (__fastcall *)(UnityEngine_Object_o *, Il2CppClass *, float))Component_srcLineSprite->klass[1]._1.castClass)(
            Component_srcLineSprite,
            Component_srcLineSprite->klass[1]._1.declaringType,
            1.0);
          v46 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          v47 = TweenAlpha__Begin(v46, this->fields.movetime, 0.0, 0LL);
          if ( v47 )
          {
            v47->fields.style = 6;
LABEL_33:
            this->fields.state = 1;
            return;
          }
        }
      }
    }
LABEL_35:
    sub_B170D4();
  }
  if ( *p_call_closeComp )
    BattleWindowComponent_EndCall__Invoke(*p_call_closeComp, 0LL);
}


void __fastcall BattleWindowComponent__CompClose(BattleWindowComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  BattleWindowComponent_EndCall_o *call_closeComp; // x0

  this->fields.state = 2;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  call_closeComp = this->fields.call_closeComp;
  if ( call_closeComp )
    BattleWindowComponent_EndCall__Invoke(call_closeComp, 0LL);
}


void __fastcall BattleWindowComponent__CompOpen(BattleWindowComponent_o *this, const MethodInfo *method)
{
  BattleWindowComponent_EndCall_o *call_openComp; // x0

  call_openComp = this->fields.call_openComp;
  this->fields.state = 3;
  if ( call_openComp )
    BattleWindowComponent_EndCall__Invoke(call_openComp, 0LL);
}


bool __fastcall BattleWindowComponent__IsCloseorClosing(BattleWindowComponent_o *this, const MethodInfo *method)
{
  return (unsigned int)(this->fields.state - 1) < 2;
}


bool __fastcall BattleWindowComponent__IsClosing(BattleWindowComponent_o *this, const MethodInfo *method)
{
  return this->fields.state == 1;
}


void __fastcall BattleWindowComponent__OnEnable(BattleWindowComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *v4; // x20
  System_String_o *v5; // x0
  UnityEngine_Transform_o *transform; // x20
  System_String_o *v7; // x0
  UnityEngine_Component_o *v8; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v10; // x19

  if ( (byte_40F9020 & 1) == 0 )
  {
    sub_B16FFC(&AndroidBackKeyManager_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40F9020 = 1;
  }
  v4 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(BattleWindowComponent_o *, Il2CppMethodPointer))this->klass->vtable._4_get_closeBtnObject.method)(
                                 this,
                                 this->klass->vtable._5_set_closeBtnObject.methodPtr);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(v4, 0LL, 0LL) )
    goto LABEL_16;
  v5 = (System_String_o *)((__int64 (__fastcall *)(BattleWindowComponent_o *, Il2CppMethodPointer))this->klass->vtable._6_get_closeBtnPath.method)(
                            this,
                            this->klass->vtable._7_setInitialPos.methodPtr);
  if ( System_String__IsNullOrEmpty(v5, 0LL) )
    return;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  v7 = (System_String_o *)((__int64 (__fastcall *)(BattleWindowComponent_o *, Il2CppMethodPointer))this->klass->vtable._6_get_closeBtnPath.method)(
                            this,
                            this->klass->vtable._7_setInitialPos.methodPtr);
  if ( !transform )
LABEL_20:
    sub_B170D4();
  v8 = (UnityEngine_Component_o *)UnityEngine_Transform__Find(transform, v7, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v8, 0LL, 0LL) )
  {
    if ( v8 )
    {
      gameObject = UnityEngine_Component__get_gameObject(v8, 0LL);
      ((void (__fastcall *)(BattleWindowComponent_o *, UnityEngine_GameObject_o *, Il2CppMethodPointer))this->klass->vtable._5_set_closeBtnObject.method)(
        this,
        gameObject,
        this->klass->vtable._6_get_closeBtnPath.methodPtr);
LABEL_16:
      v10 = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(BattleWindowComponent_o *, Il2CppMethodPointer))this->klass->vtable._4_get_closeBtnObject.method)(
                                          this,
                                          this->klass->vtable._5_set_closeBtnObject.methodPtr);
      if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
      }
      AndroidBackKeyManager__AddBackBtn(v10, 0LL);
      return;
    }
    goto LABEL_20;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleWindowComponent__Open(
        BattleWindowComponent_o *this,
        BattleWindowComponent_EndCall_o *call,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  UnityEngine_GameObject_o *v26; // x0
  UnityEngine_GameObject_o *v27; // x0
  UnityEngine_Transform_o *transform; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  System_Collections_Hashtable_o *v33; // x20
  __int64 v34; // x0
  UnityEngine_GameObject_o *v35; // x0
  __int64 v36; // x0
  int32_t type; // w8
  __int64 v38; // x8
  __int64 v39; // x0
  __int64 v40; // x0
  UnityEngine_GameObject_o *v41; // x21
  UnityEngine_Transform_o *v42; // x21
  int v43; // s0
  __int64 v46; // x0
  __int64 v47; // x0
  UnityEngine_GameObject_o *v48; // x21
  UnityEngine_GameObject_o *v49; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  UnityEngine_GameObject_o *v51; // x0
  TweenAlpha_o *v52; // x0
  UnityEngine_Transform_o *v53; // x21
  int v54; // s0
  __int64 v57; // x0
  __int64 v58; // x0
  UnityEngine_GameObject_o *v59; // x21
  int v60; // [xsp+Ch] [xbp-34h] BYREF
  _BYTE v61[12]; // [xsp+10h] [xbp-30h] BYREF

  if ( (byte_40F9021 & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, call);
    sub_B16FFC(&iTween_EaseType_TypeInfo, v10);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v11);
    sub_B16FFC(&System_Collections_Hashtable_TypeInfo, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    sub_B16FFC(&float_TypeInfo, v14);
    sub_B16FFC(&UnityEngine_Vector3_TypeInfo, v15);
    sub_B16FFC(&StringLiteral_18046/*"easetype"*/, v16);
    sub_B16FFC(&StringLiteral_22584/*"time"*/, v17);
    sub_B16FFC(&StringLiteral_21175/*"oncompletetarget"*/, v18);
    sub_B16FFC(&StringLiteral_21419/*"position"*/, v19);
    sub_B16FFC(&StringLiteral_19856/*"isLocal"*/, v20);
    sub_B16FFC(&StringLiteral_21173/*"oncomplete"*/, v21);
    sub_B16FFC(&StringLiteral_4176/*"CompOpen"*/, v22);
    sub_B16FFC(&StringLiteral_21803/*"scale"*/, v23);
    sub_B16FFC(&iTween_TypeInfo, v24);
    byte_40F9021 = 1;
  }
  this->fields.call_openComp = call;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.call_openComp,
    (System_Int32_array **)call,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_18552136(gameObject, 0LL);
  v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v26 )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive(v26, 1, 0LL);
  v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v27 )
    goto LABEL_35;
  transform = UnityEngine_GameObject__get_transform(v27, 0LL);
  if ( !transform )
    goto LABEL_35;
  UnityEngine_Transform__set_localPosition(transform, this->fields.tmp_pos, 0LL);
  v33 = (System_Collections_Hashtable_o *)sub_B170CC(System_Collections_Hashtable_TypeInfo, v29, v30, v31, v32);
  System_Collections_Hashtable___ctor_38240048(v33, 0LL);
  LOBYTE(v60) = 1;
  v34 = j_il2cpp_value_box_0(bool_TypeInfo, &v60);
  if ( !v33 )
    goto LABEL_35;
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v33->klass->vtable._23_Add.method)(
    v33,
    StringLiteral_19856/*"isLocal"*/,
    v34,
    v33->klass->vtable._24_Clear.methodPtr);
  v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v33->klass->vtable._23_Add.method)(
    v33,
    StringLiteral_21175/*"oncompletetarget"*/,
    v35,
    v33->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v33->klass->vtable._23_Add.method)(
    v33,
    StringLiteral_21173/*"oncomplete"*/,
    StringLiteral_4176/*"CompOpen"*/,
    v33->klass->vtable._24_Clear.methodPtr);
  *(float *)v61 = this->fields.movetime;
  v36 = j_il2cpp_value_box_0(float_TypeInfo, v61);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v33->klass->vtable._23_Add.method)(
    v33,
    StringLiteral_22584/*"time"*/,
    v36,
    v33->klass->vtable._24_Clear.methodPtr);
  type = this->fields.type;
  if ( type != 2 )
  {
    if ( type != 1 )
    {
      if ( !type )
      {
        v38 = *(_QWORD *)&this->fields.tmp_pos.fields.y;
        *(float *)v61 = this->fields.tmp_pos.fields.x + 80.0;
        *(_QWORD *)&v61[4] = v38;
        v39 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, v61);
        ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v33->klass->vtable._23_Add.method)(
          v33,
          StringLiteral_21419/*"position"*/,
          v39,
          v33->klass->vtable._24_Clear.methodPtr);
        v60 = 27;
        v40 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v60);
        ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v33->klass->vtable._23_Add.method)(
          v33,
          StringLiteral_18046/*"easetype"*/,
          v40,
          v33->klass->vtable._24_Clear.methodPtr);
        v41 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
        iTween__MoveFrom_18435792(v41, v33, 0LL);
      }
      goto LABEL_34;
    }
    v53 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    *(UnityEngine_Vector3_o *)&v54 = UnityEngine_Vector3__get_one(0LL);
    if ( v53 )
    {
      UnityEngine_Transform__set_localScale(v53, *(UnityEngine_Vector3_o *)&v54, 0LL);
      *(int32x2_t *)v61 = vdup_n_s32(0x3F333333u);
      *(_DWORD *)&v61[8] = 0;
      v57 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, v61);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v33->klass->vtable._23_Add.method)(
        v33,
        StringLiteral_21803/*"scale"*/,
        v57,
        v33->klass->vtable._24_Clear.methodPtr);
      v60 = 27;
      v58 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v60);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v33->klass->vtable._23_Add.method)(
        v33,
        StringLiteral_18046/*"easetype"*/,
        v58,
        v33->klass->vtable._24_Clear.methodPtr);
      v59 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
      iTween__ScaleFrom_18441472(v59, v33, 0LL);
      goto LABEL_34;
    }
LABEL_35:
    sub_B170D4();
  }
  v42 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  *(UnityEngine_Vector3_o *)&v43 = UnityEngine_Vector3__get_one(0LL);
  if ( !v42 )
    goto LABEL_35;
  UnityEngine_Transform__set_localScale(v42, *(UnityEngine_Vector3_o *)&v43, 0LL);
  *(int32x2_t *)v61 = vdup_n_s32(0x3F666666u);
  *(_DWORD *)&v61[8] = 0;
  v46 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, v61);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v33->klass->vtable._23_Add.method)(
    v33,
    StringLiteral_21803/*"scale"*/,
    v46,
    v33->klass->vtable._24_Clear.methodPtr);
  v60 = 27;
  v47 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v60);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v33->klass->vtable._23_Add.method)(
    v33,
    StringLiteral_18046/*"easetype"*/,
    v47,
    v33->klass->vtable._24_Clear.methodPtr);
  v48 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__ScaleFrom_18441472(v48, v33, 0LL);
  v49 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v49 )
    goto LABEL_35;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      v49,
                                                      (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL) )
  {
    if ( Component_srcLineSprite )
    {
      ((void (__fastcall *)(UnityEngine_Object_o *, Il2CppClass *, float))Component_srcLineSprite->klass[1]._1.castClass)(
        Component_srcLineSprite,
        Component_srcLineSprite->klass[1]._1.declaringType,
        0.01);
      v51 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v52 = TweenAlpha__Begin(v51, this->fields.movetime, 1.0, 0LL);
      if ( v52 )
      {
        v52->fields.style = 6;
        goto LABEL_34;
      }
    }
    goto LABEL_35;
  }
LABEL_34:
  this->fields.state = 4;
}


UnityEngine_GameObject_o *__fastcall BattleWindowComponent__get_closeBtnObject(
        BattleWindowComponent_o *this,
        const MethodInfo *method)
{
  return this->fields._closeBtnObject;
}


System_String_o *__fastcall BattleWindowComponent__get_closeBtnPath(
        BattleWindowComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_40F901F & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1/*""*/, method);
    byte_40F901F = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


bool __fastcall BattleWindowComponent__isClose(BattleWindowComponent_o *this, const MethodInfo *method)
{
  return this->fields.state == 2;
}


bool __fastcall BattleWindowComponent__isOpen(BattleWindowComponent_o *this, const MethodInfo *method)
{
  return this->fields.state == 3;
}


bool __fastcall BattleWindowComponent__isOpenOrOpening(BattleWindowComponent_o *this, const MethodInfo *method)
{
  return (unsigned int)(this->fields.state - 3) < 2;
}


bool __fastcall BattleWindowComponent__isOpening(BattleWindowComponent_o *this, const MethodInfo *method)
{
  return this->fields.state == 4;
}


void __fastcall BattleWindowComponent__setClose(BattleWindowComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  this->fields.state = 2;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall BattleWindowComponent__setInitData(
        BattleWindowComponent_o *this,
        int32_t type,
        float time,
        bool ocflg,
        const MethodInfo *method)
{
  const MethodInfo *v9; // x3

  ((void (__fastcall *)(BattleWindowComponent_o *, Il2CppMethodPointer, bool, const MethodInfo *))this->klass->vtable._7_setInitialPos.method)(
    this,
    this->klass->vtable._8_setInitialPosIfDefaultIsZero.methodPtr,
    ocflg,
    method);
  BattleWindowComponent__setInitDataWithoutInitPos(this, type, time, ocflg, v9);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleWindowComponent__setInitDataWithoutInitPos(
        BattleWindowComponent_o *this,
        int32_t type,
        float time,
        bool ocflg,
        const MethodInfo *method)
{
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  UnityEngine_GameObject_o *gameObject; // x0

  this->fields.call_openComp = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.call_openComp,
    0LL,
    (System_String_array **)ocflg,
    (System_String_array **)method,
    v5,
    v6,
    v7,
    v8);
  this->fields.call_closeComp = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.call_closeComp, 0LL, v13, v14, v15, v16, v17, v18);
  this->fields.type = type;
  this->fields.movetime = time;
  if ( !ocflg )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      sub_B170D4();
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  }
}


void __fastcall BattleWindowComponent__setInitialPos(BattleWindowComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *transform; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject || (transform = UnityEngine_GameObject__get_transform(gameObject, 0LL)) == 0LL )
    sub_B170D4();
  this->fields.tmp_pos = UnityEngine_Transform__get_localPosition(transform, 0LL);
}


void __fastcall BattleWindowComponent__setInitialPosIfDefaultIsZero(
        BattleWindowComponent_o *this,
        const MethodInfo *method)
{
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Vector3_o v8; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o zero; // 0:s3.4,4:s4.4,8:s5.4

  x = this->fields.tmp_pos.fields.x;
  y = this->fields.tmp_pos.fields.y;
  z = this->fields.tmp_pos.fields.z;
  zero = UnityEngine_Vector3__get_zero(0LL);
  v8.fields.x = x;
  v8.fields.y = y;
  v8.fields.z = z;
  if ( UnityEngine_Vector3__op_Equality(v8, zero, 0LL) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject || (transform = UnityEngine_GameObject__get_transform(gameObject, 0LL)) == 0LL )
      sub_B170D4();
    this->fields.tmp_pos = UnityEngine_Transform__get_localPosition(transform, 0LL);
  }
}


void __fastcall BattleWindowComponent__set_closeBtnObject(
        BattleWindowComponent_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._closeBtnObject = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._closeBtnObject,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleWindowComponent_EndCall___ctor(
        BattleWindowComponent_EndCall_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B16F98(p_method, object);
}


System_IAsyncResult_o *__fastcall BattleWindowComponent_EndCall__BeginInvoke(
        BattleWindowComponent_EndCall_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_B16FA0(this, &v5, callback, object);
}


void __fastcall BattleWindowComponent_EndCall__EndInvoke(
        BattleWindowComponent_EndCall_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


void __fastcall BattleWindowComponent_EndCall__Invoke(BattleWindowComponent_EndCall_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x8
  __int64 v5; // x23
  BattleWindowComponent_EndCall_o **v6; // x24
  __int64 v7; // x25
  unsigned int v8; // w22
  __int64 class_0; // x0
  __int64 v10; // x8
  unsigned __int64 v11; // x10
  _DWORD *v12; // x11
  __int64 v13; // x0
  __int64 v14; // x0
  __int64 v15; // x0
  void (__fastcall **v16)(__int64 *, _QWORD); // x0
  BattleWindowComponent_EndCall_o *v17; // x8
  __int64 *v18; // x20
  __int64 v19; // x21
  void (__fastcall *v20)(__int64); // x22
  char v21; // w22
  char v22; // w0
  __int64 v23; // x8
  __int64 v24; // x1
  __int64 v25; // x2
  unsigned __int64 v26; // x10
  _DWORD *v27; // x11
  BattleWindowComponent_EndCall_o *v28; // [xsp+8h] [xbp-38h] BYREF

  v28 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v6 = &v28;
    v5 = 1LL;
    goto LABEL_5;
  }
  v5 = *(_QWORD *)(v3 + 24);
  if ( v5 )
  {
    v6 = (BattleWindowComponent_EndCall_o **)(v3 + 32);
LABEL_5:
    v7 = 0LL;
    while ( 1 )
    {
      v17 = v6[v7];
      v18 = *(__int64 **)&v17->fields.method;
      v19 = *(_QWORD *)&v17->fields.extra_arg;
      v20 = *(void (__fastcall **)(__int64))&v17->fields.method_ptr;
      if ( *(__int16 *)(v19 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v17->fields.extra_arg, method, v2);
      if ( (sub_B1702C(v19) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v19 + 74) )
        goto LABEL_35;
      v20(v19);
LABEL_36:
      if ( ++v7 == v5 )
        return;
    }
    if ( v18 && *(__int16 *)(v19 + 72) != -1 && (*(_BYTE *)(*v18 + 277) & 1) == 0 && this->fields.m_target )
    {
      v21 = sub_B17024(v19);
      v22 = sub_B17428(v19);
      if ( (v21 & 1) != 0 )
      {
        if ( (v22 & 1) != 0 )
        {
          v23 = *v18;
          v24 = *(_QWORD *)(v19 + 24);
          v25 = *(unsigned __int16 *)(v19 + 72);
          if ( *(_WORD *)(*v18 + 298) )
          {
            v26 = 0LL;
            v27 = (_DWORD *)(*(_QWORD *)(v23 + 176) + 8LL);
            while ( *((_QWORD *)v27 - 1) != v24 )
            {
              ++v26;
              v27 += 4;
              if ( v26 >= *(unsigned __int16 *)(*v18 + 298) )
                goto LABEL_34;
            }
            v15 = v23 + 16LL * (*v27 + (int)v25) + 312;
          }
          else
          {
LABEL_34:
            v15 = sub_AAFEF8(v18, v24, v25);
          }
          v14 = *(_QWORD *)(v15 + 8);
        }
        else
        {
          v14 = *(_QWORD *)(*v18 + 16LL * *(unsigned __int16 *)(v19 + 72) + 320);
        }
        v16 = (void (__fastcall **)(__int64 *, _QWORD))sub_B170AC(v14, v19);
        (*v16)(v18, v16);
      }
      else
      {
        v8 = *(unsigned __int16 *)(v19 + 72);
        if ( (v22 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v19);
          v10 = *v18;
          if ( *(_WORD *)(*v18 + 298) )
          {
            v11 = 0LL;
            v12 = (_DWORD *)(*(_QWORD *)(v10 + 176) + 8LL);
            while ( *((_QWORD *)v12 - 1) != class_0 )
            {
              ++v11;
              v12 += 4;
              if ( v11 >= *(unsigned __int16 *)(*v18 + 298) )
                goto LABEL_11;
            }
            v13 = v10 + 16LL * (int)(*v12 + v8) + 312;
          }
          else
          {
LABEL_11:
            v13 = sub_AAFEF8(v18, class_0, v8);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD))v13)(v18, *(_QWORD *)(v13 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD))(*v18 + 16LL * *(unsigned __int16 *)(v19 + 72) + 312))(
            v18,
            *(_QWORD *)(*v18 + 16LL * *(unsigned __int16 *)(v19 + 72) + 320));
        }
      }
      goto LABEL_36;
    }
LABEL_35:
    ((void (__fastcall *)(__int64 *, __int64))v20)(v18, v19);
    goto LABEL_36;
  }
}