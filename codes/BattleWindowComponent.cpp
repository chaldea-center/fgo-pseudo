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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct BattleWindowComponent_EndCall_o **p_call_closeComp; // x21
  __int64 gameObject; // x0
  __int64 v12; // x1
  __int64 v13; // x1
  UnityEngine_GameObject_o *v14; // x20
  System_Collections_Hashtable_o *v15; // x20
  UnityEngine_GameObject_o *v16; // x0
  __int64 v17; // x0
  int32_t type; // w8
  float v19; // s0
  __int64 v20; // x0
  __int64 v21; // x0
  __int64 v22; // x1
  UnityEngine_GameObject_o *v23; // x21
  __int64 v24; // x0
  __int64 v25; // x0
  __int64 v26; // x1
  UnityEngine_GameObject_o *v27; // x21
  __int64 v28; // x0
  __int64 v29; // x0
  __int64 v30; // x1
  UnityEngine_GameObject_o *v31; // x21
  __int64 v32; // x1
  Il2CppObject *Component_object; // x20
  UnityEngine_GameObject_o *v34; // x0
  _BYTE v35[12]; // [xsp+0h] [xbp-40h] BYREF
  int v36; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_5972C56 & 1) == 0 )
  {
    sub_2213A60(&iTween_EaseType_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_2213A60(&System_Collections_Hashtable_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    sub_2213A60(&StringLiteral_19609/*"easetype"*/);
    sub_2213A60(&StringLiteral_4795/*"CompClose"*/);
    sub_2213A60(&StringLiteral_25366/*"time"*/);
    sub_2213A60(&StringLiteral_23567/*"oncompletetarget"*/);
    sub_2213A60(&StringLiteral_23916/*"position"*/);
    sub_2213A60(&StringLiteral_21946/*"isLocal"*/);
    sub_2213A60(&StringLiteral_23565/*"oncomplete"*/);
    sub_2213A60(&StringLiteral_24403/*"scale"*/);
    sub_2213A60(&iTween_TypeInfo);
    byte_5972C56 = 1;
  }
  this->fields.call_closeComp = call;
  p_call_closeComp = &this->fields.call_closeComp;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.call_closeComp,
    (int32_t)call,
    (System_String_o *)method,
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
    v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !*(&iTween_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v13);
    iTween__Stop_75402912(v14, 0);
    v15 = (System_Collections_Hashtable_o *)sub_2213CCC(System_Collections_Hashtable_TypeInfo);
    System_Collections_Hashtable___ctor_76845452(v15, 0);
    LOBYTE(v36) = 1;
    gameObject = j_il2cpp_value_box_0(qword_5984328, &v36);
    if ( v15 )
    {
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v15->klass->vtable._22_Add.methodPtr)(
        v15,
        StringLiteral_21946/*"isLocal"*/,
        gameObject,
        v15->klass->vtable._22_Add.method);
      v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, const MethodInfo *))v15->klass->vtable._22_Add.methodPtr)(
        v15,
        StringLiteral_23567/*"oncompletetarget"*/,
        v16,
        v15->klass->vtable._22_Add.method);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v15->klass->vtable._22_Add.methodPtr)(
        v15,
        StringLiteral_23565/*"oncomplete"*/,
        StringLiteral_4795/*"CompClose"*/,
        v15->klass->vtable._22_Add.method);
      *(float *)v35 = this->fields.movetime;
      v17 = j_il2cpp_value_box_0(qword_5984378, v35);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v15->klass->vtable._22_Add.methodPtr)(
        v15,
        StringLiteral_25366/*"time"*/,
        v17,
        v15->klass->vtable._22_Add.method);
      type = this->fields.type;
      if ( type != 2 )
      {
        if ( type == 1 )
        {
          *(_DWORD *)&v35[8] = 0;
          *(int32x2_t *)v35 = vdup_n_s32(0x3F333333u);
          v24 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, v35);
          ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v15->klass->vtable._22_Add.methodPtr)(
            v15,
            StringLiteral_24403/*"scale"*/,
            v24,
            v15->klass->vtable._22_Add.method);
          v36 = 26;
          v25 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v36);
          ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v15->klass->vtable._22_Add.methodPtr)(
            v15,
            StringLiteral_19609/*"easetype"*/,
            v25,
            v15->klass->vtable._22_Add.method);
          v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          if ( !*(&iTween_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v26);
          iTween__ScaleTo_75298996(v27, v15, 0);
        }
        else if ( !type )
        {
          v19 = this->fields.tmp_pos.fields.x + 80.0;
          *(_QWORD *)&v35[4] = *(_QWORD *)&this->fields.tmp_pos.fields.y;
          *(float *)v35 = v19;
          v20 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, v35);
          ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v15->klass->vtable._22_Add.methodPtr)(
            v15,
            StringLiteral_23916/*"position"*/,
            v20,
            v15->klass->vtable._22_Add.method);
          v36 = 26;
          v21 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v36);
          ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v15->klass->vtable._22_Add.methodPtr)(
            v15,
            StringLiteral_19609/*"easetype"*/,
            v21,
            v15->klass->vtable._22_Add.method);
          v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          if ( !*(&iTween_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v22);
          iTween__MoveTo_75293528(v23, v15, 0);
        }
        goto LABEL_28;
      }
      *(_DWORD *)&v35[8] = 0;
      *(int32x2_t *)v35 = vdup_n_s32(0x3F666666u);
      v28 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, v35);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v15->klass->vtable._22_Add.methodPtr)(
        v15,
        StringLiteral_24403/*"scale"*/,
        v28,
        v15->klass->vtable._22_Add.method);
      v36 = 26;
      v29 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v36);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v15->klass->vtable._22_Add.methodPtr)(
        v15,
        StringLiteral_19609/*"easetype"*/,
        v29,
        v15->klass->vtable._22_Add.method);
      v31 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !*(&iTween_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v30);
      iTween__ScaleTo_75298996(v31, v15, 0);
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( gameObject )
      {
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)gameObject,
                             (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v32);
        gameObject = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
        if ( (gameObject & 1) == 0 )
          goto LABEL_28;
        if ( Component_object )
        {
          ((void (__fastcall *)(Il2CppObject *, const MethodInfo *, float))Component_object->klass->vtable[8].methodPtr)(
            Component_object,
            Component_object->klass->vtable[8].method,
            1.0);
          v34 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          gameObject = (__int64)TweenAlpha__Begin(v34, this->fields.movetime, 0.0, 0);
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
    sub_2213CDC(gameObject, v12);
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
    sub_2213CDC(0, v4);
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
  __int64 v3; // x1
  UnityEngine_Object_o *v4; // x20
  System_String_o *v5; // x0
  UnityEngine_Transform_o *transform; // x20
  System_String_o *v7; // x0
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_Object_o *v10; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v12; // x0

  if ( (byte_5972C54 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972C54 = 1;
  }
  v4 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(BattleWindowComponent_o *, const MethodInfo *))this->klass->vtable._4_get_closeBtnObject.methodPtr)(
                                 this,
                                 this->klass->vtable._4_get_closeBtnObject.method);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  if ( !UnityEngine_Object__op_Equality(v4, 0, 0) )
    goto LABEL_14;
  v5 = (System_String_o *)((__int64 (__fastcall *)(BattleWindowComponent_o *, const MethodInfo *))this->klass->vtable._6_get_closeBtnPath.methodPtr)(
                            this,
                            this->klass->vtable._6_get_closeBtnPath.method);
  if ( System_String__IsNullOrEmpty(v5, 0) )
    return;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  v7 = (System_String_o *)((__int64 (__fastcall *)(BattleWindowComponent_o *, const MethodInfo *))this->klass->vtable._6_get_closeBtnPath.methodPtr)(
                            this,
                            this->klass->vtable._6_get_closeBtnPath.method);
  if ( !transform )
LABEL_15:
    sub_2213CDC(v7, v8);
  v10 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(transform, v7, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  v7 = (System_String_o *)UnityEngine_Object__op_Equality(v10, 0, 0);
  if ( ((unsigned __int8)v7 & 1) == 0 )
  {
    if ( v10 )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v10, 0);
      ((void (__fastcall *)(BattleWindowComponent_o *, UnityEngine_GameObject_o *, const MethodInfo *))this->klass->vtable._5_set_closeBtnObject.methodPtr)(
        this,
        gameObject,
        this->klass->vtable._5_set_closeBtnObject.method);
LABEL_14:
      v12 = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(BattleWindowComponent_o *, const MethodInfo *))this->klass->vtable._4_get_closeBtnObject.methodPtr)(
                                          this,
                                          this->klass->vtable._4_get_closeBtnObject.method);
      AndroidBackKeyManager__AddBackBtn(v12, 0);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v10; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 transform; // x0
  __int64 v13; // x1
  System_Collections_Hashtable_o *v14; // x20
  UnityEngine_GameObject_o *v15; // x0
  __int64 v16; // x0
  int32_t type; // w8
  float v18; // s0
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x1
  UnityEngine_GameObject_o *v22; // x21
  UnityEngine_Transform_o *v23; // x21
  __int64 v24; // x0
  __int64 v25; // x0
  __int64 v26; // x1
  UnityEngine_GameObject_o *v27; // x21
  UnityEngine_Transform_o *v28; // x21
  __int64 v29; // x0
  __int64 v30; // x0
  __int64 v31; // x1
  UnityEngine_GameObject_o *v32; // x21
  __int64 v33; // x1
  Il2CppObject *Component_object; // x20
  UnityEngine_GameObject_o *v35; // x0
  _BYTE v36[12]; // [xsp+0h] [xbp-60h] BYREF
  int v37; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_5972C55 & 1) == 0 )
  {
    sub_2213A60(&iTween_EaseType_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_2213A60(&System_Collections_Hashtable_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    sub_2213A60(&StringLiteral_19609/*"easetype"*/);
    sub_2213A60(&StringLiteral_25366/*"time"*/);
    sub_2213A60(&StringLiteral_23567/*"oncompletetarget"*/);
    sub_2213A60(&StringLiteral_23916/*"position"*/);
    sub_2213A60(&StringLiteral_21946/*"isLocal"*/);
    sub_2213A60(&StringLiteral_23565/*"oncomplete"*/);
    sub_2213A60(&StringLiteral_4796/*"CompOpen"*/);
    sub_2213A60(&StringLiteral_24403/*"scale"*/);
    sub_2213A60(&iTween_TypeInfo);
    byte_5972C55 = 1;
  }
  this->fields.call_openComp = call;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.call_openComp,
    (int32_t)call,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !*(&iTween_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v10);
  iTween__Stop_75402912(gameObject, 0);
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
  v14 = (System_Collections_Hashtable_o *)sub_2213CCC(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_76845452(v14, 0);
  LOBYTE(v37) = 1;
  transform = j_il2cpp_value_box_0(qword_5984328, &v37);
  if ( !v14 )
    goto LABEL_34;
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v14->klass->vtable._22_Add.methodPtr)(
    v14,
    StringLiteral_21946/*"isLocal"*/,
    transform,
    v14->klass->vtable._22_Add.method);
  v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, const MethodInfo *))v14->klass->vtable._22_Add.methodPtr)(
    v14,
    StringLiteral_23567/*"oncompletetarget"*/,
    v15,
    v14->klass->vtable._22_Add.method);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v14->klass->vtable._22_Add.methodPtr)(
    v14,
    StringLiteral_23565/*"oncomplete"*/,
    StringLiteral_4796/*"CompOpen"*/,
    v14->klass->vtable._22_Add.method);
  *(float *)v36 = this->fields.movetime;
  v16 = j_il2cpp_value_box_0(qword_5984378, v36);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v14->klass->vtable._22_Add.methodPtr)(
    v14,
    StringLiteral_25366/*"time"*/,
    v16,
    v14->klass->vtable._22_Add.method);
  type = this->fields.type;
  if ( type != 2 )
  {
    if ( type != 1 )
    {
      if ( !type )
      {
        v18 = this->fields.tmp_pos.fields.x + 80.0;
        *(_QWORD *)&v36[4] = *(_QWORD *)&this->fields.tmp_pos.fields.y;
        *(float *)v36 = v18;
        v19 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, v36);
        ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v14->klass->vtable._22_Add.methodPtr)(
          v14,
          StringLiteral_23916/*"position"*/,
          v19,
          v14->klass->vtable._22_Add.method);
        v37 = 27;
        v20 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v37);
        ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v14->klass->vtable._22_Add.methodPtr)(
          v14,
          StringLiteral_19609/*"easetype"*/,
          v20,
          v14->klass->vtable._22_Add.method);
        v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !*(&iTween_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v21);
        iTween__MoveFrom_75294960(v22, v14, 0);
      }
      goto LABEL_33;
    }
    transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    v23 = (UnityEngine_Transform_o *)transform;
    if ( !byte_5969AE5 )
    {
      transform = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE5 = 1;
    }
    if ( v23 )
    {
      UnityEngine_Transform__set_localScale(v23, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
      *(_DWORD *)&v36[8] = 0;
      *(int32x2_t *)v36 = vdup_n_s32(0x3F333333u);
      v24 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, v36);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v14->klass->vtable._22_Add.methodPtr)(
        v14,
        StringLiteral_24403/*"scale"*/,
        v24,
        v14->klass->vtable._22_Add.method);
      v37 = 27;
      v25 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v37);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v14->klass->vtable._22_Add.methodPtr)(
        v14,
        StringLiteral_19609/*"easetype"*/,
        v25,
        v14->klass->vtable._22_Add.method);
      v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !*(&iTween_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v26);
      iTween__ScaleFrom_75300408(v27, v14, 0);
      goto LABEL_33;
    }
LABEL_34:
    sub_2213CDC(transform, v13);
  }
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  v28 = (UnityEngine_Transform_o *)transform;
  if ( !byte_5969AE5 )
  {
    transform = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE5 = 1;
  }
  if ( !v28 )
    goto LABEL_34;
  UnityEngine_Transform__set_localScale(v28, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  *(_DWORD *)&v36[8] = 0;
  *(int32x2_t *)v36 = vdup_n_s32(0x3F666666u);
  v29 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, v36);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v14->klass->vtable._22_Add.methodPtr)(
    v14,
    StringLiteral_24403/*"scale"*/,
    v29,
    v14->klass->vtable._22_Add.method);
  v37 = 27;
  v30 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v37);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v14->klass->vtable._22_Add.methodPtr)(
    v14,
    StringLiteral_19609/*"easetype"*/,
    v30,
    v14->klass->vtable._22_Add.method);
  v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !*(&iTween_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v31);
  iTween__ScaleFrom_75300408(v32, v14, 0);
  transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_34;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)transform,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v33);
  transform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( (transform & 1) != 0 )
  {
    if ( Component_object )
    {
      ((void (__fastcall *)(Il2CppObject *, const MethodInfo *, float))Component_object->klass->vtable[8].methodPtr)(
        Component_object,
        Component_object->klass->vtable[8].method,
        0.01);
      v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      transform = (__int64)TweenAlpha__Begin(v35, this->fields.movetime, 1.0, 0);
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
  if ( (byte_5972C53 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5972C53 = 1;
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
    sub_2213CDC(0, v3);
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


// local variable allocation has failed, the output may be wrong!
void BattleWindowComponent__setInitDataWithoutInitPos(
        BattleWindowComponent_o *this,
        int32_t type,
        float time,
        bool ocflg,
        const MethodInfo *method)
{
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v20; // x1

  this->fields.call_openComp = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.call_openComp,
    0,
    (System_String_o *)ocflg,
    (System_String_o *)method,
    v5,
    v6,
    v7,
    v8);
  this->fields.call_closeComp = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.call_closeComp, 0, v13, v14, v15, v16, v17, v18);
  this->fields.type = type;
  this->fields.movetime = time;
  if ( !ocflg )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      sub_2213CDC(0, v20);
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
    sub_2213CDC(gameObject, v4);
  }
  this->fields.tmp_pos = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0);
}


void BattleWindowComponent__setInitialPosIfDefaultIsZero(BattleWindowComponent_o *this, const MethodInfo *method)
{
  float32x2_t v2; // d9
  float z; // s8
  float32x2_t *static_fields; // x8
  float32x2_t v6; // d0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1

  v2.n64_u64[0] = *(unsigned __int64 *)&this->fields.tmp_pos.fields.x;
  z = this->fields.tmp_pos.fields.z;
  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  static_fields = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v6.n64_u64[0] = vsub_f32(v2, (float32x2_t)static_fields->n64_u64[0]).n64_u64[0];
  if ( (float)((float)((float)(z - static_fields[1].n64_f32[0]) * (float)(z - static_fields[1].n64_f32[0]))
             + vaddv_f32(vmul_f32(v6, v6))) < 1.0e-10 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject
      || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0)) == 0 )
    {
      sub_2213CDC(gameObject, v8);
    }
    this->fields.tmp_pos = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0);
  }
}


void BattleWindowComponent__set_closeBtnObject(
        BattleWindowComponent_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._closeBtnObject = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._closeBtnObject,
    (int32_t)value,
    (System_String_o *)method,
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
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_20104C4;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_2010484;
}


System_IAsyncResult_o *BattleWindowComponent_EndCall__BeginInvoke(
        BattleWindowComponent_EndCall_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  char v5; // [xsp+8h] [xbp-8h] BYREF

  return sub_2213A14(this, &v5, callback, object);
}


void BattleWindowComponent_EndCall__EndInvoke(
        BattleWindowComponent_EndCall_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
}


void BattleWindowComponent_EndCall__Invoke(BattleWindowComponent_EndCall_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}