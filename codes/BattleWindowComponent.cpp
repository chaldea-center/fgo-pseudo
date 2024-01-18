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
  __int64 gameObject; // x0
  __int64 v27; // x1
  UnityEngine_GameObject_o *v28; // x20
  System_Collections_Hashtable_o *v29; // x20
  UnityEngine_GameObject_o *v30; // x0
  __int64 v31; // x0
  int32_t type; // w8
  __int64 v33; // x8
  __int64 v34; // x0
  __int64 v35; // x0
  UnityEngine_GameObject_o *v36; // x21
  __int64 v37; // x0
  __int64 v38; // x0
  UnityEngine_GameObject_o *v39; // x21
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  UnityEngine_GameObject_o *v41; // x0
  __int64 v42; // x0
  __int64 v43; // x0
  UnityEngine_GameObject_o *v44; // x21
  _BYTE v45[12]; // [xsp+0h] [xbp-30h] BYREF
  int v46; // [xsp+1Ch] [xbp-14h] BYREF

  if ( (byte_4187573 & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, call);
    sub_B2C35C(&iTween_EaseType_TypeInfo, v10);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v11);
    sub_B2C35C(&System_Collections_Hashtable_TypeInfo, v12);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v13);
    sub_B2C35C(&float_TypeInfo, v14);
    sub_B2C35C(&UnityEngine_Vector3_TypeInfo, v15);
    sub_B2C35C(&StringLiteral_18114/*"easetype"*/, v16);
    sub_B2C35C(&StringLiteral_4193/*"CompClose"*/, v17);
    sub_B2C35C(&StringLiteral_22677/*"time"*/, v18);
    sub_B2C35C(&StringLiteral_21265/*"oncompletetarget"*/, v19);
    sub_B2C35C(&StringLiteral_21511/*"position"*/, v20);
    sub_B2C35C(&StringLiteral_19938/*"isLocal"*/, v21);
    sub_B2C35C(&StringLiteral_21263/*"oncomplete"*/, v22);
    sub_B2C35C(&StringLiteral_21895/*"scale"*/, v23);
    sub_B2C35C(&iTween_TypeInfo, v24);
    byte_4187573 = 1;
  }
  this->fields.call_closeComp = call;
  p_call_closeComp = &this->fields.call_closeComp;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.call_closeComp,
    (System_Int32_array **)call,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_35;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0LL) )
  {
    v28 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__Stop_42850528(v28, 0LL);
    v29 = (System_Collections_Hashtable_o *)sub_B2C42C(System_Collections_Hashtable_TypeInfo);
    System_Collections_Hashtable___ctor_38345656(v29, 0LL);
    LOBYTE(v46) = 1;
    gameObject = j_il2cpp_value_box_0(bool_TypeInfo, &v46);
    if ( v29 )
    {
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v29->klass->vtable._23_Add.method)(
        v29,
        StringLiteral_19938/*"isLocal"*/,
        gameObject,
        v29->klass->vtable._24_Clear.methodPtr);
      v30 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v29->klass->vtable._23_Add.method)(
        v29,
        StringLiteral_21265/*"oncompletetarget"*/,
        v30,
        v29->klass->vtable._24_Clear.methodPtr);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v29->klass->vtable._23_Add.method)(
        v29,
        StringLiteral_21263/*"oncomplete"*/,
        StringLiteral_4193/*"CompClose"*/,
        v29->klass->vtable._24_Clear.methodPtr);
      *(float *)v45 = this->fields.movetime;
      v31 = j_il2cpp_value_box_0(float_TypeInfo, v45);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v29->klass->vtable._23_Add.method)(
        v29,
        StringLiteral_22677/*"time"*/,
        v31,
        v29->klass->vtable._24_Clear.methodPtr);
      type = this->fields.type;
      if ( type != 2 )
      {
        if ( type == 1 )
        {
          *(int32x2_t *)v45 = vdup_n_s32(0x3F333333u);
          *(_DWORD *)&v45[8] = 0;
          v42 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, v45);
          ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v29->klass->vtable._23_Add.method)(
            v29,
            StringLiteral_21895/*"scale"*/,
            v42,
            v29->klass->vtable._24_Clear.methodPtr);
          v46 = 26;
          v43 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v46);
          ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v29->klass->vtable._23_Add.method)(
            v29,
            StringLiteral_18114/*"easetype"*/,
            v43,
            v29->klass->vtable._24_Clear.methodPtr);
          v44 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
          iTween__ScaleTo_42738364(v44, v29, 0LL);
        }
        else if ( !type )
        {
          v33 = *(_QWORD *)&this->fields.tmp_pos.fields.y;
          *(float *)v45 = this->fields.tmp_pos.fields.x + 80.0;
          *(_QWORD *)&v45[4] = v33;
          v34 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, v45);
          ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v29->klass->vtable._23_Add.method)(
            v29,
            StringLiteral_21511/*"position"*/,
            v34,
            v29->klass->vtable._24_Clear.methodPtr);
          v46 = 26;
          v35 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v46);
          ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v29->klass->vtable._23_Add.method)(
            v29,
            StringLiteral_18114/*"easetype"*/,
            v35,
            v29->klass->vtable._24_Clear.methodPtr);
          v36 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
          iTween__MoveTo_42732664(v36, v29, 0LL);
        }
        goto LABEL_33;
      }
      *(int32x2_t *)v45 = vdup_n_s32(0x3F666666u);
      *(_DWORD *)&v45[8] = 0;
      v37 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, v45);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v29->klass->vtable._23_Add.method)(
        v29,
        StringLiteral_21895/*"scale"*/,
        v37,
        v29->klass->vtable._24_Clear.methodPtr);
      v46 = 26;
      v38 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v46);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v29->klass->vtable._23_Add.method)(
        v29,
        StringLiteral_18114/*"easetype"*/,
        v38,
        v29->klass->vtable._24_Clear.methodPtr);
      v39 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
      iTween__ScaleTo_42738364(v39, v29, 0LL);
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( gameObject )
      {
        Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                            (UnityEngine_GameObject_o *)gameObject,
                                                            (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        gameObject = UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
        if ( (gameObject & 1) == 0 )
          goto LABEL_33;
        if ( Component_srcLineSprite )
        {
          ((void (__fastcall *)(UnityEngine_Object_o *, Il2CppClass *, float))Component_srcLineSprite->klass[1]._1.castClass)(
            Component_srcLineSprite,
            Component_srcLineSprite->klass[1]._1.declaringType,
            1.0);
          v41 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          gameObject = (__int64)TweenAlpha__Begin(v41, this->fields.movetime, 0.0, 0LL);
          if ( gameObject )
          {
            *(_DWORD *)(gameObject + 24) = 6;
LABEL_33:
            this->fields.state = 1;
            return;
          }
        }
      }
    }
LABEL_35:
    sub_B2C434(gameObject, v27);
  }
  if ( *p_call_closeComp )
    BattleWindowComponent_EndCall__Invoke(*p_call_closeComp, 0LL);
}


void __fastcall BattleWindowComponent__CompClose(BattleWindowComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  BattleWindowComponent_EndCall_o *call_closeComp; // x0

  this->fields.state = 2;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B2C434(0LL, v4);
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
  __int64 v8; // x1
  UnityEngine_Object_o *v9; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v11; // x19

  if ( (byte_4187571 & 1) == 0 )
  {
    sub_B2C35C(&AndroidBackKeyManager_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_4187571 = 1;
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
    sub_B2C434(v7, v8);
  v9 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(transform, v7, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v7 = (System_String_o *)UnityEngine_Object__op_Equality(v9, 0LL, 0LL);
  if ( ((unsigned __int8)v7 & 1) == 0 )
  {
    if ( v9 )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v9, 0LL);
      ((void (__fastcall *)(BattleWindowComponent_o *, UnityEngine_GameObject_o *, Il2CppMethodPointer))this->klass->vtable._5_set_closeBtnObject.method)(
        this,
        gameObject,
        this->klass->vtable._6_get_closeBtnPath.methodPtr);
LABEL_16:
      v11 = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(BattleWindowComponent_o *, Il2CppMethodPointer))this->klass->vtable._4_get_closeBtnObject.method)(
                                          this,
                                          this->klass->vtable._5_set_closeBtnObject.methodPtr);
      if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
      }
      AndroidBackKeyManager__AddBackBtn(v11, 0LL);
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
  __int64 transform; // x0
  __int64 v27; // x1
  System_Collections_Hashtable_o *v28; // x20
  UnityEngine_GameObject_o *v29; // x0
  __int64 v30; // x0
  int32_t type; // w8
  __int64 v32; // x8
  __int64 v33; // x0
  __int64 v34; // x0
  UnityEngine_GameObject_o *v35; // x21
  UnityEngine_Transform_o *v36; // x21
  int v37; // s0
  __int64 v40; // x0
  __int64 v41; // x0
  UnityEngine_GameObject_o *v42; // x21
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  UnityEngine_GameObject_o *v44; // x0
  UnityEngine_Transform_o *v45; // x21
  int v46; // s0
  __int64 v49; // x0
  __int64 v50; // x0
  UnityEngine_GameObject_o *v51; // x21
  int v52; // [xsp+Ch] [xbp-34h] BYREF
  _BYTE v53[12]; // [xsp+10h] [xbp-30h] BYREF

  if ( (byte_4187572 & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, call);
    sub_B2C35C(&iTween_EaseType_TypeInfo, v10);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v11);
    sub_B2C35C(&System_Collections_Hashtable_TypeInfo, v12);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v13);
    sub_B2C35C(&float_TypeInfo, v14);
    sub_B2C35C(&UnityEngine_Vector3_TypeInfo, v15);
    sub_B2C35C(&StringLiteral_18114/*"easetype"*/, v16);
    sub_B2C35C(&StringLiteral_22677/*"time"*/, v17);
    sub_B2C35C(&StringLiteral_21265/*"oncompletetarget"*/, v18);
    sub_B2C35C(&StringLiteral_21511/*"position"*/, v19);
    sub_B2C35C(&StringLiteral_19938/*"isLocal"*/, v20);
    sub_B2C35C(&StringLiteral_21263/*"oncomplete"*/, v21);
    sub_B2C35C(&StringLiteral_4194/*"CompOpen"*/, v22);
    sub_B2C35C(&StringLiteral_21895/*"scale"*/, v23);
    sub_B2C35C(&iTween_TypeInfo, v24);
    byte_4187572 = 1;
  }
  this->fields.call_openComp = call;
  sub_B2C2F8(
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
  iTween__Stop_42850528(gameObject, 0LL);
  transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0LL);
  transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_35;
  transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_35;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, this->fields.tmp_pos, 0LL);
  v28 = (System_Collections_Hashtable_o *)sub_B2C42C(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_38345656(v28, 0LL);
  LOBYTE(v52) = 1;
  transform = j_il2cpp_value_box_0(bool_TypeInfo, &v52);
  if ( !v28 )
    goto LABEL_35;
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v28->klass->vtable._23_Add.method)(
    v28,
    StringLiteral_19938/*"isLocal"*/,
    transform,
    v28->klass->vtable._24_Clear.methodPtr);
  v29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v28->klass->vtable._23_Add.method)(
    v28,
    StringLiteral_21265/*"oncompletetarget"*/,
    v29,
    v28->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v28->klass->vtable._23_Add.method)(
    v28,
    StringLiteral_21263/*"oncomplete"*/,
    StringLiteral_4194/*"CompOpen"*/,
    v28->klass->vtable._24_Clear.methodPtr);
  *(float *)v53 = this->fields.movetime;
  v30 = j_il2cpp_value_box_0(float_TypeInfo, v53);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v28->klass->vtable._23_Add.method)(
    v28,
    StringLiteral_22677/*"time"*/,
    v30,
    v28->klass->vtable._24_Clear.methodPtr);
  type = this->fields.type;
  if ( type != 2 )
  {
    if ( type != 1 )
    {
      if ( !type )
      {
        v32 = *(_QWORD *)&this->fields.tmp_pos.fields.y;
        *(float *)v53 = this->fields.tmp_pos.fields.x + 80.0;
        *(_QWORD *)&v53[4] = v32;
        v33 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, v53);
        ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v28->klass->vtable._23_Add.method)(
          v28,
          StringLiteral_21511/*"position"*/,
          v33,
          v28->klass->vtable._24_Clear.methodPtr);
        v52 = 27;
        v34 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v52);
        ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v28->klass->vtable._23_Add.method)(
          v28,
          StringLiteral_18114/*"easetype"*/,
          v34,
          v28->klass->vtable._24_Clear.methodPtr);
        v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
        iTween__MoveFrom_42734184(v35, v28, 0LL);
      }
      goto LABEL_34;
    }
    v45 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    *(UnityEngine_Vector3_o *)&v46 = UnityEngine_Vector3__get_one(0LL);
    if ( v45 )
    {
      UnityEngine_Transform__set_localScale(v45, *(UnityEngine_Vector3_o *)&v46, 0LL);
      *(int32x2_t *)v53 = vdup_n_s32(0x3F333333u);
      *(_DWORD *)&v53[8] = 0;
      v49 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, v53);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v28->klass->vtable._23_Add.method)(
        v28,
        StringLiteral_21895/*"scale"*/,
        v49,
        v28->klass->vtable._24_Clear.methodPtr);
      v52 = 27;
      v50 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v52);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v28->klass->vtable._23_Add.method)(
        v28,
        StringLiteral_18114/*"easetype"*/,
        v50,
        v28->klass->vtable._24_Clear.methodPtr);
      v51 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
      iTween__ScaleFrom_42739864(v51, v28, 0LL);
      goto LABEL_34;
    }
LABEL_35:
    sub_B2C434(transform, v27);
  }
  v36 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  *(UnityEngine_Vector3_o *)&v37 = UnityEngine_Vector3__get_one(0LL);
  if ( !v36 )
    goto LABEL_35;
  UnityEngine_Transform__set_localScale(v36, *(UnityEngine_Vector3_o *)&v37, 0LL);
  *(int32x2_t *)v53 = vdup_n_s32(0x3F666666u);
  *(_DWORD *)&v53[8] = 0;
  v40 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, v53);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v28->klass->vtable._23_Add.method)(
    v28,
    StringLiteral_21895/*"scale"*/,
    v40,
    v28->klass->vtable._24_Clear.methodPtr);
  v52 = 27;
  v41 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v52);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v28->klass->vtable._23_Add.method)(
    v28,
    StringLiteral_18114/*"easetype"*/,
    v41,
    v28->klass->vtable._24_Clear.methodPtr);
  v42 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__ScaleFrom_42739864(v42, v28, 0LL);
  transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_35;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      (UnityEngine_GameObject_o *)transform,
                                                      (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
  if ( (transform & 1) != 0 )
  {
    if ( Component_srcLineSprite )
    {
      ((void (__fastcall *)(UnityEngine_Object_o *, Il2CppClass *, float))Component_srcLineSprite->klass[1]._1.castClass)(
        Component_srcLineSprite,
        Component_srcLineSprite->klass[1]._1.declaringType,
        0.01);
      v44 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      transform = (__int64)TweenAlpha__Begin(v44, this->fields.movetime, 1.0, 0LL);
      if ( transform )
      {
        *(_DWORD *)(transform + 24) = 6;
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
  if ( (byte_4187570 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_4187570 = 1;
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
  __int64 v3; // x1

  this->fields.state = 2;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B2C434(0LL, v3);
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
  __int64 v20; // x1

  this->fields.call_openComp = 0LL;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.call_openComp,
    0LL,
    (System_String_array **)ocflg,
    (System_String_array **)method,
    v5,
    v6,
    v7,
    v8);
  this->fields.call_closeComp = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.call_closeComp, 0LL, v13, v14, v15, v16, v17, v18);
  this->fields.type = type;
  this->fields.movetime = time;
  if ( !ocflg )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      sub_B2C434(0LL, v20);
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  }
}


void __fastcall BattleWindowComponent__setInitialPos(BattleWindowComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL)) == 0LL )
  {
    sub_B2C434(gameObject, v4);
  }
  this->fields.tmp_pos = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0LL);
}


void __fastcall BattleWindowComponent__setInitialPosIfDefaultIsZero(
        BattleWindowComponent_o *this,
        const MethodInfo *method)
{
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1
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
    if ( !gameObject
      || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL)) == 0LL )
    {
      sub_B2C434(gameObject, v7);
    }
    this->fields.tmp_pos = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0LL);
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
  sub_B2C2F8(
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
  sub_B2C2F8(p_method, object);
}


System_IAsyncResult_o *__fastcall BattleWindowComponent_EndCall__BeginInvoke(
        BattleWindowComponent_EndCall_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_B2C300(this, &v5, callback, object);
}


void __fastcall BattleWindowComponent_EndCall__EndInvoke(
        BattleWindowComponent_EndCall_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


void __fastcall BattleWindowComponent_EndCall__Invoke(BattleWindowComponent_EndCall_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v6; // x23
  BattleWindowComponent_EndCall_o **v7; // x24
  __int64 v8; // x25
  unsigned int v9; // w22
  __int64 class_0; // x0
  __int64 v11; // x3
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, _QWORD); // x0
  BattleWindowComponent_EndCall_o *v19; // x8
  __int64 *v20; // x20
  __int64 v21; // x21
  void (__fastcall *v22)(__int64); // x22
  char v23; // w22
  char v24; // w0
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  BattleWindowComponent_EndCall_o *v31; // [xsp+8h] [xbp-38h] BYREF

  v31 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v7 = &v31;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v4 + 24);
  if ( v6 )
  {
    v7 = (BattleWindowComponent_EndCall_o **)(v4 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v19 = v7[v8];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(__int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v19->fields.extra_arg, method, v2, v3);
      if ( (sub_B2C38C(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) )
        goto LABEL_35;
      v22(v21);
LABEL_36:
      if ( ++v8 == v6 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B2C384(v21);
      v24 = sub_B2C788(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v26 = *v20;
          v27 = *(_QWORD *)(v21 + 24);
          v28 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_34;
            }
            v17 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_34:
            v17 = sub_AC5258(v20, v27, v28, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, _QWORD))sub_B2C40C(v16, v21);
        (*v18)(v20, v18);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v12 = *v20;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v12 + 16LL * (int)(*v14 + v9) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AC5258(v20, class_0, v9, v11);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD))v15)(v20, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_36;
    }
LABEL_35:
    ((void (__fastcall *)(__int64 *, __int64))v22)(v20, v21);
    goto LABEL_36;
  }
}