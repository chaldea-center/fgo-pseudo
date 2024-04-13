void __fastcall BattlePlayAnimationComponent___ctor(BattlePlayAnimationComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


BattlePlayAnimationComponent_SaveData_o *__fastcall BattlePlayAnimationComponent__GetSaveData(
        BattlePlayAnimationComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_String_o *WrapAnimation; // x0
  __int64 v6; // x1
  BattlePlayAnimationComponent_SaveData_o *result; // x0
  BattlePlayAnimationComponent_SaveData_o *v8; // x20
  BattlePlayAnimationComponent_SaveData_o *v9; // x21

  if ( (byte_42E9610 & 1) == 0 )
  {
    sub_B5D5C4(&BattlePlayAnimationComponent_SaveData_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9610 = 1;
  }
  WrapAnimation = (System_String_o *)BattlePlayAnimationComponent__get_WrapAnimation(this, method);
  if ( !WrapAnimation )
    goto LABEL_8;
  result = (BattlePlayAnimationComponent_SaveData_o *)((__int64 (__fastcall *)(System_String_o *, Il2CppMethodPointer))WrapAnimation->klass->vtable._5_Clone.method)(
                                                        WrapAnimation,
                                                        WrapAnimation->klass->vtable._6_GetTypeCode.methodPtr);
  if ( result )
  {
    v8 = result;
    v9 = (BattlePlayAnimationComponent_SaveData_o *)sub_B5D694(BattlePlayAnimationComponent_SaveData_TypeInfo);
    BattlePlayAnimationComponent_SaveData___ctor(v9, 0LL);
    WrapAnimation = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
    if ( v9 )
      return BattlePlayAnimationComponent_SaveData__Init(
               v9,
               WrapAnimation,
               (WrapBattleBaseAnimation_SimpleData_o *)v8,
               0LL);
LABEL_8:
    sub_B5D69C(WrapAnimation, v6);
  }
  return result;
}


bool __fastcall BattlePlayAnimationComponent__IsMatchKey(
        BattlePlayAnimationComponent_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  return BasicHelper__EqualExceptNullOrEmpty(this->fields.motionKey, key, 0LL);
}


bool __fastcall BattlePlayAnimationComponent__IsSave(BattlePlayAnimationComponent_o *this, const MethodInfo *method)
{
  return this->fields.isSaveAnimation;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePlayAnimationComponent__PlayAnimation(
        BattlePlayAnimationComponent_o *this,
        System_String_o *animName,
        float timeline,
        const MethodInfo *method)
{
  long double v4; // q8
  WrapBattleBaseAnimation_o *WrapAnimation; // x0
  __int64 v7; // x1

  v4 = *(long double *)&timeline;
  WrapAnimation = BattlePlayAnimationComponent__get_WrapAnimation(this, (const MethodInfo *)animName);
  if ( !WrapAnimation )
    sub_B5D69C(0LL, v7);
  ((void (__fastcall *)(WrapBattleBaseAnimation_o *, System_String_o *, Il2CppMethodPointer, long double))WrapAnimation->klass->vtable._4_PlayAnimation.method)(
    WrapAnimation,
    animName,
    WrapAnimation->klass->vtable._5_GetPlayingSimpleAnimData.methodPtr,
    v4);
}


void __fastcall BattlePlayAnimationComponent__SetSaveData(
        BattlePlayAnimationComponent_o *this,
        BattlePlayAnimationComponent_SaveData_o *save,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  if ( save )
  {
    if ( !System_String__IsNullOrEmpty(save->fields.animName, 0LL) )
      BattlePlayAnimationComponent__PlayAnimation(this, save->fields.animName, save->fields.timeline, v5);
  }
}


WrapBattleBaseAnimation_o *__fastcall BattlePlayAnimationComponent__get_WrapAnimation(
        BattlePlayAnimationComponent_o *this,
        const MethodInfo *method)
{
  struct WrapBattleBaseAnimation_o **p_wrapAnimation; // x19
  struct WrapBattleBaseAnimation_o *wrapAnimation; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  p_wrapAnimation = &this->fields._wrapAnimation;
  wrapAnimation = this->fields._wrapAnimation;
  if ( !wrapAnimation )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    wrapAnimation = WrapBattleBaseAnimation__MakeWrapAnimation(gameObject, 0LL);
    this->fields._wrapAnimation = wrapAnimation;
    sub_B5D560(
      (BattleServantConfConponent_o *)p_wrapAnimation,
      (System_Int32_array **)wrapAnimation,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
  }
  return wrapAnimation;
}


void __fastcall BattlePlayAnimationComponent_SaveData___ctor(
        BattlePlayAnimationComponent_SaveData_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E60A2 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42E60A2 = 1;
  }
  this->fields.componentName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560(&this->fields);
  this->fields.animName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560(&this->fields.animName);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BattlePlayAnimationComponent_SaveData_o *__fastcall BattlePlayAnimationComponent_SaveData__Init(
        BattlePlayAnimationComponent_SaveData_o *this,
        System_String_o *objName,
        WrapBattleBaseAnimation_SimpleData_o *data,
        const MethodInfo *method)
{
  __int64 v6; // x0
  __int64 v7; // x1
  BattlePlayAnimationComponent_SaveData_o *result; // x0

  this->fields.componentName = objName;
  sub_B5D560(&this->fields);
  if ( !data )
    sub_B5D69C(v6, v7);
  this->fields.animName = data->fields.animName;
  sub_B5D560(&this->fields.animName);
  result = this;
  this->fields.timeline = data->fields.timeline;
  return result;
}