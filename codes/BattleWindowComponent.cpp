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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
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
  struct BattleWindowComponent_EndCall_o **p_call_closeComp; // x21
  __int64 gameObject; // x0
  __int64 v27; // x1
  UnityEngine_GameObject_o *v28; // x20
  System_Collections_Hashtable_o *v29; // x20
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  UnityEngine_GameObject_o *v33; // x0
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  __int64 v37; // x0
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  int32_t type; // w8
  __int64 v42; // d1
  __int64 v43; // x0
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  __int64 v47; // x0
  UnityEngine_GameObject_o *v48; // x21
  __int64 v49; // x0
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  __int64 v53; // x0
  UnityEngine_GameObject_o *v54; // x21
  Il2CppObject *Component_object; // x20
  UnityEngine_GameObject_o *v56; // x0
  __int64 v57; // x0
  __int64 v58; // x2
  __int64 v59; // x3
  __int64 v60; // x4
  __int64 v61; // x0
  UnityEngine_GameObject_o *v62; // x21
  int v63; // [xsp+Ch] [xbp-34h] BYREF
  _BYTE v64[12]; // [xsp+10h] [xbp-30h] BYREF

  if ( (byte_4BFF8A9 & 1) == 0 )
  {
    sub_1C2E12C(&bool_TypeInfo, call);
    sub_1C2E12C(&iTween_EaseType_TypeInfo, v10);
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v11);
    sub_1C2E12C(&System_Collections_Hashtable_TypeInfo, v12);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v13);
    sub_1C2E12C(&float_TypeInfo, v14);
    sub_1C2E12C(&UnityEngine_Vector3_TypeInfo, v15);
    sub_1C2E12C(&StringLiteral_19088/*"easetype"*/, v16);
    sub_1C2E12C(&StringLiteral_4729/*"CompClose"*/, v17);
    sub_1C2E12C(&StringLiteral_24383/*"time"*/, v18);
    sub_1C2E12C(&StringLiteral_22694/*"oncompletetarget"*/, v19);
    sub_1C2E12C(&StringLiteral_22998/*"position"*/, v20);
    sub_1C2E12C(&StringLiteral_21185/*"isLocal"*/, v21);
    sub_1C2E12C(&StringLiteral_22692/*"oncomplete"*/, v22);
    sub_1C2E12C(&StringLiteral_23456/*"scale"*/, v23);
    sub_1C2E12C(&iTween_TypeInfo, v24);
    byte_4BFF8A9 = 1;
  }
  this->fields.call_closeComp = call;
  p_call_closeComp = &this->fields.call_closeComp;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.call_closeComp,
    (int64_t)call,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_30;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0LL) )
  {
    v28 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__Stop_61883512(v28, 0LL);
    v29 = (System_Collections_Hashtable_o *)sub_1C2E378(System_Collections_Hashtable_TypeInfo);
    System_Collections_Hashtable___ctor_63815344(v29, 0LL);
    LOBYTE(v63) = 1;
    gameObject = j_il2cpp_value_box_0(bool_TypeInfo, &v63, v30, v31, v32);
    if ( v29 )
    {
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v29->klass->vtable._23_Add.method)(
        v29,
        StringLiteral_21185/*"isLocal"*/,
        gameObject,
        v29->klass->vtable._24_Clear.methodPtr);
      v33 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v29->klass->vtable._23_Add.method)(
        v29,
        StringLiteral_22694/*"oncompletetarget"*/,
        v33,
        v29->klass->vtable._24_Clear.methodPtr);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v29->klass->vtable._23_Add.method)(
        v29,
        StringLiteral_22692/*"oncomplete"*/,
        StringLiteral_4729/*"CompClose"*/,
        v29->klass->vtable._24_Clear.methodPtr);
      *(float *)v64 = this->fields.movetime;
      v37 = j_il2cpp_value_box_0(float_TypeInfo, v64, v34, v35, v36);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v29->klass->vtable._23_Add.method)(
        v29,
        StringLiteral_24383/*"time"*/,
        v37,
        v29->klass->vtable._24_Clear.methodPtr);
      type = this->fields.type;
      if ( type != 2 )
      {
        if ( type == 1 )
        {
          *(int32x2_t *)v64 = vdup_n_s32(0x3F333333u);
          *(_DWORD *)&v64[8] = 0;
          v57 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, v64, v38, v39, v40);
          ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v29->klass->vtable._23_Add.method)(
            v29,
            StringLiteral_23456/*"scale"*/,
            v57,
            v29->klass->vtable._24_Clear.methodPtr);
          v63 = 26;
          v61 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v63, v58, v59, v60);
          ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v29->klass->vtable._23_Add.method)(
            v29,
            StringLiteral_19088/*"easetype"*/,
            v61,
            v29->klass->vtable._24_Clear.methodPtr);
          v62 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          if ( !iTween_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
          iTween__ScaleTo_61778700(v62, v29, 0LL);
        }
        else if ( !type )
        {
          v42 = *(_QWORD *)&this->fields.tmp_pos.fields.y;
          *(float *)v64 = this->fields.tmp_pos.fields.x + 80.0;
          *(_QWORD *)&v64[4] = v42;
          v43 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, v64, v38, v39, v40);
          ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v29->klass->vtable._23_Add.method)(
            v29,
            StringLiteral_22998/*"position"*/,
            v43,
            v29->klass->vtable._24_Clear.methodPtr);
          v63 = 26;
          v47 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v63, v44, v45, v46);
          ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v29->klass->vtable._23_Add.method)(
            v29,
            StringLiteral_19088/*"easetype"*/,
            v47,
            v29->klass->vtable._24_Clear.methodPtr);
          v48 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          if ( !iTween_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
          iTween__MoveTo_61773172(v48, v29, 0LL);
        }
        goto LABEL_28;
      }
      *(int32x2_t *)v64 = vdup_n_s32(0x3F666666u);
      *(_DWORD *)&v64[8] = 0;
      v49 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, v64, v38, v39, v40);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v29->klass->vtable._23_Add.method)(
        v29,
        StringLiteral_23456/*"scale"*/,
        v49,
        v29->klass->vtable._24_Clear.methodPtr);
      v63 = 26;
      v53 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v63, v50, v51, v52);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v29->klass->vtable._23_Add.method)(
        v29,
        StringLiteral_19088/*"easetype"*/,
        v53,
        v29->klass->vtable._24_Clear.methodPtr);
      v54 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !iTween_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
      iTween__ScaleTo_61778700(v54, v29, 0LL);
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( gameObject )
      {
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)gameObject,
                             (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
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
          v56 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          gameObject = (__int64)TweenAlpha__Begin(v56, this->fields.movetime, 0.0, 0LL);
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
    sub_1C2E388(gameObject, v27);
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
    sub_1C2E388(0LL, v4);
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

  if ( (byte_4BFF8A7 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    byte_4BFF8A7 = 1;
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
    sub_1C2E388(v6, v7);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
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
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  UnityEngine_GameObject_o *v32; // x0
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  __int64 v36; // x0
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  int32_t type; // w8
  __int64 v41; // d1
  __int64 v42; // x0
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  __int64 v46; // x0
  UnityEngine_GameObject_o *v47; // x21
  UnityEngine_Transform_o *v48; // x21
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  __int64 v52; // x0
  __int64 v53; // x2
  __int64 v54; // x3
  __int64 v55; // x4
  __int64 v56; // x0
  UnityEngine_GameObject_o *v57; // x21
  Il2CppObject *Component_object; // x20
  UnityEngine_GameObject_o *v59; // x0
  UnityEngine_Transform_o *v60; // x21
  __int64 v61; // x2
  __int64 v62; // x3
  __int64 v63; // x4
  __int64 v64; // x0
  __int64 v65; // x2
  __int64 v66; // x3
  __int64 v67; // x4
  __int64 v68; // x0
  UnityEngine_GameObject_o *v69; // x21
  _BYTE v70[12]; // [xsp+0h] [xbp-60h] BYREF
  int v71; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4BFF8A8 & 1) == 0 )
  {
    sub_1C2E12C(&bool_TypeInfo, call);
    sub_1C2E12C(&iTween_EaseType_TypeInfo, v10);
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v11);
    sub_1C2E12C(&System_Collections_Hashtable_TypeInfo, v12);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v13);
    sub_1C2E12C(&float_TypeInfo, v14);
    sub_1C2E12C(&UnityEngine_Vector3_TypeInfo, v15);
    sub_1C2E12C(&StringLiteral_19088/*"easetype"*/, v16);
    sub_1C2E12C(&StringLiteral_24383/*"time"*/, v17);
    sub_1C2E12C(&StringLiteral_22694/*"oncompletetarget"*/, v18);
    sub_1C2E12C(&StringLiteral_22998/*"position"*/, v19);
    sub_1C2E12C(&StringLiteral_21185/*"isLocal"*/, v20);
    sub_1C2E12C(&StringLiteral_22692/*"oncomplete"*/, v21);
    sub_1C2E12C(&StringLiteral_4730/*"CompOpen"*/, v22);
    sub_1C2E12C(&StringLiteral_23456/*"scale"*/, v23);
    sub_1C2E12C(&iTween_TypeInfo, v24);
    byte_4BFF8A8 = 1;
  }
  this->fields.call_openComp = call;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.call_openComp,
    (int64_t)call,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_61883512(gameObject, 0LL);
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
  v28 = (System_Collections_Hashtable_o *)sub_1C2E378(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_63815344(v28, 0LL);
  LOBYTE(v71) = 1;
  transform = j_il2cpp_value_box_0(bool_TypeInfo, &v71, v29, v30, v31);
  if ( !v28 )
    goto LABEL_34;
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v28->klass->vtable._23_Add.method)(
    v28,
    StringLiteral_21185/*"isLocal"*/,
    transform,
    v28->klass->vtable._24_Clear.methodPtr);
  v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v28->klass->vtable._23_Add.method)(
    v28,
    StringLiteral_22694/*"oncompletetarget"*/,
    v32,
    v28->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v28->klass->vtable._23_Add.method)(
    v28,
    StringLiteral_22692/*"oncomplete"*/,
    StringLiteral_4730/*"CompOpen"*/,
    v28->klass->vtable._24_Clear.methodPtr);
  *(float *)v70 = this->fields.movetime;
  v36 = j_il2cpp_value_box_0(float_TypeInfo, v70, v33, v34, v35);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v28->klass->vtable._23_Add.method)(
    v28,
    StringLiteral_24383/*"time"*/,
    v36,
    v28->klass->vtable._24_Clear.methodPtr);
  type = this->fields.type;
  if ( type != 2 )
  {
    if ( type != 1 )
    {
      if ( !type )
      {
        v41 = *(_QWORD *)&this->fields.tmp_pos.fields.y;
        *(float *)v70 = this->fields.tmp_pos.fields.x + 80.0;
        *(_QWORD *)&v70[4] = v41;
        v42 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, v70, v37, v38, v39);
        ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v28->klass->vtable._23_Add.method)(
          v28,
          StringLiteral_22998/*"position"*/,
          v42,
          v28->klass->vtable._24_Clear.methodPtr);
        v71 = 27;
        v46 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v71, v43, v44, v45);
        ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v28->klass->vtable._23_Add.method)(
          v28,
          StringLiteral_19088/*"easetype"*/,
          v46,
          v28->klass->vtable._24_Clear.methodPtr);
        v47 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !iTween_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
        iTween__MoveFrom_61774644(v47, v28, 0LL);
      }
      goto LABEL_33;
    }
    transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    v60 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4BF7D96 )
    {
      transform = sub_1C2E12C(&UnityEngine_Vector3_TypeInfo, v27);
      byte_4BF7D96 = 1;
    }
    if ( v60 )
    {
      UnityEngine_Transform__set_localScale(v60, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
      *(int32x2_t *)v70 = vdup_n_s32(0x3F333333u);
      *(_DWORD *)&v70[8] = 0;
      v64 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, v70, v61, v62, v63);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v28->klass->vtable._23_Add.method)(
        v28,
        StringLiteral_23456/*"scale"*/,
        v64,
        v28->klass->vtable._24_Clear.methodPtr);
      v71 = 27;
      v68 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v71, v65, v66, v67);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v28->klass->vtable._23_Add.method)(
        v28,
        StringLiteral_19088/*"easetype"*/,
        v68,
        v28->klass->vtable._24_Clear.methodPtr);
      v69 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !iTween_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
      iTween__ScaleFrom_61780152(v69, v28, 0LL);
      goto LABEL_33;
    }
LABEL_34:
    sub_1C2E388(transform, v27);
  }
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  v48 = (UnityEngine_Transform_o *)transform;
  if ( !byte_4BF7D96 )
  {
    transform = sub_1C2E12C(&UnityEngine_Vector3_TypeInfo, v27);
    byte_4BF7D96 = 1;
  }
  if ( !v48 )
    goto LABEL_34;
  UnityEngine_Transform__set_localScale(v48, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  *(int32x2_t *)v70 = vdup_n_s32(0x3F666666u);
  *(_DWORD *)&v70[8] = 0;
  v52 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, v70, v49, v50, v51);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v28->klass->vtable._23_Add.method)(
    v28,
    StringLiteral_23456/*"scale"*/,
    v52,
    v28->klass->vtable._24_Clear.methodPtr);
  v71 = 27;
  v56 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v71, v53, v54, v55);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v28->klass->vtable._23_Add.method)(
    v28,
    StringLiteral_19088/*"easetype"*/,
    v56,
    v28->klass->vtable._24_Clear.methodPtr);
  v57 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__ScaleFrom_61780152(v57, v28, 0LL);
  transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_34;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)transform,
                       (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
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
      v59 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      transform = (__int64)TweenAlpha__Begin(v59, this->fields.movetime, 1.0, 0LL);
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
  if ( (byte_4BFF8A6 & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_1/*""*/, method);
    byte_4BFF8A6 = 1;
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
    sub_1C2E388(0LL, v3);
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
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v20; // x1

  this->fields.call_openComp = 0LL;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.call_openComp, 0LL, ocflg, (int32_t)method, v5, v6, v7, v8);
  this->fields.call_closeComp = 0LL;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.call_closeComp, 0LL, v13, v14, v15, v16, v17, v18);
  this->fields.type = type;
  this->fields.movetime = time;
  if ( !ocflg )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      sub_1C2E388(0LL, v20);
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
    sub_1C2E388(gameObject, v4);
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
  if ( !byte_4BF7D91 )
  {
    sub_1C2E12C(&UnityEngine_Vector3_TypeInfo, method);
    byte_4BF7D91 = 1;
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
      sub_1C2E388(gameObject, v9);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._closeBtnObject = value;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields._closeBtnObject,
    (int64_t)value,
    (int64_t)method,
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C2E1EC(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C2E3A4(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2E254(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A718B8;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A71878;
}


System_IAsyncResult_o *__fastcall BattleWindowComponent_EndCall__BeginInvoke(
        BattleWindowComponent_EndCall_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_1C2E0E0(this, &v5, callback, object);
}


void __fastcall BattleWindowComponent_EndCall__EndInvoke(
        BattleWindowComponent_EndCall_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2E0E4(result, 0LL, method);
}


void __fastcall BattleWindowComponent_EndCall__Invoke(BattleWindowComponent_EndCall_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    *(_QWORD *)&this->fields.extra_arg);
}