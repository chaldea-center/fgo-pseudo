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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  BattleWindowComponent_EndCall_o **p_call_closeComp; // x21
  __int64 gameObject; // x0
  __int64 v57; // x1
  UnityEngine_GameObject_o *v58; // x20
  System_Collections_Hashtable_o *v59; // x20
  UnityEngine_GameObject_o *v60; // x0
  __int64 v61; // x0
  int32_t type; // w8
  __int64 v63; // x8
  __int64 v64; // x0
  __int64 v65; // x0
  UnityEngine_GameObject_o *v66; // x21
  __int64 v67; // x0
  __int64 v68; // x0
  UnityEngine_GameObject_o *v69; // x21
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  UnityEngine_GameObject_o *v71; // x0
  __int64 v72; // x0
  __int64 v73; // x0
  UnityEngine_GameObject_o *v74; // x21
  _BYTE v75[12]; // [xsp+0h] [xbp-30h] BYREF
  int v76; // [xsp+1Ch] [xbp-14h] BYREF

  if ( (byte_42E7DF5 & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, (_DWORD)call, (_DWORD)method, v3);
    sub_B5D5C4(&iTween_EaseType_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v13, v14, v15);
    sub_B5D5C4(&System_Collections_Hashtable_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&float_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&UnityEngine_Vector3_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_18341/*"easetype"*/, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_4264/*"CompClose"*/, v31, v32, v33);
    sub_B5D5C4(&StringLiteral_22982/*"time"*/, v34, v35, v36);
    sub_B5D5C4(&StringLiteral_21544/*"oncompletetarget"*/, v37, v38, v39);
    sub_B5D5C4(&StringLiteral_21800/*"position"*/, v40, v41, v42);
    sub_B5D5C4(&StringLiteral_20191/*"isLocal"*/, v43, v44, v45);
    sub_B5D5C4(&StringLiteral_21542/*"oncomplete"*/, v46, v47, v48);
    sub_B5D5C4(&StringLiteral_22193/*"scale"*/, v49, v50, v51);
    sub_B5D5C4(&iTween_TypeInfo, v52, v53, v54);
    byte_42E7DF5 = 1;
  }
  this->fields.call_closeComp = call;
  p_call_closeComp = &this->fields.call_closeComp;
  sub_B5D560(
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
    v58 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__Stop_43300928(v58, 0LL);
    v59 = (System_Collections_Hashtable_o *)sub_B5D694(System_Collections_Hashtable_TypeInfo);
    System_Collections_Hashtable___ctor_39706016(v59, 0LL);
    LOBYTE(v76) = 1;
    gameObject = j_il2cpp_value_box_0(bool_TypeInfo, &v76);
    if ( v59 )
    {
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v59->klass->vtable._23_Add.method)(
        v59,
        StringLiteral_20191/*"isLocal"*/,
        gameObject,
        v59->klass->vtable._24_Clear.methodPtr);
      v60 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v59->klass->vtable._23_Add.method)(
        v59,
        StringLiteral_21544/*"oncompletetarget"*/,
        v60,
        v59->klass->vtable._24_Clear.methodPtr);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v59->klass->vtable._23_Add.method)(
        v59,
        StringLiteral_21542/*"oncomplete"*/,
        StringLiteral_4264/*"CompClose"*/,
        v59->klass->vtable._24_Clear.methodPtr);
      *(float *)v75 = this->fields.movetime;
      v61 = j_il2cpp_value_box_0(float_TypeInfo, v75);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v59->klass->vtable._23_Add.method)(
        v59,
        StringLiteral_22982/*"time"*/,
        v61,
        v59->klass->vtable._24_Clear.methodPtr);
      type = this->fields.type;
      if ( type != 2 )
      {
        if ( type == 1 )
        {
          *(int32x2_t *)v75 = vdup_n_s32(0x3F333333u);
          *(_DWORD *)&v75[8] = 0;
          v72 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, v75);
          ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v59->klass->vtable._23_Add.method)(
            v59,
            StringLiteral_22193/*"scale"*/,
            v72,
            v59->klass->vtable._24_Clear.methodPtr);
          v76 = 26;
          v73 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v76);
          ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v59->klass->vtable._23_Add.method)(
            v59,
            StringLiteral_18341/*"easetype"*/,
            v73,
            v59->klass->vtable._24_Clear.methodPtr);
          v74 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
          iTween__ScaleTo_43188764(v74, v59, 0LL);
        }
        else if ( !type )
        {
          v63 = *(_QWORD *)&this->fields.tmp_pos.fields.y;
          *(float *)v75 = this->fields.tmp_pos.fields.x + 80.0;
          *(_QWORD *)&v75[4] = v63;
          v64 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, v75);
          ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v59->klass->vtable._23_Add.method)(
            v59,
            StringLiteral_21800/*"position"*/,
            v64,
            v59->klass->vtable._24_Clear.methodPtr);
          v76 = 26;
          v65 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v76);
          ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v59->klass->vtable._23_Add.method)(
            v59,
            StringLiteral_18341/*"easetype"*/,
            v65,
            v59->klass->vtable._24_Clear.methodPtr);
          v66 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
          iTween__MoveTo_43183064(v66, v59, 0LL);
        }
        goto LABEL_33;
      }
      *(int32x2_t *)v75 = vdup_n_s32(0x3F666666u);
      *(_DWORD *)&v75[8] = 0;
      v67 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, v75);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v59->klass->vtable._23_Add.method)(
        v59,
        StringLiteral_22193/*"scale"*/,
        v67,
        v59->klass->vtable._24_Clear.methodPtr);
      v76 = 26;
      v68 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v76);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v59->klass->vtable._23_Add.method)(
        v59,
        StringLiteral_18341/*"easetype"*/,
        v68,
        v59->klass->vtable._24_Clear.methodPtr);
      v69 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
      iTween__ScaleTo_43188764(v69, v59, 0LL);
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( gameObject )
      {
        Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                            (UnityEngine_GameObject_o *)gameObject,
                                                            (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
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
          v71 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          gameObject = (__int64)TweenAlpha__Begin(v71, this->fields.movetime, 0.0, 0LL);
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
    sub_B5D69C(gameObject, v57);
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
    sub_B5D69C(0LL, v4);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *v8; // x20
  System_String_o *v9; // x0
  UnityEngine_Transform_o *transform; // x20
  System_String_o *v11; // x0
  __int64 v12; // x1
  UnityEngine_Object_o *v13; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v15; // x19

  if ( (byte_42E7DF3 & 1) == 0 )
  {
    sub_B5D5C4(&AndroidBackKeyManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42E7DF3 = 1;
  }
  v8 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(BattleWindowComponent_o *, Il2CppMethodPointer))this->klass->vtable._4_get_closeBtnObject.method)(
                                 this,
                                 this->klass->vtable._5_set_closeBtnObject.methodPtr);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(v8, 0LL, 0LL) )
    goto LABEL_16;
  v9 = (System_String_o *)((__int64 (__fastcall *)(BattleWindowComponent_o *, Il2CppMethodPointer))this->klass->vtable._6_get_closeBtnPath.method)(
                            this,
                            this->klass->vtable._7_setInitialPos.methodPtr);
  if ( System_String__IsNullOrEmpty(v9, 0LL) )
    return;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  v11 = (System_String_o *)((__int64 (__fastcall *)(BattleWindowComponent_o *, Il2CppMethodPointer))this->klass->vtable._6_get_closeBtnPath.method)(
                             this,
                             this->klass->vtable._7_setInitialPos.methodPtr);
  if ( !transform )
LABEL_20:
    sub_B5D69C(v11, v12);
  v13 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(transform, v11, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v11 = (System_String_o *)UnityEngine_Object__op_Equality(v13, 0LL, 0LL);
  if ( ((unsigned __int8)v11 & 1) == 0 )
  {
    if ( v13 )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v13, 0LL);
      ((void (__fastcall *)(BattleWindowComponent_o *, UnityEngine_GameObject_o *, Il2CppMethodPointer))this->klass->vtable._5_set_closeBtnObject.method)(
        this,
        gameObject,
        this->klass->vtable._6_get_closeBtnPath.methodPtr);
LABEL_16:
      v15 = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(BattleWindowComponent_o *, Il2CppMethodPointer))this->klass->vtable._4_get_closeBtnObject.method)(
                                          this,
                                          this->klass->vtable._5_set_closeBtnObject.methodPtr);
      if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
      }
      AndroidBackKeyManager__AddBackBtn(v15, 0LL);
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 transform; // x0
  __int64 v57; // x1
  System_Collections_Hashtable_o *v58; // x20
  UnityEngine_GameObject_o *v59; // x0
  __int64 v60; // x0
  int32_t type; // w8
  __int64 v62; // x8
  __int64 v63; // x0
  __int64 v64; // x0
  UnityEngine_GameObject_o *v65; // x21
  UnityEngine_Transform_o *v66; // x21
  int v67; // s0
  __int64 v70; // x0
  __int64 v71; // x0
  UnityEngine_GameObject_o *v72; // x21
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  UnityEngine_GameObject_o *v74; // x0
  UnityEngine_Transform_o *v75; // x21
  int v76; // s0
  __int64 v79; // x0
  __int64 v80; // x0
  UnityEngine_GameObject_o *v81; // x21
  int v82; // [xsp+Ch] [xbp-34h] BYREF
  _BYTE v83[12]; // [xsp+10h] [xbp-30h] BYREF

  if ( (byte_42E7DF4 & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, (_DWORD)call, (_DWORD)method, v3);
    sub_B5D5C4(&iTween_EaseType_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v13, v14, v15);
    sub_B5D5C4(&System_Collections_Hashtable_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&float_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&UnityEngine_Vector3_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_18341/*"easetype"*/, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_22982/*"time"*/, v31, v32, v33);
    sub_B5D5C4(&StringLiteral_21544/*"oncompletetarget"*/, v34, v35, v36);
    sub_B5D5C4(&StringLiteral_21800/*"position"*/, v37, v38, v39);
    sub_B5D5C4(&StringLiteral_20191/*"isLocal"*/, v40, v41, v42);
    sub_B5D5C4(&StringLiteral_21542/*"oncomplete"*/, v43, v44, v45);
    sub_B5D5C4(&StringLiteral_4265/*"CompOpen"*/, v46, v47, v48);
    sub_B5D5C4(&StringLiteral_22193/*"scale"*/, v49, v50, v51);
    sub_B5D5C4(&iTween_TypeInfo, v52, v53, v54);
    byte_42E7DF4 = 1;
  }
  this->fields.call_openComp = call;
  sub_B5D560(
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
  iTween__Stop_43300928(gameObject, 0LL);
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
  v58 = (System_Collections_Hashtable_o *)sub_B5D694(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_39706016(v58, 0LL);
  LOBYTE(v82) = 1;
  transform = j_il2cpp_value_box_0(bool_TypeInfo, &v82);
  if ( !v58 )
    goto LABEL_35;
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v58->klass->vtable._23_Add.method)(
    v58,
    StringLiteral_20191/*"isLocal"*/,
    transform,
    v58->klass->vtable._24_Clear.methodPtr);
  v59 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v58->klass->vtable._23_Add.method)(
    v58,
    StringLiteral_21544/*"oncompletetarget"*/,
    v59,
    v58->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v58->klass->vtable._23_Add.method)(
    v58,
    StringLiteral_21542/*"oncomplete"*/,
    StringLiteral_4265/*"CompOpen"*/,
    v58->klass->vtable._24_Clear.methodPtr);
  *(float *)v83 = this->fields.movetime;
  v60 = j_il2cpp_value_box_0(float_TypeInfo, v83);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v58->klass->vtable._23_Add.method)(
    v58,
    StringLiteral_22982/*"time"*/,
    v60,
    v58->klass->vtable._24_Clear.methodPtr);
  type = this->fields.type;
  if ( type != 2 )
  {
    if ( type != 1 )
    {
      if ( !type )
      {
        v62 = *(_QWORD *)&this->fields.tmp_pos.fields.y;
        *(float *)v83 = this->fields.tmp_pos.fields.x + 80.0;
        *(_QWORD *)&v83[4] = v62;
        v63 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, v83);
        ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v58->klass->vtable._23_Add.method)(
          v58,
          StringLiteral_21800/*"position"*/,
          v63,
          v58->klass->vtable._24_Clear.methodPtr);
        v82 = 27;
        v64 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v82);
        ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v58->klass->vtable._23_Add.method)(
          v58,
          StringLiteral_18341/*"easetype"*/,
          v64,
          v58->klass->vtable._24_Clear.methodPtr);
        v65 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
        iTween__MoveFrom_43184584(v65, v58, 0LL);
      }
      goto LABEL_34;
    }
    v75 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    *(UnityEngine_Vector3_o *)&v76 = UnityEngine_Vector3__get_one(0LL);
    if ( v75 )
    {
      UnityEngine_Transform__set_localScale(v75, *(UnityEngine_Vector3_o *)&v76, 0LL);
      *(int32x2_t *)v83 = vdup_n_s32(0x3F333333u);
      *(_DWORD *)&v83[8] = 0;
      v79 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, v83);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v58->klass->vtable._23_Add.method)(
        v58,
        StringLiteral_22193/*"scale"*/,
        v79,
        v58->klass->vtable._24_Clear.methodPtr);
      v82 = 27;
      v80 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v82);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v58->klass->vtable._23_Add.method)(
        v58,
        StringLiteral_18341/*"easetype"*/,
        v80,
        v58->klass->vtable._24_Clear.methodPtr);
      v81 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
      iTween__ScaleFrom_43190264(v81, v58, 0LL);
      goto LABEL_34;
    }
LABEL_35:
    sub_B5D69C(transform, v57);
  }
  v66 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  *(UnityEngine_Vector3_o *)&v67 = UnityEngine_Vector3__get_one(0LL);
  if ( !v66 )
    goto LABEL_35;
  UnityEngine_Transform__set_localScale(v66, *(UnityEngine_Vector3_o *)&v67, 0LL);
  *(int32x2_t *)v83 = vdup_n_s32(0x3F666666u);
  *(_DWORD *)&v83[8] = 0;
  v70 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, v83);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v58->klass->vtable._23_Add.method)(
    v58,
    StringLiteral_22193/*"scale"*/,
    v70,
    v58->klass->vtable._24_Clear.methodPtr);
  v82 = 27;
  v71 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v82);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v58->klass->vtable._23_Add.method)(
    v58,
    StringLiteral_18341/*"easetype"*/,
    v71,
    v58->klass->vtable._24_Clear.methodPtr);
  v72 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__ScaleFrom_43190264(v72, v58, 0LL);
  transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_35;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      (UnityEngine_GameObject_o *)transform,
                                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
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
      v74 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      transform = (__int64)TweenAlpha__Begin(v74, this->fields.movetime, 1.0, 0LL);
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
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E7DF2 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42E7DF2 = 1;
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
    sub_B5D69C(0LL, v3);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.call_openComp,
    0LL,
    (System_String_array **)ocflg,
    (System_String_array **)method,
    v5,
    v6,
    v7,
    v8);
  this->fields.call_closeComp = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.call_closeComp, 0LL, v13, v14, v15, v16, v17, v18);
  this->fields.type = type;
  this->fields.movetime = time;
  if ( !ocflg )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      sub_B5D69C(0LL, v20);
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
    sub_B5D69C(gameObject, v4);
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
      sub_B5D69C(gameObject, v7);
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
  sub_B5D560(
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
  sub_B5D560(p_method);
}


System_IAsyncResult_o *__fastcall BattleWindowComponent_EndCall__BeginInvoke(
        BattleWindowComponent_EndCall_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_B5D568(this, &v5, callback, object);
}


void __fastcall BattleWindowComponent_EndCall__EndInvoke(
        BattleWindowComponent_EndCall_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
  __int64 v10; // x3
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, _QWORD); // x0
  BattleWindowComponent_EndCall_o *v18; // x8
  __int64 *v19; // x20
  __int64 v20; // x21
  void (__fastcall *v21)(__int64); // x22
  char v22; // w22
  char v23; // w0
  __int64 v24; // x3
  __int64 v25; // x8
  __int64 v26; // x1
  __int64 v27; // x2
  unsigned __int64 v28; // x10
  _DWORD *v29; // x11
  BattleWindowComponent_EndCall_o *v30; // [xsp+8h] [xbp-38h] BYREF

  v30 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v6 = &v30;
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
      v18 = v6[v7];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(__int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v18->fields.extra_arg, method, v2);
      if ( (sub_B5D5F4(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) )
        goto LABEL_35;
      v21(v20);
LABEL_36:
      if ( ++v7 == v5 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B5D5EC(v20);
      v23 = sub_B5D9F0(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v25 = *v19;
          v26 = *(_QWORD *)(v20 + 24);
          v27 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v28 = 0LL;
            v29 = (_DWORD *)(*(_QWORD *)(v25 + 176) + 8LL);
            while ( *((_QWORD *)v29 - 1) != v26 )
            {
              ++v28;
              v29 += 4;
              if ( v28 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_34;
            }
            v16 = v25 + 16LL * (*v29 + (int)v27) + 312;
          }
          else
          {
LABEL_34:
            v16 = sub_AF54C0(v19, v26, v27, v24);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, _QWORD))sub_B5D674(v15, v20);
        (*v17)(v19, v17);
      }
      else
      {
        v8 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v11 = *v19;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v11 + 16LL * (int)(*v13 + v8) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_AF54C0(v19, class_0, v8, v10);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD))v14)(v19, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_36;
    }
LABEL_35:
    ((void (__fastcall *)(__int64 *, __int64))v21)(v19, v20);
    goto LABEL_36;
  }
}