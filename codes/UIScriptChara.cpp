void __fastcall UIScriptChara___cctor(const MethodInfo *method)
{
  if ( (byte_4BDE2FC & 1) == 0 )
  {
    sub_1C21E38(&UIScriptChara_TypeInfo);
    byte_4BDE2FC = 1;
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

  v10 = *(long double *)&speed;
  if ( (byte_4BDE2CF & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_17627/*"blink"*/);
    sub_1C21E38(&StringLiteral_19698/*"fade"*/);
    sub_1C21E38(&StringLiteral_18648/*"crossFade"*/);
    byte_4BDE2CF = 1;
  }
  if ( System_String__op_Equality(kind, (System_String_o *)StringLiteral_19698/*"fade"*/, 0LL) )
  {
    v13 = 2LL;
  }
  else if ( System_String__op_Equality(kind, (System_String_o *)StringLiteral_17627/*"blink"*/, 0LL) )
  {
    v13 = 3LL;
  }
  else if ( System_String__op_Equality(kind, (System_String_o *)StringLiteral_18648/*"crossFade"*/, 0LL) )
  {
    v13 = 4LL;
  }
  else
  {
    v13 = 1LL;
  }
  ((void (__fastcall *)(UIScriptChara_o *, __int64, System_String_o *, _QWORD, System_Action_o *, Il2CppMethodPointer, long double))this->klass->vtable._10_ChangeCharacter.method)(
    this,
    v13,
    imageName,
    (unsigned int)faceType,
    callback,
    this->klass->vtable._11_SetCharacter.methodPtr,
    v10);
}


void __fastcall UIScriptChara__ChangeCharacter_43047164(
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
  sub_1C21DDC(
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


void __fastcall UIScriptChara__DestroyEffectByMark(
        UIScriptChara_o *this,
        System_String_o *markKey,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffect; // x20

  if ( (byte_4BDE2F2 & 1) == 0 )
  {
    sub_1C21E38(&CommonEffectManager_TypeInfo);
    byte_4BDE2F2 = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  CommonEffectManager__DestroyByMark(baseEffect, markKey, 0LL);
}


void __fastcall UIScriptChara__EndExecuteCameraRoll(UIScriptChara_o *this, const MethodInfo *method)
{
  this->fields.isRoll = 0;
}


void __fastcall UIScriptChara__EndExecuteRollAxis(UIScriptChara_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4BDE2E3 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    byte_4BDE2E3 = 1;
  }
  if ( this->fields.isRollLoop )
  {
    UIScriptChara__StartRollAxis(this, this->fields.rollAxis, this->fields.rollAngle, this->fields.rollDuration, v2);
  }
  else
  {
    this->fields.isRoll = 0;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    if ( !Instance )
      sub_1C22094(0LL, v5);
    ScriptManager__moveBackScriptZ((ScriptManager_o *)Instance, 0, 1, 0LL);
  }
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
    sub_1C22094(gameObject, v4);
  }
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, this->fields.basePosition, 0LL);
  this->fields.isMove = 0;
}


void __fastcall UIScriptChara__EndMoveReturnEaseHalf(UIScriptChara_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  UIScriptChara__MoveReturnPositionEase_43051836(this, this->fields.returnDuration, this->fields.returnEaseType, v2);
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
    sub_1C22094(0LL, method);
  UnityEngine_Transform__set_localScale(baseScale, this->fields.baseScaleSize, 0LL);
  this->fields.isMove = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptChara__EndSet(UIScriptChara_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseSpecialEffect; // x0
  struct UnityEngine_Vector2_StaticFields *static_fields; // x8
  float x; // s8
  float y; // s9
  float v7; // s2
  float v8; // s10
  float v9; // s2
  float v10; // s10
  float v11; // s2
  float v12; // s10
  float v13; // s2
  float v14; // s10
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  PartyOrganizationUtility_o *p_setCallback; // x19
  struct System_Action_o *v22; // x20
  struct System_Action_o *setCallback; // t1
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4

  if ( !byte_4BD6AAA )
  {
    sub_1C21E38(&UnityEngine_Vector2_TypeInfo);
    byte_4BD6AAA = 1;
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
  *(UnityEngine_Vector3_o *)(&v7 - 2) = UnityEngine_Transform__get_localPosition(
                                          (UnityEngine_Transform_o *)baseSpecialEffect,
                                          0LL);
  baseSpecialEffect = this->fields.baseSpecialEffect;
  if ( !baseSpecialEffect )
    goto LABEL_22;
  v8 = v7;
  baseSpecialEffect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseSpecialEffect, 0LL);
  if ( !baseSpecialEffect )
    goto LABEL_22;
  v24.fields.x = x;
  v24.fields.y = y;
  v24.fields.z = v8;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseSpecialEffect, v24, 0LL);
  baseSpecialEffect = this->fields.baseEffect;
  if ( !baseSpecialEffect )
    goto LABEL_22;
  baseSpecialEffect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseSpecialEffect, 0LL);
  if ( !baseSpecialEffect )
    goto LABEL_22;
  *(UnityEngine_Vector3_o *)(&v9 - 2) = UnityEngine_Transform__get_localPosition(
                                          (UnityEngine_Transform_o *)baseSpecialEffect,
                                          0LL);
  baseSpecialEffect = this->fields.baseEffect;
  if ( !baseSpecialEffect )
    goto LABEL_22;
  v10 = v9;
  baseSpecialEffect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseSpecialEffect, 0LL);
  if ( !baseSpecialEffect )
    goto LABEL_22;
  v25.fields.x = x;
  v25.fields.y = y;
  v25.fields.z = v10;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseSpecialEffect, v25, 0LL);
  baseSpecialEffect = this->fields.baseEffectBack;
  if ( !baseSpecialEffect )
    goto LABEL_22;
  baseSpecialEffect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseSpecialEffect, 0LL);
  if ( !baseSpecialEffect )
    goto LABEL_22;
  *(UnityEngine_Vector3_o *)(&v11 - 2) = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)baseSpecialEffect,
                                           0LL);
  baseSpecialEffect = this->fields.baseEffectBack;
  if ( !baseSpecialEffect )
    goto LABEL_22;
  v12 = v11;
  baseSpecialEffect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseSpecialEffect, 0LL);
  if ( !baseSpecialEffect )
    goto LABEL_22;
  v26.fields.x = x;
  v26.fields.y = y;
  v26.fields.z = v12;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseSpecialEffect, v26, 0LL);
  baseSpecialEffect = this->fields.baseShadowEffect;
  if ( !baseSpecialEffect
    || (baseSpecialEffect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseSpecialEffect, 0LL)) == 0LL
    || (*(UnityEngine_Vector3_o *)(&v13 - 2) = UnityEngine_Transform__get_localPosition(
                                                 (UnityEngine_Transform_o *)baseSpecialEffect,
                                                 0LL),
        (baseSpecialEffect = this->fields.baseShadowEffect) == 0LL)
    || (v14 = v13,
        (baseSpecialEffect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseSpecialEffect, 0LL)) == 0LL) )
  {
LABEL_22:
    sub_1C22094(baseSpecialEffect, method);
  }
  v27.fields.x = x;
  v27.fields.y = y;
  v27.fields.z = v14;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseSpecialEffect, v27, 0LL);
  setCallback = this->fields.setCallback;
  p_setCallback = (PartyOrganizationUtility_o *)&this->fields.setCallback;
  v22 = setCallback;
  if ( setCallback )
  {
    p_setCallback->klass = 0LL;
    sub_1C21DDC(p_setCallback, 0LL, v15, v16, v17, v18, v19, v20);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v22->fields.m_target)(
      v22->fields.original_method_info,
      *(_QWORD *)&v22->fields.extra_arg);
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
    sub_1C22094(0LL, method);
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
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float x; // s0
  float y; // s1
  float z; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( !byte_4BD6BB1 )
  {
    sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB1 = 1;
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
  if ( !byte_4BD6BB1 )
  {
    sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB1 = 1;
  }
  UIScriptChara__SetRoll(this, 0.0, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, method);
}


bool __fastcall UIScriptChara__IsBackEffect(UIScriptChara_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffectBack; // x19

  if ( (byte_4BDE2F3 & 1) == 0 )
  {
    sub_1C21E38(&CommonEffectManager_TypeInfo);
    byte_4BDE2F3 = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  return CommonEffectManager__IsBusy(baseEffectBack, 0LL);
}


bool __fastcall UIScriptChara__IsBackEffectStart(UIScriptChara_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffectBack; // x19

  if ( (byte_4BDE2F5 & 1) == 0 )
  {
    sub_1C21E38(&CommonEffectManager_TypeInfo);
    byte_4BDE2F5 = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  return CommonEffectManager__IsStart(baseEffectBack, 0LL);
}


bool __fastcall UIScriptChara__IsBackEffectStart_43062120(
        UIScriptChara_o *this,
        System_String_o *n,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffectBack; // x20

  if ( (byte_4BDE2F6 & 1) == 0 )
  {
    sub_1C21E38(&CommonEffectManager_TypeInfo);
    byte_4BDE2F6 = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  return CommonEffectManager__IsStart_41944368(baseEffectBack, n, 0LL);
}


bool __fastcall UIScriptChara__IsBackEffect_43061920(
        UIScriptChara_o *this,
        System_String_o *n,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffectBack; // x20

  if ( (byte_4BDE2F4 & 1) == 0 )
  {
    sub_1C21E38(&CommonEffectManager_TypeInfo);
    byte_4BDE2F4 = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  return CommonEffectManager__IsBusy_41943452(baseEffectBack, n, 0LL);
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
  ProgramEffectComponent_array *v3; // x0
  __int64 v4; // x1
  __int64 v5; // x8
  ProgramEffectComponent_array *v6; // x19
  bool v7; // w21
  unsigned __int64 v8; // x22
  ProgramEffectComponent_o **m_Items; // x25
  ProgramEffectComponent_o *v10; // x8
  __int64 methodPtr_low; // x11
  ProgramEffectComponent_o *v12; // x20

  if ( (byte_4BDE2E6 & 1) == 0 )
  {
    sub_1C21E38(&CharaCutEffectComponent_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDE2E6 = 1;
  }
  v3 = ProgramEffectManager__Get(this->fields.baseCutEffect, 0LL);
  if ( !v3 )
LABEL_21:
    sub_1C22094(v3, v4);
  v5 = *(_QWORD *)&v3->max_length;
  v6 = v3;
  v7 = (int)v5 > 0;
  if ( (int)v5 >= 1 )
  {
    v8 = 0LL;
    m_Items = v3->m_Items;
    do
    {
      if ( v8 >= (unsigned int)v5 )
        sub_1C2209C(v3, v4);
      v10 = m_Items[v8];
      if ( v10
        && (methodPtr_low = LOBYTE(CharaCutEffectComponent_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(v10->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
      {
        if ( (CharaCutEffectComponent_c *)v10->klass->_2.typeHierarchy[methodPtr_low - 1] == CharaCutEffectComponent_TypeInfo )
          v12 = m_Items[v8];
        else
          v12 = 0LL;
      }
      else
      {
        v12 = 0LL;
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v3 = (ProgramEffectComponent_array *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v12, 0LL, 0LL);
      if ( ((unsigned __int8)v3 & 1) != 0 )
      {
        if ( !v12 )
          goto LABEL_21;
        if ( LOBYTE(v12[1].fields.leftAnchor) )
          break;
      }
      LODWORD(v5) = v6->max_length;
      v7 = (__int64)++v8 < (int)v5;
    }
    while ( (__int64)v8 < (int)v5 );
  }
  return v7;
}


bool __fastcall UIScriptChara__IsCutStart(UIScriptChara_o *this, const MethodInfo *method)
{
  ProgramEffectComponent_array *v3; // x0
  __int64 v4; // x1
  __int64 v5; // x8
  ProgramEffectComponent_array *v6; // x19
  bool v7; // w21
  unsigned __int64 v8; // x22
  ProgramEffectComponent_o **m_Items; // x25
  ProgramEffectComponent_o *v10; // x8
  __int64 methodPtr_low; // x11
  ProgramEffectComponent_o *v12; // x20

  if ( (byte_4BDE2E7 & 1) == 0 )
  {
    sub_1C21E38(&CharaCutEffectComponent_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDE2E7 = 1;
  }
  v3 = ProgramEffectManager__Get(this->fields.baseCutEffect, 0LL);
  if ( !v3 )
LABEL_21:
    sub_1C22094(v3, v4);
  v5 = *(_QWORD *)&v3->max_length;
  v6 = v3;
  v7 = (int)v5 > 0;
  if ( (int)v5 >= 1 )
  {
    v8 = 0LL;
    m_Items = v3->m_Items;
    do
    {
      if ( v8 >= (unsigned int)v5 )
        sub_1C2209C(v3, v4);
      v10 = m_Items[v8];
      if ( v10
        && (methodPtr_low = LOBYTE(CharaCutEffectComponent_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(v10->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
      {
        if ( (CharaCutEffectComponent_c *)v10->klass->_2.typeHierarchy[methodPtr_low - 1] == CharaCutEffectComponent_TypeInfo )
          v12 = m_Items[v8];
        else
          v12 = 0LL;
      }
      else
      {
        v12 = 0LL;
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v3 = (ProgramEffectComponent_array *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v12, 0LL, 0LL);
      if ( ((unsigned __int8)v3 & 1) != 0 )
      {
        if ( !v12 )
          goto LABEL_21;
        if ( !v12->fields.isStart )
          break;
      }
      LODWORD(v5) = v6->max_length;
      v7 = (__int64)++v8 < (int)v5;
    }
    while ( (__int64)v8 < (int)v5 );
  }
  return !v7;
}


bool __fastcall UIScriptChara__IsEffect(UIScriptChara_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffect; // x19

  if ( (byte_4BDE2E9 & 1) == 0 )
  {
    sub_1C21E38(&CommonEffectManager_TypeInfo);
    byte_4BDE2E9 = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  return CommonEffectManager__IsBusy(baseEffect, 0LL);
}


bool __fastcall UIScriptChara__IsEffectStart(UIScriptChara_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffect; // x19

  if ( (byte_4BDE2EB & 1) == 0 )
  {
    sub_1C21E38(&CommonEffectManager_TypeInfo);
    byte_4BDE2EB = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  return CommonEffectManager__IsStart(baseEffect, 0LL);
}


bool __fastcall UIScriptChara__IsEffectStart_43060652(
        UIScriptChara_o *this,
        System_String_o *n,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffect; // x20

  if ( (byte_4BDE2EC & 1) == 0 )
  {
    sub_1C21E38(&CommonEffectManager_TypeInfo);
    byte_4BDE2EC = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  return CommonEffectManager__IsStart_41944368(baseEffect, n, 0LL);
}


bool __fastcall UIScriptChara__IsEffect_43060452(UIScriptChara_o *this, System_String_o *n, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffect; // x20

  if ( (byte_4BDE2EA & 1) == 0 )
  {
    sub_1C21E38(&CommonEffectManager_TypeInfo);
    byte_4BDE2EA = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  return CommonEffectManager__IsBusy_41943452(baseEffect, n, 0LL);
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


bool __fastcall UIScriptChara__IsSpecialEffectStart_43059456(
        UIScriptChara_o *this,
        System_String_o *n,
        const MethodInfo *method)
{
  return ProgramEffectManager__IsStart_41970612(this->fields.baseSpecialEffect, n, 0LL);
}


bool __fastcall UIScriptChara__IsSpecialEffect_43059432(
        UIScriptChara_o *this,
        System_String_o *n,
        const MethodInfo *method)
{
  return ProgramEffectManager__IsBusy_41969944(this->fields.baseSpecialEffect, n, 0LL);
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
  UnityEngine_GameObject_o *gameObject; // x0
  TweenPosition_o *v12; // x20
  UnityEngine_GameObject_o *transform; // x0
  __int64 v14; // x1
  UnityEngine_GameObject_o *v15; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s1.4,4:s2.4,8:s3.4

  z = v.fields.z;
  y = v.fields.y;
  x = v.fields.x;
  if ( (byte_4BDE2DD & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_6136/*"EndMoveAttack"*/);
    sub_1C21E38(&StringLiteral_22527/*"normal"*/);
    byte_4BDE2DD = 1;
  }
  UIScriptChara__StopMoveTween(this, (const MethodInfo *)kind);
  this->fields.isMove = 1;
  if ( duration <= 0.0 )
    duration = 0.5;
  System_String__op_Equality(kind, (System_String_o *)StringLiteral_22527/*"normal"*/, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v30.fields.x = x;
  v30.fields.y = y;
  v30.fields.z = z;
  v12 = TweenPosition__Begin(gameObject, duration, v30, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v12, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    if ( v12 )
    {
      v12->fields.method = 1;
      v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v12->fields.eventReceiver = v15;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v12->fields.eventReceiver, (int64_t)v15, v16, v17, v18, v19, v20, v21);
      v22 = StringLiteral_6136/*"EndMoveAttack"*/;
      v12->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6136/*"EndMoveAttack"*/;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v12->fields.callWhenFinished, v22, v23, v24, v25, v26, v27, v28);
      return;
    }
LABEL_13:
    sub_1C22094(transform, v14);
  }
  transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_13;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
  if ( !transform )
    goto LABEL_13;
  v29.fields.x = x;
  v29.fields.y = y;
  v29.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v29, 0LL);
  this->fields.isMove = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptChara__MovePosition(
        UIScriptChara_o *this,
        float duration,
        UnityEngine_Vector3_o v,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  TweenPosition_o *v10; // x20
  UnityEngine_GameObject_o *transform; // x0
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int64_t v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s1.4,4:s2.4,8:s3.4

  z = v.fields.z;
  y = v.fields.y;
  x = v.fields.x;
  if ( (byte_4BDE2D4 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_6134/*"EndMove"*/);
    byte_4BDE2D4 = 1;
  }
  UIScriptChara__StopMoveTween(this, method);
  this->fields.isMove = 1;
  if ( duration > 0.0 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v27.fields.x = x;
    v27.fields.y = y;
    v27.fields.z = z;
    v10 = TweenPosition__Begin(gameObject, duration, v27, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v10, 0LL, 0LL) )
    {
      transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( v10 )
      {
        v10->fields.eventReceiver = transform;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&v10->fields.eventReceiver,
          (int64_t)transform,
          v13,
          v14,
          v15,
          v16,
          v17,
          v18);
        v19 = StringLiteral_6134/*"EndMove"*/;
        v10->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6134/*"EndMove"*/;
        sub_1C21DDC((PartyOrganizationUtility_o *)&v10->fields.callWhenFinished, v19, v20, v21, v22, v23, v24, v25);
        return;
      }
LABEL_12:
      sub_1C22094(transform, v12);
    }
  }
  transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_12;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
  if ( !transform )
    goto LABEL_12;
  v26.fields.x = x;
  v26.fields.y = y;
  v26.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v26, 0LL);
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
  System_Collections_Hashtable_o *v11; // x21
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  __int64 v20; // x0
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  __int64 v24; // x0
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  __int64 v28; // x0
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  __int64 v32; // x0
  UnityEngine_GameObject_o *v33; // x19
  float v34; // [xsp+Ch] [xbp-64h] BYREF
  float v35; // [xsp+10h] [xbp-60h] BYREF
  float v36; // [xsp+14h] [xbp-5Ch] BYREF
  int v37; // [xsp+18h] [xbp-58h] BYREF
  char v38[4]; // [xsp+1Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4

  z = vector.fields.z;
  y = vector.fields.y;
  x = vector.fields.x;
  if ( (byte_4BDE2D5 & 1) == 0 )
  {
    sub_1C21E38(&bool_TypeInfo);
    sub_1C21E38(&System_Collections_Hashtable_TypeInfo);
    sub_1C21E38(&float_TypeInfo);
    sub_1C21E38(&StringLiteral_25185/*"x"*/);
    sub_1C21E38(&StringLiteral_19078/*"easetype"*/);
    sub_1C21E38(&StringLiteral_24360/*"time"*/);
    sub_1C21E38(&StringLiteral_6134/*"EndMove"*/);
    sub_1C21E38(&StringLiteral_18865/*"delay"*/);
    sub_1C21E38(&StringLiteral_25289/*"y"*/);
    sub_1C21E38(&StringLiteral_21175/*"isLocal"*/);
    sub_1C21E38(&StringLiteral_22680/*"oncomplete"*/);
    sub_1C21E38(&iTween_TypeInfo);
    byte_4BDE2D5 = 1;
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
        v39.fields.x = x;
        v39.fields.y = y;
        v39.fields.z = z;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v39, 0LL);
        this->fields.isMove = 0;
        return;
      }
    }
LABEL_11:
    sub_1C22094(gameObject, v16);
  }
  v11 = (System_Collections_Hashtable_o *)sub_1C22084(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_63695236(v11, 0LL);
  v38[0] = 1;
  gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v38, v12, v13, v14);
  if ( !v11 )
    goto LABEL_11;
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v11->klass->vtable._23_Add.method)(
    v11,
    StringLiteral_21175/*"isLocal"*/,
    gameObject,
    v11->klass->vtable._24_Clear.methodPtr);
  v37 = 0;
  v20 = j_il2cpp_value_box_0(float_TypeInfo, &v37, v17, v18, v19);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v11->klass->vtable._23_Add.method)(
    v11,
    StringLiteral_18865/*"delay"*/,
    v20,
    v11->klass->vtable._24_Clear.methodPtr);
  v36 = x;
  v24 = j_il2cpp_value_box_0(float_TypeInfo, &v36, v21, v22, v23);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, void *, __int64, Il2CppMethodPointer))v11->klass->vtable._23_Add.method)(
    v11,
    StringLiteral_25185/*"x"*/,
    v24,
    v11->klass->vtable._24_Clear.methodPtr);
  v35 = y;
  v28 = j_il2cpp_value_box_0(float_TypeInfo, &v35, v25, v26, v27);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v11->klass->vtable._23_Add.method)(
    v11,
    StringLiteral_25289/*"y"*/,
    v28,
    v11->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, System_String_o *, Il2CppMethodPointer))v11->klass->vtable._23_Add.method)(
    v11,
    StringLiteral_19078/*"easetype"*/,
    easetype,
    v11->klass->vtable._24_Clear.methodPtr);
  v34 = time;
  v32 = j_il2cpp_value_box_0(float_TypeInfo, &v34, v29, v30, v31);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v11->klass->vtable._23_Add.method)(
    v11,
    StringLiteral_24360/*"time"*/,
    v32,
    v11->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v11->klass->vtable._23_Add.method)(
    v11,
    StringLiteral_22680/*"oncomplete"*/,
    StringLiteral_6134/*"EndMove"*/,
    v11->klass->vtable._24_Clear.methodPtr);
  v33 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_61653064(v33, v11, 0LL);
}


void __fastcall UIScriptChara__MoveReturnPosition(UIScriptChara_o *this, float duration, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  TweenPosition_o *v7; // x20
  UnityEngine_GameObject_o *v8; // x0
  __int64 v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int64_t v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7

  if ( (byte_4BDE2D6 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_6137/*"EndMoveReturn"*/);
    byte_4BDE2D6 = 1;
  }
  UIScriptChara__StopMoveTween(this, method);
  this->fields.isMove = 1;
  if ( duration <= 0.0 )
    goto LABEL_9;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v7 = TweenPosition__Begin(gameObject, duration, this->fields.basePosition, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v7, 0LL, 0LL) )
  {
    v8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !v7 )
      sub_1C22094(v8, v9);
    v7->fields.eventReceiver = v8;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v7->fields.eventReceiver, (int64_t)v8, v10, v11, v12, v13, v14, v15);
    v16 = StringLiteral_6137/*"EndMoveReturn"*/;
    v7->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6137/*"EndMoveReturn"*/;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v7->fields.callWhenFinished, v16, v17, v18, v19, v20, v21, v22);
  }
  else
  {
LABEL_9:
    UIScriptChara__EndMoveReturn(this, v5);
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
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  System_Collections_Hashtable_o *v22; // x21
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  __int64 v29; // x0
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  __int64 v33; // x0
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  __int64 v37; // x0
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  __int64 v41; // x0
  UnityEngine_GameObject_o *v42; // x19
  float returnDuration; // [xsp+Ch] [xbp-54h] BYREF
  float v44; // [xsp+10h] [xbp-50h] BYREF
  float v45; // [xsp+14h] [xbp-4Ch] BYREF
  int v46; // [xsp+18h] [xbp-48h] BYREF
  char v47[4]; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4BDE2D8 & 1) == 0 )
  {
    sub_1C21E38(&bool_TypeInfo);
    sub_1C21E38(&System_Collections_Hashtable_TypeInfo);
    sub_1C21E38(&float_TypeInfo);
    sub_1C21E38(&StringLiteral_25185/*"x"*/);
    sub_1C21E38(&StringLiteral_19078/*"easetype"*/);
    sub_1C21E38(&StringLiteral_6138/*"EndMoveReturnEaseHalf"*/);
    sub_1C21E38(&StringLiteral_24360/*"time"*/);
    sub_1C21E38(&StringLiteral_18865/*"delay"*/);
    sub_1C21E38(&StringLiteral_25289/*"y"*/);
    sub_1C21E38(&StringLiteral_21175/*"isLocal"*/);
    sub_1C21E38(&StringLiteral_22680/*"oncomplete"*/);
    sub_1C21E38(&iTween_TypeInfo);
    byte_4BDE2D8 = 1;
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
    UIScriptChara__EndMoveReturn(this, v15);
    return;
  }
  this->fields.returnEaseType = returnEaseType;
  this->fields.returnDuration = time * 0.5;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.returnEaseType,
    (int64_t)returnEaseType,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = (System_Collections_Hashtable_o *)sub_1C22084(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_63695236(v22, 0LL);
  v47[0] = 1;
  gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v47, v23, v24, v25);
  if ( !v22 )
LABEL_11:
    sub_1C22094(gameObject, v14);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v22->klass->vtable._23_Add.method)(
    v22,
    StringLiteral_21175/*"isLocal"*/,
    gameObject,
    v22->klass->vtable._24_Clear.methodPtr);
  v46 = 0;
  v29 = j_il2cpp_value_box_0(float_TypeInfo, &v46, v26, v27, v28);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v22->klass->vtable._23_Add.method)(
    v22,
    StringLiteral_18865/*"delay"*/,
    v29,
    v22->klass->vtable._24_Clear.methodPtr);
  v45 = x;
  v33 = j_il2cpp_value_box_0(float_TypeInfo, &v45, v30, v31, v32);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, void *, __int64, Il2CppMethodPointer))v22->klass->vtable._23_Add.method)(
    v22,
    StringLiteral_25185/*"x"*/,
    v33,
    v22->klass->vtable._24_Clear.methodPtr);
  v44 = y;
  v37 = j_il2cpp_value_box_0(float_TypeInfo, &v44, v34, v35, v36);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v22->klass->vtable._23_Add.method)(
    v22,
    StringLiteral_25289/*"y"*/,
    v37,
    v22->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, System_String_o *, Il2CppMethodPointer))v22->klass->vtable._23_Add.method)(
    v22,
    StringLiteral_19078/*"easetype"*/,
    startEaseType,
    v22->klass->vtable._24_Clear.methodPtr);
  returnDuration = this->fields.returnDuration;
  v41 = j_il2cpp_value_box_0(float_TypeInfo, &returnDuration, v38, v39, v40);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v22->klass->vtable._23_Add.method)(
    v22,
    StringLiteral_24360/*"time"*/,
    v41,
    v22->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v22->klass->vtable._23_Add.method)(
    v22,
    StringLiteral_22680/*"oncomplete"*/,
    StringLiteral_6138/*"EndMoveReturnEaseHalf"*/,
    v22->klass->vtable._24_Clear.methodPtr);
  v42 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_61653064(v42, v22, 0LL);
}


void __fastcall UIScriptChara__MoveReturnPositionEase_43051836(
        UIScriptChara_o *this,
        float time,
        System_String_o *returnEaseType,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x1
  System_Collections_Hashtable_o *v8; // x21
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  __int64 v17; // x0
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  __int64 v21; // x0
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  __int64 v25; // x0
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  __int64 v29; // x0
  UnityEngine_GameObject_o *gameObject; // x19
  float v31; // [xsp+Ch] [xbp-44h] BYREF
  float y; // [xsp+10h] [xbp-40h] BYREF
  float x; // [xsp+14h] [xbp-3Ch] BYREF
  int v34; // [xsp+18h] [xbp-38h] BYREF
  char v35[4]; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4BDE2D9 & 1) == 0 )
  {
    sub_1C21E38(&bool_TypeInfo);
    sub_1C21E38(&System_Collections_Hashtable_TypeInfo);
    sub_1C21E38(&float_TypeInfo);
    sub_1C21E38(&StringLiteral_25185/*"x"*/);
    sub_1C21E38(&StringLiteral_19078/*"easetype"*/);
    sub_1C21E38(&StringLiteral_24360/*"time"*/);
    sub_1C21E38(&StringLiteral_18865/*"delay"*/);
    sub_1C21E38(&StringLiteral_6137/*"EndMoveReturn"*/);
    sub_1C21E38(&StringLiteral_25289/*"y"*/);
    sub_1C21E38(&StringLiteral_21175/*"isLocal"*/);
    sub_1C21E38(&StringLiteral_22680/*"oncomplete"*/);
    sub_1C21E38(&iTween_TypeInfo);
    byte_4BDE2D9 = 1;
  }
  UIScriptChara__StopMoveTween(this, (const MethodInfo *)returnEaseType);
  this->fields.isMove = 1;
  if ( time <= 0.0 )
  {
    UIScriptChara__EndMoveReturn(this, v7);
  }
  else
  {
    v8 = (System_Collections_Hashtable_o *)sub_1C22084(System_Collections_Hashtable_TypeInfo);
    System_Collections_Hashtable___ctor_63695236(v8, 0LL);
    v35[0] = 1;
    v12 = j_il2cpp_value_box_0(bool_TypeInfo, v35, v9, v10, v11);
    if ( !v8 )
      sub_1C22094(v12, v13);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v8->klass->vtable._23_Add.method)(
      v8,
      StringLiteral_21175/*"isLocal"*/,
      v12,
      v8->klass->vtable._24_Clear.methodPtr);
    v34 = 0;
    v17 = j_il2cpp_value_box_0(float_TypeInfo, &v34, v14, v15, v16);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v8->klass->vtable._23_Add.method)(
      v8,
      StringLiteral_18865/*"delay"*/,
      v17,
      v8->klass->vtable._24_Clear.methodPtr);
    x = this->fields.basePosition.fields.x;
    v21 = j_il2cpp_value_box_0(float_TypeInfo, &x, v18, v19, v20);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, void *, __int64, Il2CppMethodPointer))v8->klass->vtable._23_Add.method)(
      v8,
      StringLiteral_25185/*"x"*/,
      v21,
      v8->klass->vtable._24_Clear.methodPtr);
    y = this->fields.basePosition.fields.y;
    v25 = j_il2cpp_value_box_0(float_TypeInfo, &y, v22, v23, v24);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v8->klass->vtable._23_Add.method)(
      v8,
      StringLiteral_25289/*"y"*/,
      v25,
      v8->klass->vtable._24_Clear.methodPtr);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, System_String_o *, Il2CppMethodPointer))v8->klass->vtable._23_Add.method)(
      v8,
      StringLiteral_19078/*"easetype"*/,
      returnEaseType,
      v8->klass->vtable._24_Clear.methodPtr);
    v31 = time;
    v29 = j_il2cpp_value_box_0(float_TypeInfo, &v31, v26, v27, v28);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v8->klass->vtable._23_Add.method)(
      v8,
      StringLiteral_24360/*"time"*/,
      v29,
      v8->klass->vtable._24_Clear.methodPtr);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v8->klass->vtable._23_Add.method)(
      v8,
      StringLiteral_22680/*"oncomplete"*/,
      StringLiteral_6137/*"EndMoveReturn"*/,
      v8->klass->vtable._24_Clear.methodPtr);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__MoveTo_61653064(gameObject, v8, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptChara__MoveReturnPosition_43050640(
        UIScriptChara_o *this,
        float duration,
        UnityEngine_Vector3_o v,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x1
  UnityEngine_GameObject_o *v12; // x0
  TweenPosition_o *v13; // x20
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
  UnityEngine_Vector3_o v27; // 0:s1.4,4:s2.4,8:s3.4

  z = v.fields.z;
  y = v.fields.y;
  x = v.fields.x;
  if ( (byte_4BDE2D7 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_6139/*"EndMoveReturnHalf"*/);
    byte_4BDE2D7 = 1;
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
    v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v27.fields.x = x;
    v27.fields.y = y;
    v27.fields.z = z;
    v13 = TweenPosition__Begin(v12, this->fields.returnDuration, v27, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v13, 0LL, 0LL) )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( v13 )
      {
        v13->fields.eventReceiver = gameObject;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&v13->fields.eventReceiver,
          (int64_t)gameObject,
          v14,
          v15,
          v16,
          v17,
          v18,
          v19);
        v20 = StringLiteral_6139/*"EndMoveReturnHalf"*/;
        v13->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6139/*"EndMoveReturnHalf"*/;
        sub_1C21DDC((PartyOrganizationUtility_o *)&v13->fields.callWhenFinished, v20, v21, v22, v23, v24, v25, v26);
        return;
      }
LABEL_12:
      sub_1C22094(gameObject, v10);
    }
  }
  UIScriptChara__EndMoveReturn(this, v11);
}


void __fastcall UIScriptChara__MoveScale(UIScriptChara_o *this, float duration, float s, const MethodInfo *method)
{
  const MethodInfo *v7; // x1
  UnityEngine_Component_o *baseScale; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  TweenScale_o *v10; // x20
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int64_t v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7

  if ( (byte_4BDE2DB & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_6140/*"EndMoveScale"*/);
    byte_4BDE2DB = 1;
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
    v10 = TweenScale__Begin(gameObject, duration, this->fields.baseScaleSize, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v10, 0LL, 0LL) )
    {
      baseScale = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( v10 )
      {
        v10->fields.eventReceiver = (struct UnityEngine_GameObject_o *)baseScale;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&v10->fields.eventReceiver,
          (int64_t)baseScale,
          v11,
          v12,
          v13,
          v14,
          v15,
          v16);
        v17 = StringLiteral_6140/*"EndMoveScale"*/;
        v10->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6140/*"EndMoveScale"*/;
        sub_1C21DDC((PartyOrganizationUtility_o *)&v10->fields.callWhenFinished, v17, v18, v19, v20, v21, v22, v23);
        return;
      }
LABEL_11:
      sub_1C22094(baseScale, v7);
    }
  }
  UIScriptChara__EndMoveScale(this, v7);
}


void __fastcall UIScriptChara__MoveScaleEase(
        UIScriptChara_o *this,
        float scale,
        float time,
        System_String_o *easetype,
        const MethodInfo *method)
{
  const MethodInfo *v9; // x1
  System_Collections_Hashtable_o *v10; // x21
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  UnityEngine_Component_o *baseScale; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  __int64 v19; // x0
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  __int64 v23; // x0
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  __int64 v27; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v29; // x19
  float v30; // [xsp+0h] [xbp-50h] BYREF
  float y; // [xsp+4h] [xbp-4Ch] BYREF
  float x; // [xsp+8h] [xbp-48h] BYREF
  char v33[4]; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4BDE2DC & 1) == 0 )
  {
    sub_1C21E38(&bool_TypeInfo);
    sub_1C21E38(&System_Collections_Hashtable_TypeInfo);
    sub_1C21E38(&float_TypeInfo);
    sub_1C21E38(&StringLiteral_25185/*"x"*/);
    sub_1C21E38(&StringLiteral_19078/*"easetype"*/);
    sub_1C21E38(&StringLiteral_24360/*"time"*/);
    sub_1C21E38(&StringLiteral_22682/*"oncompletetarget"*/);
    sub_1C21E38(&StringLiteral_25289/*"y"*/);
    sub_1C21E38(&StringLiteral_21175/*"isLocal"*/);
    sub_1C21E38(&StringLiteral_22680/*"oncomplete"*/);
    sub_1C21E38(&StringLiteral_6140/*"EndMoveScale"*/);
    sub_1C21E38(&iTween_TypeInfo);
    byte_4BDE2DC = 1;
  }
  UIScriptChara__StopMoveScaleTween(this, (const MethodInfo *)easetype);
  this->fields.baseScaleSize.fields.x = scale;
  this->fields.baseScaleSize.fields.y = scale;
  this->fields.isMove = 1;
  this->fields.baseScaleSize.fields.z = 1.0;
  if ( time <= 0.0 )
  {
    UIScriptChara__EndMoveScale(this, v9);
  }
  else
  {
    v10 = (System_Collections_Hashtable_o *)sub_1C22084(System_Collections_Hashtable_TypeInfo);
    System_Collections_Hashtable___ctor_63695236(v10, 0LL);
    v33[0] = 1;
    baseScale = (UnityEngine_Component_o *)j_il2cpp_value_box_0(bool_TypeInfo, v33, v11, v12, v13);
    if ( !v10 )
      goto LABEL_10;
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_Component_o *, Il2CppMethodPointer))v10->klass->vtable._23_Add.method)(
      v10,
      StringLiteral_21175/*"isLocal"*/,
      baseScale,
      v10->klass->vtable._24_Clear.methodPtr);
    x = this->fields.baseScaleSize.fields.x;
    v19 = j_il2cpp_value_box_0(float_TypeInfo, &x, v16, v17, v18);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, void *, __int64, Il2CppMethodPointer))v10->klass->vtable._23_Add.method)(
      v10,
      StringLiteral_25185/*"x"*/,
      v19,
      v10->klass->vtable._24_Clear.methodPtr);
    y = this->fields.baseScaleSize.fields.y;
    v23 = j_il2cpp_value_box_0(float_TypeInfo, &y, v20, v21, v22);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v10->klass->vtable._23_Add.method)(
      v10,
      StringLiteral_25289/*"y"*/,
      v23,
      v10->klass->vtable._24_Clear.methodPtr);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, System_String_o *, Il2CppMethodPointer))v10->klass->vtable._23_Add.method)(
      v10,
      StringLiteral_19078/*"easetype"*/,
      easetype,
      v10->klass->vtable._24_Clear.methodPtr);
    v30 = time;
    v27 = j_il2cpp_value_box_0(float_TypeInfo, &v30, v24, v25, v26);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v10->klass->vtable._23_Add.method)(
      v10,
      StringLiteral_24360/*"time"*/,
      v27,
      v10->klass->vtable._24_Clear.methodPtr);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v10->klass->vtable._23_Add.method)(
      v10,
      StringLiteral_22680/*"oncomplete"*/,
      StringLiteral_6140/*"EndMoveScale"*/,
      v10->klass->vtable._24_Clear.methodPtr);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v10->klass->vtable._23_Add.method)(
      v10,
      StringLiteral_22682/*"oncompletetarget"*/,
      gameObject,
      v10->klass->vtable._24_Clear.methodPtr);
    baseScale = (UnityEngine_Component_o *)this->fields.baseScale;
    if ( !baseScale )
LABEL_10:
      sub_1C22094(baseScale, v15);
    v29 = UnityEngine_Component__get_gameObject(baseScale, 0LL);
    if ( !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__ScaleTo_61658592(v29, v10, 0LL);
  }
}


void __fastcall UIScriptChara__OnShake(UIScriptChara_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *baseShake; // x20
  float v4; // s8
  __int64 v5; // x0
  __int64 v6; // x1
  float v7; // s0
  UnityEngine_Transform_o *v8; // x20
  UnityEngine_Vector3_o v9; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BDE2E5 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_10151/*"OnShake"*/);
    byte_4BDE2E5 = 1;
  }
  if ( this->fields.shakeCycle > 0.0
    && (this->fields.shakeTime == 0.0 || UnityEngine_Time__get_time(0LL) < this->fields.shakeTime) )
  {
    baseShake = this->fields.baseShake;
    v4 = UnityEngine_Random__Range(-this->fields.shakeX, this->fields.shakeX, 0LL);
    v7 = UnityEngine_Random__Range(-this->fields.shakeY, this->fields.shakeY, 0LL);
    if ( baseShake )
    {
      v9.fields.y = v7;
      v9.fields.z = 0.0;
      v9.fields.x = v4;
      UnityEngine_Transform__set_localPosition(baseShake, v9, 0LL);
      UnityEngine_MonoBehaviour__Invoke(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_10151/*"OnShake"*/,
        this->fields.shakeCycle,
        0LL);
      return;
    }
LABEL_12:
    sub_1C22094(v5, v6);
  }
  UnityEngine_MonoBehaviour__CancelInvoke_70854192(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_10151/*"OnShake"*/,
    0LL);
  v8 = this->fields.baseShake;
  if ( !byte_4BD6BB1 )
  {
    v5 = sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB1 = 1;
  }
  if ( !v8 )
    goto LABEL_12;
  UnityEngine_Transform__set_localPosition(v8, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
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


void __fastcall UIScriptChara__ResumeBackEffect(UIScriptChara_o *this, bool isSkip, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffectBack; // x20

  if ( (byte_4BDE2F8 & 1) == 0 )
  {
    sub_1C21E38(&CommonEffectManager_TypeInfo);
    byte_4BDE2F8 = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  CommonEffectManager__Resume(baseEffectBack, isSkip, 0LL);
}


void __fastcall UIScriptChara__ResumeBackEffect_43062816(
        UIScriptChara_o *this,
        System_String_o *n,
        bool isSkip,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffectBack; // x21

  if ( (byte_4BDE2F9 & 1) == 0 )
  {
    sub_1C21E38(&CommonEffectManager_TypeInfo);
    byte_4BDE2F9 = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  CommonEffectManager__Resume_41950144(baseEffectBack, n, isSkip, 0LL);
}


void __fastcall UIScriptChara__ResumeCutin(UIScriptChara_o *this, bool isSkip, const MethodInfo *method)
{
  ;
}


void __fastcall UIScriptChara__ResumeEffect(UIScriptChara_o *this, bool isSkip, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffect; // x20

  if ( (byte_4BDE2EE & 1) == 0 )
  {
    sub_1C21E38(&CommonEffectManager_TypeInfo);
    byte_4BDE2EE = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  CommonEffectManager__Resume(baseEffect, isSkip, 0LL);
}


void __fastcall UIScriptChara__ResumeEffect_43061348(
        UIScriptChara_o *this,
        System_String_o *n,
        bool isSkip,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffect; // x21

  if ( (byte_4BDE2EF & 1) == 0 )
  {
    sub_1C21E38(&CommonEffectManager_TypeInfo);
    byte_4BDE2EF = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  CommonEffectManager__Resume_41950144(baseEffect, n, isSkip, 0LL);
}


void __fastcall UIScriptChara__ResumeSpecialEffect(UIScriptChara_o *this, bool isSkip, const MethodInfo *method)
{
  ProgramEffectManager__Resume(this->fields.baseSpecialEffect, isSkip, 0LL);
}


void __fastcall UIScriptChara__ResumeSpecialEffect_43060320(
        UIScriptChara_o *this,
        System_String_o *n,
        bool isSkip,
        const MethodInfo *method)
{
  ProgramEffectManager__Resume_41973012(this->fields.baseSpecialEffect, n, isSkip, 0LL);
}


void __fastcall UIScriptChara__SetAlpha(UIScriptChara_o *this, float a, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  this->fields.isDisp = a > 0.0;
  UIScriptChara__RecoverShadowEffect(this, 0, v3);
}


void __fastcall UIScriptChara__SetBackEffect(
        UIScriptChara_o *this,
        System_String_o *n,
        bool isSkip,
        bool isPause,
        int32_t flip,
        bool isOnSublayer,
        const MethodInfo *method)
{
  if ( !byte_4BD6BB1 )
  {
    sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB1 = 1;
  }
  UIScriptChara__SetBackEffect_43062368(
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
void __fastcall UIScriptChara__SetBackEffect_43062368(
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
  UnityEngine_GameObject_o *baseEffectBack; // x23
  CommonEffectLoadComponent_LoadEndHandler_o *v18; // x24
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  z = p.fields.z;
  y = p.fields.y;
  x = p.fields.x;
  if ( (byte_4BDE2F7 & 1) == 0 )
  {
    sub_1C21E38(&CommonEffectManager_TypeInfo);
    sub_1C21E38(&CommonEffectLoadComponent_LoadEndHandler_TypeInfo);
    sub_1C21E38(&Method_UIScriptChara__SetBackEffect_g__Callback_139_0__);
    byte_4BDE2F7 = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( isOnSublayer )
  {
    v18 = (CommonEffectLoadComponent_LoadEndHandler_o *)sub_1C22084(CommonEffectLoadComponent_LoadEndHandler_TypeInfo);
    CommonEffectLoadComponent_LoadEndHandler___ctor(
      v18,
      0LL,
      Method_UIScriptChara__SetBackEffect_g__Callback_139_0__,
      0LL);
    if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    v19.fields.y = y;
    v19.fields.z = z;
    v19.fields.x = x;
    CommonEffectManager__Create_41948656(baseEffectBack, n, v19, v18, isSkip, isPause, flip, 0LL);
  }
  else
  {
    if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    v20.fields.y = y;
    v20.fields.z = z;
    v20.fields.x = x;
    CommonEffectManager__Create_41948464(baseEffectBack, n, v20, isSkip, isPause, flip, 0LL);
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
    sub_1C22094(0LL, v8);
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
  sub_1C21DDC(
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
    sub_1C22094(baseDepth, *(_QWORD *)&d);
  }
  v8 = (float)-d * 10.0;
  UnityEngine_Transform__set_localPosition(baseDepth, *(UnityEngine_Vector3_o *)&v6, 0LL);
}


void __fastcall UIScriptChara__SetEffect(
        UIScriptChara_o *this,
        System_String_o *n,
        bool isSkip,
        bool isPause,
        int32_t flip,
        bool isOnSublayer,
        const MethodInfo *method)
{
  if ( !byte_4BD6BB1 )
  {
    sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB1 = 1;
  }
  UIScriptChara__SetEffect_43060900(
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
  __int64 v23; // x25
  __int64 v24; // x0
  __int64 v25; // x1
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int64_t v32; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  UnityEngine_Object_o *v39; // x24
  CommonEffectLoadComponent_LoadEndHandler_o *v40; // x24
  UnityEngine_GameObject_o *baseEffect; // x23
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float y; // s9
  float x; // s10
  float z; // s8
  float a; // [xsp+4Ch] [xbp-44h]
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4

  a = particleColor.fields.a;
  b = particleColor.fields.b;
  g = particleColor.fields.g;
  r = particleColor.fields.r;
  v17 = color.fields.a;
  v18 = color.fields.b;
  v19 = color.fields.g;
  v20 = color.fields.r;
  if ( (byte_4BDE2D0 & 1) == 0 )
  {
    sub_1C21E38(&CommonEffectManager_TypeInfo);
    sub_1C21E38(&CommonEffectLoadComponent_LoadEndHandler_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_UIScriptChara___c__DisplayClass49_0__SetEffectEdgeBlur_b__0__);
    sub_1C21E38(&UIScriptChara___c__DisplayClass49_0_TypeInfo);
    byte_4BDE2D0 = 1;
  }
  v23 = sub_1C22084(UIScriptChara___c__DisplayClass49_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v23, 0LL);
  if ( !v23 )
    sub_1C22094(v24, v25);
  *(_QWORD *)(v23 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v23 + 16), (int64_t)this, v26, v27, v28, v29, v30, v31);
  *(float *)(v23 + 24) = v20;
  *(float *)(v23 + 28) = v19;
  *(float *)(v23 + 32) = v18;
  *(float *)(v23 + 36) = v17;
  *(float *)(v23 + 40) = r;
  *(float *)(v23 + 44) = g;
  *(float *)(v23 + 48) = b;
  *(float *)(v23 + 52) = a;
  *(float *)(v23 + 64) = thick;
  *(_DWORD *)(v23 + 68) = level;
  v32 = ((__int64 (__fastcall *)(UIScriptChara_o *, Il2CppMethodPointer))this->klass->vtable._7_GetBodySubTexture.method)(
          this,
          this->klass->vtable._8_GetBody.methodPtr);
  *(_QWORD *)(v23 + 56) = v32;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v23 + 56), v32, v33, v34, v35, v36, v37, v38);
  v39 = *(UnityEngine_Object_o **)(v23 + 56);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v39, 0LL, 0LL) )
  {
    v40 = (CommonEffectLoadComponent_LoadEndHandler_o *)sub_1C22084(CommonEffectLoadComponent_LoadEndHandler_TypeInfo);
    CommonEffectLoadComponent_LoadEndHandler___ctor(
      v40,
      (Il2CppObject *)v23,
      Method_UIScriptChara___c__DisplayClass49_0__SetEffectEdgeBlur_b__0__,
      0LL);
    baseEffect = this->fields.baseEffect;
    if ( !byte_4BD6BB1 )
    {
      sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
      byte_4BD6BB1 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    x = static_fields->zeroVector.fields.x;
    y = static_fields->zeroVector.fields.y;
    z = static_fields->zeroVector.fields.z;
    if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    v47.fields.x = x;
    v47.fields.y = y;
    v47.fields.z = z;
    CommonEffectManager__Create_41948656(baseEffect, effectName, v47, v40, isSkip, isPause, flip, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptChara__SetEffect_43060900(
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
  UnityEngine_GameObject_o *baseEffect; // x23
  CommonEffectLoadComponent_LoadEndHandler_o *v18; // x24
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  z = p.fields.z;
  y = p.fields.y;
  x = p.fields.x;
  if ( (byte_4BDE2ED & 1) == 0 )
  {
    sub_1C21E38(&CommonEffectManager_TypeInfo);
    sub_1C21E38(&CommonEffectLoadComponent_LoadEndHandler_TypeInfo);
    sub_1C21E38(&Method_UIScriptChara__SetEffect_g__Callback_128_0__);
    byte_4BDE2ED = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( isOnSublayer )
  {
    v18 = (CommonEffectLoadComponent_LoadEndHandler_o *)sub_1C22084(CommonEffectLoadComponent_LoadEndHandler_TypeInfo);
    CommonEffectLoadComponent_LoadEndHandler___ctor(v18, 0LL, Method_UIScriptChara__SetEffect_g__Callback_128_0__, 0LL);
    if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    v19.fields.y = y;
    v19.fields.z = z;
    v19.fields.x = x;
    CommonEffectManager__Create_41948656(baseEffect, n, v19, v18, isSkip, isPause, flip, 0LL);
  }
  else
  {
    if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    v20.fields.y = y;
    v20.fields.z = z;
    v20.fields.x = x;
    CommonEffectManager__Create_41948464(baseEffect, n, v20, isSkip, isPause, flip, 0LL);
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
  sub_1C21DDC(
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
    sub_1C22094(0LL, v7);
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
  float z; // s8
  float y; // s9
  float x; // s10
  __int64 v9; // x1
  float v10; // s0
  float v11; // s1
  float v12; // s2
  float v13; // s3
  struct UnityEngine_Transform_o *baseRoll1; // x0
  float v15; // s11
  float v16; // s12
  float v17; // s13
  float v18; // s14
  Il2CppObject *Component_object; // x20
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  z = centerOffset.fields.z;
  y = centerOffset.fields.y;
  x = centerOffset.fields.x;
  if ( (byte_4BDE2DE & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_TweenRotation___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDE2DE = 1;
  }
  v21.fields.y = 0.0;
  v21.fields.z = rollZ * 0.017453;
  v21.fields.x = 0.0;
  *(UnityEngine_Quaternion_o *)&v10 = UnityEngine_Quaternion__Internal_FromEulerRad(v21, 0LL);
  baseRoll1 = this->fields.baseRoll1;
  if ( !baseRoll1 )
    goto LABEL_13;
  v15 = v10;
  v16 = v11;
  v17 = v12;
  v18 = v13;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)baseRoll1,
                       (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_TweenRotation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
  v24.fields.x = v15;
  v24.fields.y = v16;
  v24.fields.z = v17;
  v24.fields.w = v18;
  UnityEngine_Transform__set_localRotation(baseRoll1, v24, 0LL);
  baseRoll1 = this->fields.baseRoll1;
  if ( !baseRoll1
    || (v22.fields.z = -z,
        v22.fields.y = -y,
        v22.fields.x = -x,
        UnityEngine_Transform__set_localPosition(baseRoll1, v22, 0LL),
        (baseRoll1 = this->fields.baseRoll2) == 0LL) )
  {
LABEL_13:
    sub_1C22094(baseRoll1, v9);
  }
  v23.fields.x = x;
  v23.fields.y = y;
  v23.fields.z = z;
  UnityEngine_Transform__set_localPosition(baseRoll1, v23, 0LL);
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
  int v21; // s7
  UnityEngine_Object_o *CharaEffect; // x22
  uint32_t v23; // w0
  __int64 *v24; // x8
  const MethodInfo *v25; // x2
  int colora; // [xsp+5Ch] [xbp-34h]
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v28; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_4BDE2E8 & 1) == 0 )
  {
    colora = v20;
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_25155/*"wipe"*/);
    sub_1C21E38(&StringLiteral_17102/*"appearanceReverse"*/);
    sub_1C21E38(&StringLiteral_18752/*"darkEnemyErasure"*/);
    sub_1C21E38(&StringLiteral_25161/*"wipeTimeRe"*/);
    sub_1C21E38(&StringLiteral_18753/*"darkWipe"*/);
    sub_1C21E38(&StringLiteral_19795/*"flashErasure"*/);
    sub_1C21E38(&StringLiteral_17101/*"appearance"*/);
    sub_1C21E38(&StringLiteral_19378/*"erasure"*/);
    sub_1C21E38(&StringLiteral_19379/*"erasureReverse"*/);
    sub_1C21E38(&StringLiteral_19345/*"enemyErasure"*/);
    sub_1C21E38(&StringLiteral_25160/*"wipeTime"*/);
    v21 = colora;
    byte_4BDE2E8 = 1;
  }
  v27.fields.x = x;
  v27.fields.y = y;
  v27.fields.z = z;
  v28.fields.r = r;
  v28.fields.g = g;
  v28.fields.b = b;
  CharaEffect = (UnityEngine_Object_o *)ProgramEffectManager__CreateCharaEffect(
                                          this->fields.baseSpecialEffect,
                                          n,
                                          v27,
                                          time,
                                          v28,
                                          range,
                                          isSkip,
                                          isPause,
                                          0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(CharaEffect, 0LL, 0LL) )
  {
    v23 = PrivateImplementationDetails___ComputeStringHash(n, 0LL);
    if ( v23 > 0x8D759330 )
    {
      if ( v23 > 0xD4B34506 )
      {
        switch ( v23 )
        {
          case 0xE7555186:
            v24 = &StringLiteral_25155/*"wipe"*/;
            break;
          case 0xEC9DA126:
            v24 = &StringLiteral_18753/*"darkWipe"*/;
            break;
          case 0xEE11C37F:
            v24 = &StringLiteral_17101/*"appearance"*/;
            break;
          default:
            return;
        }
      }
      else
      {
        switch ( v23 )
        {
          case 0x8DA714B6:
            v24 = &StringLiteral_25161/*"wipeTimeRe"*/;
            break;
          case 0x9C7CDA94:
            v24 = &StringLiteral_19795/*"flashErasure"*/;
            break;
          case 0xD4B34506:
            v24 = &StringLiteral_19379/*"erasureReverse"*/;
            break;
          default:
            return;
        }
      }
    }
    else if ( v23 > 0x4A1132BE )
    {
      switch ( v23 )
      {
        case 0x8D759330:
          v24 = &StringLiteral_19378/*"erasure"*/;
          break;
        case 0x4DE5D9DEu:
          v24 = &StringLiteral_19345/*"enemyErasure"*/;
          break;
        case 0x50AF70CBu:
          v24 = &StringLiteral_17102/*"appearanceReverse"*/;
          break;
        default:
          return;
      }
    }
    else if ( v23 == 242689791 )
    {
      v24 = &StringLiteral_25160/*"wipeTime"*/;
    }
    else
    {
      if ( v23 != 1242641086 )
        return;
      v24 = &StringLiteral_18752/*"darkEnemyErasure"*/;
    }
    if ( System_String__op_Equality(n, (System_String_o *)*v24, 0LL) )
      UIScriptChara__StopShadowEffect(this, isSkip, v25);
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
    sub_1C22094(this, method);
  this->fields.shakeTime = v12;
  this->fields.shakeCycle = cycle;
  this->fields.shakeX = x;
  this->fields.shakeY = y;
  UIScriptChara__OnShake(this, method);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UIScriptChara__StartRoll(UIScriptChara_o *this, float duration, float rollZ, const MethodInfo *method)
{
  __int64 v7; // x1
  float v8; // s0
  float v9; // s1
  float v10; // s2
  float v11; // s3
  struct UnityEngine_Transform_o *baseRoll1; // x0
  float v13; // s8
  float v14; // s9
  float v15; // s10
  float v16; // s11
  Il2CppObject *Component_object; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  TweenRotation_o *v19; // x20
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
  bool v34; // w8
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v37; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v38; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_4BDE2DF & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_TweenRotation___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_6117/*"EndExecuteCameraRoll"*/);
    byte_4BDE2DF = 1;
  }
  v36.fields.y = 0.0;
  v36.fields.z = rollZ * 0.017453;
  v36.fields.x = 0.0;
  *(UnityEngine_Quaternion_o *)&v8 = UnityEngine_Quaternion__Internal_FromEulerRad(v36, 0LL);
  baseRoll1 = this->fields.baseRoll1;
  if ( !baseRoll1 )
    goto LABEL_19;
  v13 = v8;
  v14 = v9;
  v15 = v10;
  v16 = v11;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)baseRoll1,
                       (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_TweenRotation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    sub_1C22094(baseRoll1, v7);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseRoll1, 0LL);
  v38.fields.x = v13;
  v38.fields.y = v14;
  v38.fields.z = v15;
  v38.fields.w = v16;
  v19 = TweenRotation__Begin(gameObject, duration, v38, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  baseRoll1 = (struct UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v19, 0LL, 0LL);
  if ( ((unsigned __int8)baseRoll1 & 1) == 0 )
    goto LABEL_16;
  if ( !v19 )
    goto LABEL_19;
  if ( !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v19, 0LL) )
  {
LABEL_16:
    baseRoll1 = this->fields.baseRoll1;
    if ( baseRoll1 )
    {
      v37.fields.x = v13;
      v37.fields.y = v14;
      v37.fields.z = v15;
      v37.fields.w = v16;
      UnityEngine_Transform__set_localRotation(baseRoll1, v37, 0LL);
      v34 = 0;
      goto LABEL_18;
    }
    goto LABEL_19;
  }
  v20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v19->fields.eventReceiver = v20;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v19->fields.eventReceiver, (int64_t)v20, v21, v22, v23, v24, v25, v26);
  v27 = StringLiteral_6117/*"EndExecuteCameraRoll"*/;
  v19->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6117/*"EndExecuteCameraRoll"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v19->fields.callWhenFinished, v27, v28, v29, v30, v31, v32, v33);
  v34 = 1;
LABEL_18:
  this->fields.isRoll = v34;
  return 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptChara__StartRollAxis(
        UIScriptChara_o *this,
        System_String_o *axis,
        float roll,
        float duration,
        const MethodInfo *method)
{
  __int64 v9; // x1
  UnityEngine_Transform_o *baseRoll1; // x0
  float v11; // s10
  float v12; // s1
  float v13; // s11
  char v14; // w21
  float v15; // s0
  char v16; // w21
  float v17; // s10
  float v18; // s1
  float v19; // s0
  char v20; // w20
  float v21; // s2
  float v22; // s8
  float v23; // s2
  float v24; // s3
  float v25; // s0
  float v26; // s1
  float v27; // s11
  float v28; // s12
  Il2CppObject *Component_object; // x20
  struct UnityEngine_Rendering_SortingGroup_o **p_sortingGroup; // x20
  UnityEngine_Object_o *sortingGroup; // x21
  Il2CppObject *v32; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *v40; // x20
  UnityEngine_GameObject_o *v41; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  int64_t v48; // x1
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  bool v55; // w8
  float v56; // [xsp+8h] [xbp-88h]
  float v57; // [xsp+Ch] [xbp-84h]
  float v58; // [xsp+58h] [xbp-38h]
  float v59; // [xsp+5Ch] [xbp-34h]
  UnityEngine_Vector3_o v60; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v61; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Positive; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v63; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v64; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v65; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v66; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v67; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v68; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v69; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v70; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v71; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o localRotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v73; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v74; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v75; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v76; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v77; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o value; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v79; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BDE2E1 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_SortingGroup___);
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_TweenRotation___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    sub_1C21E38(&Method_UITweener_Begin_TweenRotation___);
    sub_1C21E38(&StringLiteral_25185/*"x"*/);
    sub_1C21E38(&StringLiteral_25289/*"y"*/);
    sub_1C21E38(&StringLiteral_25338/*"z"*/);
    sub_1C21E38(&StringLiteral_6121/*"EndExecuteRollAxis"*/);
    byte_4BDE2E1 = 1;
  }
  if ( !System_String__op_Inequality(axis, (System_String_o *)StringLiteral_25185/*"x"*/, 0LL)
    || !System_String__op_Inequality(axis, (System_String_o *)StringLiteral_25289/*"y"*/, 0LL)
    || !System_String__op_Inequality(axis, (System_String_o *)StringLiteral_25338/*"z"*/, 0LL) )
  {
    if ( this->fields.isRollLoop )
    {
      if ( System_String__op_Equality(axis, (System_String_o *)StringLiteral_25185/*"x"*/, 0LL) )
      {
        baseRoll1 = this->fields.baseRoll1;
        if ( !baseRoll1 )
          goto LABEL_62;
        localRotation = UnityEngine_Transform__get_localRotation(baseRoll1, 0LL);
        v60 = UnityEngine_Quaternion__Internal_ToEulerRad(localRotation, 0LL);
        v60.fields.x = v60.fields.x * 57.296;
        v60.fields.y = v60.fields.y * 57.296;
        v60.fields.z = v60.fields.z * 57.296;
        LODWORD(this->fields.startAngle) = (unsigned int)UnityEngine_Quaternion__Internal_MakePositive(v60, 0LL);
      }
      else if ( System_String__op_Equality(axis, (System_String_o *)StringLiteral_25289/*"y"*/, 0LL) )
      {
        baseRoll1 = this->fields.baseRoll1;
        if ( !baseRoll1 )
          goto LABEL_62;
        v73 = UnityEngine_Transform__get_localRotation(baseRoll1, 0LL);
        v61 = UnityEngine_Quaternion__Internal_ToEulerRad(v73, 0LL);
        v61.fields.x = v61.fields.x * 57.296;
        v61.fields.y = v61.fields.y * 57.296;
        v61.fields.z = v61.fields.z * 57.296;
        Positive = UnityEngine_Quaternion__Internal_MakePositive(v61, 0LL);
        this->fields.startAngle = Positive.fields.y;
      }
      else if ( System_String__op_Equality(axis, (System_String_o *)StringLiteral_25338/*"z"*/, 0LL) )
      {
        baseRoll1 = this->fields.baseRoll1;
        if ( !baseRoll1 )
          goto LABEL_62;
        v74 = UnityEngine_Transform__get_localRotation(baseRoll1, 0LL);
        v63 = UnityEngine_Quaternion__Internal_ToEulerRad(v74, 0LL);
        v63.fields.x = v63.fields.x * 57.296;
        v63.fields.y = v63.fields.y * 57.296;
        v63.fields.z = v63.fields.z * 57.296;
        v64 = UnityEngine_Quaternion__Internal_MakePositive(v63, 0LL);
        this->fields.startAngle = v64.fields.z;
      }
    }
    baseRoll1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( baseRoll1 )
    {
      baseRoll1 = UnityEngine_Transform__get_parent(baseRoll1, 0LL);
      if ( baseRoll1 )
      {
        LODWORD(v11) = (unsigned int)UnityEngine_Transform__get_localPosition(baseRoll1, 0LL);
        baseRoll1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
        if ( baseRoll1 )
        {
          baseRoll1 = UnityEngine_Transform__get_parent(baseRoll1, 0LL);
          if ( baseRoll1 )
          {
            *(UnityEngine_Vector3_o *)(&v12 - 1) = UnityEngine_Transform__get_localPosition(baseRoll1, 0LL);
            baseRoll1 = this->fields.baseRoll1;
            if ( baseRoll1 )
            {
              v13 = v12;
              v65.fields.y = -v12;
              v65.fields.x = -v11;
              v65.fields.z = -0.0;
              UnityEngine_Transform__set_localPosition(baseRoll1, v65, 0LL);
              baseRoll1 = this->fields.baseRoll2;
              if ( baseRoll1 )
              {
                v66.fields.z = 0.0;
                v66.fields.x = v11;
                v66.fields.y = v13;
                UnityEngine_Transform__set_localPosition(baseRoll1, v66, 0LL);
                baseRoll1 = (UnityEngine_Transform_o *)System_String__op_Equality(
                                                         axis,
                                                         (System_String_o *)StringLiteral_25185/*"x"*/,
                                                         0LL);
                if ( this->fields.baseRoll1 )
                {
                  v14 = (char)baseRoll1;
                  v75 = UnityEngine_Transform__get_localRotation(this->fields.baseRoll1, 0LL);
                  v67 = UnityEngine_Quaternion__Internal_ToEulerRad(v75, 0LL);
                  v67.fields.x = v67.fields.x * 57.296;
                  v67.fields.y = v67.fields.y * 57.296;
                  v67.fields.z = v67.fields.z * 57.296;
                  LODWORD(v15) = (unsigned int)UnityEngine_Quaternion__Internal_MakePositive(v67, 0LL);
                  if ( (v14 & 1) != 0 )
                    v15 = v15 + roll;
                  v59 = v15;
                  baseRoll1 = (UnityEngine_Transform_o *)System_String__op_Equality(
                                                           axis,
                                                           (System_String_o *)StringLiteral_25289/*"y"*/,
                                                           0LL);
                  if ( this->fields.baseRoll1 )
                  {
                    v16 = (char)baseRoll1;
                    v17 = duration;
                    v76 = UnityEngine_Transform__get_localRotation(this->fields.baseRoll1, 0LL);
                    v68 = UnityEngine_Quaternion__Internal_ToEulerRad(v76, 0LL);
                    v68.fields.x = v68.fields.x * 57.296;
                    v68.fields.y = v68.fields.y * 57.296;
                    v68.fields.z = v68.fields.z * 57.296;
                    *(UnityEngine_Vector3_o *)(&v18 - 1) = UnityEngine_Quaternion__Internal_MakePositive(v68, 0LL);
                    v19 = v18 + roll;
                    if ( (v16 & 1) == 0 )
                      v19 = v18;
                    v58 = v19;
                    baseRoll1 = (UnityEngine_Transform_o *)System_String__op_Equality(
                                                             axis,
                                                             (System_String_o *)StringLiteral_25338/*"z"*/,
                                                             0LL);
                    if ( this->fields.baseRoll1 )
                    {
                      v20 = (char)baseRoll1;
                      v77 = UnityEngine_Transform__get_localRotation(this->fields.baseRoll1, 0LL);
                      v69 = UnityEngine_Quaternion__Internal_ToEulerRad(v77, 0LL);
                      v69.fields.x = v69.fields.x * 57.296;
                      v69.fields.y = v69.fields.y * 57.296;
                      v69.fields.z = v69.fields.z * 57.296;
                      *(UnityEngine_Vector3_o *)(&v21 - 2) = UnityEngine_Quaternion__Internal_MakePositive(v69, 0LL);
                      v22 = (v20 & 1) != 0 ? v21 + roll : v21;
                      v70.fields.x = v59 * 0.017453;
                      v70.fields.y = v58 * 0.017453;
                      v70.fields.z = v22 * 0.017453;
                      *(UnityEngine_Quaternion_o *)(&v23 - 2) = UnityEngine_Quaternion__Internal_FromEulerRad(v70, 0LL);
                      baseRoll1 = this->fields.baseRoll1;
                      v56 = v26;
                      v57 = v25;
                      if ( baseRoll1 )
                      {
                        v27 = v23;
                        v28 = v24;
                        Component_object = UnityEngine_Component__GetComponent_object_(
                                             (UnityEngine_Component_o *)baseRoll1,
                                             (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_TweenRotation___);
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        baseRoll1 = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(
                                                                 (UnityEngine_Object_o *)Component_object,
                                                                 0LL,
                                                                 0LL);
                        if ( ((unsigned __int8)baseRoll1 & 1) != 0 )
                        {
                          if ( !Component_object )
                            goto LABEL_62;
                          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0LL);
                        }
                        p_sortingGroup = &this->fields.sortingGroup;
                        sortingGroup = (UnityEngine_Object_o *)this->fields.sortingGroup;
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        if ( UnityEngine_Object__op_Equality(sortingGroup, 0LL, 0LL) )
                        {
                          baseRoll1 = this->fields.baseDepth;
                          if ( !baseRoll1 )
                            goto LABEL_62;
                          v32 = UnityEngine_Component__GetComponent_object_(
                                  (UnityEngine_Component_o *)baseRoll1,
                                  (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_SortingGroup___);
                          *p_sortingGroup = (struct UnityEngine_Rendering_SortingGroup_o *)v32;
                          sub_1C21DDC(
                            (PartyOrganizationUtility_o *)&this->fields.sortingGroup,
                            (int64_t)v32,
                            v33,
                            v34,
                            v35,
                            v36,
                            v37,
                            v38);
                        }
                        baseRoll1 = (UnityEngine_Transform_o *)*p_sortingGroup;
                        if ( *p_sortingGroup )
                        {
                          if ( !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)baseRoll1, 0LL) )
                          {
                            baseRoll1 = (UnityEngine_Transform_o *)*p_sortingGroup;
                            if ( !*p_sortingGroup )
                              goto LABEL_62;
                            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)baseRoll1, 1, 0LL);
                          }
                          baseRoll1 = this->fields.baseRoll1;
                          if ( baseRoll1 )
                          {
                            gameObject = UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)baseRoll1,
                                           0LL);
                            baseRoll1 = (UnityEngine_Transform_o *)UITweener__Begin_object_(
                                                                     gameObject,
                                                                     v17,
                                                                     (const MethodInfo_30647F8 *)Method_UITweener_Begin_TweenRotation___);
                            if ( baseRoll1 )
                            {
                              v40 = baseRoll1;
                              value = TweenRotation__get_value((TweenRotation_o *)baseRoll1, 0LL);
                              v71 = UnityEngine_Quaternion__Internal_ToEulerRad(value, 0LL);
                              v71.fields.x = v71.fields.x * 57.296;
                              v71.fields.y = v71.fields.y * 57.296;
                              v71.fields.z = v71.fields.z * 57.296;
                              *(UnityEngine_Vector3_o *)&v40[5].monitor = UnityEngine_Quaternion__Internal_MakePositive(
                                                                            v71,
                                                                            0LL);
                              *((float *)&v40[5].fields + 1) = v59;
                              *(float *)&v40[6].klass = v58;
                              *((float *)&v40[6].klass + 1) = v22;
                              if ( v17 <= 0.0 )
                              {
                                UITweener__Sample((UITweener_o *)v40, 1.0, 1, 0LL);
                                UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v40, 0, 0LL);
                              }
                              else
                              {
                                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v40, 0LL, 0LL)
                                  && UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v40, 0LL) )
                                {
                                  baseRoll1 = (UnityEngine_Transform_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
                                  if ( baseRoll1 )
                                  {
                                    ScriptManager__moveBackScriptZ((ScriptManager_o *)baseRoll1, 2048, 0, 0LL);
                                    v41 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                                    v40[3].monitor = v41;
                                    sub_1C21DDC(
                                      (PartyOrganizationUtility_o *)&v40[3].monitor,
                                      (int64_t)v41,
                                      v42,
                                      v43,
                                      v44,
                                      v45,
                                      v46,
                                      v47);
                                    v48 = StringLiteral_6121/*"EndExecuteRollAxis"*/;
                                    *(_QWORD *)&v40[3].fields.m_CachedPtr = StringLiteral_6121/*"EndExecuteRollAxis"*/;
                                    sub_1C21DDC(
                                      (PartyOrganizationUtility_o *)&v40[3].fields,
                                      v48,
                                      v49,
                                      v50,
                                      v51,
                                      v52,
                                      v53,
                                      v54);
                                    v55 = 1;
LABEL_60:
                                    this->fields.isRoll = v55;
                                    return;
                                  }
                                  goto LABEL_62;
                                }
                                baseRoll1 = this->fields.baseRoll1;
                                if ( !baseRoll1 )
                                  goto LABEL_62;
                                v79.fields.y = v56;
                                v79.fields.x = v57;
                                v79.fields.z = v27;
                                v79.fields.w = v28;
                                UnityEngine_Transform__set_localRotation(baseRoll1, v79, 0LL);
                              }
                              v55 = 0;
                              goto LABEL_60;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_62:
    sub_1C22094(baseRoll1, v9);
  }
}


void __fastcall UIScriptChara__StartRollAxis_43057124(
        UIScriptChara_o *this,
        System_String_o *axis,
        float roll,
        float duration,
        bool isLoop,
        bool isWait,
        bool isStopAngle,
        float stopAngle,
        const MethodInfo *method)
{
  const MethodInfo *v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  System_String_o *rollAxis; // x23
  __int64 v24; // x1
  UnityEngine_Transform_o *baseRoll1; // x0
  float y; // s0
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Positive; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o localRotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v33; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v34; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BDE2E2 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_25185/*"x"*/);
    sub_1C21E38(&StringLiteral_25289/*"y"*/);
    sub_1C21E38(&StringLiteral_25338/*"z"*/);
    byte_4BDE2E2 = 1;
  }
  if ( !System_String__op_Inequality(axis, (System_String_o *)StringLiteral_25185/*"x"*/, 0LL)
    || !System_String__op_Inequality(axis, (System_String_o *)StringLiteral_25289/*"y"*/, 0LL)
    || !System_String__op_Inequality(axis, (System_String_o *)StringLiteral_25338/*"z"*/, 0LL) )
  {
    this->fields.isRollLoop = isLoop;
    if ( !isLoop )
    {
LABEL_18:
      UIScriptChara__StartRollAxis(this, axis, roll, duration, v17);
      return;
    }
    this->fields.rollAxis = axis;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.rollAxis,
      (int64_t)axis,
      (int64_t)v17,
      v18,
      v19,
      v20,
      v21,
      v22);
    rollAxis = this->fields.rollAxis;
    if ( System_String__op_Equality(rollAxis, (System_String_o *)StringLiteral_25185/*"x"*/, 0LL) )
    {
      baseRoll1 = this->fields.baseRoll1;
      if ( baseRoll1 )
      {
        localRotation = UnityEngine_Transform__get_localRotation(baseRoll1, 0LL);
        v27 = UnityEngine_Quaternion__Internal_ToEulerRad(localRotation, 0LL);
        v27.fields.x = v27.fields.x * 57.296;
        v27.fields.y = v27.fields.y * 57.296;
        v27.fields.z = v27.fields.z * 57.296;
        LODWORD(y) = (unsigned int)UnityEngine_Quaternion__Internal_MakePositive(v27, 0LL);
LABEL_16:
        this->fields.initAngle = y;
        goto LABEL_17;
      }
    }
    else if ( System_String__op_Equality(rollAxis, (System_String_o *)StringLiteral_25289/*"y"*/, 0LL) )
    {
      baseRoll1 = this->fields.baseRoll1;
      if ( baseRoll1 )
      {
        v33 = UnityEngine_Transform__get_localRotation(baseRoll1, 0LL);
        v28 = UnityEngine_Quaternion__Internal_ToEulerRad(v33, 0LL);
        v28.fields.x = v28.fields.x * 57.296;
        v28.fields.y = v28.fields.y * 57.296;
        v28.fields.z = v28.fields.z * 57.296;
        Positive = UnityEngine_Quaternion__Internal_MakePositive(v28, 0LL);
        y = Positive.fields.y;
        goto LABEL_16;
      }
    }
    else
    {
      if ( !System_String__op_Equality(rollAxis, (System_String_o *)StringLiteral_25338/*"z"*/, 0LL) )
      {
LABEL_17:
        this->fields.rollAngle = roll;
        this->fields.rollDuration = duration;
        this->fields.isRollWait = isWait;
        this->fields.isStopAngleLoopEnd = isStopAngle;
        this->fields.stopAngleLoopEnd = stopAngle;
        goto LABEL_18;
      }
      baseRoll1 = this->fields.baseRoll1;
      if ( baseRoll1 )
      {
        v34 = UnityEngine_Transform__get_localRotation(baseRoll1, 0LL);
        v30 = UnityEngine_Quaternion__Internal_ToEulerRad(v34, 0LL);
        v30.fields.x = v30.fields.x * 57.296;
        v30.fields.y = v30.fields.y * 57.296;
        v30.fields.z = v30.fields.z * 57.296;
        v31 = UnityEngine_Quaternion__Internal_MakePositive(v30, 0LL);
        y = v31.fields.z;
        goto LABEL_16;
      }
    }
    sub_1C22094(baseRoll1, v24);
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UIScriptChara__StartRollEx(
        UIScriptChara_o *this,
        float duration,
        float rollZ,
        UnityEngine_Vector3_o centerOffset,
        const MethodInfo *method)
{
  float z; // s12
  float y; // s13
  float x; // s14
  __int64 v11; // x1
  float v12; // s1
  float v13; // s2
  float v14; // s3
  UnityEngine_Component_o *baseRoll1; // x0
  float v16; // s0
  float v17; // s9
  float v18; // s10
  float v19; // s11
  Il2CppObject *Component_object; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v22; // x20
  UnityEngine_GameObject_o *v23; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x1
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  bool v37; // w8
  float value; // [xsp+Ch] [xbp-64h]
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v44; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v45; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  z = centerOffset.fields.z;
  y = centerOffset.fields.y;
  x = centerOffset.fields.x;
  if ( (byte_4BDE2E0 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_TweenRotation___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_UITweener_Begin_TweenRotation___);
    sub_1C21E38(&StringLiteral_6117/*"EndExecuteCameraRoll"*/);
    byte_4BDE2E0 = 1;
  }
  v40.fields.y = 0.0;
  v40.fields.z = rollZ * 0.017453;
  v40.fields.x = 0.0;
  *(UnityEngine_Quaternion_o *)(&v12 - 1) = UnityEngine_Quaternion__Internal_FromEulerRad(v40, 0LL);
  baseRoll1 = (UnityEngine_Component_o *)this->fields.baseRoll1;
  value = v16;
  if ( !baseRoll1 )
    goto LABEL_23;
  v17 = v12;
  v18 = v13;
  v19 = v14;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       baseRoll1,
                       (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_TweenRotation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
                                           (const MethodInfo_30647F8 *)Method_UITweener_Begin_TweenRotation___);
  if ( !baseRoll1 )
    goto LABEL_23;
  v22 = baseRoll1;
  v44 = TweenRotation__get_value((TweenRotation_o *)baseRoll1, 0LL);
  v41 = UnityEngine_Quaternion__Internal_ToEulerRad(v44, 0LL);
  v41.fields.x = v41.fields.x * 57.296;
  v41.fields.y = v41.fields.y * 57.296;
  v41.fields.z = v41.fields.z * 57.296;
  *(UnityEngine_Vector3_o *)&v22[5].monitor = UnityEngine_Quaternion__Internal_MakePositive(v41, 0LL);
  *((_DWORD *)&v22[5].fields + 1) = 0;
  LODWORD(v22[6].klass) = 0;
  *((float *)&v22[6].klass + 1) = rollZ;
  if ( duration <= 0.0 )
  {
    UITweener__Sample((UITweener_o *)v22, 1.0, 1, 0LL);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v22, 0, 0LL);
  }
  baseRoll1 = (UnityEngine_Component_o *)this->fields.baseRoll1;
  if ( !baseRoll1
    || (v42.fields.z = -z,
        v42.fields.y = -y,
        v42.fields.x = -x,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseRoll1, v42, 0LL),
        (baseRoll1 = (UnityEngine_Component_o *)this->fields.baseRoll2) == 0LL) )
  {
LABEL_23:
    sub_1C22094(baseRoll1, v11);
  }
  v43.fields.x = x;
  v43.fields.y = y;
  v43.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseRoll1, v43, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v22, 0LL, 0LL)
    || !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v22, 0LL) )
  {
    baseRoll1 = (UnityEngine_Component_o *)this->fields.baseRoll1;
    if ( baseRoll1 )
    {
      v45.fields.x = value;
      v45.fields.y = v17;
      v45.fields.z = v18;
      v45.fields.w = v19;
      UnityEngine_Transform__set_localRotation((UnityEngine_Transform_o *)baseRoll1, v45, 0LL);
      v37 = 0;
      goto LABEL_22;
    }
    goto LABEL_23;
  }
  v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v22[3].monitor = v23;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v22[3].monitor, (int64_t)v23, v24, v25, v26, v27, v28, v29);
  v30 = StringLiteral_6117/*"EndExecuteCameraRoll"*/;
  *(_QWORD *)&v22[3].fields.m_CachedPtr = StringLiteral_6117/*"EndExecuteCameraRoll"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v22[3].fields, v30, v31, v32, v33, v34, v35, v36);
  v37 = 1;
LABEL_22:
  this->fields.isRoll = v37;
  return 1;
}


void __fastcall UIScriptChara__StartShadowEffect(UIScriptChara_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseShadowEffect; // x19

  if ( (byte_4BDE2D1 & 1) == 0 )
  {
    sub_1C21E38(&CommonEffectManager_TypeInfo);
    sub_1C21E38(&StringLiteral_13800/*"Talk/bit_talk_11"*/);
    byte_4BDE2D1 = 1;
  }
  if ( this->fields.isShadow && this->fields.isDisp && !this->fields.isShadowEffect )
  {
    this->fields.isShadowEffect = 1;
    baseShadowEffect = this->fields.baseShadowEffect;
    if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    CommonEffectManager__Create_41947036(baseShadowEffect, (System_String_o *)StringLiteral_13800/*"Talk/bit_talk_11"*/, 0, 0, 0, 0LL);
  }
}


bool __fastcall UIScriptChara__StopBackEffect(UIScriptChara_o *this, bool isSkip, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffectBack; // x20

  if ( (byte_4BDE2FA & 1) == 0 )
  {
    sub_1C21E38(&CommonEffectManager_TypeInfo);
    byte_4BDE2FA = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  return CommonEffectManager__Stop(baseEffectBack, isSkip, 0, 0LL, 0LL);
}


bool __fastcall UIScriptChara__StopBackEffect_43063048(
        UIScriptChara_o *this,
        System_String_o *n,
        bool isSkip,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffectBack; // x21

  if ( (byte_4BDE2FB & 1) == 0 )
  {
    sub_1C21E38(&CommonEffectManager_TypeInfo);
    byte_4BDE2FB = 1;
  }
  baseEffectBack = this->fields.baseEffectBack;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  return CommonEffectManager__Stop_41951444(baseEffectBack, n, isSkip, 0, 0LL, 0LL);
}


void __fastcall UIScriptChara__StopCut(UIScriptChara_o *this, const MethodInfo *method)
{
  ;
}


bool __fastcall UIScriptChara__StopEffect(
        UIScriptChara_o *this,
        bool isSkip,
        System_String_o *markKey,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffect; // x21

  if ( (byte_4BDE2F0 & 1) == 0 )
  {
    sub_1C21E38(&CommonEffectManager_TypeInfo);
    byte_4BDE2F0 = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  return CommonEffectManager__Stop(baseEffect, isSkip, 0, markKey, 0LL);
}


bool __fastcall UIScriptChara__StopEffect_43061584(
        UIScriptChara_o *this,
        System_String_o *n,
        bool isSkip,
        System_String_o *markKey,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseEffect; // x22

  if ( (byte_4BDE2F1 & 1) == 0 )
  {
    sub_1C21E38(&CommonEffectManager_TypeInfo);
    byte_4BDE2F1 = 1;
  }
  baseEffect = this->fields.baseEffect;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  return CommonEffectManager__Stop_41951444(baseEffect, n, isSkip, 0, markKey, 0LL);
}


void __fastcall UIScriptChara__StopMoveScaleTween(UIScriptChara_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *baseScale; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  Il2CppObject *Component_object; // x19

  if ( (byte_4BDE2DA & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_TweenScale___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_23438/*"scaleto"*/);
    sub_1C21E38(&iTween_TypeInfo);
    byte_4BDE2DA = 1;
  }
  baseScale = (UnityEngine_Component_o *)this->fields.baseScale;
  if ( !baseScale )
    goto LABEL_14;
  gameObject = UnityEngine_Component__get_gameObject(baseScale, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_61764944(gameObject, (System_String_o *)StringLiteral_23438/*"scaleto"*/, 0LL);
  baseScale = (UnityEngine_Component_o *)this->fields.baseScale;
  if ( !baseScale )
    goto LABEL_14;
  baseScale = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseScale, 0LL);
  if ( !baseScale )
    goto LABEL_14;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)baseScale,
                       (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_TweenScale___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    sub_1C22094(baseScale, method);
  }
}


void __fastcall UIScriptChara__StopMoveTween(UIScriptChara_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x20
  UnityEngine_GameObject_o *v4; // x0
  __int64 v5; // x1
  Il2CppObject *Component_object; // x19

  if ( (byte_4BDE2D3 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_21908/*"moveto"*/);
    sub_1C21E38(&iTween_TypeInfo);
    byte_4BDE2D3 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_61764944(gameObject, (System_String_o *)StringLiteral_21908/*"moveto"*/, 0LL);
  v4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v4 )
    goto LABEL_12;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v4,
                       (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( ((unsigned __int8)v4 & 1) != 0 )
  {
    if ( Component_object )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0LL);
      return;
    }
LABEL_12:
    sub_1C22094(v4, v5);
  }
}


void __fastcall UIScriptChara__StopRollAxisLoop(UIScriptChara_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  _BOOL4 isRollWait; // w9
  System_String_o *rollAxis; // x20
  __int64 v6; // x1
  UnityEngine_Transform_o *baseRoll1; // x0
  float y; // s0
  System_String_o *v9; // x1
  float v10; // s0
  float v11; // s1
  UIScriptChara_o *v12; // x0
  bool v13; // w0
  float rollAngle; // s1
  __int64 v15; // x8
  float v16; // s2
  float v17; // w9
  float v18; // s8
  float v19; // s9
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Positive; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o localRotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v26; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v27; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BDE2E4 & 1) == 0 )
  {
    sub_1C21E38(&System_MathF_TypeInfo);
    sub_1C21E38(&StringLiteral_25185/*"x"*/);
    sub_1C21E38(&StringLiteral_25289/*"y"*/);
    sub_1C21E38(&StringLiteral_25338/*"z"*/);
    byte_4BDE2E4 = 1;
  }
  isRollWait = this->fields.isRollWait;
  this->fields.isRollLoop = 0;
  if ( !isRollWait )
  {
    v9 = (System_String_o *)StringLiteral_25185/*"x"*/;
    v10 = 0.0;
    v11 = 0.0;
    v12 = this;
    goto LABEL_26;
  }
  rollAxis = this->fields.rollAxis;
  if ( System_String__op_Equality(rollAxis, (System_String_o *)StringLiteral_25185/*"x"*/, 0LL) )
  {
    baseRoll1 = this->fields.baseRoll1;
    if ( baseRoll1 )
    {
      localRotation = UnityEngine_Transform__get_localRotation(baseRoll1, 0LL);
      v20 = UnityEngine_Quaternion__Internal_ToEulerRad(localRotation, 0LL);
      v20.fields.x = v20.fields.x * 57.296;
      v20.fields.y = v20.fields.y * 57.296;
      v20.fields.z = v20.fields.z * 57.296;
      LODWORD(y) = (unsigned int)UnityEngine_Quaternion__Internal_MakePositive(v20, 0LL);
      goto LABEL_14;
    }
LABEL_27:
    sub_1C22094(baseRoll1, v6);
  }
  if ( System_String__op_Equality(rollAxis, (System_String_o *)StringLiteral_25289/*"y"*/, 0LL) )
  {
    baseRoll1 = this->fields.baseRoll1;
    if ( !baseRoll1 )
      goto LABEL_27;
    v26 = UnityEngine_Transform__get_localRotation(baseRoll1, 0LL);
    v21 = UnityEngine_Quaternion__Internal_ToEulerRad(v26, 0LL);
    v21.fields.x = v21.fields.x * 57.296;
    v21.fields.y = v21.fields.y * 57.296;
    v21.fields.z = v21.fields.z * 57.296;
    Positive = UnityEngine_Quaternion__Internal_MakePositive(v21, 0LL);
    y = Positive.fields.y;
  }
  else
  {
    v13 = System_String__op_Equality(rollAxis, (System_String_o *)StringLiteral_25338/*"z"*/, 0LL);
    y = 0.0;
    if ( v13 )
    {
      baseRoll1 = this->fields.baseRoll1;
      if ( !baseRoll1 )
        goto LABEL_27;
      v27 = UnityEngine_Transform__get_localRotation(baseRoll1, 0LL);
      v23 = UnityEngine_Quaternion__Internal_ToEulerRad(v27, 0LL);
      v23.fields.x = v23.fields.x * 57.296;
      v23.fields.y = v23.fields.y * 57.296;
      v23.fields.z = v23.fields.z * 57.296;
      v24 = UnityEngine_Quaternion__Internal_MakePositive(v23, 0LL);
      y = v24.fields.z;
    }
  }
LABEL_14:
  rollAngle = this->fields.rollAngle;
  if ( this->fields.isStopAngleLoopEnd )
    v15 = 264LL;
  else
    v15 = 268LL;
  v16 = *(float *)((char *)&this->klass + v15) + this->fields.stopAngleLoopEnd;
  if ( rollAngle >= 0.0 )
  {
    if ( v16 < y )
    {
      v17 = 360.0;
      goto LABEL_22;
    }
  }
  else if ( v16 >= y )
  {
    v17 = -360.0;
LABEL_22:
    v16 = v16 + v17;
  }
  v18 = v16 - y;
  v19 = rollAngle / this->fields.rollDuration;
  if ( !System_MathF_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_MathF_TypeInfo);
  v11 = fabsf(v18 / v19);
  v12 = this;
  v9 = rollAxis;
  v10 = v18;
LABEL_26:
  UIScriptChara__StartRollAxis(v12, v9, v10, v11, v2);
}


void __fastcall UIScriptChara__StopShadowEffect(UIScriptChara_o *this, bool isSkip, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseShadowEffect; // x20

  if ( (byte_4BDE2D2 & 1) == 0 )
  {
    sub_1C21E38(&CommonEffectManager_TypeInfo);
    byte_4BDE2D2 = 1;
  }
  this->fields.isShadowEffect = 0;
  baseShadowEffect = this->fields.baseShadowEffect;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  CommonEffectManager__Stop(baseShadowEffect, isSkip, 0, 0LL, 0LL);
}


void __fastcall UIScriptChara__StopSpecialEffect(UIScriptChara_o *this, const MethodInfo *method)
{
  ProgramEffectManager__Destory(this->fields.baseSpecialEffect, 0LL);
}


void __fastcall UIScriptChara__StopSpecialEffect_43060348(
        UIScriptChara_o *this,
        System_String_o *n,
        const MethodInfo *method)
{
  ProgramEffectManager__Destory_41974772(this->fields.baseSpecialEffect, n, 0LL);
}


void __fastcall UIScriptChara___SetBackEffect_g__Callback_139_0(
        CommonEffectComponent_o *effect,
        const MethodInfo *method)
{
  _BOOL8 v3; // x0
  __int64 v4; // x1

  if ( (byte_4BDE2FE & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDE2FE = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v3 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)effect, 0LL, 0LL);
  if ( !v3 )
  {
    if ( !effect )
      sub_1C22094(v3, v4);
    effect->fields._IsOnSublayer_k__BackingField = 1;
  }
}


void __fastcall UIScriptChara___SetEffect_g__Callback_128_0(CommonEffectComponent_o *effect, const MethodInfo *method)
{
  _BOOL8 v3; // x0
  __int64 v4; // x1

  if ( (byte_4BDE2FD & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDE2FD = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v3 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)effect, 0LL, 0LL);
  if ( !v3 )
  {
    if ( !effect )
      sub_1C22094(v3, v4);
    effect->fields._IsOnSublayer_k__BackingField = 1;
  }
}


void __fastcall UIScriptChara___c__DisplayClass49_0___ctor(
        UIScriptChara___c__DisplayClass49_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UIScriptChara___c__DisplayClass49_0___SetEffectEdgeBlur_b__0(
        UIScriptChara___c__DisplayClass49_0_o *this,
        CommonEffectComponent_o *effect,
        const MethodInfo *method)
{
  UIScriptChara___c__DisplayClass49_0_o *v3; // x19
  struct UIScriptChara_o *_4__this; // x8
  struct UIScriptChara_o *v5; // x8
  UIScriptChara___c__DisplayClass49_0_o *v6; // x20
  struct UIScriptChara_o *v7; // x8
  UnityEngine_Object_o *v8; // x21
  float v9; // s0
  float v10; // s1
  float v11; // s2
  int r_low; // w8
  float v13; // s8
  float v14; // s9
  float v15; // s10
  __int64 v16; // x25
  __int64 v17; // x22
  UnityEngine_Transform_o *transform; // x23
  int v19; // s2
  float v20; // s0
  float v21; // s1
  struct UnityEngine_Texture_o *maskTex; // x8
  UIScriptChara___c__DisplayClass49_0_o *v23; // x23
  struct UnityEngine_Texture_o *v24; // x8
  int v25; // w24
  struct UIScriptChara_o *v26; // x8
  UIScriptChara_c *klass; // x9
  float v28; // s0
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4

  v3 = this;
  if ( (byte_4BDE2FF & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponentsInChildren_FGOEdgeBlur___);
    this = (UIScriptChara___c__DisplayClass49_0_o *)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDE2FF = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_29;
  this = (UIScriptChara___c__DisplayClass49_0_o *)_4__this->fields.baseEffect;
  if ( !this
    || (this = (UIScriptChara___c__DisplayClass49_0_o *)UnityEngine_GameObject__GetComponentsInChildren_object_(
                                                          (UnityEngine_GameObject_o *)this,
                                                          1,
                                                          (const MethodInfo_30011D4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_FGOEdgeBlur___),
        (v5 = v3->fields.__4__this) == 0LL)
    || (v6 = this,
        this = (UIScriptChara___c__DisplayClass49_0_o *)((__int64 (__fastcall *)(struct UIScriptChara_o *, Il2CppMethodPointer))v5->klass->vtable._8_GetBody.method)(
                                                          v3->fields.__4__this,
                                                          v5->klass->vtable._9_GetSizeEdgeBlur.methodPtr),
        (v7 = v3->fields.__4__this) == 0LL)
    || (v8 = (UnityEngine_Object_o *)this,
        this = (UIScriptChara___c__DisplayClass49_0_o *)((__int64 (__fastcall *)(struct UIScriptChara_o *, Il2CppMethodPointer))v7->klass->vtable._4_GetOffsetEdgeBlur.method)(
                                                          v3->fields.__4__this,
                                                          v7->klass->vtable._5_GetRectEdgeBlur.methodPtr),
        !v6) )
  {
LABEL_29:
    sub_1C22094(this, effect);
  }
  r_low = LODWORD(v6->fields.color.fields.r);
  if ( r_low >= 1 )
  {
    v13 = v9;
    v14 = v10;
    v15 = v11;
    v16 = 0LL;
    do
    {
      if ( (unsigned int)v16 >= r_low )
        sub_1C2209C(this, effect);
      v17 = *((_QWORD *)&v6->fields.color.fields.b + v16);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (UIScriptChara___c__DisplayClass49_0_o *)UnityEngine_Object__op_Inequality(v8, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v17 )
          goto LABEL_29;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v17, 0LL);
        this = (UIScriptChara___c__DisplayClass49_0_o *)UnityEngine_Component__get_transform(
                                                          (UnityEngine_Component_o *)v17,
                                                          0LL);
        if ( !this )
          goto LABEL_29;
        *(UnityEngine_Vector3_o *)(&v19 - 2) = UnityEngine_Transform__get_localPosition(
                                                 (UnityEngine_Transform_o *)this,
                                                 0LL);
        if ( !transform )
          goto LABEL_29;
        v20 = v13;
        v21 = v14;
        UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)(&v19 - 2), 0LL);
      }
      else if ( !v17 )
      {
        goto LABEL_29;
      }
      *(struct UnityEngine_Color_o *)(v17 + 96) = v3->fields.color;
      *(struct UnityEngine_Color_o *)(v17 + 112) = v3->fields.particleColor;
      FGOEdgeBlur__set_Texture((FGOEdgeBlur_o *)v17, v3->fields.maskTex, 0LL);
      this = (UIScriptChara___c__DisplayClass49_0_o *)UnityEngine_Component__get_transform(
                                                        (UnityEngine_Component_o *)v17,
                                                        0LL);
      maskTex = v3->fields.maskTex;
      if ( !maskTex )
        goto LABEL_29;
      v23 = this;
      this = (UIScriptChara___c__DisplayClass49_0_o *)((__int64 (__fastcall *)(struct UnityEngine_Texture_o *, Il2CppMethodPointer))maskTex->klass->vtable._4_get_width.method)(
                                                        v3->fields.maskTex,
                                                        maskTex->klass->vtable._5_set_width.methodPtr);
      v24 = v3->fields.maskTex;
      if ( !v24 )
        goto LABEL_29;
      v25 = (int)this;
      this = (UIScriptChara___c__DisplayClass49_0_o *)((__int64 (__fastcall *)(struct UnityEngine_Texture_o *, Il2CppMethodPointer))v24->klass->vtable._6_get_height.method)(
                                                        v3->fields.maskTex,
                                                        v24->klass->vtable._7_set_height.methodPtr);
      if ( !v23 )
        goto LABEL_29;
      v32.fields.y = (float)(int)this;
      v32.fields.x = (float)v25;
      v32.fields.z = 0.0;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)v23, v32, 0LL);
      FGOEdgeBlur__set_Thickness((FGOEdgeBlur_o *)v17, v3->fields.thick, 0LL);
      FGOEdgeBlur__set_Level((FGOEdgeBlur_o *)v17, v3->fields.level, 0LL);
      this = (UIScriptChara___c__DisplayClass49_0_o *)v3->fields.maskTex;
      if ( !this )
        goto LABEL_29;
      this = (UIScriptChara___c__DisplayClass49_0_o *)(*(__int64 (__fastcall **)(UIScriptChara___c__DisplayClass49_0_o *, void *))&this->klass[1]._1.byval_arg.bits)(
                                                        this,
                                                        this->klass[1]._1.this_arg.data);
      v26 = v3->fields.__4__this;
      if ( !v26 )
        goto LABEL_29;
      klass = v26->klass;
      if ( (int)this <= 1024 )
        v28 = ((float (__fastcall *)(struct UIScriptChara_o *, Il2CppMethodPointer))klass->vtable._5_GetRectEdgeBlur.method)(
                v3->fields.__4__this,
                klass->vtable._6_GetHighRectEdgeBlur.methodPtr);
      else
        v28 = ((float (__fastcall *)(struct UIScriptChara_o *, Il2CppMethodPointer))klass->vtable._6_GetHighRectEdgeBlur.method)(
                v3->fields.__4__this,
                klass->vtable._7_GetBodySubTexture.methodPtr);
      FGOEdgeBlur__set_Rect((FGOEdgeBlur_o *)v17, *(UnityEngine_Rect_o *)&v28, 0LL);
      v33.fields.x = v13;
      v33.fields.y = v14;
      v33.fields.z = v15;
      FGOEdgeBlur__setMaskImagePosition((FGOEdgeBlur_o *)v17, v33, 0LL);
      r_low = LODWORD(v6->fields.color.fields.r);
      ++v16;
    }
    while ( (int)v16 < r_low );
  }
}