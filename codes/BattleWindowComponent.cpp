void BattleWindowComponent___ctor(BattleWindowComponent_o *this, const MethodInfo *method)
{
  this->fields.type = 1;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void BattleWindowComponent__Close(
        BattleWindowComponent_o *this,
        BattleWindowComponent_EndCall_o *call,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct BattleWindowComponent_EndCall_o **p_call_closeComp; // x21
  __int64 gameObject; // x0
  __int64 v8; // x1
  UnityEngine_GameObject_o *v9; // x20
  System_Collections_Hashtable_o *v10; // x20
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  UnityEngine_GameObject_o *v14; // x0
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  __int64 v18; // x0
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  int32_t type; // w8
  __int64 v23; // d1
  __int64 v24; // x0
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  __int64 v28; // x0
  UnityEngine_GameObject_o *v29; // x21
  __int64 v30; // x0
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  __int64 v34; // x0
  UnityEngine_GameObject_o *v35; // x21
  Il2CppObject *Component_object; // x20
  UnityEngine_GameObject_o *v37; // x0
  __int64 v38; // x0
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  __int64 v42; // x0
  UnityEngine_GameObject_o *v43; // x21
  int v44; // [xsp+Ch] [xbp-34h] BYREF
  _BYTE v45[12]; // [xsp+10h] [xbp-30h] BYREF

  if ( (byte_4C295FD & 1) == 0 )
  {
    sub_1C2D490(&bool_TypeInfo);
    sub_1C2D490(&iTween_EaseType_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C2D490(&System_Collections_Hashtable_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&float_TypeInfo);
    sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    sub_1C2D490(&StringLiteral_18742/*"easetype"*/);
    sub_1C2D490(&StringLiteral_4609/*"CompClose"*/);
    sub_1C2D490(&StringLiteral_24049/*"time"*/);
    sub_1C2D490(&StringLiteral_22412/*"oncompletetarget"*/);
    sub_1C2D490(&StringLiteral_22719/*"position"*/);
    sub_1C2D490(&StringLiteral_20915/*"isLocal"*/);
    sub_1C2D490(&StringLiteral_22410/*"oncomplete"*/);
    sub_1C2D490(&StringLiteral_23173/*"scale"*/);
    sub_1C2D490(&iTween_TypeInfo);
    byte_4C295FD = 1;
  }
  this->fields.call_closeComp = call;
  p_call_closeComp = &this->fields.call_closeComp;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.call_closeComp, (int32_t)call, (int32_t)method, v3);
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_30;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0) )
  {
    v9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__Stop_63205768(v9, 0);
    v10 = (System_Collections_Hashtable_o *)sub_1C2D6DC(System_Collections_Hashtable_TypeInfo);
    System_Collections_Hashtable___ctor_64822836(v10, 0);
    LOBYTE(v44) = 1;
    gameObject = j_il2cpp_value_box_0(bool_TypeInfo, &v44, v11, v12, v13);
    if ( v10 )
    {
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v10->klass->vtable._22_Add.methodPtr)(
        v10,
        StringLiteral_20915/*"isLocal"*/,
        gameObject,
        v10->klass->vtable._22_Add.method);
      v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, const MethodInfo *))v10->klass->vtable._22_Add.methodPtr)(
        v10,
        StringLiteral_22412/*"oncompletetarget"*/,
        v14,
        v10->klass->vtable._22_Add.method);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v10->klass->vtable._22_Add.methodPtr)(
        v10,
        StringLiteral_22410/*"oncomplete"*/,
        StringLiteral_4609/*"CompClose"*/,
        v10->klass->vtable._22_Add.method);
      *(float *)v45 = this->fields.movetime;
      v18 = j_il2cpp_value_box_0(float_TypeInfo, v45, v15, v16, v17);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v10->klass->vtable._22_Add.methodPtr)(
        v10,
        StringLiteral_24049/*"time"*/,
        v18,
        v10->klass->vtable._22_Add.method);
      type = this->fields.type;
      if ( type != 2 )
      {
        if ( type == 1 )
        {
          *(int32x2_t *)v45 = vdup_n_s32(0x3F333333u);
          *(_DWORD *)&v45[8] = 0;
          v38 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, v45, v19, v20, v21);
          ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v10->klass->vtable._22_Add.methodPtr)(
            v10,
            StringLiteral_23173/*"scale"*/,
            v38,
            v10->klass->vtable._22_Add.method);
          v44 = 26;
          v42 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v44, v39, v40, v41);
          ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v10->klass->vtable._22_Add.methodPtr)(
            v10,
            StringLiteral_18742/*"easetype"*/,
            v42,
            v10->klass->vtable._22_Add.method);
          v43 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          if ( !iTween_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
          iTween__ScaleTo_63100956(v43, v10, 0);
        }
        else if ( !type )
        {
          v23 = *(_QWORD *)&this->fields.tmp_pos.fields.y;
          *(float *)v45 = this->fields.tmp_pos.fields.x + 80.0;
          *(_QWORD *)&v45[4] = v23;
          v24 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, v45, v19, v20, v21);
          ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v10->klass->vtable._22_Add.methodPtr)(
            v10,
            StringLiteral_22719/*"position"*/,
            v24,
            v10->klass->vtable._22_Add.method);
          v44 = 26;
          v28 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v44, v25, v26, v27);
          ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v10->klass->vtable._22_Add.methodPtr)(
            v10,
            StringLiteral_18742/*"easetype"*/,
            v28,
            v10->klass->vtable._22_Add.method);
          v29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          if ( !iTween_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
          iTween__MoveTo_63095428(v29, v10, 0);
        }
        goto LABEL_28;
      }
      *(int32x2_t *)v45 = vdup_n_s32(0x3F666666u);
      *(_DWORD *)&v45[8] = 0;
      v30 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, v45, v19, v20, v21);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v10->klass->vtable._22_Add.methodPtr)(
        v10,
        StringLiteral_23173/*"scale"*/,
        v30,
        v10->klass->vtable._22_Add.method);
      v44 = 26;
      v34 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v44, v31, v32, v33);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v10->klass->vtable._22_Add.methodPtr)(
        v10,
        StringLiteral_18742/*"easetype"*/,
        v34,
        v10->klass->vtable._22_Add.method);
      v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !iTween_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
      iTween__ScaleTo_63100956(v35, v10, 0);
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( gameObject )
      {
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)gameObject,
                             (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        gameObject = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
        if ( (gameObject & 1) == 0 )
          goto LABEL_28;
        if ( Component_object )
        {
          ((void (__fastcall *)(Il2CppObject *, const MethodInfo *, float))Component_object->klass->vtable[8].methodPtr)(
            Component_object,
            Component_object->klass->vtable[8].method,
            1.0);
          v37 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          gameObject = (__int64)TweenAlpha__Begin(v37, this->fields.movetime, 0.0, 0);
          if ( gameObject )
          {
            *(_DWORD *)(gameObject + 32) = 6;
LABEL_28:
            this->fields.state = 1;
            return;
          }
        }
      }
    }
LABEL_30:
    sub_1C2D6EC(gameObject, v8);
  }
  if ( *p_call_closeComp )
    ((void (__fastcall *)(intptr_t, intptr_t))(*p_call_closeComp)->fields.invoke_impl)(
      (*p_call_closeComp)->fields.method_code,
      (*p_call_closeComp)->fields.method);
}


void BattleWindowComponent__CompClose(BattleWindowComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  struct BattleWindowComponent_EndCall_o *call_closeComp; // x8

  this->fields.state = 2;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C2D6EC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  call_closeComp = this->fields.call_closeComp;
  if ( call_closeComp )
    ((void (__fastcall *)(intptr_t, intptr_t))call_closeComp->fields.invoke_impl)(
      call_closeComp->fields.method_code,
      call_closeComp->fields.method);
}


void BattleWindowComponent__CompOpen(BattleWindowComponent_o *this, const MethodInfo *method)
{
  struct BattleWindowComponent_EndCall_o *call_openComp; // x8

  call_openComp = this->fields.call_openComp;
  this->fields.state = 3;
  if ( call_openComp )
    ((void (__fastcall *)(intptr_t, intptr_t))call_openComp->fields.invoke_impl)(
      call_openComp->fields.method_code,
      call_openComp->fields.method);
}


bool BattleWindowComponent__IsCloseorClosing(BattleWindowComponent_o *this, const MethodInfo *method)
{
  return (unsigned int)(this->fields.state - 1) < 2;
}


bool BattleWindowComponent__IsClosing(BattleWindowComponent_o *this, const MethodInfo *method)
{
  return this->fields.state == 1;
}


void BattleWindowComponent__OnEnable(BattleWindowComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *v3; // x20
  System_String_o *v4; // x0
  UnityEngine_Transform_o *transform; // x20
  System_String_o *v6; // x0
  __int64 v7; // x1
  UnityEngine_Object_o *v8; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v10; // x0

  if ( (byte_4C295FB & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C295FB = 1;
  }
  v3 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(BattleWindowComponent_o *, const MethodInfo *))this->klass->vtable._4_get_closeBtnObject.methodPtr)(
                                 this,
                                 this->klass->vtable._4_get_closeBtnObject.method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v3, 0, 0) )
    goto LABEL_14;
  v4 = (System_String_o *)((__int64 (__fastcall *)(BattleWindowComponent_o *, const MethodInfo *))this->klass->vtable._6_get_closeBtnPath.methodPtr)(
                            this,
                            this->klass->vtable._6_get_closeBtnPath.method);
  if ( System_String__IsNullOrEmpty(v4, 0) )
    return;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  v6 = (System_String_o *)((__int64 (__fastcall *)(BattleWindowComponent_o *, const MethodInfo *))this->klass->vtable._6_get_closeBtnPath.methodPtr)(
                            this,
                            this->klass->vtable._6_get_closeBtnPath.method);
  if ( !transform )
LABEL_15:
    sub_1C2D6EC(v6, v7);
  v8 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(transform, v6, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = (System_String_o *)UnityEngine_Object__op_Equality(v8, 0, 0);
  if ( ((unsigned __int8)v6 & 1) == 0 )
  {
    if ( v8 )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v8, 0);
      ((void (__fastcall *)(BattleWindowComponent_o *, UnityEngine_GameObject_o *, const MethodInfo *))this->klass->vtable._5_set_closeBtnObject.methodPtr)(
        this,
        gameObject,
        this->klass->vtable._5_set_closeBtnObject.method);
LABEL_14:
      v10 = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(BattleWindowComponent_o *, const MethodInfo *))this->klass->vtable._4_get_closeBtnObject.methodPtr)(
                                          this,
                                          this->klass->vtable._4_get_closeBtnObject.method);
      AndroidBackKeyManager__AddBackBtn(v10, 0);
      return;
    }
    goto LABEL_15;
  }
}


void BattleWindowComponent__Open(
        BattleWindowComponent_o *this,
        BattleWindowComponent_EndCall_o *call,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 transform; // x0
  __int64 v8; // x1
  System_Collections_Hashtable_o *v9; // x20
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  UnityEngine_GameObject_o *v13; // x0
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  __int64 v17; // x0
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  int32_t type; // w8
  __int64 v22; // d1
  __int64 v23; // x0
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  __int64 v27; // x0
  UnityEngine_GameObject_o *v28; // x21
  UnityEngine_Transform_o *v29; // x21
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  __int64 v33; // x0
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  __int64 v37; // x0
  UnityEngine_GameObject_o *v38; // x21
  Il2CppObject *Component_object; // x20
  UnityEngine_GameObject_o *v40; // x0
  UnityEngine_Transform_o *v41; // x21
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  __int64 v45; // x0
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  __int64 v49; // x0
  UnityEngine_GameObject_o *v50; // x21
  _BYTE v51[12]; // [xsp+0h] [xbp-60h] BYREF
  int v52; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4C295FC & 1) == 0 )
  {
    sub_1C2D490(&bool_TypeInfo);
    sub_1C2D490(&iTween_EaseType_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C2D490(&System_Collections_Hashtable_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&float_TypeInfo);
    sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    sub_1C2D490(&StringLiteral_18742/*"easetype"*/);
    sub_1C2D490(&StringLiteral_24049/*"time"*/);
    sub_1C2D490(&StringLiteral_22412/*"oncompletetarget"*/);
    sub_1C2D490(&StringLiteral_22719/*"position"*/);
    sub_1C2D490(&StringLiteral_20915/*"isLocal"*/);
    sub_1C2D490(&StringLiteral_22410/*"oncomplete"*/);
    sub_1C2D490(&StringLiteral_4610/*"CompOpen"*/);
    sub_1C2D490(&StringLiteral_23173/*"scale"*/);
    sub_1C2D490(&iTween_TypeInfo);
    byte_4C295FC = 1;
  }
  this->fields.call_openComp = call;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.call_openComp, (int32_t)call, (int32_t)method, v3);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_63205768(gameObject, 0);
  transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_34;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0);
  transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_34;
  transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0);
  if ( !transform )
    goto LABEL_34;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, this->fields.tmp_pos, 0);
  v9 = (System_Collections_Hashtable_o *)sub_1C2D6DC(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_64822836(v9, 0);
  LOBYTE(v52) = 1;
  transform = j_il2cpp_value_box_0(bool_TypeInfo, &v52, v10, v11, v12);
  if ( !v9 )
    goto LABEL_34;
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v9->klass->vtable._22_Add.methodPtr)(
    v9,
    StringLiteral_20915/*"isLocal"*/,
    transform,
    v9->klass->vtable._22_Add.method);
  v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, const MethodInfo *))v9->klass->vtable._22_Add.methodPtr)(
    v9,
    StringLiteral_22412/*"oncompletetarget"*/,
    v13,
    v9->klass->vtable._22_Add.method);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v9->klass->vtable._22_Add.methodPtr)(
    v9,
    StringLiteral_22410/*"oncomplete"*/,
    StringLiteral_4610/*"CompOpen"*/,
    v9->klass->vtable._22_Add.method);
  *(float *)v51 = this->fields.movetime;
  v17 = j_il2cpp_value_box_0(float_TypeInfo, v51, v14, v15, v16);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v9->klass->vtable._22_Add.methodPtr)(
    v9,
    StringLiteral_24049/*"time"*/,
    v17,
    v9->klass->vtable._22_Add.method);
  type = this->fields.type;
  if ( type != 2 )
  {
    if ( type != 1 )
    {
      if ( !type )
      {
        v22 = *(_QWORD *)&this->fields.tmp_pos.fields.y;
        *(float *)v51 = this->fields.tmp_pos.fields.x + 80.0;
        *(_QWORD *)&v51[4] = v22;
        v23 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, v51, v18, v19, v20);
        ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v9->klass->vtable._22_Add.methodPtr)(
          v9,
          StringLiteral_22719/*"position"*/,
          v23,
          v9->klass->vtable._22_Add.method);
        v52 = 27;
        v27 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v52, v24, v25, v26);
        ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v9->klass->vtable._22_Add.methodPtr)(
          v9,
          StringLiteral_18742/*"easetype"*/,
          v27,
          v9->klass->vtable._22_Add.method);
        v28 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !iTween_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
        iTween__MoveFrom_63096900(v28, v9, 0);
      }
      goto LABEL_33;
    }
    transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    v41 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4C20DA6 )
    {
      transform = sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
      byte_4C20DA6 = 1;
    }
    if ( v41 )
    {
      UnityEngine_Transform__set_localScale(v41, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
      *(int32x2_t *)v51 = vdup_n_s32(0x3F333333u);
      *(_DWORD *)&v51[8] = 0;
      v45 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, v51, v42, v43, v44);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v9->klass->vtable._22_Add.methodPtr)(
        v9,
        StringLiteral_23173/*"scale"*/,
        v45,
        v9->klass->vtable._22_Add.method);
      v52 = 27;
      v49 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v52, v46, v47, v48);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v9->klass->vtable._22_Add.methodPtr)(
        v9,
        StringLiteral_18742/*"easetype"*/,
        v49,
        v9->klass->vtable._22_Add.method);
      v50 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !iTween_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
      iTween__ScaleFrom_63102408(v50, v9, 0);
      goto LABEL_33;
    }
LABEL_34:
    sub_1C2D6EC(transform, v8);
  }
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  v29 = (UnityEngine_Transform_o *)transform;
  if ( !byte_4C20DA6 )
  {
    transform = sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA6 = 1;
  }
  if ( !v29 )
    goto LABEL_34;
  UnityEngine_Transform__set_localScale(v29, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  *(int32x2_t *)v51 = vdup_n_s32(0x3F666666u);
  *(_DWORD *)&v51[8] = 0;
  v33 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, v51, v30, v31, v32);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v9->klass->vtable._22_Add.methodPtr)(
    v9,
    StringLiteral_23173/*"scale"*/,
    v33,
    v9->klass->vtable._22_Add.method);
  v52 = 27;
  v37 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v52, v34, v35, v36);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v9->klass->vtable._22_Add.methodPtr)(
    v9,
    StringLiteral_18742/*"easetype"*/,
    v37,
    v9->klass->vtable._22_Add.method);
  v38 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__ScaleFrom_63102408(v38, v9, 0);
  transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_34;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)transform,
                       (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( (transform & 1) != 0 )
  {
    if ( Component_object )
    {
      ((void (__fastcall *)(Il2CppObject *, const MethodInfo *, float))Component_object->klass->vtable[8].methodPtr)(
        Component_object,
        Component_object->klass->vtable[8].method,
        0.01);
      v40 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      transform = (__int64)TweenAlpha__Begin(v40, this->fields.movetime, 1.0, 0);
      if ( transform )
      {
        *(_DWORD *)(transform + 32) = 6;
        goto LABEL_33;
      }
    }
    goto LABEL_34;
  }
LABEL_33:
  this->fields.state = 4;
}


UnityEngine_GameObject_o *BattleWindowComponent__get_closeBtnObject(
        BattleWindowComponent_o *this,
        const MethodInfo *method)
{
  return this->fields._closeBtnObject;
}


System_String_o *BattleWindowComponent__get_closeBtnPath(BattleWindowComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4C295FA & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C295FA = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


bool BattleWindowComponent__isClose(BattleWindowComponent_o *this, const MethodInfo *method)
{
  return this->fields.state == 2;
}


bool BattleWindowComponent__isOpen(BattleWindowComponent_o *this, const MethodInfo *method)
{
  return this->fields.state == 3;
}


bool BattleWindowComponent__isOpenOrOpening(BattleWindowComponent_o *this, const MethodInfo *method)
{
  return (unsigned int)(this->fields.state - 3) < 2;
}


bool BattleWindowComponent__isOpening(BattleWindowComponent_o *this, const MethodInfo *method)
{
  return this->fields.state == 4;
}


void BattleWindowComponent__setClose(BattleWindowComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  this->fields.state = 2;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C2D6EC(0, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


void BattleWindowComponent__setInitData(
        BattleWindowComponent_o *this,
        int32_t type,
        float time,
        bool ocflg,
        const MethodInfo *method)
{
  const MethodInfo *v9; // x3

  ((void (__fastcall *)(BattleWindowComponent_o *, const MethodInfo *, bool, const MethodInfo *))this->klass->vtable._7_setInitialPos.methodPtr)(
    this,
    this->klass->vtable._7_setInitialPos.method,
    ocflg,
    method);
  BattleWindowComponent__setInitDataWithoutInitPos(this, type, time, ocflg, v9);
}


void BattleWindowComponent__setInitDataWithoutInitPos(
        BattleWindowComponent_o *this,
        int32_t type,
        float time,
        bool ocflg,
        const MethodInfo *method)
{
  char v9; // w2
  const MethodInfo *v10; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v12; // x1

  this->fields.call_openComp = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.call_openComp, 0, ocflg, method);
  this->fields.call_closeComp = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.call_closeComp, 0, v9, v10);
  this->fields.type = type;
  this->fields.movetime = time;
  if ( !ocflg )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      sub_1C2D6EC(0, v12);
    UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  }
}


void BattleWindowComponent__setInitialPos(BattleWindowComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0)) == 0 )
  {
    sub_1C2D6EC(gameObject, v4);
  }
  this->fields.tmp_pos = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0);
}


void BattleWindowComponent__setInitialPosIfDefaultIsZero(BattleWindowComponent_o *this, const MethodInfo *method)
{
  float x; // s8
  float32x2_t v3; // d9
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float32x2_t v6; // d1
  unsigned __int64 v7; // d1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v9; // x1

  x = this->fields.tmp_pos.fields.x;
  v3.n64_u64[0] = *(unsigned __int64 *)&this->fields.tmp_pos.fields.y;
  if ( !byte_4C20DA1 )
  {
    sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v6.n64_u64[0] = vsub_f32(v3, *(float32x2_t *)&static_fields->zeroVector.fields.y).n64_u64[0];
  v7 = vmul_f32(v6, v6).n64_u64[0];
  if ( (float)(*((float *)&v7 + 1)
             + (float)((float)((float)(x - static_fields->zeroVector.fields.x)
                             * (float)(x - static_fields->zeroVector.fields.x))
                     + *(float *)&v7)) < 1.0e-10 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject
      || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0)) == 0 )
    {
      sub_1C2D6EC(gameObject, v9);
    }
    this->fields.tmp_pos = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0);
  }
}


void BattleWindowComponent__set_closeBtnObject(
        BattleWindowComponent_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._closeBtnObject = value;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields._closeBtnObject, (int32_t)value, (int32_t)method, v3);
}


void BattleWindowComponent_EndCall___ctor(
        BattleWindowComponent_EndCall_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C2D550(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C2D708(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2D5B8(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A73E38;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A73DF8;
}


System_IAsyncResult_o *BattleWindowComponent_EndCall__BeginInvoke(
        BattleWindowComponent_EndCall_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return (System_IAsyncResult_o *)sub_1C2D444(this, &v5, callback, object);
}


void BattleWindowComponent_EndCall__EndInvoke(
        BattleWindowComponent_EndCall_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
}


void BattleWindowComponent_EndCall__Invoke(BattleWindowComponent_EndCall_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}