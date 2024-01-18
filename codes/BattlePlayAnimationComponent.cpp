void __fastcall BattlePlayAnimationComponent___ctor(BattlePlayAnimationComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


BattlePlayAnimationComponent_SaveData_o *__fastcall BattlePlayAnimationComponent__GetSaveData(
        BattlePlayAnimationComponent_o *this,
        const MethodInfo *method)
{
  System_String_o *WrapAnimation; // x0
  __int64 v4; // x1
  BattlePlayAnimationComponent_SaveData_o *result; // x0
  BattlePlayAnimationComponent_SaveData_o *v6; // x20
  BattlePlayAnimationComponent_SaveData_o *v7; // x21

  if ( (byte_4188526 & 1) == 0 )
  {
    sub_B2C35C(&BattlePlayAnimationComponent_SaveData_TypeInfo, method);
    byte_4188526 = 1;
  }
  WrapAnimation = (System_String_o *)BattlePlayAnimationComponent__get_WrapAnimation(this, method);
  if ( !WrapAnimation )
    goto LABEL_8;
  result = (BattlePlayAnimationComponent_SaveData_o *)((__int64 (__fastcall *)(System_String_o *, Il2CppMethodPointer))WrapAnimation->klass->vtable._5_Clone.method)(
                                                        WrapAnimation,
                                                        WrapAnimation->klass->vtable._6_GetTypeCode.methodPtr);
  if ( result )
  {
    v6 = result;
    v7 = (BattlePlayAnimationComponent_SaveData_o *)sub_B2C42C(BattlePlayAnimationComponent_SaveData_TypeInfo);
    BattlePlayAnimationComponent_SaveData___ctor(v7, 0LL);
    WrapAnimation = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
    if ( v7 )
      return BattlePlayAnimationComponent_SaveData__Init(
               v7,
               WrapAnimation,
               (WrapBattleBaseAnimation_SimpleData_o *)v6,
               0LL);
LABEL_8:
    sub_B2C434(WrapAnimation, v4);
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
    sub_B2C434(0LL, v7);
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
    sub_B2C2F8(
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
  void *v3; // x1
  void *v4; // x1

  if ( (byte_418508A & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_418508A = 1;
  }
  v3 = StringLiteral_1/*""*/;
  this->fields.componentName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8(&this->fields, v3);
  v4 = StringLiteral_1/*""*/;
  this->fields.animName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8(&this->fields.animName, v4);
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
  struct System_String_o *animName; // x1
  BattlePlayAnimationComponent_SaveData_o *result; // x0

  this->fields.componentName = objName;
  sub_B2C2F8(&this->fields, objName);
  if ( !data )
    sub_B2C434(v6, v7);
  animName = data->fields.animName;
  this->fields.animName = animName;
  sub_B2C2F8(&this->fields.animName, animName);
  result = this;
  this->fields.timeline = data->fields.timeline;
  return result;
}