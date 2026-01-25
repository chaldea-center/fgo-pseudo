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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct BattleWindowComponent_EndCall_o **p_call_closeComp; // x21
  __int64 gameObject; // x0
  __int64 v12; // x1
  UnityEngine_GameObject_o *v13; // x20
  System_Collections_Hashtable_o *v14; // x20
  UnityEngine_GameObject_o *v15; // x0
  __int64 v16; // x0
  int32_t type; // w8
  __int64 v18; // d1
  __int64 v19; // x0
  __int64 v20; // x0
  UnityEngine_GameObject_o *v21; // x21
  __int64 v22; // x0
  __int64 v23; // x0
  UnityEngine_GameObject_o *v24; // x21
  Il2CppObject *Component_object; // x20
  UnityEngine_GameObject_o *v26; // x0
  __int64 v27; // x0
  __int64 v28; // x0
  UnityEngine_GameObject_o *v29; // x21
  int v30; // [xsp+Ch] [xbp-34h] BYREF
  _BYTE v31[12]; // [xsp+10h] [xbp-30h] BYREF

  if ( (byte_4CF09B4 & 1) == 0 )
  {
    sub_1C7BAE8(&bool_TypeInfo);
    sub_1C7BAE8(&iTween_EaseType_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C7BAE8(&System_Collections_Hashtable_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&float_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
    sub_1C7BAE8(&StringLiteral_18870/*"easetype"*/);
    sub_1C7BAE8(&StringLiteral_4621/*"CompClose"*/);
    sub_1C7BAE8(&StringLiteral_24308/*"time"*/);
    sub_1C7BAE8(&StringLiteral_22639/*"oncompletetarget"*/);
    sub_1C7BAE8(&StringLiteral_22955/*"position"*/);
    sub_1C7BAE8(&StringLiteral_21107/*"isLocal"*/);
    sub_1C7BAE8(&StringLiteral_22637/*"oncomplete"*/);
    sub_1C7BAE8(&StringLiteral_23419/*"scale"*/);
    sub_1C7BAE8(&iTween_TypeInfo);
    byte_4CF09B4 = 1;
  }
  this->fields.call_closeComp = call;
  p_call_closeComp = &this->fields.call_closeComp;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.call_closeComp,
    (int32_t)call,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_30;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0) )
  {
    v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__Stop_63924816(v13, 0);
    v14 = (System_Collections_Hashtable_o *)sub_1C7BD34(System_Collections_Hashtable_TypeInfo);
    System_Collections_Hashtable___ctor_65539536(v14, 0);
    LOBYTE(v30) = 1;
    gameObject = j_il2cpp_value_box_0(bool_TypeInfo, &v30);
    if ( v14 )
    {
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v14->klass->vtable._22_Add.methodPtr)(
        v14,
        StringLiteral_21107/*"isLocal"*/,
        gameObject,
        v14->klass->vtable._22_Add.method);
      v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, const MethodInfo *))v14->klass->vtable._22_Add.methodPtr)(
        v14,
        StringLiteral_22639/*"oncompletetarget"*/,
        v15,
        v14->klass->vtable._22_Add.method);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v14->klass->vtable._22_Add.methodPtr)(
        v14,
        StringLiteral_22637/*"oncomplete"*/,
        StringLiteral_4621/*"CompClose"*/,
        v14->klass->vtable._22_Add.method);
      *(float *)v31 = this->fields.movetime;
      v16 = j_il2cpp_value_box_0(float_TypeInfo, v31);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v14->klass->vtable._22_Add.methodPtr)(
        v14,
        StringLiteral_24308/*"time"*/,
        v16,
        v14->klass->vtable._22_Add.method);
      type = this->fields.type;
      if ( type != 2 )
      {
        if ( type == 1 )
        {
          *(int32x2_t *)v31 = vdup_n_s32(0x3F333333u);
          *(_DWORD *)&v31[8] = 0;
          v27 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, v31);
          ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v14->klass->vtable._22_Add.methodPtr)(
            v14,
            StringLiteral_23419/*"scale"*/,
            v27,
            v14->klass->vtable._22_Add.method);
          v30 = 26;
          v28 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v30);
          ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v14->klass->vtable._22_Add.methodPtr)(
            v14,
            StringLiteral_18870/*"easetype"*/,
            v28,
            v14->klass->vtable._22_Add.method);
          v29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          if ( !iTween_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
          iTween__ScaleTo_63820004(v29, v14, 0);
        }
        else if ( !type )
        {
          v18 = *(_QWORD *)&this->fields.tmp_pos.fields.y;
          *(float *)v31 = this->fields.tmp_pos.fields.x + 80.0;
          *(_QWORD *)&v31[4] = v18;
          v19 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, v31);
          ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v14->klass->vtable._22_Add.methodPtr)(
            v14,
            StringLiteral_22955/*"position"*/,
            v19,
            v14->klass->vtable._22_Add.method);
          v30 = 26;
          v20 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v30);
          ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v14->klass->vtable._22_Add.methodPtr)(
            v14,
            StringLiteral_18870/*"easetype"*/,
            v20,
            v14->klass->vtable._22_Add.method);
          v21 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          if ( !iTween_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
          iTween__MoveTo_63814476(v21, v14, 0);
        }
        goto LABEL_28;
      }
      *(int32x2_t *)v31 = vdup_n_s32(0x3F666666u);
      *(_DWORD *)&v31[8] = 0;
      v22 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, v31);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v14->klass->vtable._22_Add.methodPtr)(
        v14,
        StringLiteral_23419/*"scale"*/,
        v22,
        v14->klass->vtable._22_Add.method);
      v30 = 26;
      v23 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v30);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v14->klass->vtable._22_Add.methodPtr)(
        v14,
        StringLiteral_18870/*"easetype"*/,
        v23,
        v14->klass->vtable._22_Add.method);
      v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !iTween_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
      iTween__ScaleTo_63820004(v24, v14, 0);
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( gameObject )
      {
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)gameObject,
                             (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
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
          v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          gameObject = (__int64)TweenAlpha__Begin(v26, this->fields.movetime, 0.0, 0);
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
    sub_1C7BD40(gameObject, v12);
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
    sub_1C7BD40(0, v4);
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

  if ( (byte_4CF09B2 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF09B2 = 1;
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
    sub_1C7BD40(v6, v7);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 transform; // x0
  __int64 v12; // x1
  System_Collections_Hashtable_o *v13; // x20
  UnityEngine_GameObject_o *v14; // x0
  __int64 v15; // x0
  int32_t type; // w8
  __int64 v17; // d1
  __int64 v18; // x0
  __int64 v19; // x0
  UnityEngine_GameObject_o *v20; // x21
  UnityEngine_Transform_o *v21; // x21
  __int64 v22; // x0
  __int64 v23; // x0
  UnityEngine_GameObject_o *v24; // x21
  Il2CppObject *Component_object; // x20
  UnityEngine_GameObject_o *v26; // x0
  UnityEngine_Transform_o *v27; // x21
  __int64 v28; // x0
  __int64 v29; // x0
  UnityEngine_GameObject_o *v30; // x21
  _BYTE v31[12]; // [xsp+0h] [xbp-60h] BYREF
  int v32; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4CF09B3 & 1) == 0 )
  {
    sub_1C7BAE8(&bool_TypeInfo);
    sub_1C7BAE8(&iTween_EaseType_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C7BAE8(&System_Collections_Hashtable_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&float_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
    sub_1C7BAE8(&StringLiteral_18870/*"easetype"*/);
    sub_1C7BAE8(&StringLiteral_24308/*"time"*/);
    sub_1C7BAE8(&StringLiteral_22639/*"oncompletetarget"*/);
    sub_1C7BAE8(&StringLiteral_22955/*"position"*/);
    sub_1C7BAE8(&StringLiteral_21107/*"isLocal"*/);
    sub_1C7BAE8(&StringLiteral_22637/*"oncomplete"*/);
    sub_1C7BAE8(&StringLiteral_4622/*"CompOpen"*/);
    sub_1C7BAE8(&StringLiteral_23419/*"scale"*/);
    sub_1C7BAE8(&iTween_TypeInfo);
    byte_4CF09B3 = 1;
  }
  this->fields.call_openComp = call;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.call_openComp,
    (int32_t)call,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_63924816(gameObject, 0);
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
  v13 = (System_Collections_Hashtable_o *)sub_1C7BD34(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_65539536(v13, 0);
  LOBYTE(v32) = 1;
  transform = j_il2cpp_value_box_0(bool_TypeInfo, &v32);
  if ( !v13 )
    goto LABEL_34;
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v13->klass->vtable._22_Add.methodPtr)(
    v13,
    StringLiteral_21107/*"isLocal"*/,
    transform,
    v13->klass->vtable._22_Add.method);
  v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, const MethodInfo *))v13->klass->vtable._22_Add.methodPtr)(
    v13,
    StringLiteral_22639/*"oncompletetarget"*/,
    v14,
    v13->klass->vtable._22_Add.method);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v13->klass->vtable._22_Add.methodPtr)(
    v13,
    StringLiteral_22637/*"oncomplete"*/,
    StringLiteral_4622/*"CompOpen"*/,
    v13->klass->vtable._22_Add.method);
  *(float *)v31 = this->fields.movetime;
  v15 = j_il2cpp_value_box_0(float_TypeInfo, v31);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v13->klass->vtable._22_Add.methodPtr)(
    v13,
    StringLiteral_24308/*"time"*/,
    v15,
    v13->klass->vtable._22_Add.method);
  type = this->fields.type;
  if ( type != 2 )
  {
    if ( type != 1 )
    {
      if ( !type )
      {
        v17 = *(_QWORD *)&this->fields.tmp_pos.fields.y;
        *(float *)v31 = this->fields.tmp_pos.fields.x + 80.0;
        *(_QWORD *)&v31[4] = v17;
        v18 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, v31);
        ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v13->klass->vtable._22_Add.methodPtr)(
          v13,
          StringLiteral_22955/*"position"*/,
          v18,
          v13->klass->vtable._22_Add.method);
        v32 = 27;
        v19 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v32);
        ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v13->klass->vtable._22_Add.methodPtr)(
          v13,
          StringLiteral_18870/*"easetype"*/,
          v19,
          v13->klass->vtable._22_Add.method);
        v20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !iTween_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
        iTween__MoveFrom_63815948(v20, v13, 0);
      }
      goto LABEL_33;
    }
    transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    v27 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4CE7E5E )
    {
      transform = sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
      byte_4CE7E5E = 1;
    }
    if ( v27 )
    {
      UnityEngine_Transform__set_localScale(v27, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
      *(int32x2_t *)v31 = vdup_n_s32(0x3F333333u);
      *(_DWORD *)&v31[8] = 0;
      v28 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, v31);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v13->klass->vtable._22_Add.methodPtr)(
        v13,
        StringLiteral_23419/*"scale"*/,
        v28,
        v13->klass->vtable._22_Add.method);
      v32 = 27;
      v29 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v32);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v13->klass->vtable._22_Add.methodPtr)(
        v13,
        StringLiteral_18870/*"easetype"*/,
        v29,
        v13->klass->vtable._22_Add.method);
      v30 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !iTween_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
      iTween__ScaleFrom_63821456(v30, v13, 0);
      goto LABEL_33;
    }
LABEL_34:
    sub_1C7BD40(transform, v12);
  }
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  v21 = (UnityEngine_Transform_o *)transform;
  if ( !byte_4CE7E5E )
  {
    transform = sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
    byte_4CE7E5E = 1;
  }
  if ( !v21 )
    goto LABEL_34;
  UnityEngine_Transform__set_localScale(v21, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  *(int32x2_t *)v31 = vdup_n_s32(0x3F666666u);
  *(_DWORD *)&v31[8] = 0;
  v22 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, v31);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v13->klass->vtable._22_Add.methodPtr)(
    v13,
    StringLiteral_23419/*"scale"*/,
    v22,
    v13->klass->vtable._22_Add.method);
  v32 = 27;
  v23 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v32);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v13->klass->vtable._22_Add.methodPtr)(
    v13,
    StringLiteral_18870/*"easetype"*/,
    v23,
    v13->klass->vtable._22_Add.method);
  v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__ScaleFrom_63821456(v24, v13, 0);
  transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_34;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)transform,
                       (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
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
      v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      transform = (__int64)TweenAlpha__Begin(v26, this->fields.movetime, 1.0, 0);
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
  if ( (byte_4CF09B1 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CF09B1 = 1;
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
    sub_1C7BD40(0, v3);
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
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  char v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v20; // x1

  this->fields.call_openComp = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.call_openComp, 0, ocflg, (int32_t)method, v5, v6, v7, v8);
  this->fields.call_closeComp = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.call_closeComp, 0, v13, v14, v15, v16, v17, v18);
  this->fields.type = type;
  this->fields.movetime = time;
  if ( !ocflg )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      sub_1C7BD40(0, v20);
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
    sub_1C7BD40(gameObject, v4);
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
  if ( !byte_4CE7E59 )
  {
    sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
    byte_4CE7E59 = 1;
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
      sub_1C7BD40(gameObject, v9);
    }
    this->fields.tmp_pos = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0);
  }
}


void BattleWindowComponent__set_closeBtnObject(
        BattleWindowComponent_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._closeBtnObject = value;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields._closeBtnObject,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleWindowComponent_EndCall___ctor(
        BattleWindowComponent_EndCall_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C7BBA8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C7BD5C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C7BC10(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1AB3728;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AB36E8;
}


System_IAsyncResult_o *BattleWindowComponent_EndCall__BeginInvoke(
        BattleWindowComponent_EndCall_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return (System_IAsyncResult_o *)sub_1C7BA9C(this, &v5, callback, object);
}


void BattleWindowComponent_EndCall__EndInvoke(
        BattleWindowComponent_EndCall_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C7BAA0(result, 0, method);
}


void BattleWindowComponent_EndCall__Invoke(BattleWindowComponent_EndCall_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}