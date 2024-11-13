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
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  struct BattleWindowComponent_EndCall_o **p_call_closeComp; // x21
  __int64 gameObject; // x0
  __int64 v42; // x1
  __int64 v43; // x1
  UnityEngine_GameObject_o *v44; // x20
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  System_Collections_Hashtable_o *v48; // x20
  UnityEngine_GameObject_o *v49; // x0
  __int64 v50; // x0
  int32_t type; // w8
  __int64 v52; // d1
  __int64 v53; // x0
  __int64 v54; // x0
  __int64 v55; // x1
  UnityEngine_GameObject_o *v56; // x21
  __int64 v57; // x0
  __int64 v58; // x0
  __int64 v59; // x1
  UnityEngine_GameObject_o *v60; // x21
  __int64 v61; // x1
  Il2CppObject *Component_object; // x20
  UnityEngine_GameObject_o *v63; // x0
  __int64 v64; // x0
  __int64 v65; // x0
  __int64 v66; // x1
  UnityEngine_GameObject_o *v67; // x21
  int v68; // [xsp+Ch] [xbp-34h] BYREF
  _BYTE v69[12]; // [xsp+10h] [xbp-30h] BYREF

  if ( (byte_4B18251 & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, call, method);
    sub_1BCA7E0(&iTween_EaseType_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v12, v13);
    sub_1BCA7E0(&System_Collections_Hashtable_TypeInfo, v14, v15);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v16, v17);
    sub_1BCA7E0(&float_TypeInfo, v18, v19);
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v20, v21);
    sub_1BCA7E0(&StringLiteral_18949/*"easetype"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_4714/*"CompClose"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_24178/*"time"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_22515/*"oncompletetarget"*/, v28, v29);
    sub_1BCA7E0(&StringLiteral_22815/*"position"*/, v30, v31);
    sub_1BCA7E0(&StringLiteral_21024/*"isLocal"*/, v32, v33);
    sub_1BCA7E0(&StringLiteral_22513/*"oncomplete"*/, v34, v35);
    sub_1BCA7E0(&StringLiteral_23258/*"scale"*/, v36, v37);
    sub_1BCA7E0(&iTween_TypeInfo, v38, v39);
    byte_4B18251 = 1;
  }
  this->fields.call_closeComp = call;
  p_call_closeComp = &this->fields.call_closeComp;
  sub_1BCA784(
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
    v44 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v43);
    iTween__Stop_61049892(v44, 0LL);
    v48 = (System_Collections_Hashtable_o *)sub_1BCAA2C(System_Collections_Hashtable_TypeInfo, v45, v46, v47);
    System_Collections_Hashtable___ctor_62980980(v48, 0LL);
    LOBYTE(v68) = 1;
    gameObject = j_il2cpp_value_box_0(bool_TypeInfo, &v68);
    if ( v48 )
    {
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v48->klass->vtable._23_Add.method)(
        v48,
        StringLiteral_21024/*"isLocal"*/,
        gameObject,
        v48->klass->vtable._24_Clear.methodPtr);
      v49 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v48->klass->vtable._23_Add.method)(
        v48,
        StringLiteral_22515/*"oncompletetarget"*/,
        v49,
        v48->klass->vtable._24_Clear.methodPtr);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v48->klass->vtable._23_Add.method)(
        v48,
        StringLiteral_22513/*"oncomplete"*/,
        StringLiteral_4714/*"CompClose"*/,
        v48->klass->vtable._24_Clear.methodPtr);
      *(float *)v69 = this->fields.movetime;
      v50 = j_il2cpp_value_box_0(float_TypeInfo, v69);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v48->klass->vtable._23_Add.method)(
        v48,
        StringLiteral_24178/*"time"*/,
        v50,
        v48->klass->vtable._24_Clear.methodPtr);
      type = this->fields.type;
      if ( type != 2 )
      {
        if ( type == 1 )
        {
          *(int32x2_t *)v69 = vdup_n_s32(0x3F333333u);
          *(_DWORD *)&v69[8] = 0;
          v64 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, v69);
          ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v48->klass->vtable._23_Add.method)(
            v48,
            StringLiteral_23258/*"scale"*/,
            v64,
            v48->klass->vtable._24_Clear.methodPtr);
          v68 = 26;
          v65 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v68);
          ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v48->klass->vtable._23_Add.method)(
            v48,
            StringLiteral_18949/*"easetype"*/,
            v65,
            v48->klass->vtable._24_Clear.methodPtr);
          v67 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          if ( !iTween_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v66);
          iTween__ScaleTo_60945080(v67, v48, 0LL);
        }
        else if ( !type )
        {
          v52 = *(_QWORD *)&this->fields.tmp_pos.fields.y;
          *(float *)v69 = this->fields.tmp_pos.fields.x + 80.0;
          *(_QWORD *)&v69[4] = v52;
          v53 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, v69);
          ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v48->klass->vtable._23_Add.method)(
            v48,
            StringLiteral_22815/*"position"*/,
            v53,
            v48->klass->vtable._24_Clear.methodPtr);
          v68 = 26;
          v54 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v68);
          ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v48->klass->vtable._23_Add.method)(
            v48,
            StringLiteral_18949/*"easetype"*/,
            v54,
            v48->klass->vtable._24_Clear.methodPtr);
          v56 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          if ( !iTween_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v55);
          iTween__MoveTo_60939552(v56, v48, 0LL);
        }
        goto LABEL_28;
      }
      *(int32x2_t *)v69 = vdup_n_s32(0x3F666666u);
      *(_DWORD *)&v69[8] = 0;
      v57 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, v69);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v48->klass->vtable._23_Add.method)(
        v48,
        StringLiteral_23258/*"scale"*/,
        v57,
        v48->klass->vtable._24_Clear.methodPtr);
      v68 = 26;
      v58 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v68);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v48->klass->vtable._23_Add.method)(
        v48,
        StringLiteral_18949/*"easetype"*/,
        v58,
        v48->klass->vtable._24_Clear.methodPtr);
      v60 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !iTween_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v59);
      iTween__ScaleTo_60945080(v60, v48, 0LL);
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( gameObject )
      {
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)gameObject,
                             (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v61);
        gameObject = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
        if ( (gameObject & 1) == 0 )
          goto LABEL_28;
        if ( Component_object )
        {
          ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer, float))Component_object->klass->vtable[8].method)(
            Component_object,
            Component_object->klass->vtable[9].methodPtr,
            1.0);
          v63 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          gameObject = (__int64)TweenAlpha__Begin(v63, this->fields.movetime, 0.0, 0LL);
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
    sub_1BCAA3C(gameObject, v42);
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
    sub_1BCAA3C(0LL, v4);
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
  __int64 v2; // x2
  __int64 v4; // x1
  UnityEngine_Object_o *v5; // x20
  System_String_o *v6; // x0
  UnityEngine_Transform_o *transform; // x20
  System_String_o *v8; // x0
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_Object_o *v11; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v13; // x0

  if ( (byte_4B1824F & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1824F = 1;
  }
  v5 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(BattleWindowComponent_o *, Il2CppMethodPointer))this->klass->vtable._4_get_closeBtnObject.method)(
                                 this,
                                 this->klass->vtable._5_set_closeBtnObject.methodPtr);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( !UnityEngine_Object__op_Equality(v5, 0LL, 0LL) )
    goto LABEL_14;
  v6 = (System_String_o *)((__int64 (__fastcall *)(BattleWindowComponent_o *, Il2CppMethodPointer))this->klass->vtable._6_get_closeBtnPath.method)(
                            this,
                            this->klass->vtable._7_setInitialPos.methodPtr);
  if ( System_String__IsNullOrEmpty(v6, 0LL) )
    return;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  v8 = (System_String_o *)((__int64 (__fastcall *)(BattleWindowComponent_o *, Il2CppMethodPointer))this->klass->vtable._6_get_closeBtnPath.method)(
                            this,
                            this->klass->vtable._7_setInitialPos.methodPtr);
  if ( !transform )
LABEL_15:
    sub_1BCAA3C(v8, v9);
  v11 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(transform, v8, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  v8 = (System_String_o *)UnityEngine_Object__op_Equality(v11, 0LL, 0LL);
  if ( ((unsigned __int8)v8 & 1) == 0 )
  {
    if ( v11 )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v11, 0LL);
      ((void (__fastcall *)(BattleWindowComponent_o *, UnityEngine_GameObject_o *, Il2CppMethodPointer))this->klass->vtable._5_set_closeBtnObject.method)(
        this,
        gameObject,
        this->klass->vtable._6_get_closeBtnPath.methodPtr);
LABEL_14:
      v13 = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(BattleWindowComponent_o *, Il2CppMethodPointer))this->klass->vtable._4_get_closeBtnObject.method)(
                                          this,
                                          this->klass->vtable._5_set_closeBtnObject.methodPtr);
      AndroidBackKeyManager__AddBackBtn(v13, 0LL);
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
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 transform; // x0
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  System_Collections_Hashtable_o *v47; // x20
  UnityEngine_GameObject_o *v48; // x0
  __int64 v49; // x0
  int32_t type; // w8
  __int64 v51; // d1
  __int64 v52; // x0
  __int64 v53; // x0
  __int64 v54; // x1
  UnityEngine_GameObject_o *v55; // x21
  __int64 v56; // x2
  UnityEngine_Transform_o *v57; // x21
  __int64 v58; // x0
  __int64 v59; // x0
  __int64 v60; // x1
  UnityEngine_GameObject_o *v61; // x21
  __int64 v62; // x1
  Il2CppObject *Component_object; // x20
  UnityEngine_GameObject_o *v64; // x0
  __int64 v65; // x2
  UnityEngine_Transform_o *v66; // x21
  __int64 v67; // x0
  __int64 v68; // x0
  __int64 v69; // x1
  UnityEngine_GameObject_o *v70; // x21
  _BYTE v71[12]; // [xsp+0h] [xbp-60h] BYREF
  int v72; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4B18250 & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, call, method);
    sub_1BCA7E0(&iTween_EaseType_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v12, v13);
    sub_1BCA7E0(&System_Collections_Hashtable_TypeInfo, v14, v15);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v16, v17);
    sub_1BCA7E0(&float_TypeInfo, v18, v19);
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v20, v21);
    sub_1BCA7E0(&StringLiteral_18949/*"easetype"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_24178/*"time"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_22515/*"oncompletetarget"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_22815/*"position"*/, v28, v29);
    sub_1BCA7E0(&StringLiteral_21024/*"isLocal"*/, v30, v31);
    sub_1BCA7E0(&StringLiteral_22513/*"oncomplete"*/, v32, v33);
    sub_1BCA7E0(&StringLiteral_4715/*"CompOpen"*/, v34, v35);
    sub_1BCA7E0(&StringLiteral_23258/*"scale"*/, v36, v37);
    sub_1BCA7E0(&iTween_TypeInfo, v38, v39);
    byte_4B18250 = 1;
  }
  this->fields.call_openComp = call;
  sub_1BCA784(
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
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v40);
  iTween__Stop_61049892(gameObject, 0LL);
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
  v47 = (System_Collections_Hashtable_o *)sub_1BCAA2C(System_Collections_Hashtable_TypeInfo, v44, v45, v46);
  System_Collections_Hashtable___ctor_62980980(v47, 0LL);
  LOBYTE(v72) = 1;
  transform = j_il2cpp_value_box_0(bool_TypeInfo, &v72);
  if ( !v47 )
    goto LABEL_34;
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v47->klass->vtable._23_Add.method)(
    v47,
    StringLiteral_21024/*"isLocal"*/,
    transform,
    v47->klass->vtable._24_Clear.methodPtr);
  v48 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v47->klass->vtable._23_Add.method)(
    v47,
    StringLiteral_22515/*"oncompletetarget"*/,
    v48,
    v47->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v47->klass->vtable._23_Add.method)(
    v47,
    StringLiteral_22513/*"oncomplete"*/,
    StringLiteral_4715/*"CompOpen"*/,
    v47->klass->vtable._24_Clear.methodPtr);
  *(float *)v71 = this->fields.movetime;
  v49 = j_il2cpp_value_box_0(float_TypeInfo, v71);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v47->klass->vtable._23_Add.method)(
    v47,
    StringLiteral_24178/*"time"*/,
    v49,
    v47->klass->vtable._24_Clear.methodPtr);
  type = this->fields.type;
  if ( type != 2 )
  {
    if ( type != 1 )
    {
      if ( !type )
      {
        v51 = *(_QWORD *)&this->fields.tmp_pos.fields.y;
        *(float *)v71 = this->fields.tmp_pos.fields.x + 80.0;
        *(_QWORD *)&v71[4] = v51;
        v52 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, v71);
        ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v47->klass->vtable._23_Add.method)(
          v47,
          StringLiteral_22815/*"position"*/,
          v52,
          v47->klass->vtable._24_Clear.methodPtr);
        v72 = 27;
        v53 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v72);
        ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v47->klass->vtable._23_Add.method)(
          v47,
          StringLiteral_18949/*"easetype"*/,
          v53,
          v47->klass->vtable._24_Clear.methodPtr);
        v55 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !iTween_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v54);
        iTween__MoveFrom_60941024(v55, v47, 0LL);
      }
      goto LABEL_33;
    }
    transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    v66 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4B109C6 )
    {
      transform = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v43, v65);
      byte_4B109C6 = 1;
    }
    if ( v66 )
    {
      UnityEngine_Transform__set_localScale(v66, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
      *(int32x2_t *)v71 = vdup_n_s32(0x3F333333u);
      *(_DWORD *)&v71[8] = 0;
      v67 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, v71);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v47->klass->vtable._23_Add.method)(
        v47,
        StringLiteral_23258/*"scale"*/,
        v67,
        v47->klass->vtable._24_Clear.methodPtr);
      v72 = 27;
      v68 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v72);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v47->klass->vtable._23_Add.method)(
        v47,
        StringLiteral_18949/*"easetype"*/,
        v68,
        v47->klass->vtable._24_Clear.methodPtr);
      v70 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !iTween_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v69);
      iTween__ScaleFrom_60946532(v70, v47, 0LL);
      goto LABEL_33;
    }
LABEL_34:
    sub_1BCAA3C(transform, v43);
  }
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  v57 = (UnityEngine_Transform_o *)transform;
  if ( !byte_4B109C6 )
  {
    transform = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v43, v56);
    byte_4B109C6 = 1;
  }
  if ( !v57 )
    goto LABEL_34;
  UnityEngine_Transform__set_localScale(v57, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  *(int32x2_t *)v71 = vdup_n_s32(0x3F666666u);
  *(_DWORD *)&v71[8] = 0;
  v58 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, v71);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v47->klass->vtable._23_Add.method)(
    v47,
    StringLiteral_23258/*"scale"*/,
    v58,
    v47->klass->vtable._24_Clear.methodPtr);
  v72 = 27;
  v59 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v72);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v47->klass->vtable._23_Add.method)(
    v47,
    StringLiteral_18949/*"easetype"*/,
    v59,
    v47->klass->vtable._24_Clear.methodPtr);
  v61 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v60);
  iTween__ScaleFrom_60946532(v61, v47, 0LL);
  transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_34;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)transform,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v62);
  transform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( (transform & 1) != 0 )
  {
    if ( Component_object )
    {
      ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer, float))Component_object->klass->vtable[8].method)(
        Component_object,
        Component_object->klass->vtable[9].methodPtr,
        0.01);
      v64 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      transform = (__int64)TweenAlpha__Begin(v64, this->fields.movetime, 1.0, 0LL);
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
  __int64 v2; // x2

  if ( (byte_4B1824E & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B1824E = 1;
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
    sub_1BCAA3C(0LL, v3);
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.call_openComp, 0LL, ocflg, (int32_t)method, v5, v6, v7, v8);
  this->fields.call_closeComp = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.call_closeComp, 0LL, v13, v14, v15, v16, v17, v18);
  this->fields.type = type;
  this->fields.movetime = time;
  if ( !ocflg )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      sub_1BCAA3C(0LL, v20);
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
    sub_1BCAA3C(gameObject, v4);
  }
  this->fields.tmp_pos = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0LL);
}


void __fastcall BattleWindowComponent__setInitialPosIfDefaultIsZero(
        BattleWindowComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  float x; // s8
  float32x2_t v4; // d9
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float32x2_t v7; // d1
  unsigned __int64 v8; // d1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1

  x = this->fields.tmp_pos.fields.x;
  v4.n64_u64[0] = *(unsigned __int64 *)&this->fields.tmp_pos.fields.y;
  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, method, v2);
    byte_4B109C1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v7.n64_u64[0] = vsub_f32(v4, *(float32x2_t *)&static_fields->zeroVector.fields.y).n64_u64[0];
  v8 = vmul_f32(v7, v7).n64_u64[0];
  if ( (float)(*((float *)&v8 + 1)
             + (float)((float)((float)(x - static_fields->zeroVector.fields.x)
                             * (float)(x - static_fields->zeroVector.fields.x))
                     + *(float *)&v8)) < 1.0e-10 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject
      || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL)) == 0LL )
    {
      sub_1BCAA3C(gameObject, v10);
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
  sub_1BCA784(
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
  sub_1BCA784(
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
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A0F028;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0EFE8;
}


System_IAsyncResult_o *__fastcall BattleWindowComponent_EndCall__BeginInvoke(
        BattleWindowComponent_EndCall_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_1BCA794(this, &v5, callback, object);
}


void __fastcall BattleWindowComponent_EndCall__EndInvoke(
        BattleWindowComponent_EndCall_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
}


void __fastcall BattleWindowComponent_EndCall__Invoke(BattleWindowComponent_EndCall_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    *(_QWORD *)&this->fields.extra_arg);
}