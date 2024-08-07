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
  int32_t v3; // w3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
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
  struct BattleWindowComponent_EndCall_o **p_call_closeComp; // x21
  __int64 gameObject; // x0
  __int64 v23; // x1
  UnityEngine_GameObject_o *v24; // x20
  System_Collections_Hashtable_o *v25; // x20
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  UnityEngine_GameObject_o *v29; // x0
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  __int64 v33; // x0
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  int32_t type; // w8
  __int64 v38; // d1
  __int64 v39; // x0
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  __int64 v43; // x0
  UnityEngine_GameObject_o *v44; // x21
  __int64 v45; // x0
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  __int64 v49; // x0
  UnityEngine_GameObject_o *v50; // x21
  Il2CppObject *Component_object; // x20
  UnityEngine_GameObject_o *v52; // x0
  __int64 v53; // x0
  __int64 v54; // x2
  __int64 v55; // x3
  __int64 v56; // x4
  __int64 v57; // x0
  UnityEngine_GameObject_o *v58; // x21
  int v59; // [xsp+Ch] [xbp-34h] BYREF
  _BYTE v60[12]; // [xsp+10h] [xbp-30h] BYREF

  if ( (byte_4A00A21 & 1) == 0 )
  {
    sub_1B64A00(&bool_TypeInfo, call);
    sub_1B64A00(&iTween_EaseType_TypeInfo, v6);
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v7);
    sub_1B64A00(&System_Collections_Hashtable_TypeInfo, v8);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v9);
    sub_1B64A00(&float_TypeInfo, v10);
    sub_1B64A00(&UnityEngine_Vector3_TypeInfo, v11);
    sub_1B64A00(&StringLiteral_18685/*"easetype"*/, v12);
    sub_1B64A00(&StringLiteral_4625/*"CompClose"*/, v13);
    sub_1B64A00(&StringLiteral_23834/*"time"*/, v14);
    sub_1B64A00(&StringLiteral_22190/*"oncompletetarget"*/, v15);
    sub_1B64A00(&StringLiteral_22485/*"position"*/, v16);
    sub_1B64A00(&StringLiteral_20719/*"isLocal"*/, v17);
    sub_1B64A00(&StringLiteral_22188/*"oncomplete"*/, v18);
    sub_1B64A00(&StringLiteral_22921/*"scale"*/, v19);
    sub_1B64A00(&iTween_TypeInfo, v20);
    byte_4A00A21 = 1;
  }
  this->fields.call_closeComp = call;
  p_call_closeComp = &this->fields.call_closeComp;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.call_closeComp, (int32_t)call, (int32_t)method, v3);
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_30;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0LL) )
  {
    v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__Stop_60033808(v24, 0LL);
    v25 = (System_Collections_Hashtable_o *)sub_1B64C4C(System_Collections_Hashtable_TypeInfo);
    System_Collections_Hashtable___ctor_61964560(v25, 0LL);
    LOBYTE(v59) = 1;
    gameObject = j_il2cpp_value_box_0(bool_TypeInfo, &v59, v26, v27, v28);
    if ( v25 )
    {
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v25->klass->vtable._23_Add.method)(
        v25,
        StringLiteral_20719/*"isLocal"*/,
        gameObject,
        v25->klass->vtable._24_Clear.methodPtr);
      v29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v25->klass->vtable._23_Add.method)(
        v25,
        StringLiteral_22190/*"oncompletetarget"*/,
        v29,
        v25->klass->vtable._24_Clear.methodPtr);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v25->klass->vtable._23_Add.method)(
        v25,
        StringLiteral_22188/*"oncomplete"*/,
        StringLiteral_4625/*"CompClose"*/,
        v25->klass->vtable._24_Clear.methodPtr);
      *(float *)v60 = this->fields.movetime;
      v33 = j_il2cpp_value_box_0(float_TypeInfo, v60, v30, v31, v32);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v25->klass->vtable._23_Add.method)(
        v25,
        StringLiteral_23834/*"time"*/,
        v33,
        v25->klass->vtable._24_Clear.methodPtr);
      type = this->fields.type;
      if ( type != 2 )
      {
        if ( type == 1 )
        {
          *(int32x2_t *)v60 = vdup_n_s32(0x3F333333u);
          *(_DWORD *)&v60[8] = 0;
          v53 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, v60, v34, v35, v36);
          ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v25->klass->vtable._23_Add.method)(
            v25,
            StringLiteral_22921/*"scale"*/,
            v53,
            v25->klass->vtable._24_Clear.methodPtr);
          v59 = 26;
          v57 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v59, v54, v55, v56);
          ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v25->klass->vtable._23_Add.method)(
            v25,
            StringLiteral_18685/*"easetype"*/,
            v57,
            v25->klass->vtable._24_Clear.methodPtr);
          v58 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          if ( !iTween_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
          iTween__ScaleTo_59928996(v58, v25, 0LL);
        }
        else if ( !type )
        {
          v38 = *(_QWORD *)&this->fields.tmp_pos.fields.y;
          *(float *)v60 = this->fields.tmp_pos.fields.x + 80.0;
          *(_QWORD *)&v60[4] = v38;
          v39 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, v60, v34, v35, v36);
          ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v25->klass->vtable._23_Add.method)(
            v25,
            StringLiteral_22485/*"position"*/,
            v39,
            v25->klass->vtable._24_Clear.methodPtr);
          v59 = 26;
          v43 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v59, v40, v41, v42);
          ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v25->klass->vtable._23_Add.method)(
            v25,
            StringLiteral_18685/*"easetype"*/,
            v43,
            v25->klass->vtable._24_Clear.methodPtr);
          v44 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          if ( !iTween_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
          iTween__MoveTo_59923468(v44, v25, 0LL);
        }
        goto LABEL_28;
      }
      *(int32x2_t *)v60 = vdup_n_s32(0x3F666666u);
      *(_DWORD *)&v60[8] = 0;
      v45 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, v60, v34, v35, v36);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v25->klass->vtable._23_Add.method)(
        v25,
        StringLiteral_22921/*"scale"*/,
        v45,
        v25->klass->vtable._24_Clear.methodPtr);
      v59 = 26;
      v49 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v59, v46, v47, v48);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v25->klass->vtable._23_Add.method)(
        v25,
        StringLiteral_18685/*"easetype"*/,
        v49,
        v25->klass->vtable._24_Clear.methodPtr);
      v50 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !iTween_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
      iTween__ScaleTo_59928996(v50, v25, 0LL);
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( gameObject )
      {
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)gameObject,
                             (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        gameObject = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
        if ( (gameObject & 1) == 0 )
          goto LABEL_28;
        if ( Component_object )
        {
          ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer, float))Component_object->klass->vtable[8].method)(
            Component_object,
            Component_object->klass->vtable[9].methodPtr,
            1.0);
          v52 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          gameObject = (__int64)TweenAlpha__Begin(v52, this->fields.movetime, 0.0, 0LL);
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
    sub_1B64C5C(gameObject, v23);
  }
  if ( *p_call_closeComp )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))(*p_call_closeComp)->fields.m_target)(
      (*p_call_closeComp)->fields.original_method_info,
      *(_QWORD *)&(*p_call_closeComp)->fields.extra_arg);
}


void __fastcall BattleWindowComponent__CompClose(BattleWindowComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  struct BattleWindowComponent_EndCall_o *call_closeComp; // x8

  this->fields.state = 2;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B64C5C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  call_closeComp = this->fields.call_closeComp;
  if ( call_closeComp )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))call_closeComp->fields.m_target)(
      call_closeComp->fields.original_method_info,
      *(_QWORD *)&call_closeComp->fields.extra_arg);
}


void __fastcall BattleWindowComponent__CompOpen(BattleWindowComponent_o *this, const MethodInfo *method)
{
  struct BattleWindowComponent_EndCall_o *call_openComp; // x8

  call_openComp = this->fields.call_openComp;
  this->fields.state = 3;
  if ( call_openComp )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))call_openComp->fields.m_target)(
      call_openComp->fields.original_method_info,
      *(_QWORD *)&call_openComp->fields.extra_arg);
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
  UnityEngine_Object_o *v3; // x20
  System_String_o *v4; // x0
  UnityEngine_Transform_o *transform; // x20
  System_String_o *v6; // x0
  __int64 v7; // x1
  UnityEngine_Object_o *v8; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v10; // x0

  if ( (byte_4A00A1F & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_Object_TypeInfo, method);
    byte_4A00A1F = 1;
  }
  v3 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(BattleWindowComponent_o *, Il2CppMethodPointer))this->klass->vtable._4_get_closeBtnObject.method)(
                                 this,
                                 this->klass->vtable._5_set_closeBtnObject.methodPtr);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v3, 0LL, 0LL) )
    goto LABEL_14;
  v4 = (System_String_o *)((__int64 (__fastcall *)(BattleWindowComponent_o *, Il2CppMethodPointer))this->klass->vtable._6_get_closeBtnPath.method)(
                            this,
                            this->klass->vtable._7_setInitialPos.methodPtr);
  if ( System_String__IsNullOrEmpty(v4, 0LL) )
    return;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  v6 = (System_String_o *)((__int64 (__fastcall *)(BattleWindowComponent_o *, Il2CppMethodPointer))this->klass->vtable._6_get_closeBtnPath.method)(
                            this,
                            this->klass->vtable._7_setInitialPos.methodPtr);
  if ( !transform )
LABEL_15:
    sub_1B64C5C(v6, v7);
  v8 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(transform, v6, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = (System_String_o *)UnityEngine_Object__op_Equality(v8, 0LL, 0LL);
  if ( ((unsigned __int8)v6 & 1) == 0 )
  {
    if ( v8 )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v8, 0LL);
      ((void (__fastcall *)(BattleWindowComponent_o *, UnityEngine_GameObject_o *, Il2CppMethodPointer))this->klass->vtable._5_set_closeBtnObject.method)(
        this,
        gameObject,
        this->klass->vtable._6_get_closeBtnPath.methodPtr);
LABEL_14:
      v10 = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(BattleWindowComponent_o *, Il2CppMethodPointer))this->klass->vtable._4_get_closeBtnObject.method)(
                                          this,
                                          this->klass->vtable._5_set_closeBtnObject.methodPtr);
      AndroidBackKeyManager__AddBackBtn(v10, 0LL);
      return;
    }
    goto LABEL_15;
  }
}


void __fastcall BattleWindowComponent__Open(
        BattleWindowComponent_o *this,
        BattleWindowComponent_EndCall_o *call,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
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
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 transform; // x0
  __int64 v23; // x1
  System_Collections_Hashtable_o *v24; // x20
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  UnityEngine_GameObject_o *v28; // x0
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  __int64 v32; // x0
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  int32_t type; // w8
  __int64 v37; // d1
  __int64 v38; // x0
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  __int64 v42; // x0
  UnityEngine_GameObject_o *v43; // x21
  UnityEngine_Transform_o *v44; // x21
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  __int64 v48; // x0
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  __int64 v52; // x0
  UnityEngine_GameObject_o *v53; // x21
  Il2CppObject *Component_object; // x20
  UnityEngine_GameObject_o *v55; // x0
  UnityEngine_Transform_o *v56; // x21
  __int64 v57; // x2
  __int64 v58; // x3
  __int64 v59; // x4
  __int64 v60; // x0
  __int64 v61; // x2
  __int64 v62; // x3
  __int64 v63; // x4
  __int64 v64; // x0
  UnityEngine_GameObject_o *v65; // x21
  _BYTE v66[12]; // [xsp+0h] [xbp-60h] BYREF
  int v67; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4A00A20 & 1) == 0 )
  {
    sub_1B64A00(&bool_TypeInfo, call);
    sub_1B64A00(&iTween_EaseType_TypeInfo, v6);
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v7);
    sub_1B64A00(&System_Collections_Hashtable_TypeInfo, v8);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v9);
    sub_1B64A00(&float_TypeInfo, v10);
    sub_1B64A00(&UnityEngine_Vector3_TypeInfo, v11);
    sub_1B64A00(&StringLiteral_18685/*"easetype"*/, v12);
    sub_1B64A00(&StringLiteral_23834/*"time"*/, v13);
    sub_1B64A00(&StringLiteral_22190/*"oncompletetarget"*/, v14);
    sub_1B64A00(&StringLiteral_22485/*"position"*/, v15);
    sub_1B64A00(&StringLiteral_20719/*"isLocal"*/, v16);
    sub_1B64A00(&StringLiteral_22188/*"oncomplete"*/, v17);
    sub_1B64A00(&StringLiteral_4626/*"CompOpen"*/, v18);
    sub_1B64A00(&StringLiteral_22921/*"scale"*/, v19);
    sub_1B64A00(&iTween_TypeInfo, v20);
    byte_4A00A20 = 1;
  }
  this->fields.call_openComp = call;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.call_openComp, (int32_t)call, (int32_t)method, v3);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_60033808(gameObject, 0LL);
  transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_34;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0LL);
  transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_34;
  transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_34;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, this->fields.tmp_pos, 0LL);
  v24 = (System_Collections_Hashtable_o *)sub_1B64C4C(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_61964560(v24, 0LL);
  LOBYTE(v67) = 1;
  transform = j_il2cpp_value_box_0(bool_TypeInfo, &v67, v25, v26, v27);
  if ( !v24 )
    goto LABEL_34;
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v24->klass->vtable._23_Add.method)(
    v24,
    StringLiteral_20719/*"isLocal"*/,
    transform,
    v24->klass->vtable._24_Clear.methodPtr);
  v28 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v24->klass->vtable._23_Add.method)(
    v24,
    StringLiteral_22190/*"oncompletetarget"*/,
    v28,
    v24->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v24->klass->vtable._23_Add.method)(
    v24,
    StringLiteral_22188/*"oncomplete"*/,
    StringLiteral_4626/*"CompOpen"*/,
    v24->klass->vtable._24_Clear.methodPtr);
  *(float *)v66 = this->fields.movetime;
  v32 = j_il2cpp_value_box_0(float_TypeInfo, v66, v29, v30, v31);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v24->klass->vtable._23_Add.method)(
    v24,
    StringLiteral_23834/*"time"*/,
    v32,
    v24->klass->vtable._24_Clear.methodPtr);
  type = this->fields.type;
  if ( type != 2 )
  {
    if ( type != 1 )
    {
      if ( !type )
      {
        v37 = *(_QWORD *)&this->fields.tmp_pos.fields.y;
        *(float *)v66 = this->fields.tmp_pos.fields.x + 80.0;
        *(_QWORD *)&v66[4] = v37;
        v38 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, v66, v33, v34, v35);
        ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v24->klass->vtable._23_Add.method)(
          v24,
          StringLiteral_22485/*"position"*/,
          v38,
          v24->klass->vtable._24_Clear.methodPtr);
        v67 = 27;
        v42 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v67, v39, v40, v41);
        ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v24->klass->vtable._23_Add.method)(
          v24,
          StringLiteral_18685/*"easetype"*/,
          v42,
          v24->klass->vtable._24_Clear.methodPtr);
        v43 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !iTween_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
        iTween__MoveFrom_59924940(v43, v24, 0LL);
      }
      goto LABEL_33;
    }
    transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    v56 = (UnityEngine_Transform_o *)transform;
    if ( !byte_49F9826 )
    {
      transform = sub_1B64A00(&UnityEngine_Vector3_TypeInfo, v23);
      byte_49F9826 = 1;
    }
    if ( v56 )
    {
      UnityEngine_Transform__set_localScale(v56, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
      *(int32x2_t *)v66 = vdup_n_s32(0x3F333333u);
      *(_DWORD *)&v66[8] = 0;
      v60 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, v66, v57, v58, v59);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v24->klass->vtable._23_Add.method)(
        v24,
        StringLiteral_22921/*"scale"*/,
        v60,
        v24->klass->vtable._24_Clear.methodPtr);
      v67 = 27;
      v64 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v67, v61, v62, v63);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v24->klass->vtable._23_Add.method)(
        v24,
        StringLiteral_18685/*"easetype"*/,
        v64,
        v24->klass->vtable._24_Clear.methodPtr);
      v65 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !iTween_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
      iTween__ScaleFrom_59930448(v65, v24, 0LL);
      goto LABEL_33;
    }
LABEL_34:
    sub_1B64C5C(transform, v23);
  }
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  v44 = (UnityEngine_Transform_o *)transform;
  if ( !byte_49F9826 )
  {
    transform = sub_1B64A00(&UnityEngine_Vector3_TypeInfo, v23);
    byte_49F9826 = 1;
  }
  if ( !v44 )
    goto LABEL_34;
  UnityEngine_Transform__set_localScale(v44, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  *(int32x2_t *)v66 = vdup_n_s32(0x3F666666u);
  *(_DWORD *)&v66[8] = 0;
  v48 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, v66, v45, v46, v47);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v24->klass->vtable._23_Add.method)(
    v24,
    StringLiteral_22921/*"scale"*/,
    v48,
    v24->klass->vtable._24_Clear.methodPtr);
  v67 = 27;
  v52 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v67, v49, v50, v51);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v24->klass->vtable._23_Add.method)(
    v24,
    StringLiteral_18685/*"easetype"*/,
    v52,
    v24->klass->vtable._24_Clear.methodPtr);
  v53 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__ScaleFrom_59930448(v53, v24, 0LL);
  transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_34;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)transform,
                       (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( (transform & 1) != 0 )
  {
    if ( Component_object )
    {
      ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer, float))Component_object->klass->vtable[8].method)(
        Component_object,
        Component_object->klass->vtable[9].methodPtr,
        0.01);
      v55 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      transform = (__int64)TweenAlpha__Begin(v55, this->fields.movetime, 1.0, 0LL);
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
  if ( (byte_4A00A1E & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_1/*""*/, method);
    byte_4A00A1E = 1;
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
    sub_1B64C5C(0LL, v3);
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


void __fastcall BattleWindowComponent__setInitDataWithoutInitPos(
        BattleWindowComponent_o *this,
        int32_t type,
        float time,
        bool ocflg,
        const MethodInfo *method)
{
  char v9; // w2
  int32_t v10; // w3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v12; // x1

  this->fields.call_openComp = 0LL;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.call_openComp, 0, ocflg, (int32_t)method);
  this->fields.call_closeComp = 0LL;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.call_closeComp, 0, v9, v10);
  this->fields.type = type;
  this->fields.movetime = time;
  if ( !ocflg )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      sub_1B64C5C(0LL, v12);
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
    sub_1B64C5C(gameObject, v4);
  }
  this->fields.tmp_pos = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0LL);
}


void __fastcall BattleWindowComponent__setInitialPosIfDefaultIsZero(
        BattleWindowComponent_o *this,
        const MethodInfo *method)
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
  if ( !byte_49F9821 )
  {
    sub_1B64A00(&UnityEngine_Vector3_TypeInfo, method);
    byte_49F9821 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v6.n64_u64[0] = vsub_f32(v3, *(float32x2_t *)&static_fields->zeroVector.fields.y).n64_u64[0];
  v7 = vmul_f32(v6, v6).n64_u64[0];
  if ( (float)(*((float *)&v7 + 1)
             + (float)((float)((float)(x - static_fields->zeroVector.fields.x)
                             * (float)(x - static_fields->zeroVector.fields.x))
                     + *(float *)&v7)) < 1.0e-10 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject
      || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL)) == 0LL )
    {
      sub_1B64C5C(gameObject, v9);
    }
    this->fields.tmp_pos = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0LL);
  }
}


void __fastcall BattleWindowComponent__set_closeBtnObject(
        BattleWindowComponent_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._closeBtnObject = value;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields._closeBtnObject, (int32_t)value, (int32_t)method, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleWindowComponent_EndCall___ctor(
        BattleWindowComponent_EndCall_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64AC0(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64C78(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B64B28(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19AE4BC;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19AE47C;
}


System_IAsyncResult_o *__fastcall BattleWindowComponent_EndCall__BeginInvoke(
        BattleWindowComponent_EndCall_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_1B649B4(this, &v5, callback, object);
}


void __fastcall BattleWindowComponent_EndCall__EndInvoke(
        BattleWindowComponent_EndCall_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B649B8(result, 0LL, method);
}


void __fastcall BattleWindowComponent_EndCall__Invoke(BattleWindowComponent_EndCall_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    *(_QWORD *)&this->fields.extra_arg);
}