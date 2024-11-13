void __fastcall UIScriptChara___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B17F03 & 1) == 0 )
  {
    sub_1BCA7E0(&UIScriptChara_TypeInfo, v1, v2);
    byte_4B17F03 = 1;
  }
  LODWORD(UIScriptChara_TypeInfo->static_fields->UNIT_SPEED) = (struct UIScriptChara_StaticFields)1014350479;
}


void __fastcall UIScriptChara___ctor(UIScriptChara_o *this, const MethodInfo *method)
{
  this->fields.backIndex = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptChara__ChangeCharacter(
        UIScriptChara_o *this,
        System_String_o *kind,
        float speed,
        System_String_o *imageName,
        int32_t faceType,
        System_Action_o *callback,
        const MethodInfo *method)
{
  long double v10; // q8
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1

  v10 = *(long double *)&speed;
  if ( (byte_4B17EDB & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17512/*"blink"*/, kind, imageName);
    sub_1BCA7E0(&StringLiteral_19566/*"fade"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_18523/*"crossFade"*/, v15, v16);
    byte_4B17EDB = 1;
  }
  if ( System_String__op_Equality(kind, (System_String_o *)StringLiteral_19566/*"fade"*/, 0LL) )
  {
    v17 = 2LL;
  }
  else if ( System_String__op_Equality(kind, (System_String_o *)StringLiteral_17512/*"blink"*/, 0LL) )
  {
    v17 = 3LL;
  }
  else if ( System_String__op_Equality(kind, (System_String_o *)StringLiteral_18523/*"crossFade"*/, 0LL) )
  {
    v17 = 4LL;
  }
  else
  {
    v17 = 1LL;
  }
  ((void (__fastcall *)(UIScriptChara_o *, __int64, System_String_o *, _QWORD, System_Action_o *, Il2CppMethodPointer, long double))this->klass->vtable._10_ChangeCharacter.method)(
    this,
    v17,
    imageName,
    (unsigned int)faceType,
    callback,
    this->klass->vtable._11_SetCharacter.methodPtr,
    v10);
}


void __fastcall UIScriptChara__ChangeCharacter_42483600(
        UIScriptChara_o *this,
        int32_t kind,
        float speed,
        System_String_o *imageName,
        int32_t faceType,
        System_Action_o *callback,
        const MethodInfo *method)
{
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  struct System_Action_o **p_changeCallback; // x20
  int v12; // w8
  int v13; // w9

  this->fields.changeCallback = callback;
  p_changeCallback = &this->fields.changeCallback;
  this->fields.changeKind = kind;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.changeCallback,
    (int64_t)callback,
    (int64_t)imageName,
    faceType,
    (System_String_o *)callback,
    (BattleSetupInfo_o *)method,
    v7,
    v8);
  v12 = *((_DWORD *)p_changeCallback + 2);
  v13 = *((_DWORD *)p_changeCallback - 8);
  *((float *)p_changeCallback - 7) = speed;
  *(struct System_Action_o **)((char *)p_changeCallback - 20) = 0LL;
  *((_DWORD *)p_changeCallback + 2) = v12 == 0;
  *((_DWORD *)p_changeCallback + 3) = v12;
  *((_DWORD *)p_changeCallback - 6) = 0;
  if ( v13 == 3 )
    this->fields.changeRange = fminf(speed, 10.0) / 5.0;
  this->fields.isDisp = 0;
}


void __fastcall UIScriptChara__EndExecuteCameraRoll(UIScriptChara_o *this, const MethodInfo *method)
{
  this->fields.isRoll = 0;
}


void __fastcall UIScriptChara__EndMove(UIScriptChara_o *this, const MethodInfo *method)
{
  this->fields.isMove = 0;
}


void __fastcall UIScriptChara__EndMoveAttack(UIScriptChara_o *this, const MethodInfo *method)
{
  this->fields.isMove = 0;
}


void __fastcall UIScriptChara__EndMoveReturn(UIScriptChara_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL)) == 0LL )
  {
    sub_1BCAA3C(gameObject, v4);
  }
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, this->fields.basePosition, 0LL);
  this->fields.isMove = 0;
}


void __fastcall UIScriptChara__EndMoveReturnEaseHalf(UIScriptChara_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  UIScriptChara__MoveReturnPositionEase_42488268(this, this->fields.returnDuration, this->fields.returnEaseType, v2);
}


void __fastcall UIScriptChara__EndMoveReturnHalf(UIScriptChara_o *this, const MethodInfo *method)
{
  UIScriptChara__MoveReturnPosition(this, this->fields.returnDuration, method);
}


void __fastcall UIScriptChara__EndMoveScale(UIScriptChara_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *baseScale; // x0

  baseScale = this->fields.baseScale;
  if ( !baseScale )
    sub_1BCAA3C(0LL, method);
  UnityEngine_Transform__set_localScale(baseScale, this->fields.baseScaleSize, 0LL);
  this->fields.isMove = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptChara__EndSet(UIScriptChara_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_GameObject_o *baseSpecialEffect; // x0
  struct UnityEngine_Vector2_StaticFields *static_fields; // x8
  float x; // s8
  float y; // s9
  float v8; // s2
  float v9; // s10
  float v10; // s2
  float v11; // s10
  float v12; // s2
  float v13; // s10
  float v14; // s2
  float v15; // s10
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  PartyOrganizationUtility_o *p_setCallback; // x19
  struct System_Action_o *v23; // x20
  struct System_Action_o *setCallback; // t1
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4

  if ( !byte_4B108BA )
  {
    sub_1BCA7E0(&UnityEngine_Vector2_TypeInfo, method, v2);
    byte_4B108BA = 1;
  }
  baseSpecialEffect = this->fields.baseSpecialEffect;
  if ( !baseSpecialEffect )
    goto LABEL_22;
  static_fields = UnityEngine_Vector2_TypeInfo->static_fields;
  x = static_fields->zeroVector.fields.x;
  y = static_fields->zeroVector.fields.y;
  baseSpecialEffect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseSpecialEffect, 0LL);
  if ( !baseSpecialEffect )
    goto LABEL_22;
  *(UnityEngine_Vector3_o *)(&v8 - 2) = UnityEngine_Transform__get_localPosition(
                                          (UnityEngine_Transform_o *)baseSpecialEffect,
                                          0LL);
  baseSpecialEffect = this->fields.baseSpecialEffect;
  if ( !baseSpecialEffect )
    goto LABEL_22;
  v9 = v8;
  baseSpecialEffect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseSpecialEffect, 0LL);
  if ( !baseSpecialEffect )
    goto LABEL_22;
  v25.fields.x = x;
  v25.fields.y = y;
  v25.fields.z = v9;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseSpecialEffect, v25, 0LL);
  baseSpecialEffect = this->fields.baseEffect;
  if ( !baseSpecialEffect )
    goto LABEL_22;
  baseSpecialEffect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseSpecialEffect, 0LL);
  if ( !baseSpecialEffect )
    goto LABEL_22;
  *(UnityEngine_Vector3_o *)(&v10 - 2) = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)baseSpecialEffect,
                                           0LL);
  baseSpecialEffect = this->fields.baseEffect;
  if ( !baseSpecialEffect )
    goto LABEL_22;
  v11 = v10;
  baseSpecialEffect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseSpecialEffect, 0LL);
  if ( !baseSpecialEffect )
    goto LABEL_22;
  v26.fields.x = x;
  v26.fields.y = y;
  v26.fields.z = v11;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseSpecialEffect, v26, 0LL);
  baseSpecialEffect = this->fields.baseEffectBack;
  if ( !baseSpecialEffect )
    goto LABEL_22;
  baseSpecialEffect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseSpecialEffect, 0LL);
  if ( !baseSpecialEffect )
    goto LABEL_22;
  *(UnityEngine_Vector3_o *)(&v12 - 2) = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)baseSpecialEffect,
                                           0LL);
  baseSpecialEffect = this->fields.baseEffectBack;
  if ( !baseSpecialEffect )
    goto LABEL_22;
  v13 = v12;
  baseSpecialEffect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseSpecialEffect, 0LL);
  if ( !baseSpecialEffect )
    goto LABEL_22;
  v27.fields.x = x;
  v27.fields.y = y;
  v27.fields.z = v13;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseSpecialEffect, v27, 0LL);
  baseSpecialEffect = this->fields.baseShadowEffect;
  if ( !baseSpecialEffect
    || (baseSpecialEffect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseSpecialEffect, 0LL)) == 0LL
    || (*(UnityEngine_Vector3_o *)(&v14 - 2) = UnityEngine_Transform__get_localPosition(
                                                 (UnityEngine_Transform_o *)baseSpecialEffect,
                                                 0LL),
        (baseSpecialEffect = this->fields.baseShadowEffect) == 0LL)
    || (v15 = v14,
        (baseSpecialEffect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseSpecialEffect, 0LL)) == 0LL) )
  {
LABEL_22:
    sub_1BCAA3C(baseSpecialEffect, method);
  }
  v28.fields.x = x;
  v28.fields.y = y;
  v28.fields.z = v15;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseSpecialEffect, v28, 0LL);
  setCallback = this->fields.setCallback;
  p_setCallback = (PartyOrganizationUtility_o *)&this->fields.setCallback;
  v23 = setCallback;
  if ( setCallback )
  {
    p_setCallback->klass = 0LL;
    sub_1BCA784(p_setCallback, 0LL, v16, v17, v18, v19, v20, v21);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v23->fields.m_target)(
      v23->fields.original_method_info,
      *(_QWORD *)&v23->fields.extra_arg);
  }
}


UnityEngine_Vector3_o __fastcall UIScriptChara__GetBasePosition(UIScriptChara_o *this, const MethodInfo *method)
{
  float x; // s0
  float y; // s1
  float z; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  x = this->fields.basePosition.fields.x;
  y = this->fields.basePosition.fields.y;
  z = this->fields.basePosition.fields.z;
  result.fields.z = z;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


UnityEngine_Transform_o *__fastcall UIScriptChara__GetBody(UIScriptChara_o *this, const MethodInfo *method)
{
  return 0LL;
}


UnityEngine_Texture_o *__fastcall UIScriptChara__GetBodySubTexture(UIScriptChara_o *this, const MethodInfo *method)
{
  return 0LL;
}


float __fastcall UIScriptChara__GetDepth(UIScriptChara_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *baseDepth; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  baseDepth = this->fields.baseDepth;
  if ( !baseDepth )
    sub_1BCAA3C(0LL, method);
  localPosition = UnityEngine_Transform__get_localPosition(baseDepth, 0LL);
  return localPosition.fields.z;
}


UnityEngine_Rect_o __fastcall UIScriptChara__GetHighRectEdgeBlur(UIScriptChara_o *this, const MethodInfo *method)
{
  float v2; // s0
  float v3; // s1
  float v4; // s2
  float v5; // s3
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = 0.0;
  v3 = 0.0;
  v4 = 1.0;
  v5 = 1.0;
  result.fields.m_Height = v5;
  result.fields.m_Width = v4;
  result.fields.m_YMin = v3;
  result.fields.m_XMin = v2;
  return result;
}


UnityEngine_Vector3_o __fastcall UIScriptChara__GetOffsetEdgeBlur(UIScriptChara_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float x; // s0
  float y; // s1
  float z; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, method, v2);
    byte_4B109C1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  x = static_fields->zeroVector.fields.x;
  y = static_fields->zeroVector.fields.y;
  z = static_fields->zeroVector.fields.z;
  result.fields.z = z;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


UnityEngine_Rect_o __fastcall UIScriptChara__GetRectEdgeBlur(UIScriptChara_o *this, const MethodInfo *method)
{
  float v2; // s0
  float v3; // s1
  float v4; // s2
  float v5; // s3
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = 0.0;
  v3 = 0.0;
  v4 = 1.0;
  v5 = 1.0;
  result.fields.m_Height = v5;
  result.fields.m_Width = v4;
  result.fields.m_YMin = v3;
  result.fields.m_XMin = v2;
  return result;
}


UnityEngine_Vector2_o __fastcall UIScriptChara__GetSizeEdgeBlur(UIScriptChara_o *this, const MethodInfo *method)
{
  float v2; // s0
  float v3; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  v2 = 1024.0;
  v3 = 1024.0;
  result.fields.y = v3;
  result.fields.x = v2;
  return result;
}


void __fastcall UIScriptChara__InitRoll(UIScriptChara_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, method, v2);
    byte_4B109C1 = 1;
  }
  UIScriptChara__SetRoll(this, 0.0, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, method);
}


bool __fastcall UIScriptChara__IsBackEffect(UIScriptChara_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_GameObject_o *baseEffectBack; // x19

  if ( (byte_4B17EFA & 1) == 0 )
  {
    sub_1BCA7E0(&CommonEffectManager_TypeInfo, method, v2);
    byte_4B17EFA = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, method);
  return CommonEffectManager__IsBusy(baseEffectBack, 0LL);
}


bool __fastcall UIScriptChara__IsBackEffectStart(UIScriptChara_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_GameObject_o *baseEffectBack; // x19

  if ( (byte_4B17EFC & 1) == 0 )
  {
    sub_1BCA7E0(&CommonEffectManager_TypeInfo, method, v2);
    byte_4B17EFC = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, method);
  return CommonEffectManager__IsStart(baseEffectBack, 0LL);
}


bool __fastcall UIScriptChara__IsBackEffectStart_42495640(
        UIScriptChara_o *this,
        System_String_o *n,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffectBack; // x20

  if ( (byte_4B17EFD & 1) == 0 )
  {
    sub_1BCA7E0(&CommonEffectManager_TypeInfo, n, method);
    byte_4B17EFD = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, n);
  return CommonEffectManager__IsStart_41397620(baseEffectBack, n, 0LL);
}


bool __fastcall UIScriptChara__IsBackEffect_42495440(
        UIScriptChara_o *this,
        System_String_o *n,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffectBack; // x20

  if ( (byte_4B17EFB & 1) == 0 )
  {
    sub_1BCA7E0(&CommonEffectManager_TypeInfo, n, method);
    byte_4B17EFB = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, n);
  return CommonEffectManager__IsBusy_41396704(baseEffectBack, n, 0LL);
}


bool __fastcall UIScriptChara__IsBusyMoveAlpha(UIScriptChara_o *this, const MethodInfo *method)
{
  return 0;
}


bool __fastcall UIScriptChara__IsChange(UIScriptChara_o *this, const MethodInfo *method)
{
  return this->fields.changeKind != 0;
}


bool __fastcall UIScriptChara__IsCut(UIScriptChara_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  ProgramEffectComponent_array *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x8
  ProgramEffectComponent_array *v9; // x19
  bool v10; // w21
  unsigned __int64 v11; // x22
  ProgramEffectComponent_o **m_Items; // x25
  ProgramEffectComponent_o *v13; // x8
  __int64 methodPtr_low; // x11
  ProgramEffectComponent_o *v15; // x20

  if ( (byte_4B17EEE & 1) == 0 )
  {
    sub_1BCA7E0(&CharaCutEffectComponent_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B17EEE = 1;
  }
  v6 = ProgramEffectManager__Get(this->fields.baseCutEffect, 0LL);
  if ( !v6 )
LABEL_21:
    sub_1BCAA3C(v6, v7);
  v8 = *(_QWORD *)&v6->max_length;
  v9 = v6;
  v10 = (int)v8 > 0;
  if ( (int)v8 >= 1 )
  {
    v11 = 0LL;
    m_Items = v6->m_Items;
    do
    {
      if ( v11 >= (unsigned int)v8 )
        sub_1BCAA44(v6, v7);
      v13 = m_Items[v11];
      if ( v13
        && (methodPtr_low = LOBYTE(CharaCutEffectComponent_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(v13->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
      {
        if ( (CharaCutEffectComponent_c *)v13->klass->_2.typeHierarchy[methodPtr_low - 1] == CharaCutEffectComponent_TypeInfo )
          v15 = m_Items[v11];
        else
          v15 = 0LL;
      }
      else
      {
        v15 = 0LL;
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
      v6 = (ProgramEffectComponent_array *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v15, 0LL, 0LL);
      if ( ((unsigned __int8)v6 & 1) != 0 )
      {
        if ( !v15 )
          goto LABEL_21;
        if ( LOBYTE(v15[1].fields.leftAnchor) )
          break;
      }
      LODWORD(v8) = v9->max_length;
      v10 = (__int64)++v11 < (int)v8;
    }
    while ( (__int64)v11 < (int)v8 );
  }
  return v10;
}


bool __fastcall UIScriptChara__IsCutStart(UIScriptChara_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  ProgramEffectComponent_array *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x8
  ProgramEffectComponent_array *v9; // x19
  bool v10; // w21
  unsigned __int64 v11; // x22
  ProgramEffectComponent_o **m_Items; // x25
  ProgramEffectComponent_o *v13; // x8
  __int64 methodPtr_low; // x11
  ProgramEffectComponent_o *v15; // x20

  if ( (byte_4B17EEF & 1) == 0 )
  {
    sub_1BCA7E0(&CharaCutEffectComponent_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B17EEF = 1;
  }
  v6 = ProgramEffectManager__Get(this->fields.baseCutEffect, 0LL);
  if ( !v6 )
LABEL_21:
    sub_1BCAA3C(v6, v7);
  v8 = *(_QWORD *)&v6->max_length;
  v9 = v6;
  v10 = (int)v8 > 0;
  if ( (int)v8 >= 1 )
  {
    v11 = 0LL;
    m_Items = v6->m_Items;
    do
    {
      if ( v11 >= (unsigned int)v8 )
        sub_1BCAA44(v6, v7);
      v13 = m_Items[v11];
      if ( v13
        && (methodPtr_low = LOBYTE(CharaCutEffectComponent_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(v13->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
      {
        if ( (CharaCutEffectComponent_c *)v13->klass->_2.typeHierarchy[methodPtr_low - 1] == CharaCutEffectComponent_TypeInfo )
          v15 = m_Items[v11];
        else
          v15 = 0LL;
      }
      else
      {
        v15 = 0LL;
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
      v6 = (ProgramEffectComponent_array *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v15, 0LL, 0LL);
      if ( ((unsigned __int8)v6 & 1) != 0 )
      {
        if ( !v15 )
          goto LABEL_21;
        if ( !v15->fields.isStart )
          break;
      }
      LODWORD(v8) = v9->max_length;
      v10 = (__int64)++v11 < (int)v8;
    }
    while ( (__int64)v11 < (int)v8 );
  }
  return !v10;
}


bool __fastcall UIScriptChara__IsEffect(UIScriptChara_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_GameObject_o *baseEffect; // x19

  if ( (byte_4B17EF1 & 1) == 0 )
  {
    sub_1BCA7E0(&CommonEffectManager_TypeInfo, method, v2);
    byte_4B17EF1 = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, method);
  return CommonEffectManager__IsBusy(baseEffect, 0LL);
}


bool __fastcall UIScriptChara__IsEffectStart(UIScriptChara_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_GameObject_o *baseEffect; // x19

  if ( (byte_4B17EF3 & 1) == 0 )
  {
    sub_1BCA7E0(&CommonEffectManager_TypeInfo, method, v2);
    byte_4B17EF3 = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, method);
  return CommonEffectManager__IsStart(baseEffect, 0LL);
}


bool __fastcall UIScriptChara__IsEffectStart_42494304(
        UIScriptChara_o *this,
        System_String_o *n,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffect; // x20

  if ( (byte_4B17EF4 & 1) == 0 )
  {
    sub_1BCA7E0(&CommonEffectManager_TypeInfo, n, method);
    byte_4B17EF4 = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, n);
  return CommonEffectManager__IsStart_41397620(baseEffect, n, 0LL);
}


bool __fastcall UIScriptChara__IsEffect_42494104(UIScriptChara_o *this, System_String_o *n, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffect; // x20

  if ( (byte_4B17EF2 & 1) == 0 )
  {
    sub_1BCA7E0(&CommonEffectManager_TypeInfo, n, method);
    byte_4B17EF2 = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, n);
  return CommonEffectManager__IsBusy_41396704(baseEffect, n, 0LL);
}


bool __fastcall UIScriptChara__IsMove(UIScriptChara_o *this, const MethodInfo *method)
{
  return this->fields.isMove;
}


bool __fastcall UIScriptChara__IsRoll(UIScriptChara_o *this, const MethodInfo *method)
{
  return this->fields.isRoll;
}


bool __fastcall UIScriptChara__IsShake(UIScriptChara_o *this, const MethodInfo *method)
{
  return this->fields.shakeCycle > 0.0;
}


bool __fastcall UIScriptChara__IsSpecialEffect(UIScriptChara_o *this, const MethodInfo *method)
{
  return ProgramEffectManager__IsBusy(this->fields.baseSpecialEffect, 0LL);
}


bool __fastcall UIScriptChara__IsSpecialEffectStart(UIScriptChara_o *this, const MethodInfo *method)
{
  return ProgramEffectManager__IsStart(this->fields.baseSpecialEffect, 0LL);
}


bool __fastcall UIScriptChara__IsSpecialEffectStart_42493108(
        UIScriptChara_o *this,
        System_String_o *n,
        const MethodInfo *method)
{
  return ProgramEffectManager__IsStart_41421440(this->fields.baseSpecialEffect, n, 0LL);
}


bool __fastcall UIScriptChara__IsSpecialEffect_42493084(
        UIScriptChara_o *this,
        System_String_o *n,
        const MethodInfo *method)
{
  return ProgramEffectManager__IsBusy_41420772(this->fields.baseSpecialEffect, n, 0LL);
}


void __fastcall UIScriptChara__MoveAlpha(UIScriptChara_o *this, float duration, float a, const MethodInfo *method)
{
  const MethodInfo *v4; // x2

  this->fields.isDisp = a > 0.0;
  UIScriptChara__RecoverShadowEffect(this, 0, v4);
}


void __fastcall UIScriptChara__MoveAlphaSpeed(UIScriptChara_o *this, float speed, float a, const MethodInfo *method)
{
  const MethodInfo *v4; // x2

  this->fields.isDisp = a > 0.0;
  UIScriptChara__RecoverShadowEffect(this, 0, v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptChara__MoveAttack(
        UIScriptChara_o *this,
        System_String_o *kind,
        float duration,
        UnityEngine_Vector3_o v,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v16; // x1
  TweenPosition_o *v17; // x20
  UnityEngine_GameObject_o *transform; // x0
  __int64 v19; // x1
  UnityEngine_GameObject_o *v20; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int64_t v27; // x1
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s1.4,4:s2.4,8:s3.4

  z = v.fields.z;
  y = v.fields.y;
  x = v.fields.x;
  if ( (byte_4B17EE9 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, kind, method);
    sub_1BCA7E0(&StringLiteral_6091/*"EndMoveAttack"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_22362/*"normal"*/, v13, v14);
    byte_4B17EE9 = 1;
  }
  UIScriptChara__StopMoveTween(this, (const MethodInfo *)kind);
  this->fields.isMove = 1;
  if ( duration <= 0.0 )
    duration = 0.5;
  System_String__op_Equality(kind, (System_String_o *)StringLiteral_22362/*"normal"*/, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v35.fields.x = x;
  v35.fields.y = y;
  v35.fields.z = z;
  v17 = TweenPosition__Begin(gameObject, duration, v35, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
  transform = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v17, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    if ( v17 )
    {
      v17->fields.method = 1;
      v20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v17->fields.eventReceiver = v20;
      sub_1BCA784((PartyOrganizationUtility_o *)&v17->fields.eventReceiver, (int64_t)v20, v21, v22, v23, v24, v25, v26);
      v27 = StringLiteral_6091/*"EndMoveAttack"*/;
      v17->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6091/*"EndMoveAttack"*/;
      sub_1BCA784((PartyOrganizationUtility_o *)&v17->fields.callWhenFinished, v27, v28, v29, v30, v31, v32, v33);
      return;
    }
LABEL_13:
    sub_1BCAA3C(transform, v19);
  }
  transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_13;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
  if ( !transform )
    goto LABEL_13;
  v34.fields.x = x;
  v34.fields.y = y;
  v34.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v34, 0LL);
  this->fields.isMove = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptChara__MovePosition(
        UIScriptChara_o *this,
        float duration,
        UnityEngine_Vector3_o v,
        const MethodInfo *method)
{
  __int64 v4; // x2
  float z; // s8
  float y; // s9
  float x; // s10
  __int64 v10; // x1
  __int64 v11; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v13; // x1
  TweenPosition_o *v14; // x20
  UnityEngine_GameObject_o *transform; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s1.4,4:s2.4,8:s3.4

  z = v.fields.z;
  y = v.fields.y;
  x = v.fields.x;
  if ( (byte_4B17EE0 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v4);
    sub_1BCA7E0(&StringLiteral_6089/*"EndMove"*/, v10, v11);
    byte_4B17EE0 = 1;
  }
  UIScriptChara__StopMoveTween(this, method);
  this->fields.isMove = 1;
  if ( duration > 0.0 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v31.fields.x = x;
    v31.fields.y = y;
    v31.fields.z = z;
    v14 = TweenPosition__Begin(gameObject, duration, v31, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v14, 0LL, 0LL) )
    {
      transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( v14 )
      {
        v14->fields.eventReceiver = transform;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&v14->fields.eventReceiver,
          (int64_t)transform,
          v17,
          v18,
          v19,
          v20,
          v21,
          v22);
        v23 = StringLiteral_6089/*"EndMove"*/;
        v14->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6089/*"EndMove"*/;
        sub_1BCA784((PartyOrganizationUtility_o *)&v14->fields.callWhenFinished, v23, v24, v25, v26, v27, v28, v29);
        return;
      }
LABEL_12:
      sub_1BCAA3C(transform, v16);
    }
  }
  transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_12;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
  if ( !transform )
    goto LABEL_12;
  v30.fields.x = x;
  v30.fields.y = y;
  v30.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v30, 0LL);
  this->fields.isMove = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptChara__MovePositionEase(
        UIScriptChara_o *this,
        float time,
        UnityEngine_Vector3_o vector,
        System_String_o *easetype,
        const MethodInfo *method)
{
  float z; // s11
  float y; // s9
  float x; // s10
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  System_Collections_Hashtable_o *v36; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v38; // x1
  __int64 v39; // x0
  __int64 v40; // x0
  __int64 v41; // x0
  __int64 v42; // x0
  __int64 v43; // x1
  UnityEngine_GameObject_o *v44; // x19
  float v45; // [xsp+Ch] [xbp-64h] BYREF
  float v46; // [xsp+10h] [xbp-60h] BYREF
  float v47; // [xsp+14h] [xbp-5Ch] BYREF
  int v48; // [xsp+18h] [xbp-58h] BYREF
  char v49[4]; // [xsp+1Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4

  z = vector.fields.z;
  y = vector.fields.y;
  x = vector.fields.x;
  if ( (byte_4B17EE1 & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, easetype, method);
    sub_1BCA7E0(&System_Collections_Hashtable_TypeInfo, v11, v12);
    sub_1BCA7E0(&float_TypeInfo, v13, v14);
    sub_1BCA7E0(&StringLiteral_24997/*"x"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_18949/*"easetype"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_24178/*"time"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_6089/*"EndMove"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_18739/*"delay"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_25101/*"y"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_21024/*"isLocal"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_22513/*"oncomplete"*/, v29, v30);
    sub_1BCA7E0(&iTween_TypeInfo, v31, v32);
    byte_4B17EE1 = 1;
  }
  UIScriptChara__StopMoveTween(this, (const MethodInfo *)easetype);
  this->fields.isMove = 1;
  if ( time <= 0.0 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
      if ( gameObject )
      {
        v50.fields.x = x;
        v50.fields.y = y;
        v50.fields.z = z;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v50, 0LL);
        this->fields.isMove = 0;
        return;
      }
    }
LABEL_11:
    sub_1BCAA3C(gameObject, v38);
  }
  v36 = (System_Collections_Hashtable_o *)sub_1BCAA2C(System_Collections_Hashtable_TypeInfo, v33, v34, v35);
  System_Collections_Hashtable___ctor_62980980(v36, 0LL);
  v49[0] = 1;
  gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v49);
  if ( !v36 )
    goto LABEL_11;
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v36->klass->vtable._23_Add.method)(
    v36,
    StringLiteral_21024/*"isLocal"*/,
    gameObject,
    v36->klass->vtable._24_Clear.methodPtr);
  v48 = 0;
  v39 = j_il2cpp_value_box_0(float_TypeInfo, &v48);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v36->klass->vtable._23_Add.method)(
    v36,
    StringLiteral_18739/*"delay"*/,
    v39,
    v36->klass->vtable._24_Clear.methodPtr);
  v47 = x;
  v40 = j_il2cpp_value_box_0(float_TypeInfo, &v47);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, void *, __int64, Il2CppMethodPointer))v36->klass->vtable._23_Add.method)(
    v36,
    StringLiteral_24997/*"x"*/,
    v40,
    v36->klass->vtable._24_Clear.methodPtr);
  v46 = y;
  v41 = j_il2cpp_value_box_0(float_TypeInfo, &v46);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v36->klass->vtable._23_Add.method)(
    v36,
    StringLiteral_25101/*"y"*/,
    v41,
    v36->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, System_String_o *, Il2CppMethodPointer))v36->klass->vtable._23_Add.method)(
    v36,
    StringLiteral_18949/*"easetype"*/,
    easetype,
    v36->klass->vtable._24_Clear.methodPtr);
  v45 = time;
  v42 = j_il2cpp_value_box_0(float_TypeInfo, &v45);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v36->klass->vtable._23_Add.method)(
    v36,
    StringLiteral_24178/*"time"*/,
    v42,
    v36->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v36->klass->vtable._23_Add.method)(
    v36,
    StringLiteral_22513/*"oncomplete"*/,
    StringLiteral_6089/*"EndMove"*/,
    v36->klass->vtable._24_Clear.methodPtr);
  v44 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v43);
  iTween__MoveTo_60939552(v44, v36, 0LL);
}


void __fastcall UIScriptChara__MoveReturnPosition(UIScriptChara_o *this, float duration, const MethodInfo *method)
{
  __int64 v3; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  const MethodInfo *v8; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1
  TweenPosition_o *v11; // x20
  UnityEngine_GameObject_o *v12; // x0
  __int64 v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int64_t v20; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7

  if ( (byte_4B17EE2 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v3);
    sub_1BCA7E0(&StringLiteral_6092/*"EndMoveReturn"*/, v6, v7);
    byte_4B17EE2 = 1;
  }
  UIScriptChara__StopMoveTween(this, method);
  this->fields.isMove = 1;
  if ( duration <= 0.0 )
    goto LABEL_9;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v11 = TweenPosition__Begin(gameObject, duration, this->fields.basePosition, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v11, 0LL, 0LL) )
  {
    v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !v11 )
      sub_1BCAA3C(v12, v13);
    v11->fields.eventReceiver = v12;
    sub_1BCA784((PartyOrganizationUtility_o *)&v11->fields.eventReceiver, (int64_t)v12, v14, v15, v16, v17, v18, v19);
    v20 = StringLiteral_6092/*"EndMoveReturn"*/;
    v11->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6092/*"EndMoveReturn"*/;
    sub_1BCA784((PartyOrganizationUtility_o *)&v11->fields.callWhenFinished, v20, v21, v22, v23, v24, v25, v26);
  }
  else
  {
LABEL_9:
    UIScriptChara__EndMoveReturn(this, v8);
  }
}


void __fastcall UIScriptChara__MoveReturnPositionEase(
        UIScriptChara_o *this,
        float x,
        float y,
        float time,
        System_String_o *startEaseType,
        System_String_o *returnEaseType,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v36; // x1
  const MethodInfo *v37; // x1
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  System_Collections_Hashtable_o *v47; // x21
  __int64 v48; // x0
  __int64 v49; // x0
  __int64 v50; // x0
  __int64 v51; // x0
  __int64 v52; // x1
  UnityEngine_GameObject_o *v53; // x19
  float returnDuration; // [xsp+Ch] [xbp-54h] BYREF
  float v55; // [xsp+10h] [xbp-50h] BYREF
  float v56; // [xsp+14h] [xbp-4Ch] BYREF
  int v57; // [xsp+18h] [xbp-48h] BYREF
  char v58[4]; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4B17EE4 & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, startEaseType, returnEaseType);
    sub_1BCA7E0(&System_Collections_Hashtable_TypeInfo, v13, v14);
    sub_1BCA7E0(&float_TypeInfo, v15, v16);
    sub_1BCA7E0(&StringLiteral_24997/*"x"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_18949/*"easetype"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_6093/*"EndMoveReturnEaseHalf"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_24178/*"time"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_18739/*"delay"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_25101/*"y"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_21024/*"isLocal"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_22513/*"oncomplete"*/, v31, v32);
    sub_1BCA7E0(&iTween_TypeInfo, v33, v34);
    byte_4B17EE4 = 1;
  }
  UIScriptChara__StopMoveTween(this, (const MethodInfo *)startEaseType);
  this->fields.isMove = 1;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_11;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_11;
  this->fields.basePosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0LL);
  if ( time <= 0.0 )
  {
    UIScriptChara__EndMoveReturn(this, v37);
    return;
  }
  this->fields.returnEaseType = returnEaseType;
  this->fields.returnDuration = time * 0.5;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.returnEaseType,
    (int64_t)returnEaseType,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  v47 = (System_Collections_Hashtable_o *)sub_1BCAA2C(System_Collections_Hashtable_TypeInfo, v44, v45, v46);
  System_Collections_Hashtable___ctor_62980980(v47, 0LL);
  v58[0] = 1;
  gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v58);
  if ( !v47 )
LABEL_11:
    sub_1BCAA3C(gameObject, v36);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v47->klass->vtable._23_Add.method)(
    v47,
    StringLiteral_21024/*"isLocal"*/,
    gameObject,
    v47->klass->vtable._24_Clear.methodPtr);
  v57 = 0;
  v48 = j_il2cpp_value_box_0(float_TypeInfo, &v57);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v47->klass->vtable._23_Add.method)(
    v47,
    StringLiteral_18739/*"delay"*/,
    v48,
    v47->klass->vtable._24_Clear.methodPtr);
  v56 = x;
  v49 = j_il2cpp_value_box_0(float_TypeInfo, &v56);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, void *, __int64, Il2CppMethodPointer))v47->klass->vtable._23_Add.method)(
    v47,
    StringLiteral_24997/*"x"*/,
    v49,
    v47->klass->vtable._24_Clear.methodPtr);
  v55 = y;
  v50 = j_il2cpp_value_box_0(float_TypeInfo, &v55);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v47->klass->vtable._23_Add.method)(
    v47,
    StringLiteral_25101/*"y"*/,
    v50,
    v47->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, System_String_o *, Il2CppMethodPointer))v47->klass->vtable._23_Add.method)(
    v47,
    StringLiteral_18949/*"easetype"*/,
    startEaseType,
    v47->klass->vtable._24_Clear.methodPtr);
  returnDuration = this->fields.returnDuration;
  v51 = j_il2cpp_value_box_0(float_TypeInfo, &returnDuration);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v47->klass->vtable._23_Add.method)(
    v47,
    StringLiteral_24178/*"time"*/,
    v51,
    v47->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v47->klass->vtable._23_Add.method)(
    v47,
    StringLiteral_22513/*"oncomplete"*/,
    StringLiteral_6093/*"EndMoveReturnEaseHalf"*/,
    v47->klass->vtable._24_Clear.methodPtr);
  v53 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v52);
  iTween__MoveTo_60939552(v53, v47, 0LL);
}


void __fastcall UIScriptChara__MoveReturnPositionEase_42488268(
        UIScriptChara_o *this,
        float time,
        System_String_o *returnEaseType,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  const MethodInfo *v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  System_Collections_Hashtable_o *v32; // x21
  __int64 v33; // x0
  __int64 v34; // x1
  __int64 v35; // x0
  __int64 v36; // x0
  __int64 v37; // x0
  __int64 v38; // x0
  __int64 v39; // x1
  UnityEngine_GameObject_o *gameObject; // x19
  float v41; // [xsp+Ch] [xbp-44h] BYREF
  float y; // [xsp+10h] [xbp-40h] BYREF
  float x; // [xsp+14h] [xbp-3Ch] BYREF
  int v44; // [xsp+18h] [xbp-38h] BYREF
  char v45[4]; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4B17EE5 & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, returnEaseType, method);
    sub_1BCA7E0(&System_Collections_Hashtable_TypeInfo, v7, v8);
    sub_1BCA7E0(&float_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_24997/*"x"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_18949/*"easetype"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_24178/*"time"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_18739/*"delay"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_6092/*"EndMoveReturn"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_25101/*"y"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_21024/*"isLocal"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_22513/*"oncomplete"*/, v25, v26);
    sub_1BCA7E0(&iTween_TypeInfo, v27, v28);
    byte_4B17EE5 = 1;
  }
  UIScriptChara__StopMoveTween(this, (const MethodInfo *)returnEaseType);
  this->fields.isMove = 1;
  if ( time <= 0.0 )
  {
    UIScriptChara__EndMoveReturn(this, v29);
  }
  else
  {
    v32 = (System_Collections_Hashtable_o *)sub_1BCAA2C(System_Collections_Hashtable_TypeInfo, v29, v30, v31);
    System_Collections_Hashtable___ctor_62980980(v32, 0LL);
    v45[0] = 1;
    v33 = j_il2cpp_value_box_0(bool_TypeInfo, v45);
    if ( !v32 )
      sub_1BCAA3C(v33, v34);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v32->klass->vtable._23_Add.method)(
      v32,
      StringLiteral_21024/*"isLocal"*/,
      v33,
      v32->klass->vtable._24_Clear.methodPtr);
    v44 = 0;
    v35 = j_il2cpp_value_box_0(float_TypeInfo, &v44);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v32->klass->vtable._23_Add.method)(
      v32,
      StringLiteral_18739/*"delay"*/,
      v35,
      v32->klass->vtable._24_Clear.methodPtr);
    x = this->fields.basePosition.fields.x;
    v36 = j_il2cpp_value_box_0(float_TypeInfo, &x);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, void *, __int64, Il2CppMethodPointer))v32->klass->vtable._23_Add.method)(
      v32,
      StringLiteral_24997/*"x"*/,
      v36,
      v32->klass->vtable._24_Clear.methodPtr);
    y = this->fields.basePosition.fields.y;
    v37 = j_il2cpp_value_box_0(float_TypeInfo, &y);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v32->klass->vtable._23_Add.method)(
      v32,
      StringLiteral_25101/*"y"*/,
      v37,
      v32->klass->vtable._24_Clear.methodPtr);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, System_String_o *, Il2CppMethodPointer))v32->klass->vtable._23_Add.method)(
      v32,
      StringLiteral_18949/*"easetype"*/,
      returnEaseType,
      v32->klass->vtable._24_Clear.methodPtr);
    v41 = time;
    v38 = j_il2cpp_value_box_0(float_TypeInfo, &v41);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v32->klass->vtable._23_Add.method)(
      v32,
      StringLiteral_24178/*"time"*/,
      v38,
      v32->klass->vtable._24_Clear.methodPtr);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v32->klass->vtable._23_Add.method)(
      v32,
      StringLiteral_22513/*"oncomplete"*/,
      StringLiteral_6092/*"EndMoveReturn"*/,
      v32->klass->vtable._24_Clear.methodPtr);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v39);
    iTween__MoveTo_60939552(gameObject, v32, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptChara__MoveReturnPosition_42487072(
        UIScriptChara_o *this,
        float duration,
        UnityEngine_Vector3_o v,
        const MethodInfo *method)
{
  __int64 v4; // x2
  float z; // s8
  float y; // s9
  float x; // s10
  __int64 v10; // x1
  __int64 v11; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x1
  UnityEngine_GameObject_o *v15; // x0
  __int64 v16; // x1
  TweenPosition_o *v17; // x20
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  UnityEngine_Vector3_o v31; // 0:s1.4,4:s2.4,8:s3.4

  z = v.fields.z;
  y = v.fields.y;
  x = v.fields.x;
  if ( (byte_4B17EE3 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v4);
    sub_1BCA7E0(&StringLiteral_6094/*"EndMoveReturnHalf"*/, v10, v11);
    byte_4B17EE3 = 1;
  }
  UIScriptChara__StopMoveTween(this, method);
  this->fields.isMove = 1;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_12;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_12;
  this->fields.basePosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0LL);
  if ( duration > 0.0 )
  {
    this->fields.returnDuration = duration * 0.5;
    v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v31.fields.x = x;
    v31.fields.y = y;
    v31.fields.z = z;
    v17 = TweenPosition__Begin(v15, this->fields.returnDuration, v31, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v17, 0LL, 0LL) )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( v17 )
      {
        v17->fields.eventReceiver = gameObject;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&v17->fields.eventReceiver,
          (int64_t)gameObject,
          v18,
          v19,
          v20,
          v21,
          v22,
          v23);
        v24 = StringLiteral_6094/*"EndMoveReturnHalf"*/;
        v17->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6094/*"EndMoveReturnHalf"*/;
        sub_1BCA784((PartyOrganizationUtility_o *)&v17->fields.callWhenFinished, v24, v25, v26, v27, v28, v29, v30);
        return;
      }
LABEL_12:
      sub_1BCAA3C(gameObject, v13);
    }
  }
  UIScriptChara__EndMoveReturn(this, v14);
}


void __fastcall UIScriptChara__MoveScale(UIScriptChara_o *this, float duration, float s, const MethodInfo *method)
{
  __int64 v4; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  const MethodInfo *v10; // x1
  UnityEngine_Component_o *baseScale; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v13; // x1
  TweenScale_o *v14; // x20
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7

  if ( (byte_4B17EE7 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v4);
    sub_1BCA7E0(&StringLiteral_6095/*"EndMoveScale"*/, v8, v9);
    byte_4B17EE7 = 1;
  }
  UIScriptChara__StopMoveScaleTween(this, method);
  this->fields.baseScaleSize.fields.x = s;
  this->fields.baseScaleSize.fields.y = s;
  this->fields.isMove = 1;
  this->fields.baseScaleSize.fields.z = 1.0;
  if ( duration > 0.0 )
  {
    baseScale = (UnityEngine_Component_o *)this->fields.baseScale;
    if ( !baseScale )
      goto LABEL_11;
    gameObject = UnityEngine_Component__get_gameObject(baseScale, 0LL);
    v14 = TweenScale__Begin(gameObject, duration, this->fields.baseScaleSize, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v14, 0LL, 0LL) )
    {
      baseScale = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( v14 )
      {
        v14->fields.eventReceiver = (struct UnityEngine_GameObject_o *)baseScale;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&v14->fields.eventReceiver,
          (int64_t)baseScale,
          v15,
          v16,
          v17,
          v18,
          v19,
          v20);
        v21 = StringLiteral_6095/*"EndMoveScale"*/;
        v14->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6095/*"EndMoveScale"*/;
        sub_1BCA784((PartyOrganizationUtility_o *)&v14->fields.callWhenFinished, v21, v22, v23, v24, v25, v26, v27);
        return;
      }
LABEL_11:
      sub_1BCAA3C(baseScale, v10);
    }
  }
  UIScriptChara__EndMoveScale(this, v10);
}


void __fastcall UIScriptChara__MoveScaleEase(
        UIScriptChara_o *this,
        float scale,
        float time,
        System_String_o *easetype,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  const MethodInfo *v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  System_Collections_Hashtable_o *v34; // x21
  UnityEngine_Component_o *baseScale; // x0
  __int64 v36; // x1
  __int64 v37; // x0
  __int64 v38; // x0
  __int64 v39; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v41; // x1
  UnityEngine_GameObject_o *v42; // x19
  float v43; // [xsp+0h] [xbp-50h] BYREF
  float y; // [xsp+4h] [xbp-4Ch] BYREF
  float x; // [xsp+8h] [xbp-48h] BYREF
  char v46[4]; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B17EE8 & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, easetype, method);
    sub_1BCA7E0(&System_Collections_Hashtable_TypeInfo, v9, v10);
    sub_1BCA7E0(&float_TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_24997/*"x"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_18949/*"easetype"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_24178/*"time"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_22515/*"oncompletetarget"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_25101/*"y"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_21024/*"isLocal"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_22513/*"oncomplete"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_6095/*"EndMoveScale"*/, v27, v28);
    sub_1BCA7E0(&iTween_TypeInfo, v29, v30);
    byte_4B17EE8 = 1;
  }
  UIScriptChara__StopMoveScaleTween(this, (const MethodInfo *)easetype);
  this->fields.baseScaleSize.fields.x = scale;
  this->fields.baseScaleSize.fields.y = scale;
  this->fields.isMove = 1;
  this->fields.baseScaleSize.fields.z = 1.0;
  if ( time <= 0.0 )
  {
    UIScriptChara__EndMoveScale(this, v31);
  }
  else
  {
    v34 = (System_Collections_Hashtable_o *)sub_1BCAA2C(System_Collections_Hashtable_TypeInfo, v31, v32, v33);
    System_Collections_Hashtable___ctor_62980980(v34, 0LL);
    v46[0] = 1;
    baseScale = (UnityEngine_Component_o *)j_il2cpp_value_box_0(bool_TypeInfo, v46);
    if ( !v34 )
      goto LABEL_10;
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_Component_o *, Il2CppMethodPointer))v34->klass->vtable._23_Add.method)(
      v34,
      StringLiteral_21024/*"isLocal"*/,
      baseScale,
      v34->klass->vtable._24_Clear.methodPtr);
    x = this->fields.baseScaleSize.fields.x;
    v37 = j_il2cpp_value_box_0(float_TypeInfo, &x);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, void *, __int64, Il2CppMethodPointer))v34->klass->vtable._23_Add.method)(
      v34,
      StringLiteral_24997/*"x"*/,
      v37,
      v34->klass->vtable._24_Clear.methodPtr);
    y = this->fields.baseScaleSize.fields.y;
    v38 = j_il2cpp_value_box_0(float_TypeInfo, &y);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v34->klass->vtable._23_Add.method)(
      v34,
      StringLiteral_25101/*"y"*/,
      v38,
      v34->klass->vtable._24_Clear.methodPtr);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, System_String_o *, Il2CppMethodPointer))v34->klass->vtable._23_Add.method)(
      v34,
      StringLiteral_18949/*"easetype"*/,
      easetype,
      v34->klass->vtable._24_Clear.methodPtr);
    v43 = time;
    v39 = j_il2cpp_value_box_0(float_TypeInfo, &v43);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v34->klass->vtable._23_Add.method)(
      v34,
      StringLiteral_24178/*"time"*/,
      v39,
      v34->klass->vtable._24_Clear.methodPtr);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v34->klass->vtable._23_Add.method)(
      v34,
      StringLiteral_22513/*"oncomplete"*/,
      StringLiteral_6095/*"EndMoveScale"*/,
      v34->klass->vtable._24_Clear.methodPtr);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v34->klass->vtable._23_Add.method)(
      v34,
      StringLiteral_22515/*"oncompletetarget"*/,
      gameObject,
      v34->klass->vtable._24_Clear.methodPtr);
    baseScale = (UnityEngine_Component_o *)this->fields.baseScale;
    if ( !baseScale )
LABEL_10:
      sub_1BCAA3C(baseScale, v36);
    v42 = UnityEngine_Component__get_gameObject(baseScale, 0LL);
    if ( !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v41);
    iTween__ScaleTo_60945080(v42, v34, 0LL);
  }
}


void __fastcall UIScriptChara__OnShake(UIScriptChara_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Transform_o *baseShake; // x20
  float v5; // s8
  __int64 v6; // x0
  __int64 v7; // x1
  float v8; // s0
  __int64 v9; // x2
  UnityEngine_Transform_o *v10; // x20
  UnityEngine_Vector3_o v11; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B17EED & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_10087/*"OnShake"*/, method, v2);
    byte_4B17EED = 1;
  }
  if ( this->fields.shakeCycle > 0.0
    && (this->fields.shakeTime == 0.0 || UnityEngine_Time__get_time(0LL) < this->fields.shakeTime) )
  {
    baseShake = this->fields.baseShake;
    v5 = UnityEngine_Random__Range(-this->fields.shakeX, this->fields.shakeX, 0LL);
    v8 = UnityEngine_Random__Range(-this->fields.shakeY, this->fields.shakeY, 0LL);
    if ( baseShake )
    {
      v11.fields.y = v8;
      v11.fields.z = 0.0;
      v11.fields.x = v5;
      UnityEngine_Transform__set_localPosition(baseShake, v11, 0LL);
      UnityEngine_MonoBehaviour__Invoke(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_10087/*"OnShake"*/,
        this->fields.shakeCycle,
        0LL);
      return;
    }
LABEL_12:
    sub_1BCAA3C(v6, v7);
  }
  UnityEngine_MonoBehaviour__CancelInvoke_70138824(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_10087/*"OnShake"*/,
    0LL);
  v10 = this->fields.baseShake;
  if ( !byte_4B109C1 )
  {
    v6 = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v7, v9);
    byte_4B109C1 = 1;
  }
  if ( !v10 )
    goto LABEL_12;
  UnityEngine_Transform__set_localPosition(v10, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  this->fields.shakeCycle = 0.0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptChara__RecoverShadowEffect(UIScriptChara_o *this, bool isSkip, const MethodInfo *method)
{
  if ( this->fields.isShadow )
    UIScriptChara__StartShadowEffect(this, (const MethodInfo *)isSkip);
  else
    UIScriptChara__StopShadowEffect(this, isSkip, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptChara__ResumeBackEffect(UIScriptChara_o *this, bool isSkip, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffectBack; // x20

  if ( (byte_4B17EFF & 1) == 0 )
  {
    sub_1BCA7E0(&CommonEffectManager_TypeInfo, isSkip, method);
    byte_4B17EFF = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, isSkip);
  CommonEffectManager__Resume(baseEffectBack, isSkip, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptChara__ResumeBackEffect_42496336(
        UIScriptChara_o *this,
        System_String_o *n,
        bool isSkip,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffectBack; // x21

  if ( (byte_4B17F00 & 1) == 0 )
  {
    sub_1BCA7E0(&CommonEffectManager_TypeInfo, n, isSkip);
    byte_4B17F00 = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, n);
  CommonEffectManager__Resume_41403396(baseEffectBack, n, isSkip, 0LL);
}


void __fastcall UIScriptChara__ResumeCutin(UIScriptChara_o *this, bool isSkip, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptChara__ResumeEffect(UIScriptChara_o *this, bool isSkip, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffect; // x20

  if ( (byte_4B17EF6 & 1) == 0 )
  {
    sub_1BCA7E0(&CommonEffectManager_TypeInfo, isSkip, method);
    byte_4B17EF6 = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, isSkip);
  CommonEffectManager__Resume(baseEffect, isSkip, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptChara__ResumeEffect_42495000(
        UIScriptChara_o *this,
        System_String_o *n,
        bool isSkip,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffect; // x21

  if ( (byte_4B17EF7 & 1) == 0 )
  {
    sub_1BCA7E0(&CommonEffectManager_TypeInfo, n, isSkip);
    byte_4B17EF7 = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, n);
  CommonEffectManager__Resume_41403396(baseEffect, n, isSkip, 0LL);
}


void __fastcall UIScriptChara__ResumeSpecialEffect(UIScriptChara_o *this, bool isSkip, const MethodInfo *method)
{
  ProgramEffectManager__Resume(this->fields.baseSpecialEffect, isSkip, 0LL);
}


void __fastcall UIScriptChara__ResumeSpecialEffect_42493972(
        UIScriptChara_o *this,
        System_String_o *n,
        bool isSkip,
        const MethodInfo *method)
{
  ProgramEffectManager__Resume_41423840(this->fields.baseSpecialEffect, n, isSkip, 0LL);
}


void __fastcall UIScriptChara__SetAlpha(UIScriptChara_o *this, float a, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  this->fields.isDisp = a > 0.0;
  UIScriptChara__RecoverShadowEffect(this, 0, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptChara__SetBackEffect(
        UIScriptChara_o *this,
        System_String_o *n,
        bool isSkip,
        bool isPause,
        int32_t flip,
        bool isOnSublayer,
        const MethodInfo *method)
{
  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, n, isSkip);
    byte_4B109C1 = 1;
  }
  UIScriptChara__SetBackEffect_42495888(
    this,
    n,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    isSkip,
    isPause,
    flip,
    isOnSublayer,
    method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptChara__SetBackEffect_42495888(
        UIScriptChara_o *this,
        System_String_o *n,
        UnityEngine_Vector3_o p,
        bool isSkip,
        bool isPause,
        int32_t flip,
        bool isOnSublayer,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  UnityEngine_GameObject_o *baseEffectBack; // x23
  CommonEffectLoadComponent_LoadEndHandler_o *v22; // x24
  __int64 v23; // x1
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4

  z = p.fields.z;
  y = p.fields.y;
  x = p.fields.x;
  if ( (byte_4B17EFE & 1) == 0 )
  {
    sub_1BCA7E0(&CommonEffectManager_TypeInfo, n, isSkip);
    sub_1BCA7E0(&CommonEffectLoadComponent_LoadEndHandler_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_UIScriptChara__SetBackEffect_g__Callback_124_0__, v19, v20);
    byte_4B17EFE = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( isOnSublayer )
  {
    v22 = (CommonEffectLoadComponent_LoadEndHandler_o *)sub_1BCAA2C(
                                                          CommonEffectLoadComponent_LoadEndHandler_TypeInfo,
                                                          n,
                                                          isSkip,
                                                          isPause);
    CommonEffectLoadComponent_LoadEndHandler___ctor(
      v22,
      0LL,
      Method_UIScriptChara__SetBackEffect_g__Callback_124_0__,
      0LL);
    if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, v23);
    v24.fields.y = y;
    v24.fields.z = z;
    v24.fields.x = x;
    CommonEffectManager__Create_41401908(baseEffectBack, n, v24, v22, isSkip, isPause, flip, 0LL);
  }
  else
  {
    if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, n);
    v25.fields.y = y;
    v25.fields.z = z;
    v25.fields.x = x;
    CommonEffectManager__Create_41401716(baseEffectBack, n, v25, isSkip, isPause, flip, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptChara__SetBasePosition(
        UIScriptChara_o *this,
        UnityEngine_Vector3_o v,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_Transform_o *transform; // x0
  __int64 v8; // x1
  UnityEngine_Vector3_o v9; // 0:s0.4,4:s1.4,8:s2.4

  z = v.fields.z;
  y = v.fields.y;
  x = v.fields.x;
  UIScriptChara__StopMoveTween(this, method);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  this->fields.basePosition.fields.x = x;
  this->fields.basePosition.fields.y = y;
  this->fields.basePosition.fields.z = z;
  if ( !transform )
    sub_1BCAA3C(0LL, v8);
  v9.fields.x = x;
  v9.fields.y = y;
  v9.fields.z = z;
  UnityEngine_Transform__set_localPosition(transform, v9, 0LL);
  this->fields.isMove = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptChara__SetCharacter(
        UIScriptChara_o *this,
        System_String_o *imageName,
        int32_t faceType,
        System_Action_o *callback,
        const MethodInfo *method)
{
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.setCallback = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.setCallback,
    (int64_t)callback,
    *(int64_t *)&faceType,
    (int32_t)callback,
    (System_String_o *)method,
    v5,
    v6,
    v7);
}


void __fastcall UIScriptChara__SetCutin(
        UIScriptChara_o *this,
        System_String_o *n,
        float time,
        float mgd,
        bool isSkip,
        bool isPause,
        const MethodInfo *method)
{
  ;
}


void __fastcall UIScriptChara__SetCutout(UIScriptChara_o *this, float time, bool isSkip, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptChara__SetDepth(UIScriptChara_o *this, int32_t d, const MethodInfo *method)
{
  UnityEngine_Transform_o *baseDepth; // x0
  int v6; // s0
  float v8; // s2

  baseDepth = this->fields.baseDepth;
  if ( !baseDepth
    || (*(UnityEngine_Vector3_o *)&v6 = UnityEngine_Transform__get_localPosition(baseDepth, 0LL),
        (baseDepth = this->fields.baseDepth) == 0LL) )
  {
    sub_1BCAA3C(baseDepth, *(_QWORD *)&d);
  }
  v8 = (float)-d * 10.0;
  UnityEngine_Transform__set_localPosition(baseDepth, *(UnityEngine_Vector3_o *)&v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptChara__SetEffect(
        UIScriptChara_o *this,
        System_String_o *n,
        bool isSkip,
        bool isPause,
        int32_t flip,
        bool isOnSublayer,
        const MethodInfo *method)
{
  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, n, isSkip);
    byte_4B109C1 = 1;
  }
  UIScriptChara__SetEffect_42494552(
    this,
    n,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    isSkip,
    isPause,
    flip,
    isOnSublayer,
    method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptChara__SetEffectEdgeBlur(
        UIScriptChara_o *this,
        System_String_o *effectName,
        UnityEngine_Color_o color,
        UnityEngine_Color_o particleColor,
        bool isSkip,
        bool isPause,
        int32_t flip,
        int32_t level,
        float thick,
        const MethodInfo *method)
{
  float b; // s9
  float g; // s10
  float r; // s11
  float v17; // s12
  float v18; // s13
  float v19; // s14
  float v20; // s15
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x25
  __int64 v32; // x0
  __int64 v33; // x1
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  int64_t v40; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  __int64 v47; // x1
  UnityEngine_Object_o *v48; // x24
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  CommonEffectLoadComponent_LoadEndHandler_o *v52; // x24
  __int64 v53; // x1
  __int64 v54; // x2
  UnityEngine_GameObject_o *baseEffect; // x23
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float y; // s9
  float x; // s10
  float z; // s8
  float a; // [xsp+4Ch] [xbp-44h]
  UnityEngine_Vector3_o v61; // 0:s0.4,4:s1.4,8:s2.4

  a = particleColor.fields.a;
  b = particleColor.fields.b;
  g = particleColor.fields.g;
  r = particleColor.fields.r;
  v17 = color.fields.a;
  v18 = color.fields.b;
  v19 = color.fields.g;
  v20 = color.fields.r;
  if ( (byte_4B17EDC & 1) == 0 )
  {
    sub_1BCA7E0(&CommonEffectManager_TypeInfo, effectName, isSkip);
    sub_1BCA7E0(&CommonEffectLoadComponent_LoadEndHandler_TypeInfo, v23, v24);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_UIScriptChara___c__DisplayClass39_0__SetEffectEdgeBlur_b__0__, v27, v28);
    sub_1BCA7E0(&UIScriptChara___c__DisplayClass39_0_TypeInfo, v29, v30);
    byte_4B17EDC = 1;
  }
  v31 = sub_1BCAA2C(UIScriptChara___c__DisplayClass39_0_TypeInfo, effectName, isSkip, isPause);
  System_Object___ctor((Il2CppObject *)v31, 0LL);
  if ( !v31 )
    sub_1BCAA3C(v32, v33);
  *(_QWORD *)(v31 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v31 + 16), (int64_t)this, v34, v35, v36, v37, v38, v39);
  *(float *)(v31 + 24) = v20;
  *(float *)(v31 + 28) = v19;
  *(float *)(v31 + 32) = v18;
  *(float *)(v31 + 36) = v17;
  *(float *)(v31 + 40) = r;
  *(float *)(v31 + 44) = g;
  *(float *)(v31 + 48) = b;
  *(float *)(v31 + 52) = a;
  *(float *)(v31 + 64) = thick;
  *(_DWORD *)(v31 + 68) = level;
  v40 = ((__int64 (__fastcall *)(UIScriptChara_o *, Il2CppMethodPointer))this->klass->vtable._7_GetBodySubTexture.method)(
          this,
          this->klass->vtable._8_GetBody.methodPtr);
  *(_QWORD *)(v31 + 56) = v40;
  sub_1BCA784((PartyOrganizationUtility_o *)(v31 + 56), v40, v41, v42, v43, v44, v45, v46);
  v48 = *(UnityEngine_Object_o **)(v31 + 56);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v47);
  if ( !UnityEngine_Object__op_Equality(v48, 0LL, 0LL) )
  {
    v52 = (CommonEffectLoadComponent_LoadEndHandler_o *)sub_1BCAA2C(
                                                          CommonEffectLoadComponent_LoadEndHandler_TypeInfo,
                                                          v49,
                                                          v50,
                                                          v51);
    CommonEffectLoadComponent_LoadEndHandler___ctor(
      v52,
      (Il2CppObject *)v31,
      Method_UIScriptChara___c__DisplayClass39_0__SetEffectEdgeBlur_b__0__,
      0LL);
    baseEffect = this->fields.baseEffect;
    if ( !byte_4B109C1 )
    {
      sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v53, v54);
      byte_4B109C1 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    x = static_fields->zeroVector.fields.x;
    y = static_fields->zeroVector.fields.y;
    z = static_fields->zeroVector.fields.z;
    if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, v53);
    v61.fields.x = x;
    v61.fields.y = y;
    v61.fields.z = z;
    CommonEffectManager__Create_41401908(baseEffect, effectName, v61, v52, isSkip, isPause, flip, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptChara__SetEffect_42494552(
        UIScriptChara_o *this,
        System_String_o *n,
        UnityEngine_Vector3_o p,
        bool isSkip,
        bool isPause,
        int32_t flip,
        bool isOnSublayer,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  UnityEngine_GameObject_o *baseEffect; // x23
  CommonEffectLoadComponent_LoadEndHandler_o *v22; // x24
  __int64 v23; // x1
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4

  z = p.fields.z;
  y = p.fields.y;
  x = p.fields.x;
  if ( (byte_4B17EF5 & 1) == 0 )
  {
    sub_1BCA7E0(&CommonEffectManager_TypeInfo, n, isSkip);
    sub_1BCA7E0(&CommonEffectLoadComponent_LoadEndHandler_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_UIScriptChara__SetEffect_g__Callback_114_0__, v19, v20);
    byte_4B17EF5 = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( isOnSublayer )
  {
    v22 = (CommonEffectLoadComponent_LoadEndHandler_o *)sub_1BCAA2C(
                                                          CommonEffectLoadComponent_LoadEndHandler_TypeInfo,
                                                          n,
                                                          isSkip,
                                                          isPause);
    CommonEffectLoadComponent_LoadEndHandler___ctor(v22, 0LL, Method_UIScriptChara__SetEffect_g__Callback_114_0__, 0LL);
    if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, v23);
    v24.fields.y = y;
    v24.fields.z = z;
    v24.fields.x = x;
    CommonEffectManager__Create_41401908(baseEffect, n, v24, v22, isSkip, isPause, flip, 0LL);
  }
  else
  {
    if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, n);
    v25.fields.y = y;
    v25.fields.z = z;
    v25.fields.x = x;
    CommonEffectManager__Create_41401716(baseEffect, n, v25, isSkip, isPause, flip, 0LL);
  }
}


void __fastcall UIScriptChara__SetFace(
        UIScriptChara_o *this,
        int32_t faceType,
        float fadeTime,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptChara__SetFilter(
        UIScriptChara_o *this,
        System_String_o *filterName,
        UnityEngine_Color_o filterColor,
        const MethodInfo *method)
{
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  struct System_String_o **p_filterName; // x19
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11

  this->fields.filterName = filterName;
  p_filterName = &this->fields.filterName;
  a = filterColor.fields.a;
  b = filterColor.fields.b;
  g = filterColor.fields.g;
  r = filterColor.fields.r;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.filterName,
    (int64_t)filterName,
    (int64_t)method,
    v4,
    v5,
    v6,
    v7,
    v8);
  *((float *)p_filterName + 2) = r;
  *((float *)p_filterName + 3) = g;
  *((float *)p_filterName + 4) = b;
  *((float *)p_filterName + 5) = a;
}


void __fastcall UIScriptChara__SetFullScreenScaleType(UIScriptChara_o *this, int32_t type, const MethodInfo *method)
{
  ;
}


void __fastcall UIScriptChara__SetMaskInteraction(
        UIScriptChara_o *this,
        int32_t maskInteraction,
        const MethodInfo *method)
{
  ;
}


void __fastcall UIScriptChara__SetMaterial(UIScriptChara_o *this, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptChara__SetPosition(UIScriptChara_o *this, UnityEngine_Vector3_o v, const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_Transform_o *transform; // x0
  __int64 v7; // x1
  UnityEngine_Vector3_o v8; // 0:s0.4,4:s1.4,8:s2.4

  z = v.fields.z;
  y = v.fields.y;
  x = v.fields.x;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_1BCAA3C(0LL, v7);
  v8.fields.y = y;
  v8.fields.z = z;
  v8.fields.x = x;
  UnityEngine_Transform__set_localPosition(transform, v8, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UIScriptChara__SetRoll(
        UIScriptChara_o *this,
        float rollZ,
        UnityEngine_Vector3_o centerOffset,
        const MethodInfo *method)
{
  __int64 v4; // x2
  float z; // s8
  float y; // s9
  float x; // s10
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  float v13; // s0
  float v14; // s1
  float v15; // s2
  float v16; // s3
  struct UnityEngine_Transform_o *baseRoll1; // x0
  float v18; // s11
  float v19; // s12
  float v20; // s13
  float v21; // s14
  __int64 v22; // x1
  Il2CppObject *Component_object; // x20
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v28; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  z = centerOffset.fields.z;
  y = centerOffset.fields.y;
  x = centerOffset.fields.x;
  if ( (byte_4B17EEA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_TweenRotation___, method, v4);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v10, v11);
    byte_4B17EEA = 1;
  }
  v25.fields.y = 0.0;
  v25.fields.z = rollZ * 0.017453;
  v25.fields.x = 0.0;
  *(UnityEngine_Quaternion_o *)&v13 = UnityEngine_Quaternion__Internal_FromEulerRad(v25, 0LL);
  baseRoll1 = this->fields.baseRoll1;
  if ( !baseRoll1 )
    goto LABEL_13;
  v18 = v13;
  v19 = v14;
  v20 = v15;
  v21 = v16;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)baseRoll1,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_TweenRotation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
  baseRoll1 = (struct UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(
                                                  (UnityEngine_Object_o *)Component_object,
                                                  0LL,
                                                  0LL);
  if ( ((unsigned __int8)baseRoll1 & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_13;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0LL);
  }
  baseRoll1 = this->fields.baseRoll1;
  if ( !baseRoll1 )
    goto LABEL_13;
  v28.fields.x = v18;
  v28.fields.y = v19;
  v28.fields.z = v20;
  v28.fields.w = v21;
  UnityEngine_Transform__set_localRotation(baseRoll1, v28, 0LL);
  baseRoll1 = this->fields.baseRoll1;
  if ( !baseRoll1
    || (v26.fields.z = -z,
        v26.fields.y = -y,
        v26.fields.x = -x,
        UnityEngine_Transform__set_localPosition(baseRoll1, v26, 0LL),
        (baseRoll1 = this->fields.baseRoll2) == 0LL) )
  {
LABEL_13:
    sub_1BCAA3C(baseRoll1, v12);
  }
  v27.fields.x = x;
  v27.fields.y = y;
  v27.fields.z = z;
  UnityEngine_Transform__set_localPosition(baseRoll1, v27, 0LL);
  this->fields.isRoll = 0;
  return 1;
}


void __fastcall UIScriptChara__SetScale(UIScriptChara_o *this, float v, const MethodInfo *method)
{
  const MethodInfo *v5; // x1

  UIScriptChara__StopMoveScaleTween(this, method);
  this->fields.baseScaleSize.fields.x = v;
  this->fields.baseScaleSize.fields.y = v;
  this->fields.baseScaleSize.fields.z = 1.0;
  UIScriptChara__EndMoveScale(this, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptChara__SetShadow(UIScriptChara_o *this, bool isShadow, bool isSkip, const MethodInfo *method)
{
  if ( this->fields.isShadow != isShadow )
  {
    this->fields.isShadow = isShadow;
    UIScriptChara__RecoverShadowEffect(this, isSkip, (const MethodInfo *)isSkip);
  }
}


void __fastcall UIScriptChara__SetSortingOrder(UIScriptChara_o *this, int32_t order, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptChara__SetSpecialEffect(
        UIScriptChara_o *this,
        System_String_o *n,
        UnityEngine_Vector3_o pos,
        float time,
        UnityEngine_Color_o color,
        float range,
        bool isSkip,
        bool isPause,
        const MethodInfo *method)
{
  float b; // s9
  float g; // s10
  float r; // s11
  float z; // s13
  float y; // s14
  float x; // s15
  int v20; // s7
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  int v43; // s7
  __int64 v44; // x1
  UnityEngine_Object_o *CharaEffect; // x22
  uint32_t v46; // w0
  __int64 *v47; // x8
  const MethodInfo *v48; // x2
  int colora; // [xsp+5Ch] [xbp-34h]
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v51; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_4B17EF0 & 1) == 0 )
  {
    colora = v20;
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, n, isSkip);
    sub_1BCA7E0(&StringLiteral_24967/*"wipe"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_16988/*"appearanceReverse"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_18626/*"darkEnemyErasure"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_24973/*"wipeTimeRe"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_18627/*"darkWipe"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_19663/*"flashErasure"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_16987/*"appearance"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_19247/*"erasure"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_19248/*"erasureReverse"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_19214/*"enemyErasure"*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_24972/*"wipeTime"*/, v41, v42);
    v43 = colora;
    byte_4B17EF0 = 1;
  }
  v50.fields.x = x;
  v50.fields.y = y;
  v50.fields.z = z;
  v51.fields.r = r;
  v51.fields.g = g;
  v51.fields.b = b;
  CharaEffect = (UnityEngine_Object_o *)ProgramEffectManager__CreateCharaEffect(
                                          this->fields.baseSpecialEffect,
                                          n,
                                          v50,
                                          time,
                                          v51,
                                          range,
                                          isSkip,
                                          isPause,
                                          0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v44);
  if ( !UnityEngine_Object__op_Equality(CharaEffect, 0LL, 0LL) )
  {
    v46 = PrivateImplementationDetails___ComputeStringHash(n, 0LL);
    if ( v46 > 0x8D759330 )
    {
      if ( v46 > 0xD4B34506 )
      {
        switch ( v46 )
        {
          case 0xE7555186:
            v47 = &StringLiteral_24967/*"wipe"*/;
            break;
          case 0xEC9DA126:
            v47 = &StringLiteral_18627/*"darkWipe"*/;
            break;
          case 0xEE11C37F:
            v47 = &StringLiteral_16987/*"appearance"*/;
            break;
          default:
            return;
        }
      }
      else
      {
        switch ( v46 )
        {
          case 0x8DA714B6:
            v47 = &StringLiteral_24973/*"wipeTimeRe"*/;
            break;
          case 0x9C7CDA94:
            v47 = &StringLiteral_19663/*"flashErasure"*/;
            break;
          case 0xD4B34506:
            v47 = &StringLiteral_19248/*"erasureReverse"*/;
            break;
          default:
            return;
        }
      }
    }
    else if ( v46 > 0x4A1132BE )
    {
      switch ( v46 )
      {
        case 0x8D759330:
          v47 = &StringLiteral_19247/*"erasure"*/;
          break;
        case 0x4DE5D9DEu:
          v47 = &StringLiteral_19214/*"enemyErasure"*/;
          break;
        case 0x50AF70CBu:
          v47 = &StringLiteral_16988/*"appearanceReverse"*/;
          break;
        default:
          return;
      }
    }
    else if ( v46 == 242689791 )
    {
      v47 = &StringLiteral_24972/*"wipeTime"*/;
    }
    else
    {
      if ( v46 != 1242641086 )
        return;
      v47 = &StringLiteral_18626/*"darkEnemyErasure"*/;
    }
    if ( System_String__op_Equality(n, (System_String_o *)*v47, 0LL) )
      UIScriptChara__StopShadowEffect(this, isSkip, v48);
  }
}


void __fastcall UIScriptChara__SetTalkMask(UIScriptChara_o *this, bool isMask, const MethodInfo *method)
{
  ;
}


void __fastcall UIScriptChara__SetUseSimpleMesh(UIScriptChara_o *this, bool useSimpleMesh, const MethodInfo *method)
{
  ;
}


void __fastcall UIScriptChara__Shake(
        UIScriptChara_o *this,
        float duration,
        float cycle,
        float x,
        float y,
        const MethodInfo *method)
{
  bool v11; // cc
  float v12; // s0

  v11 = duration <= 0.0;
  v12 = 0.0;
  if ( !v11 )
    v12 = UnityEngine_Time__get_time(0LL) + duration;
  if ( !this )
    sub_1BCAA3C(this, method);
  this->fields.shakeTime = v12;
  this->fields.shakeCycle = cycle;
  this->fields.shakeX = x;
  this->fields.shakeY = y;
  UIScriptChara__OnShake(this, method);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UIScriptChara__StartRoll(UIScriptChara_o *this, float duration, float rollZ, const MethodInfo *method)
{
  __int64 v4; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  float v13; // s0
  float v14; // s1
  float v15; // s2
  float v16; // s3
  struct UnityEngine_Transform_o *baseRoll1; // x0
  float v18; // s8
  float v19; // s9
  float v20; // s10
  float v21; // s11
  __int64 v22; // x1
  Il2CppObject *Component_object; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v25; // x1
  TweenRotation_o *v26; // x20
  UnityEngine_GameObject_o *v27; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  int64_t v34; // x1
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  bool v41; // w8
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v44; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v45; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_4B17EEB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_TweenRotation___, method, v4);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_6073/*"EndExecuteCameraRoll"*/, v10, v11);
    byte_4B17EEB = 1;
  }
  v43.fields.y = 0.0;
  v43.fields.z = rollZ * 0.017453;
  v43.fields.x = 0.0;
  *(UnityEngine_Quaternion_o *)&v13 = UnityEngine_Quaternion__Internal_FromEulerRad(v43, 0LL);
  baseRoll1 = this->fields.baseRoll1;
  if ( !baseRoll1 )
    goto LABEL_19;
  v18 = v13;
  v19 = v14;
  v20 = v15;
  v21 = v16;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)baseRoll1,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_TweenRotation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
  baseRoll1 = (struct UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(
                                                  (UnityEngine_Object_o *)Component_object,
                                                  0LL,
                                                  0LL);
  if ( ((unsigned __int8)baseRoll1 & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_19;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0LL);
  }
  baseRoll1 = this->fields.baseRoll1;
  if ( !baseRoll1 )
LABEL_19:
    sub_1BCAA3C(baseRoll1, v12);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseRoll1, 0LL);
  v45.fields.x = v18;
  v45.fields.y = v19;
  v45.fields.z = v20;
  v45.fields.w = v21;
  v26 = TweenRotation__Begin(gameObject, duration, v45, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
  baseRoll1 = (struct UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v26, 0LL, 0LL);
  if ( ((unsigned __int8)baseRoll1 & 1) == 0 )
    goto LABEL_16;
  if ( !v26 )
    goto LABEL_19;
  if ( !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v26, 0LL) )
  {
LABEL_16:
    baseRoll1 = this->fields.baseRoll1;
    if ( baseRoll1 )
    {
      v44.fields.x = v18;
      v44.fields.y = v19;
      v44.fields.z = v20;
      v44.fields.w = v21;
      UnityEngine_Transform__set_localRotation(baseRoll1, v44, 0LL);
      v41 = 0;
      goto LABEL_18;
    }
    goto LABEL_19;
  }
  v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v26->fields.eventReceiver = v27;
  sub_1BCA784((PartyOrganizationUtility_o *)&v26->fields.eventReceiver, (int64_t)v27, v28, v29, v30, v31, v32, v33);
  v34 = StringLiteral_6073/*"EndExecuteCameraRoll"*/;
  v26->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6073/*"EndExecuteCameraRoll"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v26->fields.callWhenFinished, v34, v35, v36, v37, v38, v39, v40);
  v41 = 1;
LABEL_18:
  this->fields.isRoll = v41;
  return 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UIScriptChara__StartRollEx(
        UIScriptChara_o *this,
        float duration,
        float rollZ,
        UnityEngine_Vector3_o centerOffset,
        const MethodInfo *method)
{
  __int64 v5; // x2
  float z; // s12
  float y; // s13
  float x; // s14
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  float v19; // s1
  float v20; // s2
  float v21; // s3
  UnityEngine_Component_o *baseRoll1; // x0
  float v23; // s0
  float v24; // s9
  float v25; // s10
  float v26; // s11
  __int64 v27; // x1
  Il2CppObject *Component_object; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v30; // x20
  __int64 v31; // x1
  UnityEngine_GameObject_o *v32; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int64_t v39; // x1
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  bool v46; // w8
  float value; // [xsp+Ch] [xbp-64h]
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v53; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v54; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  z = centerOffset.fields.z;
  y = centerOffset.fields.y;
  x = centerOffset.fields.x;
  if ( (byte_4B17EEC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_TweenRotation___, method, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_UITweener_Begin_TweenRotation___, v14, v15);
    sub_1BCA7E0(&StringLiteral_6073/*"EndExecuteCameraRoll"*/, v16, v17);
    byte_4B17EEC = 1;
  }
  v49.fields.y = 0.0;
  v49.fields.z = rollZ * 0.017453;
  v49.fields.x = 0.0;
  *(UnityEngine_Quaternion_o *)(&v19 - 1) = UnityEngine_Quaternion__Internal_FromEulerRad(v49, 0LL);
  baseRoll1 = (UnityEngine_Component_o *)this->fields.baseRoll1;
  value = v23;
  if ( !baseRoll1 )
    goto LABEL_23;
  v24 = v19;
  v25 = v20;
  v26 = v21;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       baseRoll1,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_TweenRotation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27);
  baseRoll1 = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                           (UnityEngine_Object_o *)Component_object,
                                           0LL,
                                           0LL);
  if ( ((unsigned __int8)baseRoll1 & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_23;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0LL);
  }
  baseRoll1 = (UnityEngine_Component_o *)this->fields.baseRoll1;
  if ( !baseRoll1 )
    goto LABEL_23;
  gameObject = UnityEngine_Component__get_gameObject(baseRoll1, 0LL);
  baseRoll1 = (UnityEngine_Component_o *)UITweener__Begin_object_(
                                           gameObject,
                                           duration,
                                           (const MethodInfo_2FC6528 *)Method_UITweener_Begin_TweenRotation___);
  if ( !baseRoll1 )
    goto LABEL_23;
  v30 = baseRoll1;
  v53 = TweenRotation__get_value((TweenRotation_o *)baseRoll1, 0LL);
  v50 = UnityEngine_Quaternion__Internal_ToEulerRad(v53, 0LL);
  v50.fields.x = v50.fields.x * 57.296;
  v50.fields.y = v50.fields.y * 57.296;
  v50.fields.z = v50.fields.z * 57.296;
  *(UnityEngine_Vector3_o *)&v30[5].monitor = UnityEngine_Quaternion__Internal_MakePositive(v50, 0LL);
  *((_DWORD *)&v30[5].fields + 1) = 0;
  LODWORD(v30[6].klass) = 0;
  *((float *)&v30[6].klass + 1) = rollZ;
  if ( duration <= 0.0 )
  {
    UITweener__Sample((UITweener_o *)v30, 1.0, 1, 0LL);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v30, 0, 0LL);
  }
  baseRoll1 = (UnityEngine_Component_o *)this->fields.baseRoll1;
  if ( !baseRoll1
    || (v51.fields.z = -z,
        v51.fields.y = -y,
        v51.fields.x = -x,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseRoll1, v51, 0LL),
        (baseRoll1 = (UnityEngine_Component_o *)this->fields.baseRoll2) == 0LL) )
  {
LABEL_23:
    sub_1BCAA3C(baseRoll1, v18);
  }
  v52.fields.x = x;
  v52.fields.y = y;
  v52.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseRoll1, v52, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v31);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v30, 0LL, 0LL)
    || !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v30, 0LL) )
  {
    baseRoll1 = (UnityEngine_Component_o *)this->fields.baseRoll1;
    if ( baseRoll1 )
    {
      v54.fields.x = value;
      v54.fields.y = v24;
      v54.fields.z = v25;
      v54.fields.w = v26;
      UnityEngine_Transform__set_localRotation((UnityEngine_Transform_o *)baseRoll1, v54, 0LL);
      v46 = 0;
      goto LABEL_22;
    }
    goto LABEL_23;
  }
  v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v30[3].monitor = v32;
  sub_1BCA784((PartyOrganizationUtility_o *)&v30[3].monitor, (int64_t)v32, v33, v34, v35, v36, v37, v38);
  v39 = StringLiteral_6073/*"EndExecuteCameraRoll"*/;
  *(_QWORD *)&v30[3].fields.m_CachedPtr = StringLiteral_6073/*"EndExecuteCameraRoll"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v30[3].fields, v39, v40, v41, v42, v43, v44, v45);
  v46 = 1;
LABEL_22:
  this->fields.isRoll = v46;
  return 1;
}


void __fastcall UIScriptChara__StartShadowEffect(UIScriptChara_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_GameObject_o *baseShadowEffect; // x19

  if ( (byte_4B17EDD & 1) == 0 )
  {
    sub_1BCA7E0(&CommonEffectManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_13707/*"Talk/bit_talk_11"*/, v4, v5);
    byte_4B17EDD = 1;
  }
  if ( this->fields.isShadow && this->fields.isDisp && !this->fields.isShadowEffect )
  {
    this->fields.isShadowEffect = 1;
    baseShadowEffect = this->fields.baseShadowEffect;
    if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, method);
    CommonEffectManager__Create_41400288(baseShadowEffect, (System_String_o *)StringLiteral_13707/*"Talk/bit_talk_11"*/, 0, 0, 0, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UIScriptChara__StopBackEffect(UIScriptChara_o *this, bool isSkip, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffectBack; // x20

  if ( (byte_4B17F01 & 1) == 0 )
  {
    sub_1BCA7E0(&CommonEffectManager_TypeInfo, isSkip, method);
    byte_4B17F01 = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, isSkip);
  return CommonEffectManager__Stop(baseEffectBack, isSkip, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UIScriptChara__StopBackEffect_42496564(
        UIScriptChara_o *this,
        System_String_o *n,
        bool isSkip,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffectBack; // x21

  if ( (byte_4B17F02 & 1) == 0 )
  {
    sub_1BCA7E0(&CommonEffectManager_TypeInfo, n, isSkip);
    byte_4B17F02 = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, n);
  return CommonEffectManager__Stop_41404624(baseEffectBack, n, isSkip, 0, 0LL);
}


void __fastcall UIScriptChara__StopCut(UIScriptChara_o *this, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UIScriptChara__StopEffect(UIScriptChara_o *this, bool isSkip, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffect; // x20

  if ( (byte_4B17EF8 & 1) == 0 )
  {
    sub_1BCA7E0(&CommonEffectManager_TypeInfo, isSkip, method);
    byte_4B17EF8 = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, isSkip);
  return CommonEffectManager__Stop(baseEffect, isSkip, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UIScriptChara__StopEffect_42495228(
        UIScriptChara_o *this,
        System_String_o *n,
        bool isSkip,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffect; // x21

  if ( (byte_4B17EF9 & 1) == 0 )
  {
    sub_1BCA7E0(&CommonEffectManager_TypeInfo, n, isSkip);
    byte_4B17EF9 = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, n);
  return CommonEffectManager__Stop_41404624(baseEffect, n, isSkip, 0, 0LL);
}


void __fastcall UIScriptChara__StopMoveScaleTween(UIScriptChara_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Component_o *baseScale; // x0
  __int64 v11; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v13; // x1
  Il2CppObject *Component_object; // x19

  if ( (byte_4B17EE6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_TweenScale___, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_23261/*"scaleto"*/, v6, v7);
    sub_1BCA7E0(&iTween_TypeInfo, v8, v9);
    byte_4B17EE6 = 1;
  }
  baseScale = (UnityEngine_Component_o *)this->fields.baseScale;
  if ( !baseScale )
    goto LABEL_14;
  gameObject = UnityEngine_Component__get_gameObject(baseScale, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v11);
  iTween__Stop_61051432(gameObject, (System_String_o *)StringLiteral_23261/*"scaleto"*/, 0LL);
  baseScale = (UnityEngine_Component_o *)this->fields.baseScale;
  if ( !baseScale )
    goto LABEL_14;
  baseScale = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseScale, 0LL);
  if ( !baseScale )
    goto LABEL_14;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)baseScale,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_TweenScale___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
  baseScale = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                           (UnityEngine_Object_o *)Component_object,
                                           0LL,
                                           0LL);
  if ( ((unsigned __int8)baseScale & 1) != 0 )
  {
    if ( Component_object )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0LL);
      return;
    }
LABEL_14:
    sub_1BCAA3C(baseScale, method);
  }
}


void __fastcall UIScriptChara__StopMoveTween(UIScriptChara_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  UnityEngine_GameObject_o *v12; // x0
  __int64 v13; // x1
  __int64 v14; // x1
  Il2CppObject *Component_object; // x19

  if ( (byte_4B17EDF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_21754/*"moveto"*/, v6, v7);
    sub_1BCA7E0(&iTween_TypeInfo, v8, v9);
    byte_4B17EDF = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v10);
  iTween__Stop_61051432(gameObject, (System_String_o *)StringLiteral_21754/*"moveto"*/, 0LL);
  v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v12 )
    goto LABEL_12;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v12,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
  v12 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                      (UnityEngine_Object_o *)Component_object,
                                      0LL,
                                      0LL);
  if ( ((unsigned __int8)v12 & 1) != 0 )
  {
    if ( Component_object )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0LL);
      return;
    }
LABEL_12:
    sub_1BCAA3C(v12, v13);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptChara__StopShadowEffect(UIScriptChara_o *this, bool isSkip, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseShadowEffect; // x20

  if ( (byte_4B17EDE & 1) == 0 )
  {
    sub_1BCA7E0(&CommonEffectManager_TypeInfo, isSkip, method);
    byte_4B17EDE = 1;
  }
  this->fields.isShadowEffect = 0;
  baseShadowEffect = this->fields.baseShadowEffect;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, isSkip);
  CommonEffectManager__Stop(baseShadowEffect, isSkip, 0, 0LL);
}


void __fastcall UIScriptChara__StopSpecialEffect(UIScriptChara_o *this, const MethodInfo *method)
{
  ProgramEffectManager__Destory(this->fields.baseSpecialEffect, 0LL);
}


void __fastcall UIScriptChara__StopSpecialEffect_42494000(
        UIScriptChara_o *this,
        System_String_o *n,
        const MethodInfo *method)
{
  ProgramEffectManager__Destory_41425600(this->fields.baseSpecialEffect, n, 0LL);
}


void __fastcall UIScriptChara___SetBackEffect_g__Callback_124_0(
        CommonEffectComponent_o *effect,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _BOOL8 v4; // x0
  __int64 v5; // x1

  if ( (byte_4B17F05 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B17F05 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)effect, 0LL, 0LL);
  if ( !v4 )
  {
    if ( !effect )
      sub_1BCAA3C(v4, v5);
    effect->fields._IsOnSublayer_k__BackingField = 1;
  }
}


void __fastcall UIScriptChara___SetEffect_g__Callback_114_0(CommonEffectComponent_o *effect, const MethodInfo *method)
{
  __int64 v2; // x2
  _BOOL8 v4; // x0
  __int64 v5; // x1

  if ( (byte_4B17F04 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B17F04 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)effect, 0LL, 0LL);
  if ( !v4 )
  {
    if ( !effect )
      sub_1BCAA3C(v4, v5);
    effect->fields._IsOnSublayer_k__BackingField = 1;
  }
}


void __fastcall UIScriptChara___c__DisplayClass39_0___ctor(
        UIScriptChara___c__DisplayClass39_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptChara___c__DisplayClass39_0___SetEffectEdgeBlur_b__0(
        UIScriptChara___c__DisplayClass39_0_o *this,
        CommonEffectComponent_o *effect,
        const MethodInfo *method)
{
  UIScriptChara___c__DisplayClass39_0_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  struct UIScriptChara_o *_4__this; // x8
  struct UIScriptChara_o *v7; // x8
  UIScriptChara___c__DisplayClass39_0_o *v8; // x20
  struct UIScriptChara_o *v9; // x8
  UnityEngine_Object_o *v10; // x21
  float v11; // s0
  float v12; // s1
  float v13; // s2
  int r_low; // w8
  float v15; // s8
  float v16; // s9
  float v17; // s10
  __int64 v18; // x25
  __int64 v19; // x22
  UnityEngine_Transform_o *transform; // x23
  int v21; // s2
  float v22; // s0
  float v23; // s1
  struct UnityEngine_Texture_o *maskTex; // x8
  UIScriptChara___c__DisplayClass39_0_o *v25; // x23
  struct UnityEngine_Texture_o *v26; // x8
  int v27; // w24
  struct UIScriptChara_o *v28; // x8
  UIScriptChara_c *klass; // x9
  float v30; // s0
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4

  v3 = this;
  if ( (byte_4B17F06 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentsInChildren_FGOEdgeBlur___, effect, method);
    this = (UIScriptChara___c__DisplayClass39_0_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B17F06 = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_29;
  this = (UIScriptChara___c__DisplayClass39_0_o *)_4__this->fields.baseEffect;
  if ( !this
    || (this = (UIScriptChara___c__DisplayClass39_0_o *)UnityEngine_GameObject__GetComponentsInChildren_object_(
                                                          (UnityEngine_GameObject_o *)this,
                                                          1,
                                                          (const MethodInfo_2F63370 *)Method_UnityEngine_GameObject_GetComponentsInChildren_FGOEdgeBlur___),
        (v7 = v3->fields.__4__this) == 0LL)
    || (v8 = this,
        this = (UIScriptChara___c__DisplayClass39_0_o *)((__int64 (__fastcall *)(struct UIScriptChara_o *, Il2CppMethodPointer))v7->klass->vtable._8_GetBody.method)(
                                                          v3->fields.__4__this,
                                                          v7->klass->vtable._9_GetSizeEdgeBlur.methodPtr),
        (v9 = v3->fields.__4__this) == 0LL)
    || (v10 = (UnityEngine_Object_o *)this,
        this = (UIScriptChara___c__DisplayClass39_0_o *)((__int64 (__fastcall *)(struct UIScriptChara_o *, Il2CppMethodPointer))v9->klass->vtable._4_GetOffsetEdgeBlur.method)(
                                                          v3->fields.__4__this,
                                                          v9->klass->vtable._5_GetRectEdgeBlur.methodPtr),
        !v8) )
  {
LABEL_29:
    sub_1BCAA3C(this, effect);
  }
  r_low = LODWORD(v8->fields.color.fields.r);
  if ( r_low >= 1 )
  {
    v15 = v11;
    v16 = v12;
    v17 = v13;
    v18 = 0LL;
    do
    {
      if ( (unsigned int)v18 >= r_low )
        sub_1BCAA44(this, effect);
      v19 = *((_QWORD *)&v8->fields.color.fields.b + v18);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, effect);
      this = (UIScriptChara___c__DisplayClass39_0_o *)UnityEngine_Object__op_Inequality(v10, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v19 )
          goto LABEL_29;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v19, 0LL);
        this = (UIScriptChara___c__DisplayClass39_0_o *)UnityEngine_Component__get_transform(
                                                          (UnityEngine_Component_o *)v19,
                                                          0LL);
        if ( !this )
          goto LABEL_29;
        *(UnityEngine_Vector3_o *)(&v21 - 2) = UnityEngine_Transform__get_localPosition(
                                                 (UnityEngine_Transform_o *)this,
                                                 0LL);
        if ( !transform )
          goto LABEL_29;
        v22 = v15;
        v23 = v16;
        UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)(&v21 - 2), 0LL);
      }
      else if ( !v19 )
      {
        goto LABEL_29;
      }
      *(struct UnityEngine_Color_o *)(v19 + 96) = v3->fields.color;
      *(struct UnityEngine_Color_o *)(v19 + 112) = v3->fields.particleColor;
      FGOEdgeBlur__set_Texture((FGOEdgeBlur_o *)v19, v3->fields.maskTex, 0LL);
      this = (UIScriptChara___c__DisplayClass39_0_o *)UnityEngine_Component__get_transform(
                                                        (UnityEngine_Component_o *)v19,
                                                        0LL);
      maskTex = v3->fields.maskTex;
      if ( !maskTex )
        goto LABEL_29;
      v25 = this;
      this = (UIScriptChara___c__DisplayClass39_0_o *)((__int64 (__fastcall *)(struct UnityEngine_Texture_o *, Il2CppMethodPointer))maskTex->klass->vtable._4_get_width.method)(
                                                        v3->fields.maskTex,
                                                        maskTex->klass->vtable._5_set_width.methodPtr);
      v26 = v3->fields.maskTex;
      if ( !v26 )
        goto LABEL_29;
      v27 = (int)this;
      this = (UIScriptChara___c__DisplayClass39_0_o *)((__int64 (__fastcall *)(struct UnityEngine_Texture_o *, Il2CppMethodPointer))v26->klass->vtable._6_get_height.method)(
                                                        v3->fields.maskTex,
                                                        v26->klass->vtable._7_set_height.methodPtr);
      if ( !v25 )
        goto LABEL_29;
      v34.fields.y = (float)(int)this;
      v34.fields.x = (float)v27;
      v34.fields.z = 0.0;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)v25, v34, 0LL);
      FGOEdgeBlur__set_Thickness((FGOEdgeBlur_o *)v19, v3->fields.thick, 0LL);
      FGOEdgeBlur__set_Level((FGOEdgeBlur_o *)v19, v3->fields.level, 0LL);
      this = (UIScriptChara___c__DisplayClass39_0_o *)v3->fields.maskTex;
      if ( !this )
        goto LABEL_29;
      this = (UIScriptChara___c__DisplayClass39_0_o *)(*(__int64 (__fastcall **)(UIScriptChara___c__DisplayClass39_0_o *, void *))&this->klass[1]._1.byval_arg.bits)(
                                                        this,
                                                        this->klass[1]._1.this_arg.data);
      v28 = v3->fields.__4__this;
      if ( !v28 )
        goto LABEL_29;
      klass = v28->klass;
      if ( (int)this <= 1024 )
        v30 = ((float (__fastcall *)(struct UIScriptChara_o *, Il2CppMethodPointer))klass->vtable._5_GetRectEdgeBlur.method)(
                v3->fields.__4__this,
                klass->vtable._6_GetHighRectEdgeBlur.methodPtr);
      else
        v30 = ((float (__fastcall *)(struct UIScriptChara_o *, Il2CppMethodPointer))klass->vtable._6_GetHighRectEdgeBlur.method)(
                v3->fields.__4__this,
                klass->vtable._7_GetBodySubTexture.methodPtr);
      FGOEdgeBlur__set_Rect((FGOEdgeBlur_o *)v19, *(UnityEngine_Rect_o *)&v30, 0LL);
      v35.fields.x = v15;
      v35.fields.y = v16;
      v35.fields.z = v17;
      FGOEdgeBlur__setMaskImagePosition((FGOEdgeBlur_o *)v19, v35, 0LL);
      r_low = LODWORD(v8->fields.color.fields.r);
      ++v18;
    }
    while ( (int)v18 < r_low );
  }
}