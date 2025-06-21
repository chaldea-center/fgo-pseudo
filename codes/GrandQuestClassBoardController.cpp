void __fastcall GrandQuestClassBoardController___ctor(GrandQuestClassBoardController_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_int__object__o *v4; // x20

  if ( (byte_4B172F2 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__UISprite___ctor__, method);
    sub_1BCAFF8(&System_Collections_Generic_Dictionary_int__UISprite__TypeInfo, v3);
    byte_4B172F2 = 1;
  }
  this->fields.currentWarId = -1;
  *(_OWORD *)&this->fields.effectRootDefaultPosition.fields.x = xmmword_BE29B0;
  *(_OWORD *)&this->fields.effectRootQuestSelectPosition.fields.y = xmmword_BE3230;
  v4 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCB244(System_Collections_Generic_Dictionary_int__UISprite__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v4,
    (const MethodInfo_3320910 *)Method_System_Collections_Generic_Dictionary_int__UISprite___ctor__);
  this->fields.dicClassIcon = (struct System_Collections_Generic_Dictionary_int__UISprite__o *)v4;
  sub_1BCAF9C(&this->fields.dicClassIcon);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall GrandQuestClassBoardController__ChangeClass(
        GrandQuestClassBoardController_o *this,
        int32_t warId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x6

  if ( this->fields.currentWarId == warId )
    ActionExtensions__Call(callback, 0LL);
  else
    GrandQuestClassBoardController__SetClass(this, 0, 0, 0, warId, callback, v4);
}


void __fastcall GrandQuestClassBoardController__ChangeViewType(
        GrandQuestClassBoardController_o *this,
        int32_t viewType,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  const MethodInfo *v6; // x1

  if ( this->fields.currentViewType == viewType )
  {
    ActionExtensions__Call(callback, 0LL);
  }
  else
  {
    GrandQuestClassBoardController__SetEffectRootPosition(this, 0, viewType, callback, v4);
    GrandQuestClassBoardController__RefreshClassBoardRootActive(this, v6);
  }
}


void __fastcall GrandQuestClassBoardController__ExecChangeIconAlpha(
        GrandQuestClassBoardController_o *this,
        UISprite_o *icon,
        float toAlpha,
        float time,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x19
  UnityEngine_Component_o *v13; // x0
  __int64 v14; // x1
  float v15; // s0
  UnityEngine_GameObject_o *gameObject; // x0
  EasingObject_o *v17; // x20
  System_Action_o *v18; // x21
  System_Action_o *v19; // x22

  if ( (byte_4B172EC & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, icon);
    sub_1BCAFF8(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v8);
    sub_1BCAFF8(&Method_GrandQuestClassBoardController___c__DisplayClass35_0__ExecChangeIconAlpha_b__0__, v9);
    sub_1BCAFF8(&Method_GrandQuestClassBoardController___c__DisplayClass35_0__ExecChangeIconAlpha_b__1__, v10);
    sub_1BCAFF8(&GrandQuestClassBoardController___c__DisplayClass35_0_TypeInfo, v11);
    byte_4B172EC = 1;
  }
  v12 = sub_1BCB244(GrandQuestClassBoardController___c__DisplayClass35_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_11;
  *(_QWORD *)(v12 + 32) = icon;
  *(float *)(v12 + 28) = toAlpha;
  sub_1BCAF9C(v12 + 32);
  v13 = *(UnityEngine_Component_o **)(v12 + 32);
  if ( time > 0.0 )
  {
    if ( v13 )
    {
      v15 = (*(float (__fastcall **)(UnityEngine_Component_o *, Il2CppClass *))&v13->klass[1]._1.this_arg.bits)(
              v13,
              v13->klass[1]._1.element_class);
      v13 = *(UnityEngine_Component_o **)(v12 + 32);
      *(float *)(v12 + 24) = v15;
      if ( v13 )
      {
        gameObject = UnityEngine_Component__get_gameObject(v13, 0LL);
        *(_QWORD *)(v12 + 16) = GameObjectExtensions__SafeGetComponent_object_(
                                  gameObject,
                                  (const MethodInfo_30701F8 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
        sub_1BCAF9C(v12 + 16);
        v17 = *(EasingObject_o **)(v12 + 16);
        v18 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
        System_Action___ctor(
          v18,
          (Il2CppObject *)v12,
          Method_GrandQuestClassBoardController___c__DisplayClass35_0__ExecChangeIconAlpha_b__0__,
          0LL);
        v19 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
        System_Action___ctor(
          v19,
          (Il2CppObject *)v12,
          Method_GrandQuestClassBoardController___c__DisplayClass35_0__ExecChangeIconAlpha_b__1__,
          0LL);
        if ( v17 )
        {
          EasingObject__Play_48249532(v17, 0.0, 1.0, time, v18, v19, 0.0, 15, 0LL);
          return;
        }
      }
    }
LABEL_11:
    sub_1BCB254(v13, v14);
  }
  if ( !v13 )
    goto LABEL_11;
  ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, float))v13->klass[1]._1.castClass)(
    v13,
    v13->klass[1]._1.declaringType,
    *(float *)(v12 + 28));
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GrandQuestClassBoardController__ExecCircleRotate(
        GrandQuestClassBoardController_o *this,
        bool immediately,
        System_Action_o *callback,
        const MethodInfo *method)
{
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
  __int64 v18; // x21
  BlankEarthSpotEntity_o *blankEarthSpotEntity; // x0
  __int64 v20; // x1
  int v21; // w23
  UnityEngine_Component_o *v22; // x24
  float v23; // s0
  float v24; // s1
  float v25; // s8
  float v26; // s9
  float v27; // s0
  struct GrandQuestRootComponent_o *rootComponent; // x8
  struct GrandQuestClassSelectController_o *classSelectController; // x8
  float v30; // w8
  float classIconDefaultAlpha; // s10
  float classIconActiveAlpha; // s11
  float v33; // s8
  float i; // s9
  _BOOL8 v35; // x0
  const MethodInfo *v36; // x2
  float v37; // s0
  UnityEngine_Transform_o *transform; // x19
  int v39; // s0
  UnityEngine_GameObject_o *gameObject; // x0
  EasingObject_o *v44; // x19
  System_Action_o *v45; // x20
  System_Action_o *v46; // x22
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v47; // [xsp+0h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o localEulerAngles; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B172EB & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, immediately);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__UISprite__GetEnumerator__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__UISprite__get_Item__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__UISprite__Dispose__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__UISprite__MoveNext__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__UISprite__get_Current__, v11);
    sub_1BCAFF8(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v12);
    sub_1BCAFF8(&Method_System_Collections_Generic_KeyValuePair_int__UISprite__get_Key__, v13);
    sub_1BCAFF8(&Method_System_Collections_Generic_KeyValuePair_int__UISprite__get_Value__, v14);
    sub_1BCAFF8(&Method_GrandQuestClassBoardController___c__DisplayClass34_0__ExecCircleRotate_b__0__, v15);
    sub_1BCAFF8(&Method_GrandQuestClassBoardController___c__DisplayClass34_0__ExecCircleRotate_b__1__, v16);
    sub_1BCAFF8(&GrandQuestClassBoardController___c__DisplayClass34_0_TypeInfo, v17);
    byte_4B172EB = 1;
  }
  memset(&v47, 0, sizeof(v47));
  v18 = sub_1BCB244(GrandQuestClassBoardController___c__DisplayClass34_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  if ( !v18 )
    goto LABEL_35;
  *(_QWORD *)(v18 + 32) = this;
  sub_1BCAF9C(v18 + 32);
  *(_QWORD *)(v18 + 40) = callback;
  sub_1BCAF9C(v18 + 40);
  blankEarthSpotEntity = this->fields.blankEarthSpotEntity;
  if ( !blankEarthSpotEntity )
    goto LABEL_35;
  blankEarthSpotEntity = (BlankEarthSpotEntity_o *)BlankEarthSpotEntity__GetGrandClassIconId(
                                                     blankEarthSpotEntity,
                                                     1,
                                                     0LL);
  if ( !this->fields.dicClassIcon )
    goto LABEL_35;
  v21 = (int)blankEarthSpotEntity;
  blankEarthSpotEntity = (BlankEarthSpotEntity_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                     (System_Collections_Generic_Dictionary_int__object__o *)this->fields.dicClassIcon,
                                                     (int32_t)blankEarthSpotEntity,
                                                     (const MethodInfo_3321244 *)Method_System_Collections_Generic_Dictionary_int__UISprite__get_Item__);
  if ( !this->fields.classBoard )
    goto LABEL_35;
  v22 = (UnityEngine_Component_o *)blankEarthSpotEntity;
  blankEarthSpotEntity = (BlankEarthSpotEntity_o *)UnityEngine_Component__get_transform(
                                                     (UnityEngine_Component_o *)this->fields.classBoard,
                                                     0LL);
  if ( !blankEarthSpotEntity )
    goto LABEL_35;
  localEulerAngles = UnityEngine_Transform__get_localEulerAngles((UnityEngine_Transform_o *)blankEarthSpotEntity, 0LL);
  *(float *)(v18 + 24) = localEulerAngles.fields.z;
  if ( !v22 )
    goto LABEL_35;
  blankEarthSpotEntity = (BlankEarthSpotEntity_o *)UnityEngine_Component__get_transform(v22, 0LL);
  if ( !blankEarthSpotEntity )
    goto LABEL_35;
  *(UnityEngine_Vector3_o *)&v23 = UnityEngine_Transform__get_position(
                                     (UnityEngine_Transform_o *)blankEarthSpotEntity,
                                     0LL);
  blankEarthSpotEntity = (BlankEarthSpotEntity_o *)this->fields.classBoard;
  if ( !blankEarthSpotEntity )
    goto LABEL_35;
  v25 = v23;
  v26 = v24;
  blankEarthSpotEntity = (BlankEarthSpotEntity_o *)UnityEngine_Component__get_transform(
                                                     (UnityEngine_Component_o *)blankEarthSpotEntity,
                                                     0LL);
  if ( !blankEarthSpotEntity )
    goto LABEL_35;
  position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)blankEarthSpotEntity, 0LL);
  v27 = (float)(atan2f(v26 - position.fields.y, v25 - position.fields.x) * -57.296) + 90.0;
  *(float *)(v18 + 28) = v27;
  rootComponent = this->fields.rootComponent;
  if ( !rootComponent )
    goto LABEL_35;
  classSelectController = rootComponent->fields.classSelectController;
  if ( !classSelectController )
    goto LABEL_35;
  if ( classSelectController->fields.isMovePositiveIndex )
  {
    if ( v27 > 0.0 )
    {
      v30 = -360.0;
LABEL_19:
      v27 = v27 + v30;
      *(float *)(v18 + 28) = v27;
    }
  }
  else if ( v27 < 0.0 )
  {
    v30 = 360.0;
    goto LABEL_19;
  }
  blankEarthSpotEntity = (BlankEarthSpotEntity_o *)this->fields.dicClassIcon;
  if ( !blankEarthSpotEntity )
    goto LABEL_35;
  classIconDefaultAlpha = this->fields.classIconDefaultAlpha;
  classIconActiveAlpha = this->fields.classIconActiveAlpha;
  v33 = fabsf(v27 / 180.0);
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v47,
    (System_Collections_Generic_Dictionary_int__object__o *)blankEarthSpotEntity,
    (const MethodInfo_332171C *)Method_System_Collections_Generic_Dictionary_int__UISprite__GetEnumerator__);
  for ( i = immediately ? 0.0 : v33;
        ;
        GrandQuestClassBoardController__ExecChangeIconAlpha(
          (GrandQuestClassBoardController_o *)v35,
          (UISprite_o *)v47.fields._current.fields.value,
          v37 / 255.0,
          i,
          v36) )
  {
    v35 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v47,
            (const MethodInfo_3472D10 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__UISprite__MoveNext__);
    if ( !v35 )
      break;
    if ( v21 == LODWORD(v47.fields._current.fields.key) )
      v37 = classIconActiveAlpha;
    else
      v37 = classIconDefaultAlpha;
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v47,
    (const MethodInfo_3472E34 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__UISprite__Dispose__);
  blankEarthSpotEntity = (BlankEarthSpotEntity_o *)this->fields.classBoard;
  if ( !blankEarthSpotEntity )
    goto LABEL_35;
  if ( immediately )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)blankEarthSpotEntity, 0LL);
    v50.fields.y = 0.0;
    v50.fields.z = (float)(*(float *)(v18 + 24) + *(float *)(v18 + 28)) * 0.017453;
    v50.fields.x = 0.0;
    *(UnityEngine_Quaternion_o *)&v39 = UnityEngine_Quaternion__Internal_FromEulerRad(v50, 0LL);
    if ( transform )
    {
      UnityEngine_Transform__set_localRotation(transform, *(UnityEngine_Quaternion_o *)&v39, 0LL);
      ActionExtensions__Call(*(System_Action_o **)(v18 + 40), 0LL);
      return;
    }
LABEL_35:
    sub_1BCB254(blankEarthSpotEntity, v20);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)blankEarthSpotEntity, 0LL);
  *(_QWORD *)(v18 + 16) = GameObjectExtensions__SafeGetComponent_object_(
                            gameObject,
                            (const MethodInfo_30701F8 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  sub_1BCAF9C(v18 + 16);
  v44 = *(EasingObject_o **)(v18 + 16);
  v45 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(
    v45,
    (Il2CppObject *)v18,
    Method_GrandQuestClassBoardController___c__DisplayClass34_0__ExecCircleRotate_b__0__,
    0LL);
  v46 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(
    v46,
    (Il2CppObject *)v18,
    Method_GrandQuestClassBoardController___c__DisplayClass34_0__ExecCircleRotate_b__1__,
    0LL);
  if ( !v44 )
    goto LABEL_35;
  EasingObject__Play_48249532(v44, 0.0, 1.0, v33, v45, v46, 0.0, 15, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GrandQuestClassBoardController__ExecMoveEffectRoot(
        GrandQuestClassBoardController_o *this,
        UnityEngine_Vector3_o targetPosition,
        float moveTime,
        System_Action_o *callback,
        const MethodInfo *method)
{
  float z; // s9
  float y; // s10
  float x; // s11
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x19
  UnityEngine_Component_o *effectRoot; // x0
  __int64 v17; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v19; // x0
  EasingObject_o *v20; // x20
  System_Action_o *v21; // x21
  System_Action_o *v22; // x22

  z = targetPosition.fields.z;
  y = targetPosition.fields.y;
  x = targetPosition.fields.x;
  if ( (byte_4B172F0 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, callback);
    sub_1BCAFF8(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v11);
    sub_1BCAFF8(&Method_GrandQuestClassBoardController___c__DisplayClass39_0__ExecMoveEffectRoot_b__0__, v12);
    sub_1BCAFF8(&Method_GrandQuestClassBoardController___c__DisplayClass39_0__ExecMoveEffectRoot_b__1__, v13);
    sub_1BCAFF8(&GrandQuestClassBoardController___c__DisplayClass39_0_TypeInfo, v14);
    byte_4B172F0 = 1;
  }
  v15 = sub_1BCB244(GrandQuestClassBoardController___c__DisplayClass39_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    goto LABEL_8;
  *(float *)(v15 + 36) = x;
  *(float *)(v15 + 40) = y;
  *(float *)(v15 + 44) = z;
  *(_QWORD *)(v15 + 48) = this;
  sub_1BCAF9C(v15 + 48);
  *(_QWORD *)(v15 + 56) = callback;
  sub_1BCAF9C(v15 + 56);
  effectRoot = (UnityEngine_Component_o *)this->fields.effectRoot;
  if ( !effectRoot )
    goto LABEL_8;
  gameObject = UnityEngine_Component__get_gameObject(effectRoot, 0LL);
  *(_QWORD *)(v15 + 16) = GameObjectExtensions__SafeGetComponent_object_(
                            gameObject,
                            (const MethodInfo_30701F8 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  sub_1BCAF9C(v15 + 16);
  effectRoot = (UnityEngine_Component_o *)this->fields.effectRoot;
  if ( !effectRoot
    || (v19 = UnityEngine_Component__get_gameObject(effectRoot, 0LL),
        *(UnityEngine_Vector3_o *)(v15 + 24) = GameObjectExtensions__GetLocalPosition(v19, 0LL),
        v20 = *(EasingObject_o **)(v15 + 16),
        v21 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo),
        System_Action___ctor(
          v21,
          (Il2CppObject *)v15,
          Method_GrandQuestClassBoardController___c__DisplayClass39_0__ExecMoveEffectRoot_b__0__,
          0LL),
        v22 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo),
        System_Action___ctor(
          v22,
          (Il2CppObject *)v15,
          Method_GrandQuestClassBoardController___c__DisplayClass39_0__ExecMoveEffectRoot_b__1__,
          0LL),
        !v20) )
  {
LABEL_8:
    sub_1BCB254(effectRoot, v17);
  }
  EasingObject__Play_48249532(v20, 0.0, 1.0, moveTime, v21, v22, 0.0, 17, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GrandQuestClassBoardController__FadeIn(
        GrandQuestClassBoardController_o *this,
        bool isStartUp,
        bool immediately,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x21
  UnityEngine_Component_o *classBoardRoot; // x0
  __int64 v13; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v15; // x1
  EasingObject_o *v16; // x22
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  System_Action_o *v19; // x23
  System_Action_o *v20; // x24
  float v21; // s2
  float v22; // s1
  float v23; // s3

  if ( (byte_4B172EF & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, isStartUp);
    sub_1BCAFF8(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v7);
    sub_1BCAFF8(&Method_GrandQuestClassBoardController___c__DisplayClass38_0__FadeIn_b__0__, v8);
    sub_1BCAFF8(&Method_GrandQuestClassBoardController___c__DisplayClass38_0__FadeIn_b__1__, v9);
    sub_1BCAFF8(&GrandQuestClassBoardController___c__DisplayClass38_0_TypeInfo, v10);
    byte_4B172EF = 1;
  }
  v11 = sub_1BCB244(GrandQuestClassBoardController___c__DisplayClass38_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_18;
  *(_QWORD *)(v11 + 24) = this;
  sub_1BCAF9C(v11 + 24);
  classBoardRoot = (UnityEngine_Component_o *)this->fields.classBoardRoot;
  if ( !classBoardRoot )
    goto LABEL_18;
  gameObject = UnityEngine_Component__get_gameObject(classBoardRoot, 0LL);
  *(_QWORD *)(v11 + 16) = GameObjectExtensions__SafeGetComponent_object_(
                            gameObject,
                            (const MethodInfo_30701F8 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  sub_1BCAF9C(v11 + 16);
  *(_DWORD *)(v11 + 48) = 1065353216;
  *(_OWORD *)(v11 + 32) = xmmword_BE30F0;
  if ( !byte_4B16196 )
  {
    sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, v15);
    byte_4B16196 = 1;
  }
  v16 = *(EasingObject_o **)(v11 + 16);
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->oneVector.fields.z;
  *(_QWORD *)(v11 + 52) = *(_QWORD *)&static_fields->oneVector.fields.x;
  *(float *)(v11 + 60) = z;
  v19 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(
    v19,
    (Il2CppObject *)v11,
    Method_GrandQuestClassBoardController___c__DisplayClass38_0__FadeIn_b__0__,
    0LL);
  v20 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(
    v20,
    (Il2CppObject *)v11,
    Method_GrandQuestClassBoardController___c__DisplayClass38_0__FadeIn_b__1__,
    0LL);
  if ( !v16 )
LABEL_18:
    sub_1BCB254(classBoardRoot, v13);
  if ( immediately )
    v21 = 0.0;
  else
    v21 = 1.2;
  if ( immediately )
    v22 = 0.0;
  else
    v22 = 0.3;
  if ( isStartUp )
    v23 = v22;
  else
    v23 = 0.0;
  EasingObject__Play_48249532(v16, 0.0, 1.0, v21, v19, v20, v23, 11, 0LL);
}


// local variable allocation has failed, the output may be wrong!
SchedulerTaskBase_o *__fastcall GrandQuestClassBoardController__GetTaskOfChangeClass(
        GrandQuestClassBoardController_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1
  __int64 v17; // x20
  System_Func_bool__o *v18; // x21
  SchedulerTaskWaitWhile_o *v19; // x19
  SchedulerTaskBase_TaskCallback_o *v20; // x0
  __int64 *v21; // x8
  System_Func_bool__o *v22; // x21
  struct SchedulerTaskBase_TaskCallback_o *v23; // x21

  if ( (byte_4B172E9 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Func_bool__TypeInfo, *(_QWORD *)&warId);
    sub_1BCAFF8(&SchedulerTaskWaitWhile_TypeInfo, v5);
    sub_1BCAFF8(&SchedulerTaskBase_TaskCallback_TypeInfo, v6);
    sub_1BCAFF8(&GrandQuestClassBoardController___c__DisplayClass31_0_TypeInfo, v7);
    sub_1BCAFF8(&Method_GrandQuestClassBoardController___c__DisplayClass31_1__GetTaskOfChangeClass_b__0__, v8);
    sub_1BCAFF8(&Method_GrandQuestClassBoardController___c__DisplayClass31_1__GetTaskOfChangeClass_b__1__, v9);
    sub_1BCAFF8(&GrandQuestClassBoardController___c__DisplayClass31_1_TypeInfo, v10);
    sub_1BCAFF8(&Method_GrandQuestClassBoardController___c__DisplayClass31_2__GetTaskOfChangeClass_b__3__, v11);
    sub_1BCAFF8(&Method_GrandQuestClassBoardController___c__DisplayClass31_2__GetTaskOfChangeClass_b__4__, v12);
    sub_1BCAFF8(&GrandQuestClassBoardController___c__DisplayClass31_2_TypeInfo, v13);
    byte_4B172E9 = 1;
  }
  v14 = sub_1BCB244(GrandQuestClassBoardController___c__DisplayClass31_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_11;
  *(_QWORD *)(v14 + 16) = this;
  sub_1BCAF9C(v14 + 16);
  *(_DWORD *)(v14 + 24) = warId;
  if ( this->fields.currentWarId == warId )
  {
    v17 = sub_1BCB244(GrandQuestClassBoardController___c__DisplayClass31_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v17, 0LL);
    if ( !v17 )
      goto LABEL_11;
    *(_QWORD *)(v17 + 24) = v14;
    sub_1BCAF9C(v17 + 24);
    *(_BYTE *)(v17 + 16) = 1;
    v18 = (System_Func_bool__o *)sub_1BCB244(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      v18,
      (Il2CppObject *)v17,
      Method_GrandQuestClassBoardController___c__DisplayClass31_1__GetTaskOfChangeClass_b__0__,
      0LL);
    v19 = (SchedulerTaskWaitWhile_o *)sub_1BCB244(SchedulerTaskWaitWhile_TypeInfo);
    SchedulerTaskWaitWhile___ctor(v19, v18, 0LL);
    v20 = (SchedulerTaskBase_TaskCallback_o *)sub_1BCB244(SchedulerTaskBase_TaskCallback_TypeInfo);
    v21 = &Method_GrandQuestClassBoardController___c__DisplayClass31_1__GetTaskOfChangeClass_b__1__;
  }
  else
  {
    v17 = sub_1BCB244(GrandQuestClassBoardController___c__DisplayClass31_2_TypeInfo);
    System_Object___ctor((Il2CppObject *)v17, 0LL);
    if ( !v17 )
      goto LABEL_11;
    *(_QWORD *)(v17 + 24) = v14;
    sub_1BCAF9C(v17 + 24);
    *(_BYTE *)(v17 + 16) = 1;
    v22 = (System_Func_bool__o *)sub_1BCB244(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      v22,
      (Il2CppObject *)v17,
      Method_GrandQuestClassBoardController___c__DisplayClass31_2__GetTaskOfChangeClass_b__3__,
      0LL);
    v19 = (SchedulerTaskWaitWhile_o *)sub_1BCB244(SchedulerTaskWaitWhile_TypeInfo);
    SchedulerTaskWaitWhile___ctor(v19, v22, 0LL);
    v20 = (SchedulerTaskBase_TaskCallback_o *)sub_1BCB244(SchedulerTaskBase_TaskCallback_TypeInfo);
    v21 = &Method_GrandQuestClassBoardController___c__DisplayClass31_2__GetTaskOfChangeClass_b__4__;
  }
  v23 = v20;
  SchedulerTaskBase_TaskCallback___ctor(v20, (Il2CppObject *)v17, *v21, 0LL);
  if ( !v19 )
LABEL_11:
    sub_1BCB254(v15, v16);
  v19->fields.StartCallback = v23;
  sub_1BCAF9C(&v19->fields.StartCallback);
  return (SchedulerTaskBase_o *)v19;
}


// local variable allocation has failed, the output may be wrong!
SchedulerTaskBase_o *__fastcall GrandQuestClassBoardController__GetTaskOfChangeViewType(
        GrandQuestClassBoardController_o *this,
        int32_t viewType,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  System_Func_bool__o *v13; // x20
  SchedulerTaskWaitWhile_o *v14; // x19
  SchedulerTaskBase_TaskCallback_o *v15; // x20

  if ( (byte_4B172E7 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Func_bool__TypeInfo, *(_QWORD *)&viewType);
    sub_1BCAFF8(&SchedulerTaskWaitWhile_TypeInfo, v5);
    sub_1BCAFF8(&SchedulerTaskBase_TaskCallback_TypeInfo, v6);
    sub_1BCAFF8(&Method_GrandQuestClassBoardController___c__DisplayClass28_0__GetTaskOfChangeViewType_b__0__, v7);
    sub_1BCAFF8(&Method_GrandQuestClassBoardController___c__DisplayClass28_0__GetTaskOfChangeViewType_b__1__, v8);
    sub_1BCAFF8(&GrandQuestClassBoardController___c__DisplayClass28_0_TypeInfo, v9);
    byte_4B172E7 = 1;
  }
  v10 = sub_1BCB244(GrandQuestClassBoardController___c__DisplayClass28_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    goto LABEL_6;
  *(_QWORD *)(v10 + 24) = this;
  sub_1BCAF9C(v10 + 24);
  *(_DWORD *)(v10 + 32) = viewType;
  *(_BYTE *)(v10 + 16) = 1;
  v13 = (System_Func_bool__o *)sub_1BCB244(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v13,
    (Il2CppObject *)v10,
    Method_GrandQuestClassBoardController___c__DisplayClass28_0__GetTaskOfChangeViewType_b__0__,
    0LL);
  v14 = (SchedulerTaskWaitWhile_o *)sub_1BCB244(SchedulerTaskWaitWhile_TypeInfo);
  SchedulerTaskWaitWhile___ctor(v14, v13, 0LL);
  v15 = (SchedulerTaskBase_TaskCallback_o *)sub_1BCB244(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v15,
    (Il2CppObject *)v10,
    Method_GrandQuestClassBoardController___c__DisplayClass28_0__GetTaskOfChangeViewType_b__1__,
    0LL);
  if ( !v14 )
LABEL_6:
    sub_1BCB254(v11, v12);
  v14->fields.StartCallback = v15;
  sub_1BCAF9C(&v14->fields.StartCallback);
  return (SchedulerTaskBase_o *)v14;
}


void __fastcall GrandQuestClassBoardController__Init(
        GrandQuestClassBoardController_o *this,
        GrandQuestRootComponent_o *grandQuestRoot,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct UnityEngine_GameObject_o **p_classServantEffect; // x21
  UnityEngine_Object_o *classServantEffect; // x22
  __int64 v14; // x1
  UnityEngine_Object_o *v15; // x22
  System_Collections_Generic_Dictionary_int__object__o *dicClassIcon; // x0
  __int64 v17; // x1
  UnityEngine_GameObject_o *gameObject; // x21
  const MethodInfo *v19; // x4
  const MethodInfo *v20; // x4
  __int64 v21; // x2
  struct UISprite_array *classIcons; // x22
  int max_length; // w8
  unsigned int v24; // w23
  Il2CppClass **v25; // x8
  UnityEngine_Object_o *v26; // x20
  System_String_o *name; // x21
  System_String_o *v28; // x0
  int v29; // w21
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  Il2CppObject *v33; // x0
  System_String_o *v34; // x0
  const MethodInfo *v35; // x4
  int v36; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4B172E4 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__UISprite__Clear__, grandQuestRoot);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__UISprite__set_Item__, v5);
    sub_1BCAFF8(&int_TypeInfo, v6);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v7);
    sub_1BCAFF8(&StringLiteral_20127/*"img_bg_classcircle_center"*/, v8);
    sub_1BCAFF8(&StringLiteral_20137/*"img_bg_grand_classicon_{0}"*/, v9);
    sub_1BCAFF8(&StringLiteral_20128/*"img_bg_classcircle_outring"*/, v10);
    sub_1BCAFF8(&StringLiteral_15973/*"_"*/, v11);
    byte_4B172E4 = 1;
  }
  if ( !this->fields.initialized )
  {
    *(_QWORD *)&this->fields.currentWarId = 0xFFFFFFFFLL;
    this->fields.blankEarthSpotEntity = 0LL;
    sub_1BCAF9C(&this->fields.blankEarthSpotEntity);
    p_classServantEffect = &this->fields.classServantEffect;
    classServantEffect = (UnityEngine_Object_o *)this->fields.classServantEffect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(classServantEffect, 0LL, 0LL) )
    {
      v15 = (UnityEngine_Object_o *)*p_classServantEffect;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70136076(v15, 0LL);
      *p_classServantEffect = 0LL;
      sub_1BCAF9C(&this->fields.classServantEffect);
    }
    dicClassIcon = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.dicClassIcon;
    if ( !dicClassIcon )
      goto LABEL_24;
    System_Collections_Generic_Dictionary_int__object___Clear(
      dicClassIcon,
      (const MethodInfo_332146C *)Method_System_Collections_Generic_Dictionary_int__UISprite__Clear__);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !byte_4B16191 )
    {
      sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, v17);
      byte_4B16191 = 1;
    }
    GameObjectExtensions__SetLocalPosition(gameObject, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
    this->fields.rootComponent = grandQuestRoot;
    sub_1BCAF9C(&this->fields.rootComponent);
    GrandQuestClassBoardController__SetSprite(
      this,
      this->fields.classBoard,
      (System_String_o *)StringLiteral_20128/*"img_bg_classcircle_outring"*/,
      1,
      v19);
    GrandQuestClassBoardController__SetSprite(
      this,
      this->fields.classCircle,
      (System_String_o *)StringLiteral_20127/*"img_bg_classcircle_center"*/,
      1,
      v20);
    classIcons = this->fields.classIcons;
    if ( !classIcons )
      goto LABEL_24;
    max_length = classIcons->max_length;
    if ( max_length >= 1 )
    {
      v24 = 0;
      while ( 1 )
      {
        if ( v24 >= max_length )
          sub_1BCB25C(dicClassIcon, v14, v21);
        v25 = &classIcons->obj.klass + (int)v24;
        v26 = (UnityEngine_Object_o *)v25[4];
        if ( !v26 )
          break;
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v25[4], 0LL);
        dicClassIcon = (System_Collections_Generic_Dictionary_int__object__o *)UnityEngine_Object__get_name(v26, 0LL);
        if ( !dicClassIcon )
          break;
        dicClassIcon = (System_Collections_Generic_Dictionary_int__object__o *)System_String__LastIndexOf_62510564(
                                                                                 (System_String_o *)dicClassIcon,
                                                                                 (System_String_o *)StringLiteral_15973/*"_"*/,
                                                                                 0LL);
        if ( !name )
          break;
        v28 = System_String__Substring(name, (int)dicClassIcon + 1, 0LL);
        dicClassIcon = (System_Collections_Generic_Dictionary_int__object__o *)System_Int32__Parse(v28, 0LL);
        if ( !this->fields.dicClassIcon )
          break;
        v29 = (int)dicClassIcon;
        System_Collections_Generic_Dictionary_int__object___set_Item(
          (System_Collections_Generic_Dictionary_int__object__o *)this->fields.dicClassIcon,
          (int32_t)dicClassIcon,
          (Il2CppObject *)v26,
          (const MethodInfo_33212D0 *)Method_System_Collections_Generic_Dictionary_int__UISprite__set_Item__);
        v36 = v29;
        v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v36, v30, v31, v32);
        v34 = System_String__Format((System_String_o *)StringLiteral_20137/*"img_bg_grand_classicon_{0}"*/, v33, 0LL);
        GrandQuestClassBoardController__SetSprite(this, (UISprite_o *)v26, v34, 0, v35);
        max_length = classIcons->max_length;
        if ( (int)++v24 >= max_length )
          goto LABEL_22;
      }
LABEL_24:
      sub_1BCB254(dicClassIcon, v14);
    }
LABEL_22:
    this->fields.initialized = 1;
  }
}


void __fastcall GrandQuestClassBoardController__Quit(GrandQuestClassBoardController_o *this, const MethodInfo *method)
{
  struct UnityEngine_GameObject_o **p_classServantEffect; // x20
  UnityEngine_Object_o *classServantEffect; // x21
  UnityEngine_Object_o *v5; // x21

  if ( (byte_4B172F1 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B172F1 = 1;
  }
  *(_QWORD *)&this->fields.currentWarId = 0xFFFFFFFFLL;
  this->fields.blankEarthSpotEntity = 0LL;
  sub_1BCAF9C(&this->fields.blankEarthSpotEntity);
  p_classServantEffect = &this->fields.classServantEffect;
  classServantEffect = (UnityEngine_Object_o *)this->fields.classServantEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(classServantEffect, 0LL, 0LL) )
  {
    v5 = (UnityEngine_Object_o *)*p_classServantEffect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70136076(v5, 0LL);
    *p_classServantEffect = 0LL;
    sub_1BCAF9C(&this->fields.classServantEffect);
  }
  this->fields.initialized = 0;
}


void __fastcall GrandQuestClassBoardController__RefreshClassBoardRootActive(
        GrandQuestClassBoardController_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *classBoardRoot; // x0

  classBoardRoot = (UnityEngine_Component_o *)this->fields.classBoardRoot;
  if ( !classBoardRoot
    || (classBoardRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(classBoardRoot, 0LL)) == 0LL )
  {
    sub_1BCB254(classBoardRoot, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)classBoardRoot, this->fields.currentViewType == 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GrandQuestClassBoardController__Resume(
        GrandQuestClassBoardController_o *this,
        int32_t warId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  System_Action_o *v12; // x21
  const MethodInfo *v13; // x6

  if ( (byte_4B172E6 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, *(_QWORD *)&warId);
    sub_1BCAFF8(&Method_GrandQuestClassBoardController___c__DisplayClass26_0__Resume_b__0__, v7);
    sub_1BCAFF8(&GrandQuestClassBoardController___c__DisplayClass26_0_TypeInfo, v8);
    byte_4B172E6 = 1;
  }
  v9 = sub_1BCB244(GrandQuestClassBoardController___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    sub_1BCB254(v10, v11);
  *(_QWORD *)(v9 + 16) = this;
  sub_1BCAF9C(v9 + 16);
  *(_QWORD *)(v9 + 24) = callback;
  sub_1BCAF9C(v9 + 24);
  if ( this->fields.currentWarId == warId )
  {
    ActionExtensions__Call(*(System_Action_o **)(v9 + 24), 0LL);
  }
  else
  {
    v12 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(
      v12,
      (Il2CppObject *)v9,
      Method_GrandQuestClassBoardController___c__DisplayClass26_0__Resume_b__0__,
      0LL);
    GrandQuestClassBoardController__SetClass(this, 0, 1, 1, warId, v12, v13);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GrandQuestClassBoardController__SetClass(
        GrandQuestClassBoardController_o *this,
        bool isStartUp,
        bool immediately,
        bool isSkipEffectAnim,
        int32_t warId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  Il2CppObject *Master_object; // x0
  __int64 v16; // x1
  BlankEarthSpotEntity_array *v17; // x24
  __int64 v18; // x2
  bool v19; // w23
  const MethodInfo *v20; // x4
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x2
  float v23; // s0
  _BOOL4 v24; // w22
  System_Collections_IEnumerator_o *v25; // x0
  const MethodInfo *v26; // x3
  const MethodInfo *v27; // x1
  const MethodInfo *v28; // x3

  if ( (byte_4B172EA & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, isStartUp);
    sub_1BCAFF8(&DataManager_TypeInfo, v13);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Any_BlankEarthSpotEntity___, v14);
    byte_4B172EA = 1;
  }
  if ( this->fields.currentWarId == warId )
  {
    ActionExtensions__Call(callback, 0LL);
    return;
  }
  this->fields.currentWarId = warId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !Master_object )
    goto LABEL_17;
  v17 = BlankEarthSpotMaster__GetByWarId((BlankEarthSpotMaster_o *)Master_object, this->fields.currentWarId, 0LL);
  Master_object = (Il2CppObject *)System_Linq_Enumerable__Any_object_(
                                    (System_Collections_Generic_IEnumerable_TSource__o *)v17,
                                    (const MethodInfo_302661C *)Method_System_Linq_Enumerable_Any_BlankEarthSpotEntity___);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    return;
  if ( !v17 )
LABEL_17:
    sub_1BCB254(Master_object, v16);
  if ( !v17->max_length )
    sub_1BCB25C(Master_object, v16, v18);
  this->fields.blankEarthSpotEntity = v17->m_Items[0];
  sub_1BCAF9C(&this->fields.blankEarthSpotEntity);
  v19 = immediately;
  GrandQuestClassBoardController__SetEffectRootPosition(this, v19, 1, 0LL, v20);
  GrandQuestClassBoardController__SetClassMotif(this, v19, v21);
  v23 = 0.3;
  v24 = isStartUp;
  if ( !v24 )
    v23 = 0.0;
  v25 = GrandQuestClassBoardController__SetClassServantEffect(this, v23, isSkipEffectAnim, v22);
  UnityEngine_MonoBehaviour__StartCoroutine_70121648((UnityEngine_MonoBehaviour_o *)this, v25, 0LL);
  GrandQuestClassBoardController__ExecCircleRotate(this, 1, callback, v26);
  if ( !v24 )
    GrandQuestClassBoardController__FadeIn(this, 0, v19, v28);
  GrandQuestClassBoardController__RefreshClassBoardRootActive(this, v27);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GrandQuestClassBoardController__SetClassMotif(
        GrandQuestClassBoardController_o *this,
        bool immediately,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  Il2CppObject *v11; // x19
  BlankEarthSpotEntity_o *blankEarthSpotEntity; // x0
  __int64 v13; // x1
  int32_t GrandClassIconId; // w0
  UISprite_o *classMotif; // x22
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  Il2CppObject *v19; // x0
  System_String_o *v20; // x0
  const MethodInfo *v21; // x4
  UnityEngine_GameObject_o *gameObject; // x0
  EasingObject_o *klass; // x20
  System_Action_o *v24; // x21
  System_Action_o *v25; // x22
  int32_t v26; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B172ED & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, immediately);
    sub_1BCAFF8(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v5);
    sub_1BCAFF8(&int_TypeInfo, v6);
    sub_1BCAFF8(&Method_GrandQuestClassBoardController___c__DisplayClass36_0__SetClassMotif_b__0__, v7);
    sub_1BCAFF8(&Method_GrandQuestClassBoardController___c__DisplayClass36_0__SetClassMotif_b__1__, v8);
    sub_1BCAFF8(&GrandQuestClassBoardController___c__DisplayClass36_0_TypeInfo, v9);
    sub_1BCAFF8(&StringLiteral_20138/*"img_bg_grand_motif_{0}"*/, v10);
    byte_4B172ED = 1;
  }
  v11 = (Il2CppObject *)sub_1BCB244(GrandQuestClassBoardController___c__DisplayClass36_0_TypeInfo);
  System_Object___ctor(v11, 0LL);
  if ( !v11 )
    goto LABEL_10;
  v11[1].monitor = this;
  sub_1BCAF9C(&v11[1].monitor);
  blankEarthSpotEntity = this->fields.blankEarthSpotEntity;
  if ( !blankEarthSpotEntity )
    goto LABEL_10;
  GrandClassIconId = BlankEarthSpotEntity__GetGrandClassIconId(blankEarthSpotEntity, 1, 0LL);
  classMotif = this->fields.classMotif;
  v26 = GrandClassIconId;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26, v16, v17, v18);
  v20 = System_String__Format((System_String_o *)StringLiteral_20138/*"img_bg_grand_motif_{0}"*/, v19, 0LL);
  GrandQuestClassBoardController__SetSprite(this, classMotif, v20, 1, v21);
  blankEarthSpotEntity = (BlankEarthSpotEntity_o *)this->fields.classMotif;
  if ( !blankEarthSpotEntity )
    goto LABEL_10;
  if ( immediately )
  {
    (*(void (__fastcall **)(BlankEarthSpotEntity_o *, void *, float))&blankEarthSpotEntity->klass[1]._1.byval_arg.bits)(
      blankEarthSpotEntity,
      blankEarthSpotEntity->klass[1]._1.this_arg.data,
      1.0);
    return;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)blankEarthSpotEntity, 0LL);
  v11[1].klass = (Il2CppClass *)GameObjectExtensions__SafeGetComponent_object_(
                                  gameObject,
                                  (const MethodInfo_30701F8 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  sub_1BCAF9C(&v11[1]);
  v11[2].klass = (Il2CppClass *)0x3F80000000000000LL;
  klass = (EasingObject_o *)v11[1].klass;
  v24 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v24, v11, Method_GrandQuestClassBoardController___c__DisplayClass36_0__SetClassMotif_b__0__, 0LL);
  v25 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v25, v11, Method_GrandQuestClassBoardController___c__DisplayClass36_0__SetClassMotif_b__1__, 0LL);
  if ( !klass )
LABEL_10:
    sub_1BCB254(blankEarthSpotEntity, v13);
  EasingObject__Play_48249532(klass, 0.0, 1.0, 1.2, v24, v25, 0.0, 11, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall GrandQuestClassBoardController__SetClassServantEffect(
        GrandQuestClassBoardController_o *this,
        float delayTime,
        bool isSkipEffectAnim,
        const MethodInfo *method)
{
  bool v7; // w21
  __int64 v8; // x20

  if ( (byte_4B172EE & 1) == 0 )
  {
    sub_1BCAFF8(&GrandQuestClassBoardController__SetClassServantEffect_d__37_TypeInfo, isSkipEffectAnim);
    byte_4B172EE = 1;
  }
  v7 = isSkipEffectAnim;
  v8 = sub_1BCB244(GrandQuestClassBoardController__SetClassServantEffect_d__37_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  *(_DWORD *)(v8 + 16) = 0;
  *(_QWORD *)(v8 + 32) = this;
  sub_1BCAF9C(v8 + 32);
  *(float *)(v8 + 44) = delayTime;
  *(_BYTE *)(v8 + 40) = v7;
  return (System_Collections_IEnumerator_o *)v8;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GrandQuestClassBoardController__SetDispEffect(
        GrandQuestClassBoardController_o *this,
        bool disp,
        const MethodInfo *method)
{
  UnityEngine_Component_o *effectRoot; // x0

  effectRoot = (UnityEngine_Component_o *)this->fields.effectRoot;
  if ( !effectRoot
    || (effectRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(effectRoot, 0LL)) == 0LL )
  {
    sub_1BCB254(effectRoot, disp);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)effectRoot, disp, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GrandQuestClassBoardController__SetEffectRootPosition(
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

  if ( (byte_4B172E8 & 1) == 0 )
  {
    sub_1BCAFF8(&GrandQuestClassSelectController_TypeInfo, immediately);
    byte_4B172E8 = 1;
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
    v13 = 4LL;
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
    v13 = 8LL;
    if ( !immediately )
      goto LABEL_7;
  }
  v15.fields.x = x;
  v15.fields.y = y;
  v15.fields.z = z;
  TransformHelper__SetLocalPosition(this->fields.effectRoot, v15, 0LL);
  ActionExtensions__Call(callback, 0LL);
}


void __fastcall GrandQuestClassBoardController__SetSprite(
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
  this = (GrandQuestClassBoardController_o *)AtlasManagerUnit__SetUI(
                                               (AtlasManagerUnit_o *)this,
                                               sprite,
                                               spriteName,
                                               0LL);
  if ( makePixelPerfect )
  {
    if ( sprite )
    {
      ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))sprite->klass->vtable._33_MakePixelPerfect.method)(
        sprite,
        sprite->klass->vtable._34_get_minWidth.methodPtr);
      return;
    }
LABEL_8:
    sub_1BCB254(this, sprite);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GrandQuestClassBoardController__StartUp(
        GrandQuestClassBoardController_o *this,
        int32_t warId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  System_Action_o *v12; // x21
  const MethodInfo *v13; // x6

  if ( (byte_4B172E5 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, *(_QWORD *)&warId);
    sub_1BCAFF8(&Method_GrandQuestClassBoardController___c__DisplayClass25_0__StartUp_b__0__, v7);
    sub_1BCAFF8(&GrandQuestClassBoardController___c__DisplayClass25_0_TypeInfo, v8);
    byte_4B172E5 = 1;
  }
  v9 = sub_1BCB244(GrandQuestClassBoardController___c__DisplayClass25_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    sub_1BCB254(v10, v11);
  *(_QWORD *)(v9 + 16) = this;
  sub_1BCAF9C(v9 + 16);
  *(_QWORD *)(v9 + 24) = callback;
  sub_1BCAF9C(v9 + 24);
  if ( this->fields.currentWarId == warId )
  {
    ActionExtensions__Call(*(System_Action_o **)(v9 + 24), 0LL);
  }
  else
  {
    v12 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(
      v12,
      (Il2CppObject *)v9,
      Method_GrandQuestClassBoardController___c__DisplayClass25_0__StartUp_b__0__,
      0LL);
    GrandQuestClassBoardController__SetClass(this, 1, 1, 0, warId, v12, v13);
  }
}


void __fastcall GrandQuestClassBoardController__SetClassServantEffect_d__37___ctor(
        GrandQuestClassBoardController__SetClassServantEffect_d__37_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall GrandQuestClassBoardController__SetClassServantEffect_d__37__MoveNext(
        GrandQuestClassBoardController__SetClassServantEffect_d__37_o *this,
        const MethodInfo *method)
{
  GrandQuestClassBoardController__SetClassServantEffect_d__37_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
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
  int32_t _1__state; // w8
  struct GrandQuestClassBoardController_o *_4__this; // x20
  UnityEngine_Object_o **p_classServantEffect; // x21
  UnityEngine_Object_o *classServantEffect; // x22
  UnityEngine_Object_o *v24; // x22
  float delayTime; // s8
  UnityEngine_WaitForSeconds_o *v26; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  struct GrandQuestRootComponent_o *rootComponent; // x8
  int v30; // w21
  UnityEngine_GameObject_o *ClassServantNamePrefab; // x0
  UnityEngine_Transform_o *effectRoot; // x22
  Il2CppObject *v33; // x23
  UnityEngine_GameObject_o **v34; // x22
  Il2CppObject *Component_object; // x0
  const MethodInfo *v36; // x4
  Il2CppObject *v37; // x0
  const MethodInfo *v38; // x4
  Il2CppObject *v39; // x23
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  Il2CppObject *v43; // x0
  System_String_o *v44; // x0
  const MethodInfo *v45; // x4
  Il2CppObject *v46; // x23
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  Il2CppObject *v50; // x0
  System_String_o *v51; // x0
  const MethodInfo *v52; // x4
  __int64 v53; // x1
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v56; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v59; // x8
  __int64 v60; // x9
  System_Collections_IEnumerator_c **v61; // x10
  __int64 v62; // x0
  UnityEngine_AnimationState_o *v63; // x0
  __int64 v64; // x1
  __int64 v65; // x0
  __int64 v66; // x8
  __int64 v67; // x19
  __int64 v68; // x9
  int *v69; // x10
  __int64 v70; // x0
  int v71; // [xsp+8h] [xbp-58h] BYREF
  int v72; // [xsp+Ch] [xbp-54h] BYREF

  v2 = this;
  if ( (byte_4B172F7 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_AnimationState_TypeInfo, method);
    sub_1BCAFF8(&Method_UnityEngine_Component_GetComponent_UISprite___, v3);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_Animation___, v4);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, v5);
    sub_1BCAFF8(&System_IDisposable_TypeInfo, v6);
    sub_1BCAFF8(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1BCAFF8(&int_TypeInfo, v8);
    sub_1BCAFF8(&Method_UnityEngine_Object_Instantiate_GameObject____77001424, v9);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v10);
    sub_1BCAFF8(&UnityEngine_WaitForSeconds_TypeInfo, v11);
    sub_1BCAFF8(&StringLiteral_22931/*"root/base"*/, v12);
    sub_1BCAFF8(&StringLiteral_20137/*"img_bg_grand_classicon_{0}"*/, v13);
    sub_1BCAFF8(&StringLiteral_22930/*"root/2_enemyname"*/, v14);
    sub_1BCAFF8(&StringLiteral_20409/*"img_text_servantname_{0}"*/, v15);
    sub_1BCAFF8(&StringLiteral_22928/*"root/0_iconbase"*/, v16);
    sub_1BCAFF8(&StringLiteral_20410/*"img_textbg_grandname"*/, v17);
    sub_1BCAFF8(&StringLiteral_20136/*"img_bg_grand_classicon_base"*/, v18);
    this = (GrandQuestClassBoardController__SetClassServantEffect_d__37_o *)sub_1BCAFF8(&StringLiteral_22929/*"root/1_classicon"*/, v19);
    byte_4B172F7 = 1;
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
    if ( UnityEngine_Object__op_Inequality(classServantEffect, 0LL, 0LL) )
    {
      v24 = *p_classServantEffect;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70136076(v24, 0LL);
      *p_classServantEffect = 0LL;
      sub_1BCAF9C(&_4__this->fields.classServantEffect);
    }
    if ( !v2->fields.isSkipEffectAnim )
    {
      delayTime = v2->fields.delayTime;
      if ( delayTime > 0.0 )
      {
        v26 = (UnityEngine_WaitForSeconds_o *)sub_1BCB244(UnityEngine_WaitForSeconds_TypeInfo);
        UnityEngine_WaitForSeconds___ctor(v26, delayTime, 0LL);
        v2->fields.__2__current = (Il2CppObject *)v26;
        p__2__current = &v2->fields.__2__current;
        sub_1BCAF9C(p__2__current);
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
                                                                            0LL);
  rootComponent = _4__this->fields.rootComponent;
  if ( !rootComponent )
    goto LABEL_58;
  v30 = (int)this;
  this = (GrandQuestClassBoardController__SetClassServantEffect_d__37_o *)rootComponent->fields.resourceCatalog;
  if ( !this )
    goto LABEL_58;
  ClassServantNamePrefab = GrandQuestResourceCatalogAssetBundle__GetClassServantNamePrefab(
                             (GrandQuestResourceCatalogAssetBundle_o *)this,
                             method);
  effectRoot = _4__this->fields.effectRoot;
  v33 = (Il2CppObject *)ClassServantNamePrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  _4__this->fields.classServantEffect = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object__51002592(
                                                                             v33,
                                                                             effectRoot,
                                                                             (const MethodInfo_30A3CE0 *)Method_UnityEngine_Object_Instantiate_GameObject____77001424);
  v34 = &_4__this->fields.classServantEffect;
  sub_1BCAF9C(&_4__this->fields.classServantEffect);
  this = (GrandQuestClassBoardController__SetClassServantEffect_d__37_o *)_4__this->fields.classServantEffect;
  if ( !this )
    goto LABEL_58;
  this = (GrandQuestClassBoardController__SetClassServantEffect_d__37_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                            (UnityEngine_GameObject_o *)this,
                                                                            (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
  if ( !this )
    goto LABEL_58;
  BYTE5(this[2].monitor) = 1;
  this = (GrandQuestClassBoardController__SetClassServantEffect_d__37_o *)GameObjectExtensions__Find(
                                                                            *v34,
                                                                            (System_String_o *)StringLiteral_22931/*"root/base"*/,
                                                                            0LL);
  if ( !this )
    goto LABEL_58;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  GrandQuestClassBoardController__SetSprite(
    _4__this,
    (UISprite_o *)Component_object,
    (System_String_o *)StringLiteral_20410/*"img_textbg_grandname"*/,
    1,
    v36);
  this = (GrandQuestClassBoardController__SetClassServantEffect_d__37_o *)GameObjectExtensions__Find(
                                                                            _4__this->fields.classServantEffect,
                                                                            (System_String_o *)StringLiteral_22928/*"root/0_iconbase"*/,
                                                                            0LL);
  if ( !this )
    goto LABEL_58;
  v37 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  GrandQuestClassBoardController__SetSprite(_4__this, (UISprite_o *)v37, (System_String_o *)StringLiteral_20136/*"img_bg_grand_classicon_base"*/, 1, v38);
  this = (GrandQuestClassBoardController__SetClassServantEffect_d__37_o *)GameObjectExtensions__Find(
                                                                            _4__this->fields.classServantEffect,
                                                                            (System_String_o *)StringLiteral_22929/*"root/1_classicon"*/,
                                                                            0LL);
  if ( !this )
    goto LABEL_58;
  v39 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  v72 = v30;
  v43 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v72, v40, v41, v42);
  v44 = System_String__Format((System_String_o *)StringLiteral_20137/*"img_bg_grand_classicon_{0}"*/, v43, 0LL);
  GrandQuestClassBoardController__SetSprite(_4__this, (UISprite_o *)v39, v44, 1, v45);
  this = (GrandQuestClassBoardController__SetClassServantEffect_d__37_o *)GameObjectExtensions__Find(
                                                                            _4__this->fields.classServantEffect,
                                                                            (System_String_o *)StringLiteral_22930/*"root/2_enemyname"*/,
                                                                            0LL);
  if ( !this )
    goto LABEL_58;
  v46 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  v71 = v30;
  v50 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v71, v47, v48, v49);
  v51 = System_String__Format((System_String_o *)StringLiteral_20409/*"img_text_servantname_{0}"*/, v50, 0LL);
  GrandQuestClassBoardController__SetSprite(_4__this, (UISprite_o *)v46, v51, 1, v52);
  if ( v2->fields.isSkipEffectAnim )
  {
    this = (GrandQuestClassBoardController__SetClassServantEffect_d__37_o *)*v34;
    if ( *v34 )
    {
      this = (GrandQuestClassBoardController__SetClassServantEffect_d__37_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                                (UnityEngine_GameObject_o *)this,
                                                                                (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
      if ( this )
      {
        Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)this, 0LL);
        if ( !Enumerator )
          sub_1BCB254(0LL, v53);
        while ( 1 )
        {
          klass = Enumerator->klass;
          v56 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
          {
            p_offset = &klass->_1.interfaceOffsets->offset;
            while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v56;
              p_offset += 4;
              if ( !v56 )
                goto LABEL_35;
            }
            p_method = (__int64)&klass->vtable[*p_offset].method;
          }
          else
          {
LABEL_35:
            p_method = sub_1C1B560(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
                  Enumerator,
                  *(_QWORD *)(p_method + 8)) & 1) == 0 )
            break;
          v59 = Enumerator->klass;
          v60 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
          {
            v61 = (System_Collections_IEnumerator_c **)&v59->_1.interfaceOffsets->offset;
            while ( *(v61 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v60;
              v61 += 2;
              if ( !v60 )
                goto LABEL_42;
            }
            v62 = (__int64)&v59->vtable[*(_DWORD *)v61 + 1].method;
          }
          else
          {
LABEL_42:
            v62 = sub_1C1B560(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
          }
          v63 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v62)(
                                                  Enumerator,
                                                  *(_QWORD *)(v62 + 8));
          if ( !v63 )
            goto LABEL_57;
          if ( v63->klass != UnityEngine_AnimationState_TypeInfo )
          {
            v63 = (UnityEngine_AnimationState_o *)sub_1BCB514(v63);
LABEL_57:
            sub_1BCB254(v63, v64);
          }
          UnityEngine_AnimationState__set_normalizedTime(v63, 1.0, 0LL);
        }
        v65 = sub_1BCB134(Enumerator, System_IDisposable_TypeInfo);
        if ( v65 )
        {
          v66 = *(_QWORD *)v65;
          v67 = v65;
          v68 = *(unsigned __int16 *)(*(_QWORD *)v65 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v65 + 302LL) )
          {
            v69 = (int *)(*(_QWORD *)(v66 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v69 - 1) != System_IDisposable_TypeInfo )
            {
              --v68;
              v69 += 4;
              if ( !v68 )
                goto LABEL_52;
            }
            v70 = v66 + 16LL * *v69 + 312;
          }
          else
          {
LABEL_52:
            v70 = sub_1C1B560(v65, System_IDisposable_TypeInfo, 0LL);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v70)(v67, *(_QWORD *)(v70 + 8));
        }
        return 0;
      }
    }
LABEL_58:
    sub_1BCB254(this, method);
  }
  return 0;
}


Il2CppObject *__fastcall GrandQuestClassBoardController__SetClassServantEffect_d__37__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        GrandQuestClassBoardController__SetClassServantEffect_d__37_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn GrandQuestClassBoardController__SetClassServantEffect_d__37__System_Collections_IEnumerator_Reset(
        GrandQuestClassBoardController__SetClassServantEffect_d__37_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BCB00C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BCB244(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BCB00C(&Method_GrandQuestClassBoardController__SetClassServantEffect_d__37_System_Collections_IEnumerator_Reset__);
  sub_1BCB120(v3, v4);
}


Il2CppObject *__fastcall GrandQuestClassBoardController__SetClassServantEffect_d__37__System_Collections_IEnumerator_get_Current(
        GrandQuestClassBoardController__SetClassServantEffect_d__37_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall GrandQuestClassBoardController__SetClassServantEffect_d__37__System_IDisposable_Dispose(
        GrandQuestClassBoardController__SetClassServantEffect_d__37_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall GrandQuestClassBoardController___c__DisplayClass25_0___ctor(
        GrandQuestClassBoardController___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall GrandQuestClassBoardController___c__DisplayClass25_0___StartUp_b__0(
        GrandQuestClassBoardController___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  GrandQuestClassBoardController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCB254(0LL, method);
  GrandQuestClassBoardController__FadeIn(_4__this, 1, 0, v2);
  ActionExtensions__Call(this->fields.callback, 0LL);
}


void __fastcall GrandQuestClassBoardController___c__DisplayClass26_0___ctor(
        GrandQuestClassBoardController___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall GrandQuestClassBoardController___c__DisplayClass26_0___Resume_b__0(
        GrandQuestClassBoardController___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  Il2CppObject *v3; // x19
  __int64 v4; // x1
  System_Action_o *klass; // x21
  GrandQuestClassBoardController_o *v6; // x20

  v3 = (Il2CppObject *)this;
  if ( (byte_4B172F3 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    this = (GrandQuestClassBoardController___c__DisplayClass26_0_o *)sub_1BCAFF8(
                                                                       &Method_GrandQuestClassBoardController___c__DisplayClass26_0__Resume_b__1__,
                                                                       v4);
    byte_4B172F3 = 1;
  }
  klass = (System_Action_o *)v3[2].klass;
  v6 = (GrandQuestClassBoardController_o *)v3[1].klass;
  if ( !klass )
  {
    klass = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(klass, v3, Method_GrandQuestClassBoardController___c__DisplayClass26_0__Resume_b__1__, 0LL);
    v3[2].klass = (Il2CppClass *)klass;
    this = (GrandQuestClassBoardController___c__DisplayClass26_0_o *)sub_1BCAF9C(&v3[2]);
  }
  if ( !v6 )
    sub_1BCB254(this, method);
  GrandQuestClassBoardController__SetEffectRootPosition(v6, 1, 2, klass, v2);
}


void __fastcall GrandQuestClassBoardController___c__DisplayClass26_0___Resume_b__1(
        GrandQuestClassBoardController___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  GrandQuestClassBoardController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCB254(0LL, method);
  GrandQuestClassBoardController__FadeIn(_4__this, 0, 1, v2);
  ActionExtensions__Call(this->fields.callback, 0LL);
}


void __fastcall GrandQuestClassBoardController___c__DisplayClass28_0___ctor(
        GrandQuestClassBoardController___c__DisplayClass28_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall GrandQuestClassBoardController___c__DisplayClass28_0___GetTaskOfChangeViewType_b__0(
        GrandQuestClassBoardController___c__DisplayClass28_0_o *this,
        const MethodInfo *method)
{
  return this->fields.isMoving;
}


void __fastcall GrandQuestClassBoardController___c__DisplayClass28_0___GetTaskOfChangeViewType_b__1(
        GrandQuestClassBoardController___c__DisplayClass28_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  GrandQuestClassBoardController___c__DisplayClass28_0_o *v3; // x19
  __int64 v4; // x1
  System_Action_o *_9__2; // x22
  GrandQuestClassBoardController_o *_4__this; // x20
  int32_t viewType; // w21

  v3 = this;
  if ( (byte_4B172F4 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    this = (GrandQuestClassBoardController___c__DisplayClass28_0_o *)sub_1BCAFF8(
                                                                       &Method_GrandQuestClassBoardController___c__DisplayClass28_0__GetTaskOfChangeViewType_b__2__,
                                                                       v4);
    byte_4B172F4 = 1;
  }
  _9__2 = v3->fields.__9__2;
  _4__this = v3->fields.__4__this;
  viewType = v3->fields.viewType;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v3,
      Method_GrandQuestClassBoardController___c__DisplayClass28_0__GetTaskOfChangeViewType_b__2__,
      0LL);
    v3->fields.__9__2 = _9__2;
    this = (GrandQuestClassBoardController___c__DisplayClass28_0_o *)sub_1BCAF9C(&v3->fields.__9__2);
  }
  if ( !_4__this )
    sub_1BCB254(this, method);
  GrandQuestClassBoardController__ChangeViewType(_4__this, viewType, _9__2, v2);
}


void __fastcall GrandQuestClassBoardController___c__DisplayClass28_0___GetTaskOfChangeViewType_b__2(
        GrandQuestClassBoardController___c__DisplayClass28_0_o *this,
        const MethodInfo *method)
{
  this->fields.isMoving = 0;
}


void __fastcall GrandQuestClassBoardController___c__DisplayClass31_0___ctor(
        GrandQuestClassBoardController___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall GrandQuestClassBoardController___c__DisplayClass31_1___ctor(
        GrandQuestClassBoardController___c__DisplayClass31_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall GrandQuestClassBoardController___c__DisplayClass31_1___GetTaskOfChangeClass_b__0(
        GrandQuestClassBoardController___c__DisplayClass31_1_o *this,
        const MethodInfo *method)
{
  return this->fields.isMoving;
}


void __fastcall GrandQuestClassBoardController___c__DisplayClass31_1___GetTaskOfChangeClass_b__1(
        GrandQuestClassBoardController___c__DisplayClass31_1_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  Il2CppObject *v3; // x19
  __int64 v4; // x1
  void *monitor; // x8
  GrandQuestClassBoardController_o *v6; // x20
  System_Action_o *klass; // x21

  v3 = (Il2CppObject *)this;
  if ( (byte_4B172F5 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    this = (GrandQuestClassBoardController___c__DisplayClass31_1_o *)sub_1BCAFF8(
                                                                       &Method_GrandQuestClassBoardController___c__DisplayClass31_1__GetTaskOfChangeClass_b__2__,
                                                                       v4);
    byte_4B172F5 = 1;
  }
  monitor = v3[1].monitor;
  if ( !monitor )
    goto LABEL_8;
  v6 = (GrandQuestClassBoardController_o *)*((_QWORD *)monitor + 2);
  klass = (System_Action_o *)v3[2].klass;
  if ( !klass )
  {
    klass = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(
      klass,
      v3,
      Method_GrandQuestClassBoardController___c__DisplayClass31_1__GetTaskOfChangeClass_b__2__,
      0LL);
    v3[2].klass = (Il2CppClass *)klass;
    this = (GrandQuestClassBoardController___c__DisplayClass31_1_o *)sub_1BCAF9C(&v3[2]);
  }
  if ( !v6 )
LABEL_8:
    sub_1BCB254(this, method);
  GrandQuestClassBoardController__ChangeViewType(v6, 1, klass, v2);
}


void __fastcall GrandQuestClassBoardController___c__DisplayClass31_1___GetTaskOfChangeClass_b__2(
        GrandQuestClassBoardController___c__DisplayClass31_1_o *this,
        const MethodInfo *method)
{
  this->fields.isMoving = 0;
}


void __fastcall GrandQuestClassBoardController___c__DisplayClass31_2___ctor(
        GrandQuestClassBoardController___c__DisplayClass31_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall GrandQuestClassBoardController___c__DisplayClass31_2___GetTaskOfChangeClass_b__3(
        GrandQuestClassBoardController___c__DisplayClass31_2_o *this,
        const MethodInfo *method)
{
  return this->fields.isClassChange;
}


void __fastcall GrandQuestClassBoardController___c__DisplayClass31_2___GetTaskOfChangeClass_b__4(
        GrandQuestClassBoardController___c__DisplayClass31_2_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  Il2CppObject *v3; // x19
  __int64 v4; // x1
  void *monitor; // x8
  GrandQuestClassBoardController_o *v6; // x20
  int32_t v7; // w21
  System_Action_o *klass; // x22

  v3 = (Il2CppObject *)this;
  if ( (byte_4B172F6 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    this = (GrandQuestClassBoardController___c__DisplayClass31_2_o *)sub_1BCAFF8(
                                                                       &Method_GrandQuestClassBoardController___c__DisplayClass31_2__GetTaskOfChangeClass_b__5__,
                                                                       v4);
    byte_4B172F6 = 1;
  }
  monitor = v3[1].monitor;
  if ( !monitor )
    goto LABEL_8;
  v6 = (GrandQuestClassBoardController_o *)*((_QWORD *)monitor + 2);
  v7 = *((_DWORD *)monitor + 6);
  klass = (System_Action_o *)v3[2].klass;
  if ( !klass )
  {
    klass = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(
      klass,
      v3,
      Method_GrandQuestClassBoardController___c__DisplayClass31_2__GetTaskOfChangeClass_b__5__,
      0LL);
    v3[2].klass = (Il2CppClass *)klass;
    this = (GrandQuestClassBoardController___c__DisplayClass31_2_o *)sub_1BCAF9C(&v3[2]);
  }
  if ( !v6 )
LABEL_8:
    sub_1BCB254(this, method);
  GrandQuestClassBoardController__ChangeClass(v6, v7, klass, v2);
}


void __fastcall GrandQuestClassBoardController___c__DisplayClass31_2___GetTaskOfChangeClass_b__5(
        GrandQuestClassBoardController___c__DisplayClass31_2_o *this,
        const MethodInfo *method)
{
  this->fields.isClassChange = 0;
}


void __fastcall GrandQuestClassBoardController___c__DisplayClass34_0___ctor(
        GrandQuestClassBoardController___c__DisplayClass34_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GrandQuestClassBoardController___c__DisplayClass34_0___ExecCircleRotate_b__0(
        GrandQuestClassBoardController___c__DisplayClass34_0_o *this,
        const MethodInfo *method)
{
  struct EasingObject_o *easing; // x9
  struct GrandQuestClassBoardController_o *_4__this; // x8
  UnityEngine_Component_o *classBoard; // x8
  float v5; // s8
  UnityEngine_Transform_o *transform; // x19
  int v7; // s0
  UnityEngine_Vector3_o v11; // 0:s0.4,4:s1.4,8:s2.4

  easing = this->fields.easing;
  if ( !easing )
    goto LABEL_6;
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (classBoard = (UnityEngine_Component_o *)_4__this->fields.classBoard) == 0LL
    || (v5 = this->fields.currentRotateZ + (float)(easing->fields.mNow * this->fields.moveRotateZ),
        transform = UnityEngine_Component__get_transform(classBoard, 0LL),
        v11.fields.y = 0.0,
        v11.fields.z = v5 * 0.017453,
        v11.fields.x = 0.0,
        *(UnityEngine_Quaternion_o *)&v7 = UnityEngine_Quaternion__Internal_FromEulerRad(v11, 0LL),
        !transform) )
  {
LABEL_6:
    sub_1BCB254(this, method);
  }
  UnityEngine_Transform__set_localRotation(transform, *(UnityEngine_Quaternion_o *)&v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GrandQuestClassBoardController___c__DisplayClass34_0___ExecCircleRotate_b__1(
        GrandQuestClassBoardController___c__DisplayClass34_0_o *this,
        const MethodInfo *method)
{
  struct GrandQuestClassBoardController_o *_4__this; // x8
  GrandQuestClassBoardController___c__DisplayClass34_0_o *v3; // x19
  UnityEngine_Transform_o *transform; // x20
  int v5; // s0
  UnityEngine_Vector3_o v9; // 0:s0.4,4:s1.4,8:s2.4

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v3 = this, (this = (GrandQuestClassBoardController___c__DisplayClass34_0_o *)_4__this->fields.classBoard) == 0LL)
    || (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL),
        v9.fields.y = 0.0,
        v9.fields.z = (float)(v3->fields.currentRotateZ + v3->fields.moveRotateZ) * 0.017453,
        v9.fields.x = 0.0,
        *(UnityEngine_Quaternion_o *)&v5 = UnityEngine_Quaternion__Internal_FromEulerRad(v9, 0LL),
        !transform) )
  {
    sub_1BCB254(this, method);
  }
  UnityEngine_Transform__set_localRotation(transform, *(UnityEngine_Quaternion_o *)&v5, 0LL);
  ActionExtensions__Call(v3->fields.callback, 0LL);
}


void __fastcall GrandQuestClassBoardController___c__DisplayClass35_0___ctor(
        GrandQuestClassBoardController___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall GrandQuestClassBoardController___c__DisplayClass35_0___ExecChangeIconAlpha_b__0(
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
  if ( !easing
    || (v3 = this, (this = (GrandQuestClassBoardController___c__DisplayClass35_0_o *)this->fields.icon) == 0LL) )
  {
    sub_1BCB254(this, method);
  }
  mNow = easing->fields.mNow;
  v5 = fminf(mNow, 1.0);
  v6 = mNow < 0.0;
  v7 = 0.0;
  if ( !v6 )
    v7 = v5;
  ((void (__fastcall *)(GrandQuestClassBoardController___c__DisplayClass35_0_o *, Il2CppClass *, float))this->klass[1]._1.castClass)(
    this,
    this->klass[1]._1.declaringType,
    v3->fields.fromAlpha + (float)(v7 * (float)(v3->fields.toAlpha - v3->fields.fromAlpha)));
}


void __fastcall GrandQuestClassBoardController___c__DisplayClass35_0___ExecChangeIconAlpha_b__1(
        GrandQuestClassBoardController___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  struct UISprite_o *icon; // x0

  icon = this->fields.icon;
  if ( !icon )
    sub_1BCB254(0LL, method);
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer, float))icon->klass->vtable._8_set_alpha.method)(
    icon,
    icon->klass->vtable._9_CalculateFinalAlpha.methodPtr,
    this->fields.toAlpha);
}


void __fastcall GrandQuestClassBoardController___c__DisplayClass36_0___ctor(
        GrandQuestClassBoardController___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall GrandQuestClassBoardController___c__DisplayClass36_0___SetClassMotif_b__0(
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
    || (this = (GrandQuestClassBoardController___c__DisplayClass36_0_o *)_4__this->fields.classMotif) == 0LL )
  {
    sub_1BCB254(this, method);
  }
  mNow = easing->fields.mNow;
  v6 = fminf(mNow, 1.0);
  v7 = mNow < 0.0;
  v8 = 0.0;
  if ( !v7 )
    v8 = v6;
  ((void (__fastcall *)(GrandQuestClassBoardController___c__DisplayClass36_0_o *, Il2CppClass *, float))this->klass[1]._1.castClass)(
    this,
    this->klass[1]._1.declaringType,
    v4->fields.fromAlpha + (float)(v8 * (float)(v4->fields.toAlpha - v4->fields.fromAlpha)));
}


void __fastcall GrandQuestClassBoardController___c__DisplayClass36_0___SetClassMotif_b__1(
        GrandQuestClassBoardController___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  struct GrandQuestClassBoardController_o *_4__this; // x8
  struct UISprite_o *classMotif; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (classMotif = _4__this->fields.classMotif) == 0LL )
    sub_1BCB254(this, method);
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer, float))classMotif->klass->vtable._8_set_alpha.method)(
    classMotif,
    classMotif->klass->vtable._9_CalculateFinalAlpha.methodPtr,
    this->fields.toAlpha);
}


void __fastcall GrandQuestClassBoardController___c__DisplayClass38_0___ctor(
        GrandQuestClassBoardController___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GrandQuestClassBoardController___c__DisplayClass38_0___FadeIn_b__0(
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
        this = (GrandQuestClassBoardController___c__DisplayClass38_0_o *)((__int64 (__fastcall *)(GrandQuestClassBoardController___c__DisplayClass38_0_o *, Il2CppClass *, float))this->klass[1]._1.castClass)(
                                                                           this,
                                                                           this->klass[1]._1.declaringType,
                                                                           v4->fields.fromAlpha
                                                                         + (float)(v7
                                                                                 * (float)(v4->fields.toAlpha
                                                                                         - v4->fields.fromAlpha))),
        (v8 = v4->fields.__4__this) == 0LL)
    || (this = (GrandQuestClassBoardController___c__DisplayClass38_0_o *)v8->fields.classBoardRoot) == 0LL
    || (this = (GrandQuestClassBoardController___c__DisplayClass38_0_o *)UnityEngine_Component__get_transform(
                                                                           (UnityEngine_Component_o *)this,
                                                                           0LL)) == 0LL )
  {
LABEL_11:
    sub_1BCB254(this, method);
  }
  v9 = vadd_f32(
         *(float32x2_t *)&v4->fields.fromScale.fields.x,
         vmul_n_f32(
           vsub_f32(*(float32x2_t *)&v4->fields.toScale.fields.x, *(float32x2_t *)&v4->fields.fromScale.fields.x),
           v12)).n64_u64[0];
  v10 = v4->fields.fromScale.fields.z
      + (float)(v12 * (float)(v4->fields.toScale.fields.z - v4->fields.fromScale.fields.z));
  v11 = HIDWORD(v9);
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, *(UnityEngine_Vector3_o *)&v9, 0LL);
}


void __fastcall GrandQuestClassBoardController___c__DisplayClass38_0___FadeIn_b__1(
        GrandQuestClassBoardController___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  struct GrandQuestClassBoardController_o *_4__this; // x8
  GrandQuestClassBoardController___c__DisplayClass38_0_o *v3; // x19
  struct GrandQuestClassBoardController_o *v4; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v3 = this,
        (this = (GrandQuestClassBoardController___c__DisplayClass38_0_o *)_4__this->fields.classBoardRoot) == 0LL)
    || (this = (GrandQuestClassBoardController___c__DisplayClass38_0_o *)((__int64 (__fastcall *)(GrandQuestClassBoardController___c__DisplayClass38_0_o *, Il2CppClass *, float))this->klass[1]._1.castClass)(
                                                                           this,
                                                                           this->klass[1]._1.declaringType,
                                                                           v3->fields.toAlpha),
        (v4 = v3->fields.__4__this) == 0LL)
    || (this = (GrandQuestClassBoardController___c__DisplayClass38_0_o *)v4->fields.classBoardRoot) == 0LL
    || (this = (GrandQuestClassBoardController___c__DisplayClass38_0_o *)UnityEngine_Component__get_transform(
                                                                           (UnityEngine_Component_o *)this,
                                                                           0LL)) == 0LL )
  {
    sub_1BCB254(this, method);
  }
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v3->fields.toScale, 0LL);
}


void __fastcall GrandQuestClassBoardController___c__DisplayClass39_0___ctor(
        GrandQuestClassBoardController___c__DisplayClass39_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GrandQuestClassBoardController___c__DisplayClass39_0___ExecMoveEffectRoot_b__0(
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
    sub_1BCB254(this, method);
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
  TransformHelper__SetLocalPosition(_4__this->fields.effectRoot, *(UnityEngine_Vector3_o *)&v10, 0LL);
}


void __fastcall GrandQuestClassBoardController___c__DisplayClass39_0___ExecMoveEffectRoot_b__1(
        GrandQuestClassBoardController___c__DisplayClass39_0_o *this,
        const MethodInfo *method)
{
  struct GrandQuestClassBoardController_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCB254(this, method);
  TransformHelper__SetLocalPosition(_4__this->fields.effectRoot, this->fields.targetPosition, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}