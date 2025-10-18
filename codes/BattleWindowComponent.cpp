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
  UnityEngine_GameObject_o *v8; // x20
  System_Collections_Hashtable_o *v9; // x20
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v13; // x5
  __int64 v14; // x6
  __int64 v15; // x7
  UnityEngine_GameObject_o *v16; // x0
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  __int64 v20; // x5
  __int64 v21; // x6
  __int64 v22; // x7
  __int64 v23; // x0
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  __int64 v27; // x5
  __int64 v28; // x6
  __int64 v29; // x7
  int32_t type; // w8
  __int64 v31; // d1
  __int64 v32; // x0
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  __int64 v36; // x5
  __int64 v37; // x6
  __int64 v38; // x7
  __int64 v39; // x0
  UnityEngine_GameObject_o *v40; // x21
  __int64 v41; // x0
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  __int64 v45; // x5
  __int64 v46; // x6
  __int64 v47; // x7
  __int64 v48; // x0
  UnityEngine_GameObject_o *v49; // x21
  Il2CppObject *Component_object; // x20
  UnityEngine_GameObject_o *v51; // x0
  __int64 v52; // x0
  __int64 v53; // x2
  __int64 v54; // x3
  __int64 v55; // x4
  __int64 v56; // x5
  __int64 v57; // x6
  __int64 v58; // x7
  __int64 v59; // x0
  UnityEngine_GameObject_o *v60; // x21
  int v61; // [xsp+Ch] [xbp-34h] BYREF
  _BYTE v62[12]; // [xsp+10h] [xbp-30h] BYREF

  if ( (byte_4C45304 & 1) == 0 )
  {
    sub_1C37058(&bool_TypeInfo);
    sub_1C37058(&iTween_EaseType_TypeInfo);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C37058(&System_Collections_Hashtable_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&float_TypeInfo);
    sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    sub_1C37058(&StringLiteral_18754/*"easetype"*/);
    sub_1C37058(&StringLiteral_4617/*"CompClose"*/);
    sub_1C37058(&StringLiteral_24071/*"time"*/);
    sub_1C37058(&StringLiteral_22432/*"oncompletetarget"*/);
    sub_1C37058(&StringLiteral_22740/*"position"*/);
    sub_1C37058(&StringLiteral_20930/*"isLocal"*/);
    sub_1C37058(&StringLiteral_22430/*"oncomplete"*/);
    sub_1C37058(&StringLiteral_23195/*"scale"*/);
    sub_1C37058(&iTween_TypeInfo);
    byte_4C45304 = 1;
  }
  this->fields.call_closeComp = call;
  p_call_closeComp = &this->fields.call_closeComp;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.call_closeComp, (int32_t)call, (int32_t)method, v3);
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_30;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0) )
  {
    v8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__Stop_63309560(v8, 0);
    v9 = (System_Collections_Hashtable_o *)sub_1C372A4(System_Collections_Hashtable_TypeInfo);
    System_Collections_Hashtable___ctor_64925884(v9, 0);
    LOBYTE(v61) = 1;
    gameObject = j_il2cpp_value_box_0(bool_TypeInfo, &v61, v10, v11, v12, v13, v14, v15);
    if ( v9 )
    {
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v9->klass->vtable._22_Add.methodPtr)(
        v9,
        StringLiteral_20930/*"isLocal"*/,
        gameObject,
        v9->klass->vtable._22_Add.method);
      v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, const MethodInfo *))v9->klass->vtable._22_Add.methodPtr)(
        v9,
        StringLiteral_22432/*"oncompletetarget"*/,
        v16,
        v9->klass->vtable._22_Add.method);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v9->klass->vtable._22_Add.methodPtr)(
        v9,
        StringLiteral_22430/*"oncomplete"*/,
        StringLiteral_4617/*"CompClose"*/,
        v9->klass->vtable._22_Add.method);
      *(float *)v62 = this->fields.movetime;
      v23 = j_il2cpp_value_box_0(float_TypeInfo, v62, v17, v18, v19, v20, v21, v22);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v9->klass->vtable._22_Add.methodPtr)(
        v9,
        StringLiteral_24071/*"time"*/,
        v23,
        v9->klass->vtable._22_Add.method);
      type = this->fields.type;
      if ( type != 2 )
      {
        if ( type == 1 )
        {
          *(int32x2_t *)v62 = vdup_n_s32(0x3F333333u);
          *(_DWORD *)&v62[8] = 0;
          v52 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, v62, v24, v25, v26, v27, v28, v29);
          ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v9->klass->vtable._22_Add.methodPtr)(
            v9,
            StringLiteral_23195/*"scale"*/,
            v52,
            v9->klass->vtable._22_Add.method);
          v61 = 26;
          v59 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v61, v53, v54, v55, v56, v57, v58);
          ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v9->klass->vtable._22_Add.methodPtr)(
            v9,
            StringLiteral_18754/*"easetype"*/,
            v59,
            v9->klass->vtable._22_Add.method);
          v60 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          if ( !iTween_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
          iTween__ScaleTo_63204748(v60, v9, 0);
        }
        else if ( !type )
        {
          v31 = *(_QWORD *)&this->fields.tmp_pos.fields.y;
          *(float *)v62 = this->fields.tmp_pos.fields.x + 80.0;
          *(_QWORD *)&v62[4] = v31;
          v32 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, v62, v24, v25, v26, v27, v28, v29);
          ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v9->klass->vtable._22_Add.methodPtr)(
            v9,
            StringLiteral_22740/*"position"*/,
            v32,
            v9->klass->vtable._22_Add.method);
          v61 = 26;
          v39 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v61, v33, v34, v35, v36, v37, v38);
          ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v9->klass->vtable._22_Add.methodPtr)(
            v9,
            StringLiteral_18754/*"easetype"*/,
            v39,
            v9->klass->vtable._22_Add.method);
          v40 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          if ( !iTween_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
          iTween__MoveTo_63199220(v40, v9, 0);
        }
        goto LABEL_28;
      }
      *(int32x2_t *)v62 = vdup_n_s32(0x3F666666u);
      *(_DWORD *)&v62[8] = 0;
      v41 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, v62, v24, v25, v26, v27, v28, v29);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v9->klass->vtable._22_Add.methodPtr)(
        v9,
        StringLiteral_23195/*"scale"*/,
        v41,
        v9->klass->vtable._22_Add.method);
      v61 = 26;
      v48 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v61, v42, v43, v44, v45, v46, v47);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v9->klass->vtable._22_Add.methodPtr)(
        v9,
        StringLiteral_18754/*"easetype"*/,
        v48,
        v9->klass->vtable._22_Add.method);
      v49 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !iTween_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
      iTween__ScaleTo_63204748(v49, v9, 0);
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( gameObject )
      {
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)gameObject,
                             (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
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
          v51 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          gameObject = (__int64)TweenAlpha__Begin(v51, this->fields.movetime, 0.0, 0);
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
    sub_1C372B4(gameObject);
  }
  if ( *p_call_closeComp )
    ((void (__fastcall *)(intptr_t, intptr_t))(*p_call_closeComp)->fields.invoke_impl)(
      (*p_call_closeComp)->fields.method_code,
      (*p_call_closeComp)->fields.method);
}


void BattleWindowComponent__CompClose(BattleWindowComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  struct BattleWindowComponent_EndCall_o *call_closeComp; // x8

  this->fields.state = 2;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C372B4(0);
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
  UnityEngine_Object_o *v7; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v9; // x0

  if ( (byte_4C45302 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C45302 = 1;
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
    sub_1C372B4(v6);
  v7 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(transform, v6, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = (System_String_o *)UnityEngine_Object__op_Equality(v7, 0, 0);
  if ( ((unsigned __int8)v6 & 1) == 0 )
  {
    if ( v7 )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v7, 0);
      ((void (__fastcall *)(BattleWindowComponent_o *, UnityEngine_GameObject_o *, const MethodInfo *))this->klass->vtable._5_set_closeBtnObject.methodPtr)(
        this,
        gameObject,
        this->klass->vtable._5_set_closeBtnObject.method);
LABEL_14:
      v9 = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(BattleWindowComponent_o *, const MethodInfo *))this->klass->vtable._4_get_closeBtnObject.methodPtr)(
                                         this,
                                         this->klass->vtable._4_get_closeBtnObject.method);
      AndroidBackKeyManager__AddBackBtn(v9, 0);
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
  System_Collections_Hashtable_o *v8; // x20
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  __int64 v12; // x5
  __int64 v13; // x6
  __int64 v14; // x7
  UnityEngine_GameObject_o *v15; // x0
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  __int64 v19; // x5
  __int64 v20; // x6
  __int64 v21; // x7
  __int64 v22; // x0
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  __int64 v26; // x5
  __int64 v27; // x6
  __int64 v28; // x7
  int32_t type; // w8
  __int64 v30; // d1
  __int64 v31; // x0
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  __int64 v35; // x5
  __int64 v36; // x6
  __int64 v37; // x7
  __int64 v38; // x0
  UnityEngine_GameObject_o *v39; // x21
  UnityEngine_Transform_o *v40; // x21
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  __int64 v44; // x5
  __int64 v45; // x6
  __int64 v46; // x7
  __int64 v47; // x0
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  __int64 v51; // x5
  __int64 v52; // x6
  __int64 v53; // x7
  __int64 v54; // x0
  UnityEngine_GameObject_o *v55; // x21
  Il2CppObject *Component_object; // x20
  UnityEngine_GameObject_o *v57; // x0
  UnityEngine_Transform_o *v58; // x21
  __int64 v59; // x2
  __int64 v60; // x3
  __int64 v61; // x4
  __int64 v62; // x5
  __int64 v63; // x6
  __int64 v64; // x7
  __int64 v65; // x0
  __int64 v66; // x2
  __int64 v67; // x3
  __int64 v68; // x4
  __int64 v69; // x5
  __int64 v70; // x6
  __int64 v71; // x7
  __int64 v72; // x0
  UnityEngine_GameObject_o *v73; // x21
  _BYTE v74[12]; // [xsp+0h] [xbp-60h] BYREF
  int v75; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4C45303 & 1) == 0 )
  {
    sub_1C37058(&bool_TypeInfo);
    sub_1C37058(&iTween_EaseType_TypeInfo);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C37058(&System_Collections_Hashtable_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&float_TypeInfo);
    sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    sub_1C37058(&StringLiteral_18754/*"easetype"*/);
    sub_1C37058(&StringLiteral_24071/*"time"*/);
    sub_1C37058(&StringLiteral_22432/*"oncompletetarget"*/);
    sub_1C37058(&StringLiteral_22740/*"position"*/);
    sub_1C37058(&StringLiteral_20930/*"isLocal"*/);
    sub_1C37058(&StringLiteral_22430/*"oncomplete"*/);
    sub_1C37058(&StringLiteral_4618/*"CompOpen"*/);
    sub_1C37058(&StringLiteral_23195/*"scale"*/);
    sub_1C37058(&iTween_TypeInfo);
    byte_4C45303 = 1;
  }
  this->fields.call_openComp = call;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.call_openComp, (int32_t)call, (int32_t)method, v3);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_63309560(gameObject, 0);
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
  v8 = (System_Collections_Hashtable_o *)sub_1C372A4(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_64925884(v8, 0);
  LOBYTE(v75) = 1;
  transform = j_il2cpp_value_box_0(bool_TypeInfo, &v75, v9, v10, v11, v12, v13, v14);
  if ( !v8 )
    goto LABEL_34;
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v8->klass->vtable._22_Add.methodPtr)(
    v8,
    StringLiteral_20930/*"isLocal"*/,
    transform,
    v8->klass->vtable._22_Add.method);
  v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, const MethodInfo *))v8->klass->vtable._22_Add.methodPtr)(
    v8,
    StringLiteral_22432/*"oncompletetarget"*/,
    v15,
    v8->klass->vtable._22_Add.method);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v8->klass->vtable._22_Add.methodPtr)(
    v8,
    StringLiteral_22430/*"oncomplete"*/,
    StringLiteral_4618/*"CompOpen"*/,
    v8->klass->vtable._22_Add.method);
  *(float *)v74 = this->fields.movetime;
  v22 = j_il2cpp_value_box_0(float_TypeInfo, v74, v16, v17, v18, v19, v20, v21);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v8->klass->vtable._22_Add.methodPtr)(
    v8,
    StringLiteral_24071/*"time"*/,
    v22,
    v8->klass->vtable._22_Add.method);
  type = this->fields.type;
  if ( type != 2 )
  {
    if ( type != 1 )
    {
      if ( !type )
      {
        v30 = *(_QWORD *)&this->fields.tmp_pos.fields.y;
        *(float *)v74 = this->fields.tmp_pos.fields.x + 80.0;
        *(_QWORD *)&v74[4] = v30;
        v31 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, v74, v23, v24, v25, v26, v27, v28);
        ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v8->klass->vtable._22_Add.methodPtr)(
          v8,
          StringLiteral_22740/*"position"*/,
          v31,
          v8->klass->vtable._22_Add.method);
        v75 = 27;
        v38 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v75, v32, v33, v34, v35, v36, v37);
        ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v8->klass->vtable._22_Add.methodPtr)(
          v8,
          StringLiteral_18754/*"easetype"*/,
          v38,
          v8->klass->vtable._22_Add.method);
        v39 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !iTween_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
        iTween__MoveFrom_63200692(v39, v8, 0);
      }
      goto LABEL_33;
    }
    transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    v58 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4C3C926 )
    {
      transform = sub_1C37058(&UnityEngine_Vector3_TypeInfo);
      byte_4C3C926 = 1;
    }
    if ( v58 )
    {
      UnityEngine_Transform__set_localScale(v58, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
      *(int32x2_t *)v74 = vdup_n_s32(0x3F333333u);
      *(_DWORD *)&v74[8] = 0;
      v65 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, v74, v59, v60, v61, v62, v63, v64);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v8->klass->vtable._22_Add.methodPtr)(
        v8,
        StringLiteral_23195/*"scale"*/,
        v65,
        v8->klass->vtable._22_Add.method);
      v75 = 27;
      v72 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v75, v66, v67, v68, v69, v70, v71);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v8->klass->vtable._22_Add.methodPtr)(
        v8,
        StringLiteral_18754/*"easetype"*/,
        v72,
        v8->klass->vtable._22_Add.method);
      v73 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !iTween_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
      iTween__ScaleFrom_63206200(v73, v8, 0);
      goto LABEL_33;
    }
LABEL_34:
    sub_1C372B4(transform);
  }
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  v40 = (UnityEngine_Transform_o *)transform;
  if ( !byte_4C3C926 )
  {
    transform = sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C926 = 1;
  }
  if ( !v40 )
    goto LABEL_34;
  UnityEngine_Transform__set_localScale(v40, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  *(int32x2_t *)v74 = vdup_n_s32(0x3F666666u);
  *(_DWORD *)&v74[8] = 0;
  v47 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, v74, v41, v42, v43, v44, v45, v46);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v8->klass->vtable._22_Add.methodPtr)(
    v8,
    StringLiteral_23195/*"scale"*/,
    v47,
    v8->klass->vtable._22_Add.method);
  v75 = 27;
  v54 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v75, v48, v49, v50, v51, v52, v53);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v8->klass->vtable._22_Add.methodPtr)(
    v8,
    StringLiteral_18754/*"easetype"*/,
    v54,
    v8->klass->vtable._22_Add.method);
  v55 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__ScaleFrom_63206200(v55, v8, 0);
  transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_34;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)transform,
                       (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
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
      v57 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      transform = (__int64)TweenAlpha__Begin(v57, this->fields.movetime, 1.0, 0);
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
  if ( (byte_4C45301 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C45301 = 1;
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

  this->fields.state = 2;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C372B4(0);
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

  this->fields.call_openComp = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.call_openComp, 0, ocflg, method);
  this->fields.call_closeComp = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.call_closeComp, 0, v9, v10);
  this->fields.type = type;
  this->fields.movetime = time;
  if ( !ocflg )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      sub_1C372B4(0);
    UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  }
}


void BattleWindowComponent__setInitialPos(BattleWindowComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0)) == 0 )
  {
    sub_1C372B4(gameObject);
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

  x = this->fields.tmp_pos.fields.x;
  v3.n64_u64[0] = *(unsigned __int64 *)&this->fields.tmp_pos.fields.y;
  if ( !byte_4C3C921 )
  {
    sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C921 = 1;
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
      sub_1C372B4(gameObject);
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
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields._closeBtnObject, (int32_t)value, (int32_t)method, v3);
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
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C37118(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C372D0(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C37180(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A7D890;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A7D850;
}


System_IAsyncResult_o *BattleWindowComponent_EndCall__BeginInvoke(
        BattleWindowComponent_EndCall_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return (System_IAsyncResult_o *)sub_1C3700C(this, &v5, callback, object);
}


void BattleWindowComponent_EndCall__EndInvoke(
        BattleWindowComponent_EndCall_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C37010(result, 0, method);
}


void BattleWindowComponent_EndCall__Invoke(BattleWindowComponent_EndCall_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}