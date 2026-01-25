void BattlePlayAnimationComponent___ctor(BattlePlayAnimationComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


BattlePlayAnimationComponent_SaveData_o *BattlePlayAnimationComponent__GetSaveData(
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

  if ( (byte_4CF1D27 & 1) == 0 )
  {
    sub_1C7BAE8(&BattlePlayAnimationComponent_SaveData_TypeInfo);
    byte_4CF1D27 = 1;
  }
  WrapAnimation = (System_String_o *)BattlePlayAnimationComponent__get_WrapAnimation(this, method);
  if ( !WrapAnimation )
    goto LABEL_9;
  v5 = ((__int64 (__fastcall *)(System_String_o *, const MethodInfo *))WrapAnimation->klass->vtable._5_System_Collections_IEnumerable_GetEnumerator.methodPtr)(
         WrapAnimation,
         WrapAnimation->klass->vtable._5_System_Collections_IEnumerable_GetEnumerator.method);
  if ( !v5 )
    return 0;
  v6 = (WrapBattleBaseAnimation_SimpleData_o *)v5;
  v7 = (BattlePlayAnimationComponent_SaveData_o *)sub_1C7BD34(BattlePlayAnimationComponent_SaveData_TypeInfo);
  BattlePlayAnimationComponent_SaveData___ctor(v7, v8);
  WrapAnimation = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
  if ( !v7 )
LABEL_9:
    sub_1C7BD40(WrapAnimation, v4);
  BattlePlayAnimationComponent_SaveData__Init(v7, WrapAnimation, v6, v9);
  return v7;
}


bool BattlePlayAnimationComponent__IsMatchKey(
        BattlePlayAnimationComponent_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  return BasicHelper__EqualExceptNullOrEmpty(this->fields.motionKey, key, 0);
}


bool BattlePlayAnimationComponent__IsSave(BattlePlayAnimationComponent_o *this, const MethodInfo *method)
{
  return this->fields.isSaveAnimation;
}


// local variable allocation has failed, the output may be wrong!
void BattlePlayAnimationComponent__PlayAnimation(
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
    sub_1C7BD40(0, v7);
  ((void (__fastcall *)(WrapBattleBaseAnimation_o *, System_String_o *, const MethodInfo *, long double))WrapAnimation->klass->vtable._4_PlayAnimation.methodPtr)(
    WrapAnimation,
    animName,
    WrapAnimation->klass->vtable._4_PlayAnimation.method,
    v4);
}


void BattlePlayAnimationComponent__SetSaveData(
        BattlePlayAnimationComponent_o *this,
        BattlePlayAnimationComponent_SaveData_o *save,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  if ( save )
  {
    if ( !System_String__IsNullOrEmpty(save->fields.animName, 0) )
      BattlePlayAnimationComponent__PlayAnimation(this, save->fields.animName, save->fields.timeline, v5);
  }
}


WrapBattleBaseAnimation_o *BattlePlayAnimationComponent__get_WrapAnimation(
        BattlePlayAnimationComponent_o *this,
        const MethodInfo *method)
{
  struct WrapBattleBaseAnimation_o **p_wrapAnimation; // x19
  struct WrapBattleBaseAnimation_o *wrapAnimation; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  p_wrapAnimation = &this->fields._wrapAnimation;
  wrapAnimation = this->fields._wrapAnimation;
  if ( !wrapAnimation )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    wrapAnimation = WrapBattleBaseAnimation__MakeWrapAnimation(gameObject, 0);
    this->fields._wrapAnimation = wrapAnimation;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)p_wrapAnimation, (int32_t)wrapAnimation, v6, v7, v8, v9, v10, v11);
  }
  return wrapAnimation;
}


void BattlePlayAnimationComponent_SaveData___ctor(
        BattlePlayAnimationComponent_SaveData_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w1
  int32_t v10; // w1
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4CF1D28 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CF1D28 = 1;
  }
  v9 = StringLiteral_1/*""*/;
  this->fields.componentName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields, v9, v2, v3, v4, v5, v6, v7);
  v10 = StringLiteral_1/*""*/;
  this->fields.animName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.animName, v10, v11, v12, v13, v14, v15, v16);
  System_Object___ctor((Il2CppObject *)this, 0);
}


BattlePlayAnimationComponent_SaveData_o *BattlePlayAnimationComponent_SaveData__Init(
        BattlePlayAnimationComponent_SaveData_o *this,
        System_String_o *objName,
        WrapBattleBaseAnimation_SimpleData_o *data,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  struct System_String_o *animName; // x1
  BattlePlayAnimationComponent_SaveData_o *result; // x0

  this->fields.componentName = objName;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields,
    (int32_t)objName,
    (int32_t)data,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  if ( !data )
    sub_1C7BD40(v10, v11);
  animName = data->fields.animName;
  this->fields.animName = animName;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.animName, (int32_t)animName, v12, v13, v14, v15, v16, v17);
  result = this;
  this->fields.timeline = data->fields.timeline;
  return result;
}