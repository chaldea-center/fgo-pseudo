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
  UnityEngine_GameObject_o *v11; // x0
  __int64 v12; // x0
  int32_t type; // w8
  __int64 v14; // d1
  __int64 v15; // x0
  __int64 v16; // x0
  UnityEngine_GameObject_o *v17; // x21
  __int64 v18; // x0
  __int64 v19; // x0
  UnityEngine_GameObject_o *v20; // x21
  Il2CppObject *Component_object; // x20
  UnityEngine_GameObject_o *v22; // x0
  __int64 v23; // x0
  __int64 v24; // x0
  UnityEngine_GameObject_o *v25; // x21
  int v26; // [xsp+Ch] [xbp-34h] BYREF
  _BYTE v27[12]; // [xsp+10h] [xbp-30h] BYREF

  if ( (byte_4CB865D & 1) == 0 )
  {
    sub_1C6BA08(&bool_TypeInfo);
    sub_1C6BA08(&iTween_EaseType_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C6BA08(&System_Collections_Hashtable_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&float_TypeInfo);
    sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
    sub_1C6BA08(&StringLiteral_18790/*"easetype"*/);
    sub_1C6BA08(&StringLiteral_4607/*"CompClose"*/);
    sub_1C6BA08(&StringLiteral_24169/*"time"*/);
    sub_1C6BA08(&StringLiteral_22520/*"oncompletetarget"*/);
    sub_1C6BA08(&StringLiteral_22829/*"position"*/);
    sub_1C6BA08(&StringLiteral_20995/*"isLocal"*/);
    sub_1C6BA08(&StringLiteral_22518/*"oncomplete"*/);
    sub_1C6BA08(&StringLiteral_23290/*"scale"*/);
    sub_1C6BA08(&iTween_TypeInfo);
    byte_4CB865D = 1;
  }
  this->fields.call_closeComp = call;
  p_call_closeComp = &this->fields.call_closeComp;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.call_closeComp, (int32_t)call, (int32_t)method, v3);
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_30;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0) )
  {
    v9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__Stop_63714696(v9, 0);
    v10 = (System_Collections_Hashtable_o *)sub_1C6BC54(System_Collections_Hashtable_TypeInfo);
    System_Collections_Hashtable___ctor_65329408(v10, 0);
    LOBYTE(v26) = 1;
    gameObject = j_il2cpp_value_box_0(bool_TypeInfo, &v26);
    if ( v10 )
    {
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v10->klass->vtable._22_Add.methodPtr)(
        v10,
        StringLiteral_20995/*"isLocal"*/,
        gameObject,
        v10->klass->vtable._22_Add.method);
      v11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, const MethodInfo *))v10->klass->vtable._22_Add.methodPtr)(
        v10,
        StringLiteral_22520/*"oncompletetarget"*/,
        v11,
        v10->klass->vtable._22_Add.method);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v10->klass->vtable._22_Add.methodPtr)(
        v10,
        StringLiteral_22518/*"oncomplete"*/,
        StringLiteral_4607/*"CompClose"*/,
        v10->klass->vtable._22_Add.method);
      *(float *)v27 = this->fields.movetime;
      v12 = j_il2cpp_value_box_0(float_TypeInfo, v27);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v10->klass->vtable._22_Add.methodPtr)(
        v10,
        StringLiteral_24169/*"time"*/,
        v12,
        v10->klass->vtable._22_Add.method);
      type = this->fields.type;
      if ( type != 2 )
      {
        if ( type == 1 )
        {
          *(int32x2_t *)v27 = vdup_n_s32(0x3F333333u);
          *(_DWORD *)&v27[8] = 0;
          v23 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, v27);
          ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v10->klass->vtable._22_Add.methodPtr)(
            v10,
            StringLiteral_23290/*"scale"*/,
            v23,
            v10->klass->vtable._22_Add.method);
          v26 = 26;
          v24 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v26);
          ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v10->klass->vtable._22_Add.methodPtr)(
            v10,
            StringLiteral_18790/*"easetype"*/,
            v24,
            v10->klass->vtable._22_Add.method);
          v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          if ( !iTween_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
          iTween__ScaleTo_63609884(v25, v10, 0);
        }
        else if ( !type )
        {
          v14 = *(_QWORD *)&this->fields.tmp_pos.fields.y;
          *(float *)v27 = this->fields.tmp_pos.fields.x + 80.0;
          *(_QWORD *)&v27[4] = v14;
          v15 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, v27);
          ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v10->klass->vtable._22_Add.methodPtr)(
            v10,
            StringLiteral_22829/*"position"*/,
            v15,
            v10->klass->vtable._22_Add.method);
          v26 = 26;
          v16 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v26);
          ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v10->klass->vtable._22_Add.methodPtr)(
            v10,
            StringLiteral_18790/*"easetype"*/,
            v16,
            v10->klass->vtable._22_Add.method);
          v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          if ( !iTween_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
          iTween__MoveTo_63604356(v17, v10, 0);
        }
        goto LABEL_28;
      }
      *(int32x2_t *)v27 = vdup_n_s32(0x3F666666u);
      *(_DWORD *)&v27[8] = 0;
      v18 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, v27);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v10->klass->vtable._22_Add.methodPtr)(
        v10,
        StringLiteral_23290/*"scale"*/,
        v18,
        v10->klass->vtable._22_Add.method);
      v26 = 26;
      v19 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v26);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v10->klass->vtable._22_Add.methodPtr)(
        v10,
        StringLiteral_18790/*"easetype"*/,
        v19,
        v10->klass->vtable._22_Add.method);
      v20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !iTween_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
      iTween__ScaleTo_63609884(v20, v10, 0);
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( gameObject )
      {
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)gameObject,
                             (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
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
          v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          gameObject = (__int64)TweenAlpha__Begin(v22, this->fields.movetime, 0.0, 0);
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
    sub_1C6BC60(gameObject, v8);
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
    sub_1C6BC60(0, v4);
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

  if ( (byte_4CB865B & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB865B = 1;
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
    sub_1C6BC60(v6, v7);
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
  UnityEngine_GameObject_o *v10; // x0
  __int64 v11; // x0
  int32_t type; // w8
  __int64 v13; // d1
  __int64 v14; // x0
  __int64 v15; // x0
  UnityEngine_GameObject_o *v16; // x21
  UnityEngine_Transform_o *v17; // x21
  __int64 v18; // x0
  __int64 v19; // x0
  UnityEngine_GameObject_o *v20; // x21
  Il2CppObject *Component_object; // x20
  UnityEngine_GameObject_o *v22; // x0
  UnityEngine_Transform_o *v23; // x21
  __int64 v24; // x0
  __int64 v25; // x0
  UnityEngine_GameObject_o *v26; // x21
  _BYTE v27[12]; // [xsp+0h] [xbp-60h] BYREF
  int v28; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4CB865C & 1) == 0 )
  {
    sub_1C6BA08(&bool_TypeInfo);
    sub_1C6BA08(&iTween_EaseType_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C6BA08(&System_Collections_Hashtable_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&float_TypeInfo);
    sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
    sub_1C6BA08(&StringLiteral_18790/*"easetype"*/);
    sub_1C6BA08(&StringLiteral_24169/*"time"*/);
    sub_1C6BA08(&StringLiteral_22520/*"oncompletetarget"*/);
    sub_1C6BA08(&StringLiteral_22829/*"position"*/);
    sub_1C6BA08(&StringLiteral_20995/*"isLocal"*/);
    sub_1C6BA08(&StringLiteral_22518/*"oncomplete"*/);
    sub_1C6BA08(&StringLiteral_4608/*"CompOpen"*/);
    sub_1C6BA08(&StringLiteral_23290/*"scale"*/);
    sub_1C6BA08(&iTween_TypeInfo);
    byte_4CB865C = 1;
  }
  this->fields.call_openComp = call;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.call_openComp, (int32_t)call, (int32_t)method, v3);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_63714696(gameObject, 0);
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
  v9 = (System_Collections_Hashtable_o *)sub_1C6BC54(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_65329408(v9, 0);
  LOBYTE(v28) = 1;
  transform = j_il2cpp_value_box_0(bool_TypeInfo, &v28);
  if ( !v9 )
    goto LABEL_34;
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v9->klass->vtable._22_Add.methodPtr)(
    v9,
    StringLiteral_20995/*"isLocal"*/,
    transform,
    v9->klass->vtable._22_Add.method);
  v10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, const MethodInfo *))v9->klass->vtable._22_Add.methodPtr)(
    v9,
    StringLiteral_22520/*"oncompletetarget"*/,
    v10,
    v9->klass->vtable._22_Add.method);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v9->klass->vtable._22_Add.methodPtr)(
    v9,
    StringLiteral_22518/*"oncomplete"*/,
    StringLiteral_4608/*"CompOpen"*/,
    v9->klass->vtable._22_Add.method);
  *(float *)v27 = this->fields.movetime;
  v11 = j_il2cpp_value_box_0(float_TypeInfo, v27);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v9->klass->vtable._22_Add.methodPtr)(
    v9,
    StringLiteral_24169/*"time"*/,
    v11,
    v9->klass->vtable._22_Add.method);
  type = this->fields.type;
  if ( type != 2 )
  {
    if ( type != 1 )
    {
      if ( !type )
      {
        v13 = *(_QWORD *)&this->fields.tmp_pos.fields.y;
        *(float *)v27 = this->fields.tmp_pos.fields.x + 80.0;
        *(_QWORD *)&v27[4] = v13;
        v14 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, v27);
        ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v9->klass->vtable._22_Add.methodPtr)(
          v9,
          StringLiteral_22829/*"position"*/,
          v14,
          v9->klass->vtable._22_Add.method);
        v28 = 27;
        v15 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v28);
        ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v9->klass->vtable._22_Add.methodPtr)(
          v9,
          StringLiteral_18790/*"easetype"*/,
          v15,
          v9->klass->vtable._22_Add.method);
        v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !iTween_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
        iTween__MoveFrom_63605828(v16, v9, 0);
      }
      goto LABEL_33;
    }
    transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    v23 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4CAFC0E )
    {
      transform = sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
      byte_4CAFC0E = 1;
    }
    if ( v23 )
    {
      UnityEngine_Transform__set_localScale(v23, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
      *(int32x2_t *)v27 = vdup_n_s32(0x3F333333u);
      *(_DWORD *)&v27[8] = 0;
      v24 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, v27);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v9->klass->vtable._22_Add.methodPtr)(
        v9,
        StringLiteral_23290/*"scale"*/,
        v24,
        v9->klass->vtable._22_Add.method);
      v28 = 27;
      v25 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v28);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v9->klass->vtable._22_Add.methodPtr)(
        v9,
        StringLiteral_18790/*"easetype"*/,
        v25,
        v9->klass->vtable._22_Add.method);
      v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !iTween_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
      iTween__ScaleFrom_63611336(v26, v9, 0);
      goto LABEL_33;
    }
LABEL_34:
    sub_1C6BC60(transform, v8);
  }
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  v17 = (UnityEngine_Transform_o *)transform;
  if ( !byte_4CAFC0E )
  {
    transform = sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
    byte_4CAFC0E = 1;
  }
  if ( !v17 )
    goto LABEL_34;
  UnityEngine_Transform__set_localScale(v17, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  *(int32x2_t *)v27 = vdup_n_s32(0x3F666666u);
  *(_DWORD *)&v27[8] = 0;
  v18 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, v27);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v9->klass->vtable._22_Add.methodPtr)(
    v9,
    StringLiteral_23290/*"scale"*/,
    v18,
    v9->klass->vtable._22_Add.method);
  v28 = 27;
  v19 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v28);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v9->klass->vtable._22_Add.methodPtr)(
    v9,
    StringLiteral_18790/*"easetype"*/,
    v19,
    v9->klass->vtable._22_Add.method);
  v20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__ScaleFrom_63611336(v20, v9, 0);
  transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_34;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)transform,
                       (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
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
      v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      transform = (__int64)TweenAlpha__Begin(v22, this->fields.movetime, 1.0, 0);
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
  if ( (byte_4CB865A & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB865A = 1;
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
    sub_1C6BC60(0, v3);
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
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.call_openComp, 0, ocflg, method);
  this->fields.call_closeComp = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.call_closeComp, 0, v9, v10);
  this->fields.type = type;
  this->fields.movetime = time;
  if ( !ocflg )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      sub_1C6BC60(0, v12);
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
    sub_1C6BC60(gameObject, v4);
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
  if ( !byte_4CAFC09 )
  {
    sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
    byte_4CAFC09 = 1;
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
      sub_1C6BC60(gameObject, v9);
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
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._closeBtnObject, (int32_t)value, (int32_t)method, v3);
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
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C6BAC8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C6BC7C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C6BB30(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1AA3E14;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AA3DD4;
}


System_IAsyncResult_o *BattleWindowComponent_EndCall__BeginInvoke(
        BattleWindowComponent_EndCall_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return (System_IAsyncResult_o *)sub_1C6B9BC(this, &v5, callback, object);
}


void BattleWindowComponent_EndCall__EndInvoke(
        BattleWindowComponent_EndCall_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C6B9C0(result, 0, method);
}


void BattleWindowComponent_EndCall__Invoke(BattleWindowComponent_EndCall_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}