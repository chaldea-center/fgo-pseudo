void GrandQuestClassBoardController___ctor(GrandQuestClassBoardController_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x20

  if ( (byte_4C21FF7 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__UISprite___ctor__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_int__UISprite__TypeInfo);
    byte_4C21FF7 = 1;
  }
  this->fields.currentWarId = -1;
  *(_OWORD *)&this->fields.effectRootDefaultPosition.fields.x = xmmword_C0A060;
  *(_OWORD *)&this->fields.effectRootQuestSelectPosition.fields.y = xmmword_C0A910;
  v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_int__UISprite__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v3,
    (const MethodInfo_33E08A8 *)Method_System_Collections_Generic_Dictionary_int__UISprite___ctor__);
  this->fields.dicClassIcon = (struct System_Collections_Generic_Dictionary_int__UISprite__o *)v3;
  sub_1C2D434(&this->fields.dicClassIcon);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void GrandQuestClassBoardController__ChangeClass(
        GrandQuestClassBoardController_o *this,
        int32_t warId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x6

  if ( this->fields.currentWarId == warId )
    ActionExtensions__Call(callback, 0);
  else
    GrandQuestClassBoardController__SetClass(this, 0, 0, 0, warId, callback, v4);
}


void GrandQuestClassBoardController__ChangeViewType(
        GrandQuestClassBoardController_o *this,
        int32_t viewType,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  const MethodInfo *v6; // x1

  if ( this->fields.currentViewType == viewType )
  {
    ActionExtensions__Call(callback, 0);
  }
  else
  {
    GrandQuestClassBoardController__SetEffectRootPosition(this, 0, viewType, callback, v4);
    GrandQuestClassBoardController__RefreshClassBoardRootActive(this, v6);
  }
}


void GrandQuestClassBoardController__ExecChangeIconAlpha(
        GrandQuestClassBoardController_o *this,
        UISprite_o *icon,
        float toAlpha,
        float time,
        const MethodInfo *method)
{
  __int64 v8; // x19
  UnityEngine_Component_o *v9; // x0
  __int64 v10; // x1
  float v11; // s0
  UnityEngine_GameObject_o *gameObject; // x0
  EasingObject_o *v13; // x20
  System_Action_o *v14; // x21
  System_Action_o *v15; // x22

  if ( (byte_4C21FF1 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_1C2D490(&Method_GrandQuestClassBoardController___c__DisplayClass35_0__ExecChangeIconAlpha_b__0__);
    sub_1C2D490(&Method_GrandQuestClassBoardController___c__DisplayClass35_0__ExecChangeIconAlpha_b__1__);
    sub_1C2D490(&GrandQuestClassBoardController___c__DisplayClass35_0_TypeInfo);
    byte_4C21FF1 = 1;
  }
  v8 = sub_1C2D6DC(GrandQuestClassBoardController___c__DisplayClass35_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0);
  if ( !v8 )
    goto LABEL_11;
  *(_QWORD *)(v8 + 32) = icon;
  *(float *)(v8 + 28) = toAlpha;
  sub_1C2D434(v8 + 32);
  v9 = *(UnityEngine_Component_o **)(v8 + 32);
  if ( time > 0.0 )
  {
    if ( v9 )
    {
      v11 = ((float (__fastcall *)(UnityEngine_Component_o *, _QWORD))v9->klass[1]._1.this_arg.data)(
              v9,
              *(_QWORD *)&v9->klass[1]._1.this_arg.bits);
      v9 = *(UnityEngine_Component_o **)(v8 + 32);
      *(float *)(v8 + 24) = v11;
      if ( v9 )
      {
        gameObject = UnityEngine_Component__get_gameObject(v9, 0);
        *(_QWORD *)(v8 + 16) = GameObjectExtensions__SafeGetComponent_object_(
                                 gameObject,
                                 (const MethodInfo_31279B8 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
        sub_1C2D434(v8 + 16);
        v13 = *(EasingObject_o **)(v8 + 16);
        v14 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
        System_Action___ctor(
          v14,
          (Il2CppObject *)v8,
          Method_GrandQuestClassBoardController___c__DisplayClass35_0__ExecChangeIconAlpha_b__0__,
          0);
        v15 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
        System_Action___ctor(
          v15,
          (Il2CppObject *)v8,
          Method_GrandQuestClassBoardController___c__DisplayClass35_0__ExecChangeIconAlpha_b__1__,
          0);
        if ( v13 )
        {
          EasingObject__Play_48952224(v13, 0.0, 1.0, time, v14, v15, 0.0, 15, 0);
          return;
        }
      }
    }
LABEL_11:
    sub_1C2D6EC(v9, v10);
  }
  if ( !v9 )
    goto LABEL_11;
  ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, float))v9->klass[1]._1.element_class)(
    v9,
    v9->klass[1]._1.castClass,
    *(float *)(v8 + 28));
}


void GrandQuestClassBoardController__ExecCircleEffect(
        GrandQuestClassBoardController_o *this,
        bool immediately,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x21
  BlankEarthSpotEntity_o *blankEarthSpotEntity; // x0
  __int64 v9; // x1
  int v10; // w23
  char v11; // w24
  float x; // s8
  float y; // s9
  float v14; // s0
  struct GrandQuestRootComponent_o *rootComponent; // x8
  struct GrandQuestClassSelectController_o *classSelectController; // x8
  float v17; // w8
  float classIconDefaultAlpha; // s10
  float classIconActiveAlpha; // s11
  float v20; // s8
  float i; // s9
  _BOOL8 v22; // x0
  const MethodInfo *v23; // x2
  float v24; // s0
  UnityEngine_Transform_o *transform; // x19
  UnityEngine_GameObject_o *gameObject; // x0
  EasingObject_o *v27; // x19
  System_Action_o *v28; // x20
  System_Action_o *v29; // x22
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v30; // [xsp+0h] [xbp-90h] BYREF
  Il2CppObject *value; // [xsp+28h] [xbp-68h] BYREF
  UnityEngine_Vector3_o localEulerAngles; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v36; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C21FF0 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__UISprite__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__UISprite__TryGetValue__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_int__UISprite__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_int__UISprite__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_int__UISprite__get_Current__);
    sub_1C2D490(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_1C2D490(&Method_System_Collections_Generic_KeyValuePair_int__UISprite__get_Key__);
    sub_1C2D490(&Method_System_Collections_Generic_KeyValuePair_int__UISprite__get_Value__);
    sub_1C2D490(&Method_GrandQuestClassBoardController___c__DisplayClass34_0__ExecCircleEffect_b__0__);
    sub_1C2D490(&Method_GrandQuestClassBoardController___c__DisplayClass34_0__ExecCircleEffect_b__1__);
    sub_1C2D490(&GrandQuestClassBoardController___c__DisplayClass34_0_TypeInfo);
    byte_4C21FF0 = 1;
  }
  value = 0;
  memset(&v30, 0, sizeof(v30));
  v7 = sub_1C2D6DC(GrandQuestClassBoardController___c__DisplayClass34_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_40;
  *(_QWORD *)(v7 + 32) = this;
  sub_1C2D434(v7 + 32);
  *(_QWORD *)(v7 + 40) = callback;
  sub_1C2D434(v7 + 40);
  blankEarthSpotEntity = this->fields.blankEarthSpotEntity;
  if ( !blankEarthSpotEntity )
    goto LABEL_40;
  blankEarthSpotEntity = (BlankEarthSpotEntity_o *)BlankEarthSpotEntity__GetGrandClassIconId(blankEarthSpotEntity, 1, 0);
  if ( !this->fields.dicClassIcon )
    goto LABEL_40;
  v10 = (int)blankEarthSpotEntity;
  blankEarthSpotEntity = (BlankEarthSpotEntity_o *)System_Collections_Generic_Dictionary_int__object___TryGetValue(
                                                     (System_Collections_Generic_Dictionary_int__object__o *)this->fields.dicClassIcon,
                                                     (int32_t)blankEarthSpotEntity,
                                                     &value,
                                                     (const MethodInfo_33E2A08 *)Method_System_Collections_Generic_Dictionary_int__UISprite__TryGetValue__);
  if ( !this->fields.classBoard )
    goto LABEL_40;
  v11 = (char)blankEarthSpotEntity;
  blankEarthSpotEntity = (BlankEarthSpotEntity_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this->fields.classBoard,
                                                     0);
  if ( !blankEarthSpotEntity )
    goto LABEL_40;
  if ( (v11 & 1) == 0 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)blankEarthSpotEntity, 0, 0);
LABEL_37:
    ActionExtensions__Call(*(System_Action_o **)(v7 + 40), 0);
    return;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)blankEarthSpotEntity, 1, 0);
  blankEarthSpotEntity = (BlankEarthSpotEntity_o *)this->fields.classBoard;
  if ( !blankEarthSpotEntity )
    goto LABEL_40;
  blankEarthSpotEntity = (BlankEarthSpotEntity_o *)UnityEngine_Component__get_transform(
                                                     (UnityEngine_Component_o *)blankEarthSpotEntity,
                                                     0);
  if ( !blankEarthSpotEntity )
    goto LABEL_40;
  localEulerAngles = UnityEngine_Transform__get_localEulerAngles((UnityEngine_Transform_o *)blankEarthSpotEntity, 0);
  *(float *)(v7 + 24) = localEulerAngles.fields.z;
  blankEarthSpotEntity = (BlankEarthSpotEntity_o *)value;
  if ( !value )
    goto LABEL_40;
  blankEarthSpotEntity = (BlankEarthSpotEntity_o *)UnityEngine_Component__get_transform(
                                                     (UnityEngine_Component_o *)value,
                                                     0);
  if ( !blankEarthSpotEntity )
    goto LABEL_40;
  position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)blankEarthSpotEntity, 0);
  blankEarthSpotEntity = (BlankEarthSpotEntity_o *)this->fields.classBoard;
  if ( !blankEarthSpotEntity )
    goto LABEL_40;
  x = position.fields.x;
  y = position.fields.y;
  blankEarthSpotEntity = (BlankEarthSpotEntity_o *)UnityEngine_Component__get_transform(
                                                     (UnityEngine_Component_o *)blankEarthSpotEntity,
                                                     0);
  if ( !blankEarthSpotEntity
    || (v34 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)blankEarthSpotEntity, 0),
        v14 = (float)(atan2f(y - v34.fields.y, x - v34.fields.x) * -57.296) + 90.0,
        *(float *)(v7 + 28) = v14,
        (rootComponent = this->fields.rootComponent) == 0)
    || (classSelectController = rootComponent->fields.classSelectController) == 0 )
  {
LABEL_40:
    sub_1C2D6EC(blankEarthSpotEntity, v9);
  }
  if ( classSelectController->fields.isMovePositiveIndex )
  {
    if ( v14 > 0.0 )
    {
      v17 = -360.0;
LABEL_23:
      v14 = v14 + v17;
      *(float *)(v7 + 28) = v14;
    }
  }
  else if ( v14 < 0.0 )
  {
    v17 = 360.0;
    goto LABEL_23;
  }
  blankEarthSpotEntity = (BlankEarthSpotEntity_o *)this->fields.dicClassIcon;
  if ( !blankEarthSpotEntity )
    goto LABEL_40;
  classIconDefaultAlpha = this->fields.classIconDefaultAlpha;
  classIconActiveAlpha = this->fields.classIconActiveAlpha;
  v20 = fabsf(v14 / 180.0);
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v30,
    (System_Collections_Generic_Dictionary_int__object__o *)blankEarthSpotEntity,
    (const MethodInfo_33E16B4 *)Method_System_Collections_Generic_Dictionary_int__UISprite__GetEnumerator__);
  for ( i = immediately ? 0.0 : v20;
        ;
        GrandQuestClassBoardController__ExecChangeIconAlpha(
          (GrandQuestClassBoardController_o *)v22,
          (UISprite_o *)v30.fields._current.fields.value,
          v24 / 255.0,
          i,
          v23) )
  {
    v22 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v30,
            (const MethodInfo_35380F0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__UISprite__MoveNext__);
    if ( !v22 )
      break;
    if ( v10 == LODWORD(v30.fields._current.fields.key) )
      v24 = classIconActiveAlpha;
    else
      v24 = classIconDefaultAlpha;
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v30,
    (const MethodInfo_3538214 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__UISprite__Dispose__);
  blankEarthSpotEntity = (BlankEarthSpotEntity_o *)this->fields.classBoard;
  if ( !blankEarthSpotEntity )
    goto LABEL_40;
  if ( immediately )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)blankEarthSpotEntity, 0);
    v35.fields.y = 0.0;
    v35.fields.z = (float)(*(float *)(v7 + 24) + *(float *)(v7 + 28)) * 0.017453;
    v35.fields.x = 0.0;
    v36 = UnityEngine_Quaternion__Internal_FromEulerRad(v35, 0);
    if ( transform )
    {
      UnityEngine_Transform__set_localRotation(transform, v36, 0);
      goto LABEL_37;
    }
    goto LABEL_40;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)blankEarthSpotEntity, 0);
  *(_QWORD *)(v7 + 16) = GameObjectExtensions__SafeGetComponent_object_(
                           gameObject,
                           (const MethodInfo_31279B8 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  sub_1C2D434(v7 + 16);
  v27 = *(EasingObject_o **)(v7 + 16);
  v28 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(
    v28,
    (Il2CppObject *)v7,
    Method_GrandQuestClassBoardController___c__DisplayClass34_0__ExecCircleEffect_b__0__,
    0);
  v29 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(
    v29,
    (Il2CppObject *)v7,
    Method_GrandQuestClassBoardController___c__DisplayClass34_0__ExecCircleEffect_b__1__,
    0);
  if ( !v27 )
    goto LABEL_40;
  EasingObject__Play_48952224(v27, 0.0, 1.0, v20, v28, v29, 0.0, 15, 0);
}


void GrandQuestClassBoardController__ExecMoveEffectRoot(
        GrandQuestClassBoardController_o *this,
        UnityEngine_Vector3_o targetPosition,
        float moveTime,
        System_Action_o *callback,
        const MethodInfo *method)
{
  float z; // s9
  float y; // s10
  float x; // s11
  __int64 v11; // x19
  UnityEngine_Component_o *effectRoot; // x0
  __int64 v13; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v15; // x0
  EasingObject_o *v16; // x20
  System_Action_o *v17; // x21
  System_Action_o *v18; // x22

  z = targetPosition.fields.z;
  y = targetPosition.fields.y;
  x = targetPosition.fields.x;
  if ( (byte_4C21FF5 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_1C2D490(&Method_GrandQuestClassBoardController___c__DisplayClass39_0__ExecMoveEffectRoot_b__0__);
    sub_1C2D490(&Method_GrandQuestClassBoardController___c__DisplayClass39_0__ExecMoveEffectRoot_b__1__);
    sub_1C2D490(&GrandQuestClassBoardController___c__DisplayClass39_0_TypeInfo);
    byte_4C21FF5 = 1;
  }
  v11 = sub_1C2D6DC(GrandQuestClassBoardController___c__DisplayClass39_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11 )
    goto LABEL_8;
  *(float *)(v11 + 36) = x;
  *(float *)(v11 + 40) = y;
  *(float *)(v11 + 44) = z;
  *(_QWORD *)(v11 + 48) = this;
  sub_1C2D434(v11 + 48);
  *(_QWORD *)(v11 + 56) = callback;
  sub_1C2D434(v11 + 56);
  effectRoot = (UnityEngine_Component_o *)this->fields.effectRoot;
  if ( !effectRoot )
    goto LABEL_8;
  gameObject = UnityEngine_Component__get_gameObject(effectRoot, 0);
  *(_QWORD *)(v11 + 16) = GameObjectExtensions__SafeGetComponent_object_(
                            gameObject,
                            (const MethodInfo_31279B8 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  sub_1C2D434(v11 + 16);
  effectRoot = (UnityEngine_Component_o *)this->fields.effectRoot;
  if ( !effectRoot
    || (v15 = UnityEngine_Component__get_gameObject(effectRoot, 0),
        *(UnityEngine_Vector3_o *)(v11 + 24) = GameObjectExtensions__GetLocalPosition(v15, 0),
        v16 = *(EasingObject_o **)(v11 + 16),
        v17 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo),
        System_Action___ctor(
          v17,
          (Il2CppObject *)v11,
          Method_GrandQuestClassBoardController___c__DisplayClass39_0__ExecMoveEffectRoot_b__0__,
          0),
        v18 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo),
        System_Action___ctor(
          v18,
          (Il2CppObject *)v11,
          Method_GrandQuestClassBoardController___c__DisplayClass39_0__ExecMoveEffectRoot_b__1__,
          0),
        !v16) )
  {
LABEL_8:
    sub_1C2D6EC(effectRoot, v13);
  }
  EasingObject__Play_48952224(v16, 0.0, 1.0, moveTime, v17, v18, 0.0, 17, 0);
}


void GrandQuestClassBoardController__FadeIn(
        GrandQuestClassBoardController_o *this,
        bool isStartUp,
        bool immediately,
        const MethodInfo *method)
{
  __int64 v7; // x21
  UnityEngine_Component_o *classBoardRoot; // x0
  __int64 v9; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  EasingObject_o *v11; // x22
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  System_Action_o *v14; // x23
  System_Action_o *v15; // x24
  float v16; // s2
  float v17; // s1
  float v18; // s3

  if ( (byte_4C21FF4 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_1C2D490(&Method_GrandQuestClassBoardController___c__DisplayClass38_0__FadeIn_b__0__);
    sub_1C2D490(&Method_GrandQuestClassBoardController___c__DisplayClass38_0__FadeIn_b__1__);
    sub_1C2D490(&GrandQuestClassBoardController___c__DisplayClass38_0_TypeInfo);
    byte_4C21FF4 = 1;
  }
  v7 = sub_1C2D6DC(GrandQuestClassBoardController___c__DisplayClass38_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_18;
  *(_QWORD *)(v7 + 24) = this;
  sub_1C2D434(v7 + 24);
  classBoardRoot = (UnityEngine_Component_o *)this->fields.classBoardRoot;
  if ( !classBoardRoot )
    goto LABEL_18;
  gameObject = UnityEngine_Component__get_gameObject(classBoardRoot, 0);
  *(_QWORD *)(v7 + 16) = GameObjectExtensions__SafeGetComponent_object_(
                           gameObject,
                           (const MethodInfo_31279B8 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  sub_1C2D434(v7 + 16);
  *(_DWORD *)(v7 + 48) = 1065353216;
  *(_OWORD *)(v7 + 32) = xmmword_C0A7C0;
  if ( !byte_4C20DA6 )
  {
    sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA6 = 1;
  }
  v11 = *(EasingObject_o **)(v7 + 16);
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->oneVector.fields.z;
  *(_QWORD *)(v7 + 52) = *(_QWORD *)&static_fields->oneVector.fields.x;
  *(float *)(v7 + 60) = z;
  v14 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(
    v14,
    (Il2CppObject *)v7,
    Method_GrandQuestClassBoardController___c__DisplayClass38_0__FadeIn_b__0__,
    0);
  v15 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(
    v15,
    (Il2CppObject *)v7,
    Method_GrandQuestClassBoardController___c__DisplayClass38_0__FadeIn_b__1__,
    0);
  if ( !v11 )
LABEL_18:
    sub_1C2D6EC(classBoardRoot, v9);
  if ( immediately )
    v16 = 0.0;
  else
    v16 = 1.2;
  if ( immediately )
    v17 = 0.0;
  else
    v17 = 0.3;
  if ( isStartUp )
    v18 = v17;
  else
    v18 = 0.0;
  EasingObject__Play_48952224(v11, 0.0, 1.0, v16, v14, v15, v18, 11, 0);
}


SchedulerTaskBase_o *GrandQuestClassBoardController__GetTaskOfChangeClass(
        GrandQuestClassBoardController_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x20
  System_Func_bool__o *v9; // x21
  SchedulerTaskWaitWhile_o *v10; // x19
  SchedulerTaskBase_TaskCallback_o *v11; // x0
  intptr_t *v12; // x8
  System_Func_bool__o *v13; // x21
  struct SchedulerTaskBase_TaskCallback_o *v14; // x21

  if ( (byte_4C21FEE & 1) == 0 )
  {
    sub_1C2D490(&System_Func_bool__TypeInfo);
    sub_1C2D490(&SchedulerTaskWaitWhile_TypeInfo);
    sub_1C2D490(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_1C2D490(&GrandQuestClassBoardController___c__DisplayClass31_0_TypeInfo);
    sub_1C2D490(&Method_GrandQuestClassBoardController___c__DisplayClass31_1__GetTaskOfChangeClass_b__0__);
    sub_1C2D490(&Method_GrandQuestClassBoardController___c__DisplayClass31_1__GetTaskOfChangeClass_b__1__);
    sub_1C2D490(&GrandQuestClassBoardController___c__DisplayClass31_1_TypeInfo);
    sub_1C2D490(&Method_GrandQuestClassBoardController___c__DisplayClass31_2__GetTaskOfChangeClass_b__3__);
    sub_1C2D490(&Method_GrandQuestClassBoardController___c__DisplayClass31_2__GetTaskOfChangeClass_b__4__);
    sub_1C2D490(&GrandQuestClassBoardController___c__DisplayClass31_2_TypeInfo);
    byte_4C21FEE = 1;
  }
  v5 = sub_1C2D6DC(GrandQuestClassBoardController___c__DisplayClass31_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_11;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C2D434(v5 + 16);
  *(_DWORD *)(v5 + 24) = warId;
  if ( this->fields.currentWarId == warId )
  {
    v8 = sub_1C2D6DC(GrandQuestClassBoardController___c__DisplayClass31_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v8, 0);
    if ( !v8 )
      goto LABEL_11;
    *(_QWORD *)(v8 + 24) = v5;
    sub_1C2D434(v8 + 24);
    *(_BYTE *)(v8 + 16) = 1;
    v9 = (System_Func_bool__o *)sub_1C2D6DC(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      v9,
      (Il2CppObject *)v8,
      Method_GrandQuestClassBoardController___c__DisplayClass31_1__GetTaskOfChangeClass_b__0__,
      0);
    v10 = (SchedulerTaskWaitWhile_o *)sub_1C2D6DC(SchedulerTaskWaitWhile_TypeInfo);
    SchedulerTaskWaitWhile___ctor(v10, v9, 0);
    v11 = (SchedulerTaskBase_TaskCallback_o *)sub_1C2D6DC(SchedulerTaskBase_TaskCallback_TypeInfo);
    v12 = &Method_GrandQuestClassBoardController___c__DisplayClass31_1__GetTaskOfChangeClass_b__1__;
  }
  else
  {
    v8 = sub_1C2D6DC(GrandQuestClassBoardController___c__DisplayClass31_2_TypeInfo);
    System_Object___ctor((Il2CppObject *)v8, 0);
    if ( !v8 )
      goto LABEL_11;
    *(_QWORD *)(v8 + 24) = v5;
    sub_1C2D434(v8 + 24);
    *(_BYTE *)(v8 + 16) = 1;
    v13 = (System_Func_bool__o *)sub_1C2D6DC(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      v13,
      (Il2CppObject *)v8,
      Method_GrandQuestClassBoardController___c__DisplayClass31_2__GetTaskOfChangeClass_b__3__,
      0);
    v10 = (SchedulerTaskWaitWhile_o *)sub_1C2D6DC(SchedulerTaskWaitWhile_TypeInfo);
    SchedulerTaskWaitWhile___ctor(v10, v13, 0);
    v11 = (SchedulerTaskBase_TaskCallback_o *)sub_1C2D6DC(SchedulerTaskBase_TaskCallback_TypeInfo);
    v12 = &Method_GrandQuestClassBoardController___c__DisplayClass31_2__GetTaskOfChangeClass_b__4__;
  }
  v14 = v11;
  SchedulerTaskBase_TaskCallback___ctor(v11, (Il2CppObject *)v8, *v12, 0);
  if ( !v10 )
LABEL_11:
    sub_1C2D6EC(v6, v7);
  v10->fields.StartCallback = v14;
  sub_1C2D434(&v10->fields.StartCallback);
  return (SchedulerTaskBase_o *)v10;
}


SchedulerTaskBase_o *GrandQuestClassBoardController__GetTaskOfChangeViewType(
        GrandQuestClassBoardController_o *this,
        int32_t viewType,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Func_bool__o *v8; // x20
  SchedulerTaskWaitWhile_o *v9; // x19
  SchedulerTaskBase_TaskCallback_o *v10; // x20

  if ( (byte_4C21FEC & 1) == 0 )
  {
    sub_1C2D490(&System_Func_bool__TypeInfo);
    sub_1C2D490(&SchedulerTaskWaitWhile_TypeInfo);
    sub_1C2D490(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_1C2D490(&Method_GrandQuestClassBoardController___c__DisplayClass28_0__GetTaskOfChangeViewType_b__0__);
    sub_1C2D490(&Method_GrandQuestClassBoardController___c__DisplayClass28_0__GetTaskOfChangeViewType_b__1__);
    sub_1C2D490(&GrandQuestClassBoardController___c__DisplayClass28_0_TypeInfo);
    byte_4C21FEC = 1;
  }
  v5 = sub_1C2D6DC(GrandQuestClassBoardController___c__DisplayClass28_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_6;
  *(_QWORD *)(v5 + 24) = this;
  sub_1C2D434(v5 + 24);
  *(_DWORD *)(v5 + 32) = viewType;
  *(_BYTE *)(v5 + 16) = 1;
  v8 = (System_Func_bool__o *)sub_1C2D6DC(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v8,
    (Il2CppObject *)v5,
    Method_GrandQuestClassBoardController___c__DisplayClass28_0__GetTaskOfChangeViewType_b__0__,
    0);
  v9 = (SchedulerTaskWaitWhile_o *)sub_1C2D6DC(SchedulerTaskWaitWhile_TypeInfo);
  SchedulerTaskWaitWhile___ctor(v9, v8, 0);
  v10 = (SchedulerTaskBase_TaskCallback_o *)sub_1C2D6DC(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v10,
    (Il2CppObject *)v5,
    Method_GrandQuestClassBoardController___c__DisplayClass28_0__GetTaskOfChangeViewType_b__1__,
    0);
  if ( !v9 )
LABEL_6:
    sub_1C2D6EC(v6, v7);
  v9->fields.StartCallback = v10;
  sub_1C2D434(&v9->fields.StartCallback);
  return (SchedulerTaskBase_o *)v9;
}


void GrandQuestClassBoardController__Init(
        GrandQuestClassBoardController_o *this,
        GrandQuestRootComponent_o *grandQuestRoot,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_o **p_classServantEffect; // x21
  UnityEngine_Object_o *classServantEffect; // x22
  __int64 v7; // x1
  UnityEngine_Object_o *v8; // x22
  System_Collections_Generic_Dictionary_int__object__o *dicClassIcon; // x0
  UnityEngine_GameObject_o *gameObject; // x21
  const MethodInfo *v11; // x4
  const MethodInfo *v12; // x4
  __int64 v13; // x2
  struct UISprite_array *classIcons; // x22
  int max_length; // w8
  unsigned int v16; // w23
  Il2CppClass **v17; // x8
  UnityEngine_Object_o *v18; // x20
  System_String_o *name; // x21
  System_String_o *v20; // x0
  int v21; // w21
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  Il2CppObject *v25; // x0
  System_String_o *v26; // x0
  const MethodInfo *v27; // x4
  int v28; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4C21FE9 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__UISprite__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__UISprite__set_Item__);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_20294/*"img_bg_classcircle_center"*/);
    sub_1C2D490(&StringLiteral_20304/*"img_bg_grand_classicon_{0}"*/);
    sub_1C2D490(&StringLiteral_20295/*"img_bg_classcircle_outring"*/);
    sub_1C2D490(&StringLiteral_16105/*"_"*/);
    byte_4C21FE9 = 1;
  }
  if ( !this->fields.initialized )
  {
    *(_QWORD *)&this->fields.currentWarId = 0xFFFFFFFFLL;
    this->fields.blankEarthSpotEntity = 0;
    sub_1C2D434(&this->fields.blankEarthSpotEntity);
    p_classServantEffect = &this->fields.classServantEffect;
    classServantEffect = (UnityEngine_Object_o *)this->fields.classServantEffect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(classServantEffect, 0, 0) )
    {
      v8 = (UnityEngine_Object_o *)*p_classServantEffect;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71163704(v8, 0);
      *p_classServantEffect = 0;
      sub_1C2D434(&this->fields.classServantEffect);
    }
    dicClassIcon = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.dicClassIcon;
    if ( !dicClassIcon )
      goto LABEL_24;
    System_Collections_Generic_Dictionary_int__object___Clear(
      dicClassIcon,
      (const MethodInfo_33E1404 *)Method_System_Collections_Generic_Dictionary_int__UISprite__Clear__);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !byte_4C20DA1 )
    {
      sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
      byte_4C20DA1 = 1;
    }
    GameObjectExtensions__SetLocalPosition(gameObject, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
    this->fields.rootComponent = grandQuestRoot;
    sub_1C2D434(&this->fields.rootComponent);
    GrandQuestClassBoardController__SetSprite(
      this,
      this->fields.classBoard,
      (System_String_o *)StringLiteral_20295/*"img_bg_classcircle_outring"*/,
      1,
      v11);
    GrandQuestClassBoardController__SetSprite(
      this,
      this->fields.classCircle,
      (System_String_o *)StringLiteral_20294/*"img_bg_classcircle_center"*/,
      1,
      v12);
    classIcons = this->fields.classIcons;
    if ( !classIcons )
      goto LABEL_24;
    max_length = classIcons->max_length;
    if ( max_length >= 1 )
    {
      v16 = 0;
      while ( 1 )
      {
        if ( v16 >= max_length )
          sub_1C2D6F4(dicClassIcon, v7, v13);
        v17 = &classIcons->obj.klass + (int)v16;
        v18 = (UnityEngine_Object_o *)v17[4];
        if ( !v18 )
          break;
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v17[4], 0);
        dicClassIcon = (System_Collections_Generic_Dictionary_int__object__o *)UnityEngine_Object__get_name(v18, 0);
        if ( !dicClassIcon )
          break;
        dicClassIcon = (System_Collections_Generic_Dictionary_int__object__o *)System_String__LastIndexOf_63518004(
                                                                                 (System_String_o *)dicClassIcon,
                                                                                 (System_String_o *)StringLiteral_16105/*"_"*/,
                                                                                 0);
        if ( !name )
          break;
        v20 = System_String__Substring(name, (int)dicClassIcon + 1, 0);
        dicClassIcon = (System_Collections_Generic_Dictionary_int__object__o *)System_Int32__Parse(v20, 0);
        if ( !this->fields.dicClassIcon )
          break;
        v21 = (int)dicClassIcon;
        System_Collections_Generic_Dictionary_int__object___set_Item(
          (System_Collections_Generic_Dictionary_int__object__o *)this->fields.dicClassIcon,
          (int32_t)dicClassIcon,
          (Il2CppObject *)v18,
          (const MethodInfo_33E1268 *)Method_System_Collections_Generic_Dictionary_int__UISprite__set_Item__);
        v28 = v21;
        v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28, v22, v23, v24);
        v26 = System_String__Format((System_String_o *)StringLiteral_20304/*"img_bg_grand_classicon_{0}"*/, v25, 0);
        GrandQuestClassBoardController__SetSprite(this, (UISprite_o *)v18, v26, 0, v27);
        max_length = classIcons->max_length;
        if ( (int)++v16 >= max_length )
          goto LABEL_22;
      }
LABEL_24:
      sub_1C2D6EC(dicClassIcon, v7);
    }
LABEL_22:
    this->fields.initialized = 1;
  }
}


void GrandQuestClassBoardController__Quit(GrandQuestClassBoardController_o *this, const MethodInfo *method)
{
  struct UnityEngine_GameObject_o **p_classServantEffect; // x20
  UnityEngine_Object_o *classServantEffect; // x21
  UnityEngine_Object_o *v5; // x21

  if ( (byte_4C21FF6 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C21FF6 = 1;
  }
  *(_QWORD *)&this->fields.currentWarId = 0xFFFFFFFFLL;
  this->fields.blankEarthSpotEntity = 0;
  sub_1C2D434(&this->fields.blankEarthSpotEntity);
  p_classServantEffect = &this->fields.classServantEffect;
  classServantEffect = (UnityEngine_Object_o *)this->fields.classServantEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(classServantEffect, 0, 0) )
  {
    v5 = (UnityEngine_Object_o *)*p_classServantEffect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71163704(v5, 0);
    *p_classServantEffect = 0;
    sub_1C2D434(&this->fields.classServantEffect);
  }
  this->fields.initialized = 0;
}


void GrandQuestClassBoardController__RefreshClassBoardRootActive(
        GrandQuestClassBoardController_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *classBoardRoot; // x0

  classBoardRoot = (UnityEngine_Component_o *)this->fields.classBoardRoot;
  if ( !classBoardRoot
    || (classBoardRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(classBoardRoot, 0)) == 0 )
  {
    sub_1C2D6EC(classBoardRoot, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)classBoardRoot, this->fields.currentViewType == 1, 0);
}


void GrandQuestClassBoardController__Resume(
        GrandQuestClassBoardController_o *this,
        int32_t warId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_Action_o *v10; // x21
  const MethodInfo *v11; // x6

  if ( (byte_4C21FEB & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_GrandQuestClassBoardController___c__DisplayClass26_0__Resume_b__0__);
    sub_1C2D490(&GrandQuestClassBoardController___c__DisplayClass26_0_TypeInfo);
    byte_4C21FEB = 1;
  }
  v7 = sub_1C2D6DC(GrandQuestClassBoardController___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C2D6EC(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_1C2D434(v7 + 16);
  *(_QWORD *)(v7 + 24) = callback;
  sub_1C2D434(v7 + 24);
  if ( this->fields.currentWarId == warId )
  {
    ActionExtensions__Call(*(System_Action_o **)(v7 + 24), 0);
  }
  else
  {
    v10 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(
      v10,
      (Il2CppObject *)v7,
      Method_GrandQuestClassBoardController___c__DisplayClass26_0__Resume_b__0__,
      0);
    GrandQuestClassBoardController__SetClass(this, 0, 1, 1, warId, v10, v11);
  }
}


void GrandQuestClassBoardController__SetClass(
        GrandQuestClassBoardController_o *this,
        bool isStartUp,
        bool immediately,
        bool isSkipEffectAnim,
        int32_t warId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v14; // x1
  BlankEarthSpotEntity_array *v15; // x24
  __int64 v16; // x2
  bool v17; // w23
  const MethodInfo *v18; // x4
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x2
  float v21; // s0
  _BOOL4 v22; // w22
  System_Collections_IEnumerator_o *v23; // x0
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x3

  if ( (byte_4C21FEF & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_Any_BlankEarthSpotEntity___);
    byte_4C21FEF = 1;
  }
  if ( this->fields.currentWarId == warId )
  {
    ActionExtensions__Call(callback, 0);
    return;
  }
  this->fields.currentWarId = warId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !Master_object )
    goto LABEL_17;
  v15 = BlankEarthSpotMaster__GetByWarId((BlankEarthSpotMaster_o *)Master_object, this->fields.currentWarId, 0);
  Master_object = (Il2CppObject *)System_Linq_Enumerable__Any_object_(
                                    (System_Collections_Generic_IEnumerable_TSource__o *)v15,
                                    (const MethodInfo_30DA4C8 *)Method_System_Linq_Enumerable_Any_BlankEarthSpotEntity___);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    return;
  if ( !v15 )
LABEL_17:
    sub_1C2D6EC(Master_object, v14);
  if ( !LODWORD(v15->max_length) )
    sub_1C2D6F4(Master_object, v14, v16);
  this->fields.blankEarthSpotEntity = v15->m_Items[0];
  sub_1C2D434(&this->fields.blankEarthSpotEntity);
  v17 = immediately;
  GrandQuestClassBoardController__SetEffectRootPosition(this, v17, 1, 0, v18);
  GrandQuestClassBoardController__SetClassMotif(this, v17, v19);
  v21 = 0.3;
  v22 = isStartUp;
  if ( !v22 )
    v21 = 0.0;
  v23 = GrandQuestClassBoardController__SetClassServantEffect(this, v21, isSkipEffectAnim, v20);
  UnityEngine_MonoBehaviour__StartCoroutine_71149276((UnityEngine_MonoBehaviour_o *)this, v23, 0);
  GrandQuestClassBoardController__ExecCircleEffect(this, 1, callback, v24);
  if ( !v22 )
    GrandQuestClassBoardController__FadeIn(this, 0, v17, v26);
  GrandQuestClassBoardController__RefreshClassBoardRootActive(this, v25);
}


void GrandQuestClassBoardController__SetClassMotif(
        GrandQuestClassBoardController_o *this,
        bool immediately,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x19
  BlankEarthSpotEntity_o *blankEarthSpotEntity; // x0
  __int64 v7; // x1
  int32_t GrandClassIconId; // w0
  UISprite_o *classMotif; // x22
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  Il2CppObject *v13; // x0
  System_String_o *v14; // x0
  const MethodInfo *v15; // x4
  UnityEngine_GameObject_o *gameObject; // x0
  EasingObject_o *klass; // x20
  System_Action_o *v18; // x21
  System_Action_o *v19; // x22
  int32_t v20; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C21FF2 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&Method_GrandQuestClassBoardController___c__DisplayClass36_0__SetClassMotif_b__0__);
    sub_1C2D490(&Method_GrandQuestClassBoardController___c__DisplayClass36_0__SetClassMotif_b__1__);
    sub_1C2D490(&GrandQuestClassBoardController___c__DisplayClass36_0_TypeInfo);
    sub_1C2D490(&StringLiteral_20305/*"img_bg_grand_motif_{0}"*/);
    byte_4C21FF2 = 1;
  }
  v5 = (Il2CppObject *)sub_1C2D6DC(GrandQuestClassBoardController___c__DisplayClass36_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    goto LABEL_10;
  v5[1].monitor = this;
  sub_1C2D434(&v5[1].monitor);
  blankEarthSpotEntity = this->fields.blankEarthSpotEntity;
  if ( !blankEarthSpotEntity )
    goto LABEL_10;
  GrandClassIconId = BlankEarthSpotEntity__GetGrandClassIconId(blankEarthSpotEntity, 1, 0);
  classMotif = this->fields.classMotif;
  v20 = GrandClassIconId;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20, v10, v11, v12);
  v14 = System_String__Format((System_String_o *)StringLiteral_20305/*"img_bg_grand_motif_{0}"*/, v13, 0);
  GrandQuestClassBoardController__SetSprite(this, classMotif, v14, 1, v15);
  blankEarthSpotEntity = (BlankEarthSpotEntity_o *)this->fields.classMotif;
  if ( !blankEarthSpotEntity )
    goto LABEL_10;
  if ( immediately )
  {
    ((void (__fastcall *)(BlankEarthSpotEntity_o *, _QWORD, float))blankEarthSpotEntity->klass[1]._1.byval_arg.data)(
      blankEarthSpotEntity,
      *(_QWORD *)&blankEarthSpotEntity->klass[1]._1.byval_arg.bits,
      1.0);
    return;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)blankEarthSpotEntity, 0);
  v5[1].klass = (Il2CppClass *)GameObjectExtensions__SafeGetComponent_object_(
                                 gameObject,
                                 (const MethodInfo_31279B8 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  sub_1C2D434(&v5[1]);
  v5[2].klass = (Il2CppClass *)0x3F80000000000000LL;
  klass = (EasingObject_o *)v5[1].klass;
  v18 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v18, v5, Method_GrandQuestClassBoardController___c__DisplayClass36_0__SetClassMotif_b__0__, 0);
  v19 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v19, v5, Method_GrandQuestClassBoardController___c__DisplayClass36_0__SetClassMotif_b__1__, 0);
  if ( !klass )
LABEL_10:
    sub_1C2D6EC(blankEarthSpotEntity, v7);
  EasingObject__Play_48952224(klass, 0.0, 1.0, 1.2, v18, v19, 0.0, 11, 0);
}


System_Collections_IEnumerator_o *GrandQuestClassBoardController__SetClassServantEffect(
        GrandQuestClassBoardController_o *this,
        float delayTime,
        bool isSkipEffectAnim,
        const MethodInfo *method)
{
  bool v7; // w21
  __int64 v8; // x20

  if ( (byte_4C21FF3 & 1) == 0 )
  {
    sub_1C2D490(&GrandQuestClassBoardController__SetClassServantEffect_d__37_TypeInfo);
    byte_4C21FF3 = 1;
  }
  v7 = isSkipEffectAnim;
  v8 = sub_1C2D6DC(GrandQuestClassBoardController__SetClassServantEffect_d__37_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0);
  *(_DWORD *)(v8 + 16) = 0;
  *(_QWORD *)(v8 + 32) = this;
  sub_1C2D434(v8 + 32);
  *(float *)(v8 + 44) = delayTime;
  *(_BYTE *)(v8 + 40) = v7;
  return (System_Collections_IEnumerator_o *)v8;
}


// local variable allocation has failed, the output may be wrong!
void GrandQuestClassBoardController__SetDispEffect(
        GrandQuestClassBoardController_o *this,
        bool disp,
        const MethodInfo *method)
{
  UnityEngine_Component_o *effectRoot; // x0

  effectRoot = (UnityEngine_Component_o *)this->fields.effectRoot;
  if ( !effectRoot
    || (effectRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(effectRoot, 0)) == 0 )
  {
    sub_1C2D6EC(effectRoot, disp);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)effectRoot, disp, 0);
}


// local variable allocation has failed, the output may be wrong!
void GrandQuestClassBoardController__SetEffectRootPosition(
        GrandQuestClassBoardController_o *this,
        bool immediately,
        int32_t viewType,
        System_Action_o *callback,
        const MethodInfo *method)
{
  GrandQuestClassSelectController_c *v9; // x0
  float y; // s8
  float x; // s9
  float z; // s10
  __int64 v13; // x8
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C21FED & 1) == 0 )
  {
    sub_1C2D490(&GrandQuestClassSelectController_TypeInfo);
    byte_4C21FED = 1;
  }
  this->fields.currentViewType = viewType;
  if ( viewType == 2 )
  {
    v9 = GrandQuestClassSelectController_TypeInfo;
    x = this->fields.effectRootQuestSelectPosition.fields.x;
    y = this->fields.effectRootQuestSelectPosition.fields.y;
    z = this->fields.effectRootQuestSelectPosition.fields.z;
    if ( !GrandQuestClassSelectController_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GrandQuestClassSelectController_TypeInfo);
      v9 = GrandQuestClassSelectController_TypeInfo;
    }
    v13 = 4;
    if ( !immediately )
    {
LABEL_7:
      v14.fields.x = x;
      v14.fields.y = y;
      v14.fields.z = z;
      GrandQuestClassBoardController__ExecMoveEffectRoot(
        this,
        v14,
        *(float *)((char *)&v9->static_fields->UpdateInfoTimeInterval + v13),
        callback,
        *(const MethodInfo **)&viewType);
      return;
    }
  }
  else
  {
    v9 = GrandQuestClassSelectController_TypeInfo;
    x = this->fields.effectRootDefaultPosition.fields.x;
    y = this->fields.effectRootDefaultPosition.fields.y;
    z = this->fields.effectRootDefaultPosition.fields.z;
    if ( !GrandQuestClassSelectController_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GrandQuestClassSelectController_TypeInfo);
      v9 = GrandQuestClassSelectController_TypeInfo;
    }
    v13 = 8;
    if ( !immediately )
      goto LABEL_7;
  }
  v15.fields.x = x;
  v15.fields.y = y;
  v15.fields.z = z;
  TransformHelper__SetLocalPosition(this->fields.effectRoot, v15, 0);
  ActionExtensions__Call(callback, 0);
}


void GrandQuestClassBoardController__SetSprite(
        GrandQuestClassBoardController_o *this,
        UISprite_o *sprite,
        System_String_o *spriteName,
        bool makePixelPerfect,
        const MethodInfo *method)
{
  struct GrandQuestRootComponent_o *rootComponent; // x8
  struct GrandQuestResourceCatalogAssetBundle_o *resourceCatalog; // x8

  rootComponent = this->fields.rootComponent;
  if ( !rootComponent )
    goto LABEL_8;
  resourceCatalog = rootComponent->fields.resourceCatalog;
  if ( !resourceCatalog )
    goto LABEL_8;
  this = (GrandQuestClassBoardController_o *)resourceCatalog->fields.boardUiAtlasManagerUnit;
  if ( !this )
    goto LABEL_8;
  this = (GrandQuestClassBoardController_o *)AtlasManagerUnit__SetUI((AtlasManagerUnit_o *)this, sprite, spriteName, 0);
  if ( makePixelPerfect )
  {
    if ( sprite )
    {
      ((void (__fastcall *)(UISprite_o *, const MethodInfo *))sprite->klass->vtable._33_MakePixelPerfect.methodPtr)(
        sprite,
        sprite->klass->vtable._33_MakePixelPerfect.method);
      return;
    }
LABEL_8:
    sub_1C2D6EC(this, sprite);
  }
}


void GrandQuestClassBoardController__StartUp(
        GrandQuestClassBoardController_o *this,
        int32_t warId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_Action_o *v10; // x21
  const MethodInfo *v11; // x6

  if ( (byte_4C21FEA & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_GrandQuestClassBoardController___c__DisplayClass25_0__StartUp_b__0__);
    sub_1C2D490(&GrandQuestClassBoardController___c__DisplayClass25_0_TypeInfo);
    byte_4C21FEA = 1;
  }
  v7 = sub_1C2D6DC(GrandQuestClassBoardController___c__DisplayClass25_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C2D6EC(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_1C2D434(v7 + 16);
  *(_QWORD *)(v7 + 24) = callback;
  sub_1C2D434(v7 + 24);
  if ( this->fields.currentWarId == warId )
  {
    ActionExtensions__Call(*(System_Action_o **)(v7 + 24), 0);
  }
  else
  {
    v10 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(
      v10,
      (Il2CppObject *)v7,
      Method_GrandQuestClassBoardController___c__DisplayClass25_0__StartUp_b__0__,
      0);
    GrandQuestClassBoardController__SetClass(this, 1, 1, 0, warId, v10, v11);
  }
}


void GrandQuestClassBoardController__SetClassServantEffect_d__37___ctor(
        GrandQuestClassBoardController__SetClassServantEffect_d__37_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool GrandQuestClassBoardController__SetClassServantEffect_d__37__MoveNext(
        GrandQuestClassBoardController__SetClassServantEffect_d__37_o *this,
        const MethodInfo *method)
{
  GrandQuestClassBoardController__SetClassServantEffect_d__37_o *v2; // x19
  int32_t _1__state; // w8
  struct GrandQuestClassBoardController_o *_4__this; // x20
  UnityEngine_Object_o **p_classServantEffect; // x21
  UnityEngine_Object_o *classServantEffect; // x22
  UnityEngine_Object_o *v7; // x22
  float delayTime; // s8
  UnityEngine_WaitForSeconds_o *v9; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  struct GrandQuestRootComponent_o *rootComponent; // x8
  int v13; // w21
  UnityEngine_GameObject_o *ClassServantNamePrefab; // x0
  UnityEngine_Transform_o *effectRoot; // x22
  Il2CppObject *v16; // x23
  UnityEngine_GameObject_o **v17; // x22
  Il2CppObject *Component_object; // x0
  const MethodInfo *v19; // x4
  Il2CppObject *v20; // x0
  const MethodInfo *v21; // x4
  Il2CppObject *v22; // x23
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  Il2CppObject *v26; // x0
  System_String_o *v27; // x0
  const MethodInfo *v28; // x4
  Il2CppObject *v29; // x23
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  Il2CppObject *v33; // x0
  System_String_o *v34; // x0
  const MethodInfo *v35; // x4
  __int64 v36; // x1
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v39; // x9
  int32_t *p_offset; // x10
  __int64 v41; // x0
  System_Collections_IEnumerator_c *v42; // x8
  __int64 v43; // x9
  System_Collections_IEnumerator_c **v44; // x10
  __int64 v45; // x0
  UnityEngine_AnimationState_o *v46; // x0
  __int64 v47; // x1
  __int64 v48; // x0
  __int64 v49; // x8
  __int64 v50; // x19
  __int64 v51; // x9
  int *v52; // x10
  __int64 v53; // x0
  int v54; // [xsp+8h] [xbp-58h] BYREF
  int v55; // [xsp+Ch] [xbp-54h] BYREF

  v2 = this;
  if ( (byte_4C21FFC & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_AnimationState_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject____78081576);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&UnityEngine_WaitForSeconds_TypeInfo);
    sub_1C2D490(&StringLiteral_23119/*"root/base"*/);
    sub_1C2D490(&StringLiteral_20304/*"img_bg_grand_classicon_{0}"*/);
    sub_1C2D490(&StringLiteral_23118/*"root/2_enemyname"*/);
    sub_1C2D490(&StringLiteral_20580/*"img_text_servantname_{0}"*/);
    sub_1C2D490(&StringLiteral_23116/*"root/0_iconbase"*/);
    sub_1C2D490(&StringLiteral_20581/*"img_textbg_grandname"*/);
    sub_1C2D490(&StringLiteral_20303/*"img_bg_grand_classicon_base"*/);
    this = (GrandQuestClassBoardController__SetClassServantEffect_d__37_o *)sub_1C2D490(&StringLiteral_23117/*"root/1_classicon"*/);
    byte_4C21FFC = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_58;
  }
  else
  {
    if ( _1__state )
      return 0;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_58;
    p_classServantEffect = (UnityEngine_Object_o **)&_4__this->fields.classServantEffect;
    classServantEffect = (UnityEngine_Object_o *)_4__this->fields.classServantEffect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(classServantEffect, 0, 0) )
    {
      v7 = *p_classServantEffect;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71163704(v7, 0);
      *p_classServantEffect = 0;
      sub_1C2D434(&_4__this->fields.classServantEffect);
    }
    if ( !v2->fields.isSkipEffectAnim )
    {
      delayTime = v2->fields.delayTime;
      if ( delayTime > 0.0 )
      {
        v9 = (UnityEngine_WaitForSeconds_o *)sub_1C2D6DC(UnityEngine_WaitForSeconds_TypeInfo);
        UnityEngine_WaitForSeconds___ctor(v9, delayTime, 0);
        v2->fields.__2__current = (Il2CppObject *)v9;
        p__2__current = &v2->fields.__2__current;
        sub_1C2D434(p__2__current);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return result;
      }
    }
  }
  this = (GrandQuestClassBoardController__SetClassServantEffect_d__37_o *)_4__this->fields.blankEarthSpotEntity;
  if ( !this )
    goto LABEL_58;
  this = (GrandQuestClassBoardController__SetClassServantEffect_d__37_o *)BlankEarthSpotEntity__GetGrandClassIconId(
                                                                            (BlankEarthSpotEntity_o *)this,
                                                                            1,
                                                                            0);
  rootComponent = _4__this->fields.rootComponent;
  if ( !rootComponent )
    goto LABEL_58;
  v13 = (int)this;
  this = (GrandQuestClassBoardController__SetClassServantEffect_d__37_o *)rootComponent->fields.resourceCatalog;
  if ( !this )
    goto LABEL_58;
  ClassServantNamePrefab = GrandQuestResourceCatalogAssetBundle__GetClassServantNamePrefab(
                             (GrandQuestResourceCatalogAssetBundle_o *)this,
                             method);
  effectRoot = _4__this->fields.effectRoot;
  v16 = (Il2CppObject *)ClassServantNamePrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  _4__this->fields.classServantEffect = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object__51752420(
                                                                             v16,
                                                                             effectRoot,
                                                                             (const MethodInfo_315ADE4 *)Method_UnityEngine_Object_Instantiate_GameObject____78081576);
  v17 = &_4__this->fields.classServantEffect;
  sub_1C2D434(&_4__this->fields.classServantEffect);
  this = (GrandQuestClassBoardController__SetClassServantEffect_d__37_o *)_4__this->fields.classServantEffect;
  if ( !this )
    goto LABEL_58;
  this = (GrandQuestClassBoardController__SetClassServantEffect_d__37_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                            (UnityEngine_GameObject_o *)this,
                                                                            (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
  if ( !this )
    goto LABEL_58;
  BYTE5(this[2].monitor) = 1;
  this = (GrandQuestClassBoardController__SetClassServantEffect_d__37_o *)GameObjectExtensions__Find(
                                                                            *v17,
                                                                            (System_String_o *)StringLiteral_23119/*"root/base"*/,
                                                                            0);
  if ( !this )
    goto LABEL_58;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  GrandQuestClassBoardController__SetSprite(
    _4__this,
    (UISprite_o *)Component_object,
    (System_String_o *)StringLiteral_20581/*"img_textbg_grandname"*/,
    1,
    v19);
  this = (GrandQuestClassBoardController__SetClassServantEffect_d__37_o *)GameObjectExtensions__Find(
                                                                            _4__this->fields.classServantEffect,
                                                                            (System_String_o *)StringLiteral_23116/*"root/0_iconbase"*/,
                                                                            0);
  if ( !this )
    goto LABEL_58;
  v20 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  GrandQuestClassBoardController__SetSprite(_4__this, (UISprite_o *)v20, (System_String_o *)StringLiteral_20303/*"img_bg_grand_classicon_base"*/, 1, v21);
  this = (GrandQuestClassBoardController__SetClassServantEffect_d__37_o *)GameObjectExtensions__Find(
                                                                            _4__this->fields.classServantEffect,
                                                                            (System_String_o *)StringLiteral_23117/*"root/1_classicon"*/,
                                                                            0);
  if ( !this )
    goto LABEL_58;
  v22 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  v55 = v13;
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v55, v23, v24, v25);
  v27 = System_String__Format((System_String_o *)StringLiteral_20304/*"img_bg_grand_classicon_{0}"*/, v26, 0);
  GrandQuestClassBoardController__SetSprite(_4__this, (UISprite_o *)v22, v27, 1, v28);
  this = (GrandQuestClassBoardController__SetClassServantEffect_d__37_o *)GameObjectExtensions__Find(
                                                                            _4__this->fields.classServantEffect,
                                                                            (System_String_o *)StringLiteral_23118/*"root/2_enemyname"*/,
                                                                            0);
  if ( !this )
    goto LABEL_58;
  v29 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  v54 = v13;
  v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v54, v30, v31, v32);
  v34 = System_String__Format((System_String_o *)StringLiteral_20580/*"img_text_servantname_{0}"*/, v33, 0);
  GrandQuestClassBoardController__SetSprite(_4__this, (UISprite_o *)v29, v34, 1, v35);
  if ( v2->fields.isSkipEffectAnim )
  {
    this = (GrandQuestClassBoardController__SetClassServantEffect_d__37_o *)*v17;
    if ( *v17 )
    {
      this = (GrandQuestClassBoardController__SetClassServantEffect_d__37_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                                (UnityEngine_GameObject_o *)this,
                                                                                (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
      if ( this )
      {
        Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)this, 0);
        if ( !Enumerator )
          sub_1C2D6EC(0, v36);
        while ( 1 )
        {
          klass = Enumerator->klass;
          v39 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
          if ( *(_WORD *)&Enumerator->klass->_2.rank )
          {
            p_offset = &klass->_1.interfaceOffsets->offset;
            while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v39;
              p_offset += 4;
              if ( !v39 )
                goto LABEL_35;
            }
            v41 = (__int64)&klass->vtable[*p_offset];
          }
          else
          {
LABEL_35:
            v41 = sub_1C7DCA8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
          }
          if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v41)(
                  Enumerator,
                  *(_QWORD *)(v41 + 8))
              & 1) == 0 )
            break;
          v42 = Enumerator->klass;
          v43 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
          if ( *(_WORD *)&Enumerator->klass->_2.rank )
          {
            v44 = (System_Collections_IEnumerator_c **)&v42->_1.interfaceOffsets->offset;
            while ( *(v44 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v43;
              v44 += 2;
              if ( !v43 )
                goto LABEL_42;
            }
            v45 = (__int64)&v42->vtable[*(_DWORD *)v44 + 1];
          }
          else
          {
LABEL_42:
            v45 = sub_1C7DCA8(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
          }
          v46 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v45)(
                                                  Enumerator,
                                                  *(_QWORD *)(v45 + 8));
          if ( !v46 )
            goto LABEL_57;
          if ( v46->klass != UnityEngine_AnimationState_TypeInfo )
          {
            v46 = (UnityEngine_AnimationState_o *)sub_1C2D9AC(v46);
LABEL_57:
            sub_1C2D6EC(v46, v47);
          }
          UnityEngine_AnimationState__set_normalizedTime(v46, 1.0, 0);
        }
        v48 = sub_1C2D5CC(Enumerator, System_IDisposable_TypeInfo);
        if ( v48 )
        {
          v49 = *(_QWORD *)v48;
          v50 = v48;
          v51 = *(unsigned __int16 *)(*(_QWORD *)v48 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v48 + 302LL) )
          {
            v52 = (int *)(*(_QWORD *)(v49 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v52 - 1) != System_IDisposable_TypeInfo )
            {
              --v51;
              v52 += 4;
              if ( !v51 )
                goto LABEL_52;
            }
            v53 = v49 + 16LL * *v52 + 312;
          }
          else
          {
LABEL_52:
            v53 = sub_1C7DCA8(v48, System_IDisposable_TypeInfo, 0);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v53)(v50, *(_QWORD *)(v53 + 8));
        }
        return 0;
      }
    }
LABEL_58:
    sub_1C2D6EC(this, method);
  }
  return 0;
}


Il2CppObject *GrandQuestClassBoardController__SetClassServantEffect_d__37__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        GrandQuestClassBoardController__SetClassServantEffect_d__37_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn GrandQuestClassBoardController__SetClassServantEffect_d__37__System_Collections_IEnumerator_Reset(
        GrandQuestClassBoardController__SetClassServantEffect_d__37_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_GrandQuestClassBoardController__SetClassServantEffect_d__37_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
}


Il2CppObject *GrandQuestClassBoardController__SetClassServantEffect_d__37__System_Collections_IEnumerator_get_Current(
        GrandQuestClassBoardController__SetClassServantEffect_d__37_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void GrandQuestClassBoardController__SetClassServantEffect_d__37__System_IDisposable_Dispose(
        GrandQuestClassBoardController__SetClassServantEffect_d__37_o *this,
        const MethodInfo *method)
{
  ;
}


void GrandQuestClassBoardController___c__DisplayClass25_0___ctor(
        GrandQuestClassBoardController___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void GrandQuestClassBoardController___c__DisplayClass25_0___StartUp_b__0(
        GrandQuestClassBoardController___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  GrandQuestClassBoardController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C2D6EC(0, method);
  GrandQuestClassBoardController__FadeIn(_4__this, 1, 0, v2);
  ActionExtensions__Call(this->fields.callback, 0);
}


void GrandQuestClassBoardController___c__DisplayClass26_0___ctor(
        GrandQuestClassBoardController___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void GrandQuestClassBoardController___c__DisplayClass26_0___Resume_b__0(
        GrandQuestClassBoardController___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  Il2CppObject *v3; // x19
  System_Action_o *klass; // x21
  GrandQuestClassBoardController_o *v5; // x20

  v3 = (Il2CppObject *)this;
  if ( (byte_4C21FF8 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    this = (GrandQuestClassBoardController___c__DisplayClass26_0_o *)sub_1C2D490(&Method_GrandQuestClassBoardController___c__DisplayClass26_0__Resume_b__1__);
    byte_4C21FF8 = 1;
  }
  klass = (System_Action_o *)v3[2].klass;
  v5 = (GrandQuestClassBoardController_o *)v3[1].klass;
  if ( !klass )
  {
    klass = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(klass, v3, Method_GrandQuestClassBoardController___c__DisplayClass26_0__Resume_b__1__, 0);
    v3[2].klass = (Il2CppClass *)klass;
    this = (GrandQuestClassBoardController___c__DisplayClass26_0_o *)sub_1C2D434(&v3[2]);
  }
  if ( !v5 )
    sub_1C2D6EC(this, method);
  GrandQuestClassBoardController__SetEffectRootPosition(v5, 1, 2, klass, v2);
}


void GrandQuestClassBoardController___c__DisplayClass26_0___Resume_b__1(
        GrandQuestClassBoardController___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  GrandQuestClassBoardController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C2D6EC(0, method);
  GrandQuestClassBoardController__FadeIn(_4__this, 0, 1, v2);
  ActionExtensions__Call(this->fields.callback, 0);
}


void GrandQuestClassBoardController___c__DisplayClass28_0___ctor(
        GrandQuestClassBoardController___c__DisplayClass28_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool GrandQuestClassBoardController___c__DisplayClass28_0___GetTaskOfChangeViewType_b__0(
        GrandQuestClassBoardController___c__DisplayClass28_0_o *this,
        const MethodInfo *method)
{
  return this->fields.isMoving;
}


void GrandQuestClassBoardController___c__DisplayClass28_0___GetTaskOfChangeViewType_b__1(
        GrandQuestClassBoardController___c__DisplayClass28_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  GrandQuestClassBoardController___c__DisplayClass28_0_o *v3; // x19
  System_Action_o *_9__2; // x22
  GrandQuestClassBoardController_o *_4__this; // x20
  int32_t viewType; // w21

  v3 = this;
  if ( (byte_4C21FF9 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    this = (GrandQuestClassBoardController___c__DisplayClass28_0_o *)sub_1C2D490(&Method_GrandQuestClassBoardController___c__DisplayClass28_0__GetTaskOfChangeViewType_b__2__);
    byte_4C21FF9 = 1;
  }
  _9__2 = v3->fields.__9__2;
  _4__this = v3->fields.__4__this;
  viewType = v3->fields.viewType;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v3,
      Method_GrandQuestClassBoardController___c__DisplayClass28_0__GetTaskOfChangeViewType_b__2__,
      0);
    v3->fields.__9__2 = _9__2;
    this = (GrandQuestClassBoardController___c__DisplayClass28_0_o *)sub_1C2D434(&v3->fields.__9__2);
  }
  if ( !_4__this )
    sub_1C2D6EC(this, method);
  GrandQuestClassBoardController__ChangeViewType(_4__this, viewType, _9__2, v2);
}


void GrandQuestClassBoardController___c__DisplayClass28_0___GetTaskOfChangeViewType_b__2(
        GrandQuestClassBoardController___c__DisplayClass28_0_o *this,
        const MethodInfo *method)
{
  this->fields.isMoving = 0;
}


void GrandQuestClassBoardController___c__DisplayClass31_0___ctor(
        GrandQuestClassBoardController___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void GrandQuestClassBoardController___c__DisplayClass31_1___ctor(
        GrandQuestClassBoardController___c__DisplayClass31_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool GrandQuestClassBoardController___c__DisplayClass31_1___GetTaskOfChangeClass_b__0(
        GrandQuestClassBoardController___c__DisplayClass31_1_o *this,
        const MethodInfo *method)
{
  return this->fields.isMoving;
}


void GrandQuestClassBoardController___c__DisplayClass31_1___GetTaskOfChangeClass_b__1(
        GrandQuestClassBoardController___c__DisplayClass31_1_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  Il2CppObject *v3; // x19
  void *monitor; // x8
  GrandQuestClassBoardController_o *v5; // x20
  System_Action_o *klass; // x21

  v3 = (Il2CppObject *)this;
  if ( (byte_4C21FFA & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    this = (GrandQuestClassBoardController___c__DisplayClass31_1_o *)sub_1C2D490(&Method_GrandQuestClassBoardController___c__DisplayClass31_1__GetTaskOfChangeClass_b__2__);
    byte_4C21FFA = 1;
  }
  monitor = v3[1].monitor;
  if ( !monitor )
    goto LABEL_8;
  v5 = (GrandQuestClassBoardController_o *)*((_QWORD *)monitor + 2);
  klass = (System_Action_o *)v3[2].klass;
  if ( !klass )
  {
    klass = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(
      klass,
      v3,
      Method_GrandQuestClassBoardController___c__DisplayClass31_1__GetTaskOfChangeClass_b__2__,
      0);
    v3[2].klass = (Il2CppClass *)klass;
    this = (GrandQuestClassBoardController___c__DisplayClass31_1_o *)sub_1C2D434(&v3[2]);
  }
  if ( !v5 )
LABEL_8:
    sub_1C2D6EC(this, method);
  GrandQuestClassBoardController__ChangeViewType(v5, 1, klass, v2);
}


void GrandQuestClassBoardController___c__DisplayClass31_1___GetTaskOfChangeClass_b__2(
        GrandQuestClassBoardController___c__DisplayClass31_1_o *this,
        const MethodInfo *method)
{
  this->fields.isMoving = 0;
}


void GrandQuestClassBoardController___c__DisplayClass31_2___ctor(
        GrandQuestClassBoardController___c__DisplayClass31_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool GrandQuestClassBoardController___c__DisplayClass31_2___GetTaskOfChangeClass_b__3(
        GrandQuestClassBoardController___c__DisplayClass31_2_o *this,
        const MethodInfo *method)
{
  return this->fields.isClassChange;
}


void GrandQuestClassBoardController___c__DisplayClass31_2___GetTaskOfChangeClass_b__4(
        GrandQuestClassBoardController___c__DisplayClass31_2_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  Il2CppObject *v3; // x19
  void *monitor; // x8
  GrandQuestClassBoardController_o *v5; // x20
  int32_t v6; // w21
  System_Action_o *klass; // x22

  v3 = (Il2CppObject *)this;
  if ( (byte_4C21FFB & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    this = (GrandQuestClassBoardController___c__DisplayClass31_2_o *)sub_1C2D490(&Method_GrandQuestClassBoardController___c__DisplayClass31_2__GetTaskOfChangeClass_b__5__);
    byte_4C21FFB = 1;
  }
  monitor = v3[1].monitor;
  if ( !monitor )
    goto LABEL_8;
  v5 = (GrandQuestClassBoardController_o *)*((_QWORD *)monitor + 2);
  v6 = *((_DWORD *)monitor + 6);
  klass = (System_Action_o *)v3[2].klass;
  if ( !klass )
  {
    klass = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(
      klass,
      v3,
      Method_GrandQuestClassBoardController___c__DisplayClass31_2__GetTaskOfChangeClass_b__5__,
      0);
    v3[2].klass = (Il2CppClass *)klass;
    this = (GrandQuestClassBoardController___c__DisplayClass31_2_o *)sub_1C2D434(&v3[2]);
  }
  if ( !v5 )
LABEL_8:
    sub_1C2D6EC(this, method);
  GrandQuestClassBoardController__ChangeClass(v5, v6, klass, v2);
}


void GrandQuestClassBoardController___c__DisplayClass31_2___GetTaskOfChangeClass_b__5(
        GrandQuestClassBoardController___c__DisplayClass31_2_o *this,
        const MethodInfo *method)
{
  this->fields.isClassChange = 0;
}


void GrandQuestClassBoardController___c__DisplayClass34_0___ctor(
        GrandQuestClassBoardController___c__DisplayClass34_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void GrandQuestClassBoardController___c__DisplayClass34_0___ExecCircleEffect_b__0(
        GrandQuestClassBoardController___c__DisplayClass34_0_o *this,
        const MethodInfo *method)
{
  struct EasingObject_o *easing; // x9
  struct GrandQuestClassBoardController_o *_4__this; // x8
  UnityEngine_Component_o *classBoard; // x8
  float v5; // s8
  UnityEngine_Transform_o *transform; // x19
  UnityEngine_Vector3_o v7; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v8; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  easing = this->fields.easing;
  if ( !easing )
    goto LABEL_6;
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (classBoard = (UnityEngine_Component_o *)_4__this->fields.classBoard) == 0
    || (v5 = this->fields.currentRotateZ + (float)(easing->fields.mNow * this->fields.moveRotateZ),
        transform = UnityEngine_Component__get_transform(classBoard, 0),
        v7.fields.y = 0.0,
        v7.fields.z = v5 * 0.017453,
        v7.fields.x = 0.0,
        v8 = UnityEngine_Quaternion__Internal_FromEulerRad(v7, 0),
        !transform) )
  {
LABEL_6:
    sub_1C2D6EC(this, method);
  }
  UnityEngine_Transform__set_localRotation(transform, v8, 0);
}


void GrandQuestClassBoardController___c__DisplayClass34_0___ExecCircleEffect_b__1(
        GrandQuestClassBoardController___c__DisplayClass34_0_o *this,
        const MethodInfo *method)
{
  struct GrandQuestClassBoardController_o *_4__this; // x8
  GrandQuestClassBoardController___c__DisplayClass34_0_o *v3; // x19
  UnityEngine_Transform_o *transform; // x20
  UnityEngine_Vector3_o v5; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v6; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v3 = this, (this = (GrandQuestClassBoardController___c__DisplayClass34_0_o *)_4__this->fields.classBoard) == 0)
    || (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0),
        v5.fields.y = 0.0,
        v5.fields.z = (float)(v3->fields.currentRotateZ + v3->fields.moveRotateZ) * 0.017453,
        v5.fields.x = 0.0,
        v6 = UnityEngine_Quaternion__Internal_FromEulerRad(v5, 0),
        !transform) )
  {
    sub_1C2D6EC(this, method);
  }
  UnityEngine_Transform__set_localRotation(transform, v6, 0);
  ActionExtensions__Call(v3->fields.callback, 0);
}


void GrandQuestClassBoardController___c__DisplayClass35_0___ctor(
        GrandQuestClassBoardController___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void GrandQuestClassBoardController___c__DisplayClass35_0___ExecChangeIconAlpha_b__0(
        GrandQuestClassBoardController___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  struct EasingObject_o *easing; // x9
  GrandQuestClassBoardController___c__DisplayClass35_0_o *v3; // x8
  float mNow; // s0
  float v5; // s3
  bool v6; // nf
  float v7; // s0

  easing = this->fields.easing;
  if ( !easing || (v3 = this, (this = (GrandQuestClassBoardController___c__DisplayClass35_0_o *)this->fields.icon) == 0) )
    sub_1C2D6EC(this, method);
  mNow = easing->fields.mNow;
  v5 = fminf(mNow, 1.0);
  v6 = mNow < 0.0;
  v7 = 0.0;
  if ( !v6 )
    v7 = v5;
  ((void (__fastcall *)(GrandQuestClassBoardController___c__DisplayClass35_0_o *, Il2CppClass *, float))this->klass[1]._1.element_class)(
    this,
    this->klass[1]._1.castClass,
    v3->fields.fromAlpha + (float)(v7 * (float)(v3->fields.toAlpha - v3->fields.fromAlpha)));
}


void GrandQuestClassBoardController___c__DisplayClass35_0___ExecChangeIconAlpha_b__1(
        GrandQuestClassBoardController___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  struct UISprite_o *icon; // x0

  icon = this->fields.icon;
  if ( !icon )
    sub_1C2D6EC(0, method);
  ((void (__fastcall *)(struct UISprite_o *, const MethodInfo *, float))icon->klass->vtable._8_set_alpha.methodPtr)(
    icon,
    icon->klass->vtable._8_set_alpha.method,
    this->fields.toAlpha);
}


void GrandQuestClassBoardController___c__DisplayClass36_0___ctor(
        GrandQuestClassBoardController___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void GrandQuestClassBoardController___c__DisplayClass36_0___SetClassMotif_b__0(
        GrandQuestClassBoardController___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  struct EasingObject_o *easing; // x9
  struct GrandQuestClassBoardController_o *_4__this; // x10
  GrandQuestClassBoardController___c__DisplayClass36_0_o *v4; // x8
  float mNow; // s0
  float v6; // s3
  bool v7; // nf
  float v8; // s0

  easing = this->fields.easing;
  if ( !easing
    || (_4__this = this->fields.__4__this, v4 = this, !_4__this)
    || (this = (GrandQuestClassBoardController___c__DisplayClass36_0_o *)_4__this->fields.classMotif) == 0 )
  {
    sub_1C2D6EC(this, method);
  }
  mNow = easing->fields.mNow;
  v6 = fminf(mNow, 1.0);
  v7 = mNow < 0.0;
  v8 = 0.0;
  if ( !v7 )
    v8 = v6;
  ((void (__fastcall *)(GrandQuestClassBoardController___c__DisplayClass36_0_o *, Il2CppClass *, float))this->klass[1]._1.element_class)(
    this,
    this->klass[1]._1.castClass,
    v4->fields.fromAlpha + (float)(v8 * (float)(v4->fields.toAlpha - v4->fields.fromAlpha)));
}


void GrandQuestClassBoardController___c__DisplayClass36_0___SetClassMotif_b__1(
        GrandQuestClassBoardController___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  struct GrandQuestClassBoardController_o *_4__this; // x8
  struct UISprite_o *classMotif; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (classMotif = _4__this->fields.classMotif) == 0 )
    sub_1C2D6EC(this, method);
  ((void (__fastcall *)(struct UISprite_o *__return_ptr, struct UISprite_o *, const MethodInfo *, float))classMotif->klass->vtable._8_set_alpha.methodPtr)(
    classMotif,
    classMotif,
    classMotif->klass->vtable._8_set_alpha.method,
    this->fields.toAlpha);
}


void GrandQuestClassBoardController___c__DisplayClass38_0___ctor(
        GrandQuestClassBoardController___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void GrandQuestClassBoardController___c__DisplayClass38_0___FadeIn_b__0(
        GrandQuestClassBoardController___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  struct EasingObject_o *easing; // x8
  struct GrandQuestClassBoardController_o *_4__this; // x9
  GrandQuestClassBoardController___c__DisplayClass38_0_o *v4; // x19
  float mNow; // s0
  float v6; // s1
  float v7; // s2
  struct GrandQuestClassBoardController_o *v8; // x8
  unsigned __int64 v9; // d0 OVERLAPPED
  float v10; // s2
  int v11; // s1
  float v12; // [xsp+0h] [xbp-20h]

  easing = this->fields.easing;
  if ( !easing )
    goto LABEL_11;
  _4__this = this->fields.__4__this;
  v4 = this;
  if ( !_4__this )
    goto LABEL_11;
  mNow = easing->fields.mNow;
  this = (GrandQuestClassBoardController___c__DisplayClass38_0_o *)_4__this->fields.classBoardRoot;
  v6 = fminf(mNow, 1.0);
  v7 = mNow < 0.0 ? 0.0 : v6;
  if ( !this
    || (v12 = v7,
        this = (GrandQuestClassBoardController___c__DisplayClass38_0_o *)((__int64 (__fastcall *)(GrandQuestClassBoardController___c__DisplayClass38_0_o *, Il2CppClass *, float))this->klass[1]._1.element_class)(
                                                                           this,
                                                                           this->klass[1]._1.castClass,
                                                                           v4->fields.fromAlpha
                                                                         + (float)(v7
                                                                                 * (float)(v4->fields.toAlpha
                                                                                         - v4->fields.fromAlpha))),
        (v8 = v4->fields.__4__this) == 0)
    || (this = (GrandQuestClassBoardController___c__DisplayClass38_0_o *)v8->fields.classBoardRoot) == 0
    || (this = (GrandQuestClassBoardController___c__DisplayClass38_0_o *)UnityEngine_Component__get_transform(
                                                                           (UnityEngine_Component_o *)this,
                                                                           0)) == 0 )
  {
LABEL_11:
    sub_1C2D6EC(this, method);
  }
  v9 = vadd_f32(
         *(float32x2_t *)&v4->fields.fromScale.fields.x,
         vmul_n_f32(
           vsub_f32(*(float32x2_t *)&v4->fields.toScale.fields.x, *(float32x2_t *)&v4->fields.fromScale.fields.x),
           v12)).n64_u64[0];
  v10 = v4->fields.fromScale.fields.z
      + (float)(v12 * (float)(v4->fields.toScale.fields.z - v4->fields.fromScale.fields.z));
  v11 = HIDWORD(v9);
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, *(UnityEngine_Vector3_o *)&v9, 0);
}


void GrandQuestClassBoardController___c__DisplayClass38_0___FadeIn_b__1(
        GrandQuestClassBoardController___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  struct GrandQuestClassBoardController_o *_4__this; // x8
  GrandQuestClassBoardController___c__DisplayClass38_0_o *v3; // x19
  struct GrandQuestClassBoardController_o *v4; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v3 = this,
        (this = (GrandQuestClassBoardController___c__DisplayClass38_0_o *)_4__this->fields.classBoardRoot) == 0)
    || (this = (GrandQuestClassBoardController___c__DisplayClass38_0_o *)((__int64 (__fastcall *)(GrandQuestClassBoardController___c__DisplayClass38_0_o *, Il2CppClass *, float))this->klass[1]._1.element_class)(
                                                                           this,
                                                                           this->klass[1]._1.castClass,
                                                                           v3->fields.toAlpha),
        (v4 = v3->fields.__4__this) == 0)
    || (this = (GrandQuestClassBoardController___c__DisplayClass38_0_o *)v4->fields.classBoardRoot) == 0
    || (this = (GrandQuestClassBoardController___c__DisplayClass38_0_o *)UnityEngine_Component__get_transform(
                                                                           (UnityEngine_Component_o *)this,
                                                                           0)) == 0 )
  {
    sub_1C2D6EC(this, method);
  }
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v3->fields.toScale, 0);
}


void GrandQuestClassBoardController___c__DisplayClass39_0___ctor(
        GrandQuestClassBoardController___c__DisplayClass39_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void GrandQuestClassBoardController___c__DisplayClass39_0___ExecMoveEffectRoot_b__0(
        GrandQuestClassBoardController___c__DisplayClass39_0_o *this,
        const MethodInfo *method)
{
  struct EasingObject_o *easing; // x8
  float mNow; // s0
  struct GrandQuestClassBoardController_o *_4__this; // x8
  float v5; // s1
  bool v6; // nf
  float v7; // s0
  float z; // s2
  float v9; // s3
  unsigned __int64 v10; // d0 OVERLAPPED
  float v11; // s2
  int v12; // s1

  easing = this->fields.easing;
  if ( !easing )
    goto LABEL_6;
  mNow = easing->fields.mNow;
  _4__this = this->fields.__4__this;
  v5 = fminf(mNow, 1.0);
  v6 = mNow < 0.0;
  v7 = 0.0;
  if ( !v6 )
    v7 = v5;
  if ( !_4__this )
LABEL_6:
    sub_1C2D6EC(this, method);
  z = this->fields.currentPosition.fields.z;
  v9 = v7 * (float)(this->fields.targetPosition.fields.z - z);
  v10 = vadd_f32(
          *(float32x2_t *)&this->fields.currentPosition.fields.x,
          vmul_n_f32(
            vsub_f32(
              *(float32x2_t *)&this->fields.targetPosition.fields.x,
              *(float32x2_t *)&this->fields.currentPosition.fields.x),
            v7)).n64_u64[0];
  v11 = z + v9;
  v12 = HIDWORD(v10);
  TransformHelper__SetLocalPosition(_4__this->fields.effectRoot, *(UnityEngine_Vector3_o *)&v10, 0);
}


void GrandQuestClassBoardController___c__DisplayClass39_0___ExecMoveEffectRoot_b__1(
        GrandQuestClassBoardController___c__DisplayClass39_0_o *this,
        const MethodInfo *method)
{
  struct GrandQuestClassBoardController_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C2D6EC(this, method);
  TransformHelper__SetLocalPosition(_4__this->fields.effectRoot, this->fields.targetPosition, 0);
  ActionExtensions__Call(this->fields.callback, 0);
}