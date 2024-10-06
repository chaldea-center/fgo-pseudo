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
  __int64 v5; // x0
  WrapBattleBaseAnimation_SimpleData_o *v6; // x20
  BattlePlayAnimationComponent_SaveData_o *v7; // x21
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x3

  if ( (byte_4A72E34 & 1) == 0 )
  {
    sub_1B90010(&BattlePlayAnimationComponent_SaveData_TypeInfo, method);
    byte_4A72E34 = 1;
  }
  WrapAnimation = (System_String_o *)BattlePlayAnimationComponent__get_WrapAnimation(this, method);
  if ( !WrapAnimation )
    goto LABEL_9;
  v5 = ((__int64 (__fastcall *)(System_String_o *, Il2CppMethodPointer))WrapAnimation->klass->vtable._5_System_Collections_IEnumerable_GetEnumerator.method)(
         WrapAnimation,
         WrapAnimation->klass->vtable._6_System_Collections_Generic_IEnumerable_System_Char__GetEnumerator.methodPtr);
  if ( !v5 )
    return 0LL;
  v6 = (WrapBattleBaseAnimation_SimpleData_o *)v5;
  v7 = (BattlePlayAnimationComponent_SaveData_o *)sub_1B9025C(BattlePlayAnimationComponent_SaveData_TypeInfo);
  BattlePlayAnimationComponent_SaveData___ctor(v7, v8);
  WrapAnimation = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  if ( !v7 )
LABEL_9:
    sub_1B9026C(WrapAnimation, v4);
  BattlePlayAnimationComponent_SaveData__Init(v7, WrapAnimation, v6, v9);
  return v7;
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
    sub_1B9026C(0LL, v7);
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
  int32_t v6; // w2
  int32_t v7; // w3

  p_wrapAnimation = &this->fields._wrapAnimation;
  wrapAnimation = this->fields._wrapAnimation;
  if ( !wrapAnimation )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    wrapAnimation = WrapBattleBaseAnimation__MakeWrapAnimation(gameObject, 0LL);
    this->fields._wrapAnimation = wrapAnimation;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)p_wrapAnimation, (int32_t)wrapAnimation, v6, v7);
  }
  return wrapAnimation;
}


void __fastcall BattlePlayAnimationComponent_SaveData___ctor(
        BattlePlayAnimationComponent_SaveData_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w1
  int32_t v6; // w1
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A72E35 & 1) == 0 )
  {
    sub_1B90010(&StringLiteral_1/*""*/, method);
    byte_4A72E35 = 1;
  }
  v5 = (int)StringLiteral_1/*""*/;
  this->fields.componentName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields, v5, v2, v3);
  v6 = (int)StringLiteral_1/*""*/;
  this->fields.animName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.animName, v6, v7, v8);
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
  int32_t v8; // w2
  int32_t v9; // w3
  struct System_String_o *animName; // x1
  BattlePlayAnimationComponent_SaveData_o *result; // x0

  this->fields.componentName = objName;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)objName, (int32_t)data, (int32_t)method);
  if ( !data )
    sub_1B9026C(v6, v7);
  animName = data->fields.animName;
  this->fields.animName = animName;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.animName, (int32_t)animName, v8, v9);
  result = this;
  this->fields.timeline = data->fields.timeline;
  return result;
}