void __fastcall ClassBoardBackground___ctor(ClassBoardBackground_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1

  if ( (byte_4B057F2 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_16116/*"_MainTex"*/, method);
    byte_4B057F2 = 1;
  }
  v5 = StringLiteral_16116/*"_MainTex"*/;
  this->fields.iconMaterialPropertyName = (struct System_String_o *)StringLiteral_16116/*"_MainTex"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.iconMaterialPropertyName, v5, v2, v3);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ClassBoardBackground__ActivateEarthAccessories(
        ClassBoardBackground_o *this,
        bool value,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *earthAccessoriesObject; // x0

  earthAccessoriesObject = this->fields.earthAccessoriesObject;
  if ( !earthAccessoriesObject )
    sub_1BC3264(0LL, value);
  UnityEngine_GameObject__SetActive(earthAccessoriesObject, value, 0LL);
}


void __fastcall ClassBoardBackground__Awake(ClassBoardBackground_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Object_o *gameObject; // x0
  __int64 v7; // x1
  System_String_o *name; // x20
  ClassBoardEffectPlayer_o *v9; // x21
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct ClassBoardEffectPlayer_o *startMainEffectPlayer; // x20
  System_Action_o *v13; // x21
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_String_o *v16; // x20
  ClassBoardEffectPlayer_o *v17; // x21
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct ClassBoardEffectPlayer_o *skipMainEffectPlayer; // x20
  System_Action_o *v21; // x21
  int32_t v22; // w2
  const MethodInfo *v23; // x3

  if ( (byte_4B057E1 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&Method_ClassBoardBackground_PlayStartMainEffectPlayer__, v3);
    sub_1BC3008(&Method_ClassBoardBackground_SkipStartMainEffectPlayer__, v4);
    sub_1BC3008(&ClassBoardEffectPlayer_TypeInfo, v5);
    byte_4B057E1 = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_8;
  name = UnityEngine_Object__get_name(gameObject, 0LL);
  v9 = (ClassBoardEffectPlayer_o *)sub_1BC3254(ClassBoardEffectPlayer_TypeInfo);
  ClassBoardEffectPlayer___ctor_46724124(v9, name, 0LL);
  this->fields.startMainEffectPlayer = v9;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.startMainEffectPlayer, (int32_t)v9, v10, v11);
  startMainEffectPlayer = this->fields.startMainEffectPlayer;
  v13 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_ClassBoardBackground_PlayStartMainEffectPlayer__, 0LL);
  if ( !startMainEffectPlayer )
    goto LABEL_8;
  startMainEffectPlayer->fields.playCallback = v13;
  sub_1BC2FAC((CGThumbnailListItem_o *)&startMainEffectPlayer->fields.playCallback, (int32_t)v13, v14, v15);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_8;
  v16 = UnityEngine_Object__get_name(gameObject, 0LL);
  v17 = (ClassBoardEffectPlayer_o *)sub_1BC3254(ClassBoardEffectPlayer_TypeInfo);
  ClassBoardEffectPlayer___ctor_46724124(v17, v16, 0LL);
  this->fields.skipMainEffectPlayer = v17;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.skipMainEffectPlayer, (int32_t)v17, v18, v19);
  skipMainEffectPlayer = this->fields.skipMainEffectPlayer;
  v21 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v21, (Il2CppObject *)this, Method_ClassBoardBackground_SkipStartMainEffectPlayer__, 0LL);
  if ( !skipMainEffectPlayer )
LABEL_8:
    sub_1BC3264(gameObject, v7);
  skipMainEffectPlayer->fields.playCallback = v21;
  sub_1BC2FAC((CGThumbnailListItem_o *)&skipMainEffectPlayer->fields.playCallback, (int32_t)v21, v22, v23);
}


void __fastcall ClassBoardBackground__CallAnimationEventBoardParent(
        ClassBoardBackground_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *boardParentAnimation; // x20
  UnityEngine_Object_o *boardParentAnimationClip; // x20
  __int64 v5; // x1
  UnityEngine_Object_o *name; // x0
  SimpleAnimation_o *v7; // x19

  if ( (byte_4B057F1 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4B057F1 = 1;
  }
  boardParentAnimation = (UnityEngine_Object_o *)this->fields.boardParentAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(boardParentAnimation, 0LL, 0LL) )
  {
    boardParentAnimationClip = (UnityEngine_Object_o *)this->fields.boardParentAnimationClip;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(boardParentAnimationClip, 0LL, 0LL) )
    {
      name = (UnityEngine_Object_o *)this->fields.boardParentAnimationClip;
      if ( !name
        || (v7 = this->fields.boardParentAnimation,
            name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0LL),
            !v7) )
      {
        sub_1BC3264(name, v5);
      }
      SimpleAnimation__Play_65293968(v7, (System_String_o *)name, 0LL);
    }
  }
}


void __fastcall ClassBoardBackground__CallAnimationEventShowBoard(
        ClassBoardBackground_o *this,
        const MethodInfo *method)
{
  CGThumbnailListItem_o *p_showBoardCallback; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  p_showBoardCallback = (CGThumbnailListItem_o *)&this->fields.showBoardCallback;
  ActionExtensions__Call(this->fields.showBoardCallback, 0LL);
  p_showBoardCallback->klass = 0LL;
  sub_1BC2FAC(p_showBoardCallback, 0, v3, v4);
}


void __fastcall ClassBoardBackground__ChangeCamera(
        ClassBoardBackground_o *this,
        UnityEngine_Camera_o *camera,
        const MethodInfo *method)
{
  struct UnityEngine_Camera_o *classBoardViewCamera; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *v7; // x22
  UnityEngine_GameObject_o *v8; // x21
  UnityEngine_GameObject_o *v9; // x21
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4B057E2 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, camera);
    byte_4B057E2 = 1;
  }
  classBoardViewCamera = this->fields.classBoardViewCamera;
  if ( !classBoardViewCamera )
    goto LABEL_10;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)classBoardViewCamera, 0LL);
  v7 = (UnityEngine_Object_o *)this->fields.classBoardViewCamera;
  v8 = gameObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  classBoardViewCamera = (struct UnityEngine_Camera_o *)UnityEngine_Object__op_Equality(
                                                          (UnityEngine_Object_o *)camera,
                                                          v7,
                                                          0LL);
  if ( !v8
    || (UnityEngine_GameObject__SetActive(v8, (unsigned __int8)classBoardViewCamera & 1, 0LL),
        (classBoardViewCamera = this->fields.classBoardSelectViewCamera) == 0LL)
    || (v9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)classBoardViewCamera, 0LL),
        classBoardViewCamera = (struct UnityEngine_Camera_o *)UnityEngine_Object__op_Equality(
                                                                (UnityEngine_Object_o *)camera,
                                                                (UnityEngine_Object_o *)this->fields.classBoardSelectViewCamera,
                                                                0LL),
        !v9) )
  {
LABEL_10:
    sub_1BC3264(classBoardViewCamera, camera);
  }
  UnityEngine_GameObject__SetActive(v9, (unsigned __int8)classBoardViewCamera & 1, 0LL);
  this->fields.currentCamera = camera;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.currentCamera, (int32_t)camera, v10, v11);
}


void __fastcall ClassBoardBackground__ForceSkipSimpleAnimation(
        ClassBoardBackground_o *this,
        SimpleAnimation_o *anim,
        System_String_o *name,
        System_Action_o *endCallback,
        bool isPlaySpecifiedPoint,
        const MethodInfo *method)
{
  long double v6; // q8
  ClassBoardBackground_o *v11; // x20
  ClassBoardBackground_o *v12; // x23
  ClassBoardBackground_c *klass; // x8
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 v16; // x0
  ClassBoardBackground_o *v17; // x0
  const MethodInfo *v18; // x4
  System_Collections_IEnumerator_o *v19; // x1

  v11 = this;
  if ( (byte_4B057EF & 1) == 0 )
  {
    this = (ClassBoardBackground_o *)sub_1BC3008(&SimpleAnimation_State_TypeInfo, anim);
    byte_4B057EF = 1;
  }
  if ( !anim )
    goto LABEL_14;
  SimpleAnimation__Rewind(anim, 0LL);
  SimpleAnimation__Play_65293968(anim, name, 0LL);
  this = (ClassBoardBackground_o *)SimpleAnimation__get_Item(anim, name, 0LL);
  v12 = this;
  LODWORD(v6) = 1.0;
  if ( isPlaySpecifiedPoint )
    *(float *)&v6 = v11->fields.directlyGrandAnimationStartPoint;
  if ( !this )
LABEL_14:
    sub_1BC3264(this, anim);
  klass = this->klass;
  v14 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v14;
      p_offset += 4;
      if ( !v14 )
        goto LABEL_11;
    }
    v16 = (__int64)(&klass[1]._1.byval_arg.bits + 4 * *p_offset);
  }
  else
  {
LABEL_11:
    v16 = sub_1C13570(this, SimpleAnimation_State_TypeInfo, 6LL);
  }
  v17 = (ClassBoardBackground_o *)(*(__int64 (__fastcall **)(ClassBoardBackground_o *, _QWORD, long double))v16)(
                                    v12,
                                    *(_QWORD *)(v16 + 8),
                                    v6);
  v19 = ClassBoardBackground__WaitAnimationFinished(v17, anim, name, endCallback, v18);
  UnityEngine_MonoBehaviour__StartCoroutine_70019872((UnityEngine_MonoBehaviour_o *)v11, v19, 0LL);
}


int32_t __fastcall ClassBoardBackground__GetCameraResetEasingType(
        ClassBoardBackground_o *this,
        const MethodInfo *method)
{
  return this->fields.cameraResetEasingType;
}


float __fastcall ClassBoardBackground__GetCameraResetSec(ClassBoardBackground_o *this, const MethodInfo *method)
{
  return this->fields.cameraResetSec;
}


int32_t __fastcall ClassBoardBackground__GetFullReleaseEffectCameraResetEasingType(
        ClassBoardBackground_o *this,
        const MethodInfo *method)
{
  return this->fields.fullReleaseEffectCameraEasingType;
}


float __fastcall ClassBoardBackground__GetFullReleaseEffectCameraResetSec(
        ClassBoardBackground_o *this,
        const MethodInfo *method)
{
  return this->fields.fullReleaseEffectCameraResetSec;
}


float __fastcall ClassBoardBackground__GetGrandScoreSignEffectStartSec(
        ClassBoardBackground_o *this,
        const MethodInfo *method)
{
  return this->fields.grandScoreSignEffectStartSec;
}


float __fastcall ClassBoardBackground__GetGrandScoreSignEffectStartSecDirectly(
        ClassBoardBackground_o *this,
        const MethodInfo *method)
{
  return this->fields.grandScoreSignEffectStartSecDirectly;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_Dictionary_int__bool__o *__fastcall ClassBoardBackground__GetIconIdList(
        ClassBoardBackground_o *this,
        int32_t baseId,
        const MethodInfo *method)
{
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
  System_Collections_Generic_Dictionary_int__bool__o *v20; // x19
  void *Master_object; // x0
  __int64 v22; // x1
  System_Collections_Generic_List_object__o *v23; // x20
  System_Comparison_T__o *v24; // x21
  Il2CppObject *v25; // x22
  struct ClassBoardBackground___c_StaticFields *static_fields; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  DataMasterBase_TMaster__TEntity__PKType__o *v29; // x20
  __int64 v30; // x1
  BalanceConfig_c *v31; // x0
  ClassBoardClassEntity_o *current; // x21
  BalanceConfig_c *v33; // x0
  __int64 v34; // x1
  _BOOL8 v35; // x0
  __int64 v36; // x1
  int32_t monitor_high; // w22
  _BOOL8 IsOpen; // x0
  __int64 v39; // x1
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+0h] [xbp-90h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+20h] [xbp-70h] BYREF
  System_Collections_Generic_List_ClassBoardClassEntity__o *entitys; // [xsp+38h] [xbp-58h] BYREF

  if ( (byte_4B057E8 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, *(_QWORD *)&baseId);
    sub_1BC3008(&System_Comparison_ClassBoardClassEntity__TypeInfo, v4);
    sub_1BC3008(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v5);
    sub_1BC3008(&Method_DataManager_GetMaster_ServantClassMaster___, v6);
    sub_1BC3008(&DataManager_TypeInfo, v7);
    sub_1BC3008(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__bool__Add__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__, v10);
    sub_1BC3008(&System_Collections_Generic_Dictionary_int__bool__TypeInfo, v11);
    sub_1BC3008(&Method_System_Linq_Enumerable_Contains_int___, v12);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__, v13);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__, v14);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__get_Current__, v15);
    sub_1BC3008(&Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__, v16);
    sub_1BC3008(&Method_System_Collections_Generic_List_ClassBoardClassEntity__Sort__, v17);
    sub_1BC3008(&Method_ClassBoardBackground___c__GetIconIdList_b__57_0__, v18);
    sub_1BC3008(&ClassBoardBackground___c_TypeInfo, v19);
    byte_4B057E8 = 1;
  }
  entitys = 0LL;
  memset(&v43, 0, sizeof(v43));
  entity = 0LL;
  v20 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_1BC3254(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v20,
    (const MethodInfo_32F8FE0 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
  if ( !Master_object )
    goto LABEL_37;
  if ( !ClassBoardClassMaster__TryGetEntityList((ClassBoardClassMaster_o *)Master_object, &entitys, baseId, 0LL) )
    return v20;
  v23 = (System_Collections_Generic_List_object__o *)entitys;
  Master_object = ClassBoardBackground___c_TypeInfo;
  if ( !ClassBoardBackground___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardBackground___c_TypeInfo);
    Master_object = ClassBoardBackground___c_TypeInfo;
  }
  v24 = *(System_Comparison_T__o **)(*((_QWORD *)Master_object + 23) + 8LL);
  if ( !v24 )
  {
    if ( !*((_DWORD *)Master_object + 56) )
    {
      j_il2cpp_runtime_class_init_0(Master_object);
      Master_object = ClassBoardBackground___c_TypeInfo;
    }
    v25 = (Il2CppObject *)**((_QWORD **)Master_object + 23);
    v24 = (System_Comparison_T__o *)sub_1BC3254(System_Comparison_ClassBoardClassEntity__TypeInfo);
    System_Comparison_object____ctor(v24, v25, Method_ClassBoardBackground___c__GetIconIdList_b__57_0__, 0LL);
    static_fields = ClassBoardBackground___c_TypeInfo->static_fields;
    static_fields->__9__57_0 = (struct System_Comparison_ClassBoardClassEntity__o *)v24;
    sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__57_0, (int32_t)v24, v27, v28);
  }
  if ( !v23 )
    goto LABEL_37;
  System_Collections_Generic_List_object___Sort_57288964(
    v23,
    v24,
    (const MethodInfo_36A2904 *)Method_System_Collections_Generic_List_ClassBoardClassEntity__Sort__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ServantClassMaster___);
  if ( !entitys )
LABEL_37:
    sub_1BC3264(Master_object, v22);
  v29 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v41,
    (System_Collections_Generic_List_object__o *)entitys,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__);
  v43 = v41;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v43,
            (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__) )
  {
    v31 = BalanceConfig_TypeInfo;
    current = (ClassBoardClassEntity_o *)v43.fields._current;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    if ( !current )
      sub_1BC3264(v31, v30);
    v33 = (BalanceConfig_c *)System_Linq_Enumerable__Contains_int_(
                               (System_Collections_Generic_IEnumerable_TSource__o *)BalanceConfig_TypeInfo->static_fields->PlayableBeastClassIds,
                               current->fields.classId,
                               (const MethodInfo_301AE3C *)Method_System_Linq_Enumerable_Contains_int___);
    if ( ((unsigned __int8)v33 & 1) != 0 )
    {
      v33 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v33 = BalanceConfig_TypeInfo;
      }
      if ( v33->static_fields->PlayableBeastBaseClassId != current->fields.classId )
        continue;
    }
    if ( !v29 )
      sub_1BC3264(v33, v34);
    v35 = DataMasterBase_object__object__int___TryGetEntity(
            v29,
            &entity,
            current->fields.classId,
            (const MethodInfo_32AF0BC *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    if ( v35 )
    {
      if ( !entity )
        sub_1BC3264(v35, v36);
      monitor_high = HIDWORD(entity[2].monitor);
      IsOpen = ClassBoardClassEntity__IsOpen(current, 0LL);
      if ( !v20 )
        sub_1BC3264(IsOpen, v39);
      System_Collections_Generic_Dictionary_int__bool___Add(
        v20,
        monitor_high,
        IsOpen,
        (const MethodInfo_32F99B8 *)Method_System_Collections_Generic_Dictionary_int__bool__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v43,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__);
  return v20;
}


UnityEngine_RenderTexture_o *__fastcall ClassBoardBackground__GetRenderTexture(
        ClassBoardBackground_o *this,
        const MethodInfo *method)
{
  UnityEngine_Camera_o *currentCamera; // x0

  currentCamera = this->fields.currentCamera;
  if ( !currentCamera )
    sub_1BC3264(0LL, method);
  return UnityEngine_Camera__get_targetTexture(currentCamera, 0LL);
}


void __fastcall ClassBoardBackground__OnDestroy(ClassBoardBackground_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  ClassBoardBackground___c_c *v6; // x0
  System_Collections_Generic_IEnumerable_T__o *iconRenderers; // x19
  System_Action_object__o *_9__59_0; // x20
  Il2CppObject *v9; // x21
  struct ClassBoardBackground___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4B057EA & 1) == 0 )
  {
    sub_1BC3008(&System_Action_Renderer__TypeInfo, method);
    sub_1BC3008(&Method_BasicHelper_ForEach_Renderer___, v3);
    sub_1BC3008(&Method_ClassBoardBackground___c__OnDestroy_b__59_0__, v4);
    sub_1BC3008(&ClassBoardBackground___c_TypeInfo, v5);
    byte_4B057EA = 1;
  }
  v6 = ClassBoardBackground___c_TypeInfo;
  iconRenderers = (System_Collections_Generic_IEnumerable_T__o *)this->fields.iconRenderers;
  if ( !ClassBoardBackground___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardBackground___c_TypeInfo);
    v6 = ClassBoardBackground___c_TypeInfo;
  }
  _9__59_0 = (System_Action_object__o *)v6->static_fields->__9__59_0;
  if ( !_9__59_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = ClassBoardBackground___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__59_0 = (System_Action_object__o *)sub_1BC3254(System_Action_Renderer__TypeInfo);
    System_Action_object____ctor(_9__59_0, v9, Method_ClassBoardBackground___c__OnDestroy_b__59_0__, 0LL);
    static_fields = ClassBoardBackground___c_TypeInfo->static_fields;
    static_fields->__9__59_0 = (struct System_Action_Renderer__o *)_9__59_0;
    sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__59_0, (int32_t)_9__59_0, v11, v12);
  }
  BasicHelper__ForEach_object_(
    iconRenderers,
    (System_Action_T__o *)_9__59_0,
    (const MethodInfo_2FEDEFC *)Method_BasicHelper_ForEach_Renderer___);
}


void __fastcall ClassBoardBackground__PlayBoardParentBeforeAnimation(
        ClassBoardBackground_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *boardParentAnimation; // x20
  UnityEngine_Object_o *boardParentBeforeAnimationClip; // x20
  __int64 v5; // x1
  SimpleAnimation_o *v6; // x0

  if ( (byte_4B057E9 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4B057E9 = 1;
  }
  boardParentAnimation = (UnityEngine_Object_o *)this->fields.boardParentAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(boardParentAnimation, 0LL, 0LL) )
  {
    boardParentBeforeAnimationClip = (UnityEngine_Object_o *)this->fields.boardParentBeforeAnimationClip;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(boardParentBeforeAnimationClip, 0LL, 0LL) )
    {
      v6 = this->fields.boardParentAnimation;
      if ( !v6
        || (SimpleAnimation__set_clip(v6, this->fields.boardParentBeforeAnimationClip, 0LL),
            (v6 = this->fields.boardParentAnimation) == 0LL) )
      {
        sub_1BC3264(v6, v5);
      }
      SimpleAnimation__Play(v6, 0LL);
    }
  }
}


System_Collections_IEnumerator_o *__fastcall ClassBoardBackground__PlayExClassReleaseEffectPlayer(
        ClassBoardBackground_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4B057ED & 1) == 0 )
  {
    sub_1BC3008(&ClassBoardBackground__PlayExClassReleaseEffectPlayer_d__62_TypeInfo, method);
    byte_4B057ED = 1;
  }
  v3 = sub_1BC3254(ClassBoardBackground__PlayExClassReleaseEffectPlayer_d__62_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall ClassBoardBackground__PlayGrandReturnTransitionAnimation(
        ClassBoardBackground_o *this,
        SimpleAnimation_o *classBoardAnimation,
        SimpleAnimation_o *grandBoardAnimation,
        System_Action_o *endCallback,
        bool isQuick,
        const MethodInfo *method)
{
  long double v6; // q8
  __int64 v12; // x1
  __int64 v13; // x1
  UnityEngine_Object_o *boardRootAnimation; // x23
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  UnityEngine_Object_o *boardRootReturnAnimationClip; // x23
  __int64 v18; // x1
  UnityEngine_Object_o *name; // x0
  SimpleAnimation_o *v20; // x23
  UnityEngine_AnimationClip_o *v21; // x23
  SimpleAnimation_o *v22; // x24
  SimpleAnimation_o *v23; // x23
  SimpleAnimation_o *v24; // x23
  UnityEngine_Object_c *klass; // x8
  UnityEngine_Object_o *v26; // x23
  __int64 v27; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v29; // x0
  SimpleAnimation_o *v30; // x23
  UnityEngine_Object_c *v31; // x8
  UnityEngine_Object_o *v32; // x23
  __int64 v33; // x9
  SimpleAnimation_State_c **v34; // x10
  __int64 v35; // x0
  UnityEngine_Object_o *grandRootAnimation; // x22
  const MethodInfo *v37; // x6
  UnityEngine_Object_o *v38; // x22
  SimpleAnimation_o *v39; // x22
  UnityEngine_AnimationClip_o *v40; // x22
  SimpleAnimation_o *v41; // x23
  SimpleAnimation_o *v42; // x22
  SimpleAnimation_o *v43; // x22
  UnityEngine_Object_c *v44; // x8
  UnityEngine_Object_o *v45; // x22
  __int64 v46; // x9
  SimpleAnimation_State_c **v47; // x10
  __int64 v48; // x0
  SimpleAnimation_o *v49; // x22
  UnityEngine_Object_c *v50; // x8
  UnityEngine_Object_o *v51; // x22
  __int64 v52; // x9
  SimpleAnimation_State_c **v53; // x10
  __int64 v54; // x0

  if ( (byte_4B057E5 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, classBoardAnimation);
    sub_1BC3008(&SimpleAnimation_State_TypeInfo, v12);
    sub_1BC3008(&StringLiteral_7082/*"GrandReturn"*/, v13);
    byte_4B057E5 = 1;
  }
  this->fields.boardRootAnimation = classBoardAnimation;
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)&this->fields.boardRootAnimation,
    (int32_t)classBoardAnimation,
    (int32_t)grandBoardAnimation,
    (const MethodInfo *)endCallback);
  boardRootAnimation = (UnityEngine_Object_o *)this->fields.boardRootAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(boardRootAnimation, 0LL, 0LL) )
  {
    boardRootReturnAnimationClip = (UnityEngine_Object_o *)this->fields.boardRootReturnAnimationClip;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(boardRootReturnAnimationClip, 0LL, 0LL) )
    {
      name = (UnityEngine_Object_o *)this->fields.boardRootReturnAnimationClip;
      if ( !name )
        goto LABEL_76;
      v20 = this->fields.boardRootAnimation;
      name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0LL);
      if ( !v20 )
        goto LABEL_76;
      name = (UnityEngine_Object_o *)SimpleAnimation__GetState(v20, (System_String_o *)name, 0LL);
      if ( !name )
      {
        v21 = this->fields.boardRootReturnAnimationClip;
        if ( !v21 )
          goto LABEL_76;
        v22 = this->fields.boardRootAnimation;
        name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(
                                         (UnityEngine_Object_o *)this->fields.boardRootReturnAnimationClip,
                                         0LL);
        if ( !v22 )
          goto LABEL_76;
        SimpleAnimation__AddClip(v22, v21, (System_String_o *)name, 0LL);
      }
    }
    name = (UnityEngine_Object_o *)this->fields.boardRootReturnAnimationClip;
    if ( !name )
      goto LABEL_76;
    v23 = this->fields.boardRootAnimation;
    name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0LL);
    if ( !v23 )
      goto LABEL_76;
    SimpleAnimation__Play_65293968(v23, (System_String_o *)name, 0LL);
    name = (UnityEngine_Object_o *)this->fields.boardRootReturnAnimationClip;
    if ( !name )
      goto LABEL_76;
    v24 = this->fields.boardRootAnimation;
    name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0LL);
    if ( !v24 )
      goto LABEL_76;
    name = (UnityEngine_Object_o *)SimpleAnimation__get_Item(v24, (System_String_o *)name, 0LL);
    *(float *)&v6 = isQuick ? 1.0 : 0.0;
    if ( !name )
      goto LABEL_76;
    klass = name->klass;
    v26 = name;
    v27 = *(unsigned __int16 *)(&name->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&name->klass->_2.bitflags2 + 3) )
    {
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v27;
        p_offset += 2;
        if ( !v27 )
          goto LABEL_27;
      }
      v29 = (__int64)(&klass[1]._1.byval_arg.bits + 4 * *(_DWORD *)p_offset);
    }
    else
    {
LABEL_27:
      v29 = sub_1C13570(name, SimpleAnimation_State_TypeInfo, 6LL);
    }
    (*(void (__fastcall **)(UnityEngine_Object_o *, _QWORD, long double))v29)(v26, *(_QWORD *)(v29 + 8), v6);
    name = (UnityEngine_Object_o *)this->fields.boardRootReturnAnimationClip;
    if ( !name
      || (v30 = this->fields.boardRootAnimation,
          name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0LL),
          !v30)
      || (name = (UnityEngine_Object_o *)SimpleAnimation__get_Item(v30, (System_String_o *)name, 0LL)) == 0LL )
    {
LABEL_76:
      sub_1BC3264(name, v18);
    }
    v31 = name->klass;
    v32 = name;
    v33 = *(unsigned __int16 *)(&name->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&name->klass->_2.bitflags2 + 3) )
    {
      v34 = (SimpleAnimation_State_c **)&v31->_1.interfaceOffsets->offset;
      while ( *(v34 - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v33;
        v34 += 2;
        if ( !v33 )
          goto LABEL_36;
      }
      v35 = (__int64)(&v31[1]._1.castClass + 2 * *(_DWORD *)v34);
    }
    else
    {
LABEL_36:
      v35 = sub_1C13570(name, SimpleAnimation_State_TypeInfo, 8LL);
    }
    (*(void (__fastcall **)(UnityEngine_Object_o *, _QWORD, float))v35)(v32, *(_QWORD *)(v35 + 8), 1.0);
  }
  this->fields.grandRootAnimation = grandBoardAnimation;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.grandRootAnimation, (int32_t)grandBoardAnimation, v15, v16);
  grandRootAnimation = (UnityEngine_Object_o *)this->fields.grandRootAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(grandRootAnimation, 0LL, 0LL) )
    goto LABEL_75;
  v38 = (UnityEngine_Object_o *)this->fields.boardRootReturnAnimationClip;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v38, 0LL, 0LL) )
  {
    name = (UnityEngine_Object_o *)this->fields.boardRootReturnAnimationClip;
    if ( !name )
      goto LABEL_76;
    v39 = this->fields.grandRootAnimation;
    name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0LL);
    if ( !v39 )
      goto LABEL_76;
    name = (UnityEngine_Object_o *)SimpleAnimation__GetState(v39, (System_String_o *)name, 0LL);
    if ( !name )
    {
      v40 = this->fields.boardRootReturnAnimationClip;
      if ( !v40 )
        goto LABEL_76;
      v41 = this->fields.grandRootAnimation;
      name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(
                                       (UnityEngine_Object_o *)this->fields.boardRootReturnAnimationClip,
                                       0LL);
      if ( !v41 )
        goto LABEL_76;
      SimpleAnimation__AddClip(v41, v40, (System_String_o *)name, 0LL);
    }
  }
  name = (UnityEngine_Object_o *)this->fields.boardRootReturnAnimationClip;
  if ( !name )
    goto LABEL_76;
  v42 = this->fields.grandRootAnimation;
  name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0LL);
  if ( !v42 )
    goto LABEL_76;
  SimpleAnimation__Play_65293968(v42, (System_String_o *)name, 0LL);
  name = (UnityEngine_Object_o *)this->fields.boardRootReturnAnimationClip;
  if ( !name )
    goto LABEL_76;
  v43 = this->fields.grandRootAnimation;
  name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0LL);
  if ( !v43 )
    goto LABEL_76;
  name = (UnityEngine_Object_o *)SimpleAnimation__get_Item(v43, (System_String_o *)name, 0LL);
  *(float *)&v6 = isQuick ? 1.0 : 0.0;
  if ( !name )
    goto LABEL_76;
  v44 = name->klass;
  v45 = name;
  v46 = *(unsigned __int16 *)(&name->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&name->klass->_2.bitflags2 + 3) )
  {
    v47 = (SimpleAnimation_State_c **)&v44->_1.interfaceOffsets->offset;
    while ( *(v47 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v46;
      v47 += 2;
      if ( !v46 )
        goto LABEL_63;
    }
    v48 = (__int64)(&v44[1]._1.byval_arg.bits + 4 * *(_DWORD *)v47);
  }
  else
  {
LABEL_63:
    v48 = sub_1C13570(name, SimpleAnimation_State_TypeInfo, 6LL);
  }
  (*(void (__fastcall **)(UnityEngine_Object_o *, _QWORD, long double))v48)(v45, *(_QWORD *)(v48 + 8), v6);
  name = (UnityEngine_Object_o *)this->fields.boardRootReturnAnimationClip;
  if ( !name )
    goto LABEL_76;
  v49 = this->fields.grandRootAnimation;
  name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0LL);
  if ( !v49 )
    goto LABEL_76;
  name = (UnityEngine_Object_o *)SimpleAnimation__get_Item(v49, (System_String_o *)name, 0LL);
  if ( !name )
    goto LABEL_76;
  v50 = name->klass;
  v51 = name;
  v52 = *(unsigned __int16 *)(&name->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&name->klass->_2.bitflags2 + 3) )
  {
    v53 = (SimpleAnimation_State_c **)&v50->_1.interfaceOffsets->offset;
    while ( *(v53 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v52;
      v53 += 2;
      if ( !v52 )
        goto LABEL_72;
    }
    v54 = (__int64)(&v50[1]._1.castClass + 2 * *(_DWORD *)v53);
  }
  else
  {
LABEL_72:
    v54 = sub_1C13570(name, SimpleAnimation_State_TypeInfo, 8LL);
  }
  (*(void (__fastcall **)(UnityEngine_Object_o *, _QWORD, float))v54)(v51, *(_QWORD *)(v54 + 8), 1.0);
LABEL_75:
  ClassBoardBackground__PlaySimpleAnimation(
    this,
    this->fields.mainAnimation,
    (System_String_o *)StringLiteral_7082/*"GrandReturn"*/,
    endCallback,
    isQuick,
    0,
    v37);
}


void __fastcall ClassBoardBackground__PlayGrandTransitionAnimation(
        ClassBoardBackground_o *this,
        SimpleAnimation_o *classBoardAnimation,
        SimpleAnimation_o *grandBoardAnimation,
        System_Action_o *endCallback,
        bool isQuick,
        const MethodInfo *method)
{
  long double v6; // q8
  __int64 v12; // x1
  __int64 v13; // x1
  UnityEngine_Object_o *boardRootAnimation; // x23
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  UnityEngine_Object_o *boardRootAnimationClip; // x23
  __int64 v18; // x1
  UnityEngine_Object_o *name; // x0
  SimpleAnimation_o *v20; // x23
  UnityEngine_AnimationClip_o *v21; // x23
  SimpleAnimation_o *v22; // x24
  SimpleAnimation_o *v23; // x23
  SimpleAnimation_o *v24; // x23
  UnityEngine_Object_o *v25; // x23
  UnityEngine_Object_c *klass; // x8
  __int64 v27; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v29; // x0
  SimpleAnimation_o *v30; // x23
  UnityEngine_Object_c *v31; // x8
  UnityEngine_Object_o *v32; // x23
  __int64 v33; // x9
  SimpleAnimation_State_c **v34; // x10
  __int64 v35; // x0
  UnityEngine_Object_o *grandRootAnimation; // x22
  const MethodInfo *v37; // x6
  UnityEngine_Object_o *v38; // x22
  SimpleAnimation_o *v39; // x22
  UnityEngine_AnimationClip_o *v40; // x22
  SimpleAnimation_o *v41; // x23
  SimpleAnimation_o *v42; // x22
  SimpleAnimation_o *v43; // x22
  UnityEngine_Object_o *v44; // x22
  UnityEngine_Object_c *v45; // x8
  __int64 v46; // x9
  SimpleAnimation_State_c **v47; // x10
  __int64 v48; // x0
  SimpleAnimation_o *v49; // x22
  UnityEngine_Object_c *v50; // x8
  UnityEngine_Object_o *v51; // x22
  __int64 v52; // x9
  SimpleAnimation_State_c **v53; // x10
  __int64 v54; // x0

  if ( (byte_4B057E4 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, classBoardAnimation);
    sub_1BC3008(&SimpleAnimation_State_TypeInfo, v12);
    sub_1BC3008(&StringLiteral_7090/*"GrandStart"*/, v13);
    byte_4B057E4 = 1;
  }
  this->fields.boardRootAnimation = classBoardAnimation;
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)&this->fields.boardRootAnimation,
    (int32_t)classBoardAnimation,
    (int32_t)grandBoardAnimation,
    (const MethodInfo *)endCallback);
  boardRootAnimation = (UnityEngine_Object_o *)this->fields.boardRootAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(boardRootAnimation, 0LL, 0LL) )
  {
    boardRootAnimationClip = (UnityEngine_Object_o *)this->fields.boardRootAnimationClip;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(boardRootAnimationClip, 0LL, 0LL) )
    {
      name = (UnityEngine_Object_o *)this->fields.boardRootAnimationClip;
      if ( !name )
        goto LABEL_74;
      v20 = this->fields.boardRootAnimation;
      name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0LL);
      if ( !v20 )
        goto LABEL_74;
      name = (UnityEngine_Object_o *)SimpleAnimation__GetState(v20, (System_String_o *)name, 0LL);
      if ( !name )
      {
        v21 = this->fields.boardRootAnimationClip;
        if ( !v21 )
          goto LABEL_74;
        v22 = this->fields.boardRootAnimation;
        name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(
                                         (UnityEngine_Object_o *)this->fields.boardRootAnimationClip,
                                         0LL);
        if ( !v22 )
          goto LABEL_74;
        SimpleAnimation__AddClip(v22, v21, (System_String_o *)name, 0LL);
      }
    }
    name = (UnityEngine_Object_o *)this->fields.boardRootAnimationClip;
    if ( !name )
      goto LABEL_74;
    v23 = this->fields.boardRootAnimation;
    name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0LL);
    if ( !v23 )
      goto LABEL_74;
    SimpleAnimation__Play_65293968(v23, (System_String_o *)name, 0LL);
    name = (UnityEngine_Object_o *)this->fields.boardRootAnimationClip;
    if ( !name )
      goto LABEL_74;
    v24 = this->fields.boardRootAnimation;
    name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0LL);
    if ( !v24 )
      goto LABEL_74;
    name = (UnityEngine_Object_o *)SimpleAnimation__get_Item(v24, (System_String_o *)name, 0LL);
    v25 = name;
    LODWORD(v6) = 0;
    if ( isQuick )
      *(float *)&v6 = this->fields.directlyGrandAnimationStartPoint;
    if ( !name )
      goto LABEL_74;
    klass = name->klass;
    v27 = *(unsigned __int16 *)(&name->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&name->klass->_2.bitflags2 + 3) )
    {
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v27;
        p_offset += 2;
        if ( !v27 )
          goto LABEL_26;
      }
      v29 = (__int64)(&klass[1]._1.byval_arg.bits + 4 * *(_DWORD *)p_offset);
    }
    else
    {
LABEL_26:
      v29 = sub_1C13570(name, SimpleAnimation_State_TypeInfo, 6LL);
    }
    (*(void (__fastcall **)(UnityEngine_Object_o *, _QWORD, long double))v29)(v25, *(_QWORD *)(v29 + 8), v6);
    name = (UnityEngine_Object_o *)this->fields.boardRootAnimationClip;
    if ( !name
      || (v30 = this->fields.boardRootAnimation,
          name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0LL),
          !v30)
      || (name = (UnityEngine_Object_o *)SimpleAnimation__get_Item(v30, (System_String_o *)name, 0LL)) == 0LL )
    {
LABEL_74:
      sub_1BC3264(name, v18);
    }
    v31 = name->klass;
    v32 = name;
    v33 = *(unsigned __int16 *)(&name->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&name->klass->_2.bitflags2 + 3) )
    {
      v34 = (SimpleAnimation_State_c **)&v31->_1.interfaceOffsets->offset;
      while ( *(v34 - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v33;
        v34 += 2;
        if ( !v33 )
          goto LABEL_35;
      }
      v35 = (__int64)(&v31[1]._1.castClass + 2 * *(_DWORD *)v34);
    }
    else
    {
LABEL_35:
      v35 = sub_1C13570(name, SimpleAnimation_State_TypeInfo, 8LL);
    }
    (*(void (__fastcall **)(UnityEngine_Object_o *, _QWORD, float))v35)(v32, *(_QWORD *)(v35 + 8), 1.0);
  }
  this->fields.grandRootAnimation = grandBoardAnimation;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.grandRootAnimation, (int32_t)grandBoardAnimation, v15, v16);
  grandRootAnimation = (UnityEngine_Object_o *)this->fields.grandRootAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(grandRootAnimation, 0LL, 0LL) )
    goto LABEL_73;
  v38 = (UnityEngine_Object_o *)this->fields.boardRootAnimationClip;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v38, 0LL, 0LL) )
  {
    name = (UnityEngine_Object_o *)this->fields.boardRootAnimationClip;
    if ( !name )
      goto LABEL_74;
    v39 = this->fields.grandRootAnimation;
    name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0LL);
    if ( !v39 )
      goto LABEL_74;
    name = (UnityEngine_Object_o *)SimpleAnimation__GetState(v39, (System_String_o *)name, 0LL);
    if ( !name )
    {
      v40 = this->fields.boardRootAnimationClip;
      if ( !v40 )
        goto LABEL_74;
      v41 = this->fields.grandRootAnimation;
      name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(
                                       (UnityEngine_Object_o *)this->fields.boardRootAnimationClip,
                                       0LL);
      if ( !v41 )
        goto LABEL_74;
      SimpleAnimation__AddClip(v41, v40, (System_String_o *)name, 0LL);
    }
  }
  name = (UnityEngine_Object_o *)this->fields.boardRootAnimationClip;
  if ( !name )
    goto LABEL_74;
  v42 = this->fields.grandRootAnimation;
  name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0LL);
  if ( !v42 )
    goto LABEL_74;
  SimpleAnimation__Play_65293968(v42, (System_String_o *)name, 0LL);
  name = (UnityEngine_Object_o *)this->fields.boardRootAnimationClip;
  if ( !name )
    goto LABEL_74;
  v43 = this->fields.grandRootAnimation;
  name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0LL);
  if ( !v43 )
    goto LABEL_74;
  name = (UnityEngine_Object_o *)SimpleAnimation__get_Item(v43, (System_String_o *)name, 0LL);
  v44 = name;
  LODWORD(v6) = 0;
  if ( isQuick )
    *(float *)&v6 = this->fields.directlyGrandAnimationStartPoint;
  if ( !name )
    goto LABEL_74;
  v45 = name->klass;
  v46 = *(unsigned __int16 *)(&name->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&name->klass->_2.bitflags2 + 3) )
  {
    v47 = (SimpleAnimation_State_c **)&v45->_1.interfaceOffsets->offset;
    while ( *(v47 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v46;
      v47 += 2;
      if ( !v46 )
        goto LABEL_61;
    }
    v48 = (__int64)(&v45[1]._1.byval_arg.bits + 4 * *(_DWORD *)v47);
  }
  else
  {
LABEL_61:
    v48 = sub_1C13570(name, SimpleAnimation_State_TypeInfo, 6LL);
  }
  (*(void (__fastcall **)(UnityEngine_Object_o *, _QWORD, long double))v48)(v44, *(_QWORD *)(v48 + 8), v6);
  name = (UnityEngine_Object_o *)this->fields.boardRootAnimationClip;
  if ( !name )
    goto LABEL_74;
  v49 = this->fields.grandRootAnimation;
  name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0LL);
  if ( !v49 )
    goto LABEL_74;
  name = (UnityEngine_Object_o *)SimpleAnimation__get_Item(v49, (System_String_o *)name, 0LL);
  if ( !name )
    goto LABEL_74;
  v50 = name->klass;
  v51 = name;
  v52 = *(unsigned __int16 *)(&name->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&name->klass->_2.bitflags2 + 3) )
  {
    v53 = (SimpleAnimation_State_c **)&v50->_1.interfaceOffsets->offset;
    while ( *(v53 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v52;
      v53 += 2;
      if ( !v52 )
        goto LABEL_70;
    }
    v54 = (__int64)(&v50[1]._1.castClass + 2 * *(_DWORD *)v53);
  }
  else
  {
LABEL_70:
    v54 = sub_1C13570(name, SimpleAnimation_State_TypeInfo, 8LL);
  }
  (*(void (__fastcall **)(UnityEngine_Object_o *, _QWORD, float))v54)(v51, *(_QWORD *)(v54 + 8), 1.0);
LABEL_73:
  ClassBoardBackground__PlaySimpleAnimation(
    this,
    this->fields.mainAnimation,
    (System_String_o *)StringLiteral_7090/*"GrandStart"*/,
    endCallback,
    isQuick,
    isQuick,
    v37);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardBackground__PlaySimpleAnimation(
        ClassBoardBackground_o *this,
        SimpleAnimation_o *anim,
        System_String_o *name,
        System_Action_o *endCallback,
        bool isQuick,
        bool isPlaySpecifiedPoint,
        const MethodInfo *method)
{
  _BOOL8 v11; // x0
  const MethodInfo *v12; // x4
  System_Collections_IEnumerator_o *v13; // x1

  if ( isQuick )
  {
    ClassBoardBackground__ForceSkipSimpleAnimation(
      this,
      anim,
      name,
      endCallback,
      isPlaySpecifiedPoint,
      (const MethodInfo *)isPlaySpecifiedPoint);
  }
  else
  {
    if ( !anim )
      sub_1BC3264(this, 0LL);
    SimpleAnimation__Rewind(anim, 0LL);
    v11 = SimpleAnimation__Play_65293968(anim, name, 0LL);
    v13 = ClassBoardBackground__WaitAnimationFinished((ClassBoardBackground_o *)v11, anim, name, endCallback, v12);
    UnityEngine_MonoBehaviour__StartCoroutine_70019872((UnityEngine_MonoBehaviour_o *)this, v13, 0LL);
  }
}


void __fastcall ClassBoardBackground__PlayStartExClassReleaseEffectPlayer(
        ClassBoardBackground_o *this,
        const MethodInfo *method)
{
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
  struct System_Collections_Generic_Dictionary_int__SimpleAnimation__o *exClassReleaseEffectAnimationDic; // x0
  char v15; // w21
  const MethodInfo *v16; // x6
  Il2CppObject *value; // x20
  System_Action_o *v18; // x21
  const MethodInfo *v19; // x6
  ClassBoardBackground___c_c *v20; // x0
  System_String_o *v21; // x21
  System_Action_o *_9__63_1; // x22
  Il2CppObject *v23; // x23
  struct ClassBoardBackground___c_StaticFields *static_fields; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v27; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v28; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_4B057EE & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&Method_ClassBoardBackground__PlayStartExClassReleaseEffectPlayer_b__63_0__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__GetEnumerator__, v4);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__Dispose__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__MoveNext__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__get_Current__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_KeyValuePair_int__SimpleAnimation__get_Key__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_KeyValuePair_int__SimpleAnimation__get_Value__, v9);
    sub_1BC3008(&Method_ClassBoardBackground___c__PlayStartExClassReleaseEffectPlayer_b__63_1__, v10);
    sub_1BC3008(&ClassBoardBackground___c_TypeInfo, v11);
    sub_1BC3008(&StringLiteral_10469/*"Particle_CrassIcon_Ex_Released"*/, v12);
    byte_4B057EE = 1;
  }
  memset(&v28, 0, sizeof(v28));
  if ( !BasicHelper__IsNullOrEmpty(
          (System_Collections_ICollection_o *)this->fields.exClassReleaseEffectAnimationDic,
          0LL) )
  {
    exClassReleaseEffectAnimationDic = this->fields.exClassReleaseEffectAnimationDic;
    if ( !exClassReleaseEffectAnimationDic )
      sub_1BC3264(0LL, v13);
    System_Collections_Generic_Dictionary_int__object___GetEnumerator(
      &v27,
      (System_Collections_Generic_Dictionary_int__object__o *)exClassReleaseEffectAnimationDic,
      (const MethodInfo_330898C *)Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__GetEnumerator__);
    v28 = v27;
    v15 = 1;
    while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
              &v28,
              (const MethodInfo_3459F80 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__MoveNext__) )
    {
      value = v28.fields._current.fields.value;
      if ( (v15 & 1) != 0 )
      {
        v18 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
        System_Action___ctor(
          v18,
          (Il2CppObject *)this,
          Method_ClassBoardBackground__PlayStartExClassReleaseEffectPlayer_b__63_0__,
          0LL);
        ClassBoardBackground__PlaySimpleAnimation(
          this,
          (SimpleAnimation_o *)value,
          (System_String_o *)StringLiteral_10469/*"Particle_CrassIcon_Ex_Released"*/,
          v18,
          0,
          0,
          v19);
        v15 = 0;
      }
      else
      {
        v20 = ClassBoardBackground___c_TypeInfo;
        if ( !ClassBoardBackground___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ClassBoardBackground___c_TypeInfo);
          v20 = ClassBoardBackground___c_TypeInfo;
        }
        v21 = (System_String_o *)StringLiteral_10469/*"Particle_CrassIcon_Ex_Released"*/;
        _9__63_1 = v20->static_fields->__9__63_1;
        if ( !_9__63_1 )
        {
          if ( !v20->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v20);
            v20 = ClassBoardBackground___c_TypeInfo;
          }
          v23 = (Il2CppObject *)v20->static_fields->__9;
          _9__63_1 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
          System_Action___ctor(
            _9__63_1,
            v23,
            Method_ClassBoardBackground___c__PlayStartExClassReleaseEffectPlayer_b__63_1__,
            0LL);
          static_fields = ClassBoardBackground___c_TypeInfo->static_fields;
          static_fields->__9__63_1 = _9__63_1;
          sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__63_1, (int32_t)_9__63_1, v25, v26);
        }
        ClassBoardBackground__PlaySimpleAnimation(this, (SimpleAnimation_o *)value, v21, _9__63_1, 0, 0, v16);
        v15 = 0;
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
      &v28,
      (const MethodInfo_345A0A4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__Dispose__);
  }
}


void __fastcall ClassBoardBackground__PlayStartMainEffectPlayer(ClassBoardBackground_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  ClassBoardEffectPlayer_o *startMainEffectPlayer; // x0
  int32_t Data_int; // w20
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  Il2CppObject *v14; // x0
  System_String_o *v15; // x20
  Il2CppObject *v16; // x0
  const MethodInfo *v17; // x1
  System_Collections_IEnumerator_o *v18; // x0
  SimpleAnimation_o *mainAnimation; // x21
  System_Action_o *v20; // x22
  const MethodInfo *v21; // x6
  int32_t v22; // [xsp+8h] [xbp-38h] BYREF
  int32_t v23; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B057EB & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&Method_ClassBoardBackground__PlayStartMainEffectPlayer_b__60_0__, v3);
    sub_1BC3008(&Method_ClassBoardEffectPlayer_GetData_int___, v4);
    sub_1BC3008(&int_TypeInfo, v5);
    sub_1BC3008(&StringLiteral_8793/*"MainTransition{0}_Release"*/, v6);
    sub_1BC3008(&StringLiteral_1/*""*/, v7);
    sub_1BC3008(&StringLiteral_8792/*"MainTransition{0}"*/, v8);
    byte_4B057EB = 1;
  }
  startMainEffectPlayer = this->fields.startMainEffectPlayer;
  if ( !startMainEffectPlayer )
    sub_1BC3264(0LL, method);
  Data_int = ClassBoardEffectPlayer__GetData_int_(
               startMainEffectPlayer,
               (const MethodInfo_2FF56B0 *)Method_ClassBoardEffectPlayer_GetData_int___);
  if ( BasicHelper__IsNullOrEmpty(
         (System_Collections_ICollection_o *)this->fields.exClassReleaseEffectAnimationDic,
         0LL) )
  {
    v22 = Data_int;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22, v11, v12, v13);
    v15 = System_String__Format((System_String_o *)StringLiteral_8792/*"MainTransition{0}"*/, v14, 0LL);
  }
  else
  {
    v23 = Data_int;
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23, v11, v12, v13);
    v15 = System_String__Format((System_String_o *)StringLiteral_8793/*"MainTransition{0}_Release"*/, v16, 0LL);
    v18 = ClassBoardBackground__PlayExClassReleaseEffectPlayer(this, v17);
    UnityEngine_MonoBehaviour__StartCoroutine_70019872((UnityEngine_MonoBehaviour_o *)this, v18, 0LL);
  }
  mainAnimation = this->fields.mainAnimation;
  v20 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v20, (Il2CppObject *)this, Method_ClassBoardBackground__PlayStartMainEffectPlayer_b__60_0__, 0LL);
  ClassBoardBackground__PlaySimpleAnimation(this, mainAnimation, v15, v20, 0, 0, v21);
}


void __fastcall ClassBoardBackground__SetBoardParentAnimation(
        ClassBoardBackground_o *this,
        SimpleAnimation_o *animation,
        bool isQuick,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UnityEngine_Object_o *boardParentAnimation; // x21
  UnityEngine_Object_o *boardParentAnimationClip; // x21
  __int64 v10; // x1
  UnityEngine_Object_o *name; // x0
  SimpleAnimation_o *v12; // x21
  UnityEngine_AnimationClip_o *v13; // x21
  SimpleAnimation_o *v14; // x22
  UnityEngine_Object_o *boardParentBeforeAnimationClip; // x21
  SimpleAnimation_o *v16; // x21
  UnityEngine_AnimationClip_o *v17; // x21
  SimpleAnimation_o *v18; // x22
  SimpleAnimation_o *v19; // x21
  SimpleAnimation_o *v20; // x19
  UnityEngine_Object_c *klass; // x8
  UnityEngine_Object_o *v22; // x19
  __int64 v23; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v25; // x0

  if ( (byte_4B057E3 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, animation);
    sub_1BC3008(&SimpleAnimation_State_TypeInfo, v7);
    byte_4B057E3 = 1;
  }
  this->fields.boardParentAnimation = animation;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.boardParentAnimation, (int32_t)animation, isQuick, method);
  boardParentAnimation = (UnityEngine_Object_o *)this->fields.boardParentAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(boardParentAnimation, 0LL, 0LL) )
    return;
  boardParentAnimationClip = (UnityEngine_Object_o *)this->fields.boardParentAnimationClip;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(boardParentAnimationClip, 0LL, 0LL) )
  {
    name = (UnityEngine_Object_o *)this->fields.boardParentAnimationClip;
    if ( !name )
      goto LABEL_38;
    v12 = this->fields.boardParentAnimation;
    name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0LL);
    if ( !v12 )
      goto LABEL_38;
    name = (UnityEngine_Object_o *)SimpleAnimation__GetState(v12, (System_String_o *)name, 0LL);
    if ( !name )
    {
      v13 = this->fields.boardParentAnimationClip;
      if ( !v13 )
        goto LABEL_38;
      v14 = this->fields.boardParentAnimation;
      name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(
                                       (UnityEngine_Object_o *)this->fields.boardParentAnimationClip,
                                       0LL);
      if ( !v14 )
        goto LABEL_38;
      SimpleAnimation__AddClip(v14, v13, (System_String_o *)name, 0LL);
    }
  }
  boardParentBeforeAnimationClip = (UnityEngine_Object_o *)this->fields.boardParentBeforeAnimationClip;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(boardParentBeforeAnimationClip, 0LL, 0LL) )
    return;
  name = (UnityEngine_Object_o *)this->fields.boardParentBeforeAnimationClip;
  if ( !name )
    goto LABEL_38;
  v16 = this->fields.boardParentAnimation;
  name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0LL);
  if ( !v16 )
    goto LABEL_38;
  name = (UnityEngine_Object_o *)SimpleAnimation__GetState(v16, (System_String_o *)name, 0LL);
  if ( !name )
  {
    v17 = this->fields.boardParentBeforeAnimationClip;
    if ( !v17 )
      goto LABEL_38;
    v18 = this->fields.boardParentAnimation;
    name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(
                                     (UnityEngine_Object_o *)this->fields.boardParentBeforeAnimationClip,
                                     0LL);
    if ( !v18 )
      goto LABEL_38;
    SimpleAnimation__AddClip(v18, v17, (System_String_o *)name, 0LL);
  }
  name = (UnityEngine_Object_o *)this->fields.boardParentBeforeAnimationClip;
  if ( !name )
    goto LABEL_38;
  v19 = this->fields.boardParentAnimation;
  name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0LL);
  if ( !v19 )
    goto LABEL_38;
  SimpleAnimation__Play_65293968(v19, (System_String_o *)name, 0LL);
  if ( !isQuick )
    return;
  name = (UnityEngine_Object_o *)this->fields.boardParentBeforeAnimationClip;
  if ( !name
    || (v20 = this->fields.boardParentAnimation,
        name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0LL),
        !v20)
    || (name = (UnityEngine_Object_o *)SimpleAnimation__get_Item(v20, (System_String_o *)name, 0LL)) == 0LL )
  {
LABEL_38:
    sub_1BC3264(name, v10);
  }
  klass = name->klass;
  v22 = name;
  v23 = *(unsigned __int16 *)(&name->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&name->klass->_2.bitflags2 + 3) )
  {
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v23;
      p_offset += 2;
      if ( !v23 )
        goto LABEL_34;
    }
    v25 = (__int64)(&klass[1]._1.byval_arg.bits + 4 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_34:
    v25 = sub_1C13570(name, SimpleAnimation_State_TypeInfo, 6LL);
  }
  (*(void (__fastcall **)(UnityEngine_Object_o *, _QWORD, float))v25)(v22, *(_QWORD *)(v25 + 8), 1.0);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardBackground__SetClassIcon(
        ClassBoardBackground_o *this,
        int32_t baseId,
        int32_t iconId,
        const MethodInfo *method)
{
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
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x22
  UnityEngine_Component_o *offRenderer; // x0
  __int64 v33; // x1
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  System_Collections_Generic_IEnumerable_TSource__o *iconTextures; // x21
  System_Func_object__bool__o *v37; // x23
  Il2CppObject *v38; // x0
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  UnityEngine_Object_o *v41; // x21
  System_Collections_Generic_IEnumerable_T__o *iconRenderers; // x21
  System_Action_object__o *v43; // x23
  System_Collections_Generic_Dictionary_int__object__o *v44; // x21
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  const MethodInfo *v47; // x2
  struct ClassBoardBackground_ExClassIconSet_array *exIconSet; // x19
  Il2CppObject *key; // x22
  __int64 v50; // x21
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  Il2CppObject *v54; // x1
  System_String_o *v55; // x0
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  __int64 v58; // x2
  __int64 v59; // x3
  __int64 v60; // x4
  Il2CppObject *v61; // x1
  System_String_o *v62; // x0
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  __int64 v65; // x2
  __int64 v66; // x3
  __int64 v67; // x4
  Il2CppObject *v68; // x1
  System_String_o *v69; // x0
  int32_t v70; // w2
  const MethodInfo *v71; // x3
  _BOOL8 v72; // x0
  __int64 v73; // x1
  __int64 v74; // x2
  struct ClassBoardBackground_ExClassIconSet_array *v75; // x8
  il2cpp_array_size_t v76; // w19
  System_Func_object__bool__o **v77; // x22
  System_Func_object__bool__o **v78; // x24
  System_Func_object__bool__o **v79; // x25
  il2cpp_array_size_t v80; // w9
  ClassBoardBackground_ExClassIconSet_o *v81; // x8
  System_Func_object__bool__o *v82; // x23
  System_Collections_Generic_IEnumerable_TSource__o *textures; // x27
  int32_t v84; // w2
  const MethodInfo *v85; // x3
  Il2CppObject *v86; // x0
  System_Func_object__bool__o *v87; // x26
  UnityEngine_Object_o *v88; // x23
  int32_t v89; // w2
  const MethodInfo *v90; // x3
  Il2CppObject *v91; // x0
  System_Func_object__bool__o *v92; // x28
  UnityEngine_Object_o *v93; // x26
  int32_t v94; // w2
  const MethodInfo *v95; // x3
  Il2CppObject *v96; // x27
  struct ClassBoardBackground_ExClassIconSet_array *v97; // x8
  ClassBoardBackground_ExClassIconSet_o *v98; // x8
  UnityEngine_Renderer_o *v99; // x0
  UnityEngine_Material_o *material; // x0
  __int64 v101; // x1
  __int64 v102; // x0
  __int64 v103; // x1
  __int64 v104; // x2
  struct ClassBoardBackground_ExClassIconSet_array *v105; // x8
  ClassBoardBackground_ExClassIconSet_o *v106; // x8
  UnityEngine_Renderer_o *effectRenderer; // x0
  UnityEngine_Material_o *v108; // x0
  __int64 v109; // x1
  __int64 v110; // x0
  __int64 v111; // x1
  __int64 v112; // x2
  struct ClassBoardBackground_ExClassIconSet_array *v113; // x8
  ClassBoardBackground_ExClassIconSet_o *v114; // x8
  UnityEngine_Renderer_o *onRenderer; // x0
  UnityEngine_Material_o *v116; // x0
  __int64 v117; // x1
  __int64 v118; // x0
  __int64 v119; // x1
  __int64 v120; // x2
  struct ClassBoardBackground_ExClassIconSet_array *v121; // x8
  ClassBoardBackground_ExClassIconSet_o *v122; // x8
  UnityEngine_Renderer_o *effectGlowRenderer; // x0
  UnityEngine_Material_o *v124; // x0
  __int64 v125; // x1
  __int64 v126; // x0
  __int64 v127; // x1
  __int64 v128; // x2
  struct ClassBoardBackground_ExClassIconSet_array *v129; // x8
  ClassBoardBackground_ExClassIconSet_o *v130; // x8
  UnityEngine_Component_o *v131; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v133; // x1
  __int64 v134; // x0
  __int64 v135; // x1
  __int64 v136; // x2
  struct ClassBoardBackground_ExClassIconSet_array *v137; // x8
  ClassBoardBackground_ExClassIconSet_o *v138; // x8
  UnityEngine_Component_o *v139; // x0
  UnityEngine_GameObject_o *v140; // x0
  __int64 v141; // x1
  __int64 v142; // x0
  __int64 v143; // x1
  __int64 v144; // x2
  struct ClassBoardBackground_ExClassIconSet_array *v145; // x8
  ClassBoardBackground_ExClassIconSet_o *v146; // x8
  UnityEngine_GameObject_o *releaseEffect; // x0
  UnityEngine_GameObject_o *v148; // x0
  __int64 v149; // x1
  _BOOL8 IsPlayed; // x0
  __int64 v151; // x1
  __int64 v152; // x2
  struct ClassBoardBackground_ExClassIconSet_array *v153; // x8
  ClassBoardBackground_ExClassIconSet_o *v154; // x8
  UnityEngine_Object_o *animation; // x21
  _BOOL8 v156; // x0
  __int64 v157; // x1
  __int64 v158; // x2
  struct ClassBoardBackground_ExClassIconSet_array *v159; // x8
  ClassBoardBackground_ExClassIconSet_o *v160; // x8
  UnityEngine_Component_o *v161; // x0
  UnityEngine_GameObject_o *v162; // x0
  __int64 v163; // x1
  __int64 v164; // x0
  __int64 v165; // x1
  __int64 v166; // x2
  struct ClassBoardBackground_ExClassIconSet_array *v167; // x8
  ClassBoardBackground_ExClassIconSet_o *v168; // x8
  UnityEngine_Component_o *v169; // x0
  UnityEngine_GameObject_o *v170; // x0
  __int64 v171; // x1
  __int64 v172; // x0
  __int64 v173; // x1
  __int64 v174; // x2
  struct ClassBoardBackground_ExClassIconSet_array *v175; // x8
  ClassBoardBackground_ExClassIconSet_o *v176; // x8
  struct System_Collections_Generic_Dictionary_int__SimpleAnimation__o *exClassReleaseEffectAnimationDic; // x0
  int max_length; // w8
  unsigned int v179; // w20
  ClassBoardBackground_ExClassIconSet_o *v180; // x21
  __int64 v181; // [xsp+0h] [xbp-C0h]
  Il2CppObject *classId; // [xsp+8h] [xbp-B8h]
  int v184; // [xsp+18h] [xbp-A8h] BYREF
  int v185; // [xsp+1Ch] [xbp-A4h] BYREF
  __int128 v186[2]; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v187; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4B057E6 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_Renderer__TypeInfo, *(_QWORD *)&baseId);
    sub_1BC3008(&Method_BasicHelper_ForEach_Renderer___, v6);
    sub_1BC3008(&ClassBoardUtility_TypeInfo, v7);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__Add__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__SimpleAnimation___ctor__, v10);
    sub_1BC3008(&System_Collections_Generic_Dictionary_int__SimpleAnimation__TypeInfo, v11);
    sub_1BC3008(&Method_System_Linq_Enumerable_FirstOrDefault_Texture___, v12);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__, v13);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__, v14);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__get_Current__, v15);
    sub_1BC3008(&System_Func_Texture__bool__TypeInfo, v16);
    sub_1BC3008(&int_TypeInfo, v17);
    sub_1BC3008(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Key__, v18);
    sub_1BC3008(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Value__, v19);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v20);
    sub_1BC3008(&Method_ClassBoardBackground___c__DisplayClass55_0__SetClassIcon_b__0__, v21);
    sub_1BC3008(&Method_ClassBoardBackground___c__DisplayClass55_0__SetClassIcon_b__1__, v22);
    sub_1BC3008(&ClassBoardBackground___c__DisplayClass55_0_TypeInfo, v23);
    sub_1BC3008(&Method_ClassBoardBackground___c__DisplayClass55_1__SetClassIcon_b__2__, v24);
    sub_1BC3008(&Method_ClassBoardBackground___c__DisplayClass55_1__SetClassIcon_b__3__, v25);
    sub_1BC3008(&Method_ClassBoardBackground___c__DisplayClass55_1__SetClassIcon_b__4__, v26);
    sub_1BC3008(&ClassBoardBackground___c__DisplayClass55_1_TypeInfo, v27);
    sub_1BC3008(&StringLiteral_4446/*"ClassIconEx_off_{0}"*/, v28);
    sub_1BC3008(&StringLiteral_4447/*"ClassIconEx_on_{0}"*/, v29);
    sub_1BC3008(&StringLiteral_4445/*"ClassIconEx_ef_glow_{0}"*/, v30);
    byte_4B057E6 = 1;
  }
  memset(&v187, 0, 32);
  v31 = sub_1BC3254(ClassBoardBackground___c__DisplayClass55_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v31, 0LL);
  if ( !v31 )
    goto LABEL_162;
  *(_DWORD *)(v31 + 16) = iconId;
  *(_QWORD *)(v31 + 24) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v31 + 24), (int32_t)this, v34, v35);
  iconTextures = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.iconTextures;
  v37 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_Texture__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v37,
    (Il2CppObject *)v31,
    Method_ClassBoardBackground___c__DisplayClass55_0__SetClassIcon_b__0__,
    0LL);
  v38 = System_Linq_Enumerable__FirstOrDefault_object__50493748(
          iconTextures,
          (System_Func_TSource__bool__o *)v37,
          (const MethodInfo_3027934 *)Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
  *(_QWORD *)(v31 + 32) = v38;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v31 + 32), (int32_t)v38, v39, v40);
  v41 = *(UnityEngine_Object_o **)(v31 + 32);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v41, 0LL, 0LL) )
    return;
  iconRenderers = (System_Collections_Generic_IEnumerable_T__o *)this->fields.iconRenderers;
  v43 = (System_Action_object__o *)sub_1BC3254(System_Action_Renderer__TypeInfo);
  System_Action_object____ctor(
    v43,
    (Il2CppObject *)v31,
    Method_ClassBoardBackground___c__DisplayClass55_0__SetClassIcon_b__1__,
    0LL);
  BasicHelper__ForEach_object_(
    iconRenderers,
    (System_Action_T__o *)v43,
    (const MethodInfo_2FEDEFC *)Method_BasicHelper_ForEach_Renderer___);
  v44 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BC3254(System_Collections_Generic_Dictionary_int__SimpleAnimation__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v44,
    (const MethodInfo_3307B80 *)Method_System_Collections_Generic_Dictionary_int__SimpleAnimation___ctor__);
  this->fields.exClassReleaseEffectAnimationDic = (struct System_Collections_Generic_Dictionary_int__SimpleAnimation__o *)v44;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.exClassReleaseEffectAnimationDic, (int32_t)v44, v45, v46);
  exIconSet = this->fields.exIconSet;
  if ( !exIconSet )
LABEL_162:
    sub_1BC3264(offRenderer, v33);
  if ( !*(_QWORD *)&exIconSet->max_length )
    return;
  if ( (baseId & 0xFFFFFFFE) != 8 )
  {
    max_length = exIconSet->max_length;
    if ( max_length < 1 )
      return;
    v179 = 0;
    while ( 1 )
    {
      if ( v179 >= max_length )
        sub_1BC326C(offRenderer, v33, v47);
      v180 = exIconSet->m_Items[v179];
      if ( !v180 )
        break;
      offRenderer = (UnityEngine_Component_o *)v180->fields.offRenderer;
      if ( !offRenderer )
        break;
      offRenderer = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(offRenderer, 0LL);
      if ( !offRenderer )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)offRenderer, 0, 0LL);
      offRenderer = (UnityEngine_Component_o *)v180->fields.onRenderer;
      if ( !offRenderer )
        break;
      offRenderer = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(offRenderer, 0LL);
      if ( !offRenderer )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)offRenderer, 0, 0LL);
      offRenderer = (UnityEngine_Component_o *)v180->fields.releaseEffect;
      if ( !offRenderer )
        break;
      offRenderer = (UnityEngine_Component_o *)UnityEngine_GameObject__get_gameObject(
                                                 (UnityEngine_GameObject_o *)offRenderer,
                                                 0LL);
      if ( !offRenderer )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)offRenderer, 0, 0LL);
      max_length = exIconSet->max_length;
      if ( (int)++v179 >= max_length )
        return;
    }
    goto LABEL_162;
  }
  offRenderer = (UnityEngine_Component_o *)ClassBoardBackground__GetIconIdList(
                                             (ClassBoardBackground_o *)offRenderer,
                                             baseId,
                                             v47);
  if ( !offRenderer )
    goto LABEL_162;
  System_Collections_Generic_Dictionary_int__bool___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v186,
    (System_Collections_Generic_Dictionary_int__bool__o *)offRenderer,
    (const MethodInfo_32F9DA4 *)Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
  *(_OWORD *)&v187.fields._dictionary = v186[0];
  v187.fields._current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v186[1];
LABEL_12:
  while ( System_Collections_Generic_Dictionary_Enumerator_int__bool___MoveNext(
            &v187,
            (const MethodInfo_3457478 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__) )
  {
    key = v187.fields._current.fields.key;
    v50 = sub_1BC3254(ClassBoardBackground___c__DisplayClass55_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v50, 0LL);
    LODWORD(v186[0]) = (_DWORD)key;
    v54 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v186, v51, v52, v53);
    v55 = System_String__Format((System_String_o *)StringLiteral_4447/*"ClassIconEx_on_{0}"*/, v54, 0LL);
    if ( !v50 )
      sub_1BC3264(v55, v55);
    *(_QWORD *)(v50 + 24) = v55;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v50 + 24), (int32_t)v55, v56, v57);
    v185 = (int)key;
    v61 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v185, v58, v59, v60);
    v62 = System_String__Format((System_String_o *)StringLiteral_4446/*"ClassIconEx_off_{0}"*/, v61, 0LL);
    *(_QWORD *)(v50 + 16) = v62;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v50 + 16), (int32_t)v62, v63, v64);
    v184 = (int)key;
    v68 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v184, v65, v66, v67);
    classId = key;
    v69 = System_String__Format((System_String_o *)StringLiteral_4445/*"ClassIconEx_ef_glow_{0}"*/, v68, 0LL);
    *(_QWORD *)(v50 + 32) = v69;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v50 + 32), (int32_t)v69, v70, v71);
    v75 = this->fields.exIconSet;
    if ( !v75 )
LABEL_94:
      sub_1BC3264(v72, v73);
    v76 = 0;
    v77 = (System_Func_object__bool__o **)(v50 + 40);
    v78 = (System_Func_object__bool__o **)(v50 + 48);
    v79 = (System_Func_object__bool__o **)(v50 + 56);
    v181 = (unsigned __int64)classId & 0xFF00000000LL;
    while ( 1 )
    {
      v80 = v75->max_length;
      if ( (int)v76 >= (int)v80 )
        break;
      if ( v76 >= v80 )
        sub_1BC326C(v72, v73, v74);
      v81 = v75->m_Items[v76];
      if ( !v81 )
        sub_1BC3264(v72, v73);
      v82 = *v77;
      textures = (System_Collections_Generic_IEnumerable_TSource__o *)v81->fields.textures;
      if ( !*v77 )
      {
        v82 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_Texture__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v82,
          (Il2CppObject *)v50,
          Method_ClassBoardBackground___c__DisplayClass55_1__SetClassIcon_b__2__,
          0LL);
        *v77 = v82;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v50 + 40), (int32_t)v82, v84, v85);
      }
      v86 = System_Linq_Enumerable__FirstOrDefault_object__50493748(
              textures,
              (System_Func_TSource__bool__o *)v82,
              (const MethodInfo_3027934 *)Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
      v87 = *v78;
      v88 = (UnityEngine_Object_o *)v86;
      if ( !*v78 )
      {
        v87 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_Texture__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v87,
          (Il2CppObject *)v50,
          Method_ClassBoardBackground___c__DisplayClass55_1__SetClassIcon_b__3__,
          0LL);
        *v78 = v87;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v50 + 48), (int32_t)v87, v89, v90);
      }
      v91 = System_Linq_Enumerable__FirstOrDefault_object__50493748(
              textures,
              (System_Func_TSource__bool__o *)v87,
              (const MethodInfo_3027934 *)Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
      v92 = *v79;
      v93 = (UnityEngine_Object_o *)v91;
      if ( !*v79 )
      {
        v92 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_Texture__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v92,
          (Il2CppObject *)v50,
          Method_ClassBoardBackground___c__DisplayClass55_1__SetClassIcon_b__4__,
          0LL);
        *v79 = v92;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v50 + 56), (int32_t)v92, v94, v95);
      }
      v96 = System_Linq_Enumerable__FirstOrDefault_object__50493748(
              textures,
              (System_Func_TSource__bool__o *)v92,
              (const MethodInfo_3027934 *)Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v72 = UnityEngine_Object__op_Inequality(v93, 0LL, 0LL);
      if ( v72 )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v72 = UnityEngine_Object__op_Inequality(v88, 0LL, 0LL);
        if ( v72 )
        {
          v97 = this->fields.exIconSet;
          if ( !v97 )
            sub_1BC3264(v72, v73);
          if ( v76 >= v97->max_length )
            sub_1BC326C(v72, v73, v74);
          v98 = v97->m_Items[v76];
          if ( !v98 )
            sub_1BC3264(v72, v73);
          v99 = v98->fields.offRenderer;
          if ( !v99 )
            sub_1BC3264(0LL, v73);
          material = UnityEngine_Renderer__get_material(v99, 0LL);
          if ( !material )
            sub_1BC3264(0LL, v101);
          UnityEngine_Material__SetTexture(
            material,
            this->fields.iconMaterialPropertyName,
            (UnityEngine_Texture_o *)v88,
            0LL);
          v105 = this->fields.exIconSet;
          if ( !v105 )
            sub_1BC3264(v102, v103);
          if ( v76 >= v105->max_length )
            sub_1BC326C(v102, v103, v104);
          v106 = v105->m_Items[v76];
          if ( !v106 )
            sub_1BC3264(v102, v103);
          effectRenderer = v106->fields.effectRenderer;
          if ( !effectRenderer )
            sub_1BC3264(0LL, v103);
          v108 = UnityEngine_Renderer__get_material(effectRenderer, 0LL);
          if ( !v108 )
            sub_1BC3264(0LL, v109);
          UnityEngine_Material__SetTexture(
            v108,
            this->fields.iconMaterialPropertyName,
            (UnityEngine_Texture_o *)v88,
            0LL);
          v113 = this->fields.exIconSet;
          if ( !v113 )
            sub_1BC3264(v110, v111);
          if ( v76 >= v113->max_length )
            sub_1BC326C(v110, v111, v112);
          v114 = v113->m_Items[v76];
          if ( !v114 )
            sub_1BC3264(v110, v111);
          onRenderer = v114->fields.onRenderer;
          if ( !onRenderer )
            sub_1BC3264(0LL, v111);
          v116 = UnityEngine_Renderer__get_material(onRenderer, 0LL);
          if ( !v116 )
            sub_1BC3264(0LL, v117);
          UnityEngine_Material__SetTexture(
            v116,
            this->fields.iconMaterialPropertyName,
            (UnityEngine_Texture_o *)v93,
            0LL);
          v121 = this->fields.exIconSet;
          if ( !v121 )
            sub_1BC3264(v118, v119);
          if ( v76 >= v121->max_length )
            sub_1BC326C(v118, v119, v120);
          v122 = v121->m_Items[v76];
          if ( !v122 )
            sub_1BC3264(v118, v119);
          effectGlowRenderer = v122->fields.effectGlowRenderer;
          if ( !effectGlowRenderer )
            sub_1BC3264(0LL, v119);
          v124 = UnityEngine_Renderer__get_material(effectGlowRenderer, 0LL);
          if ( !v124 )
            sub_1BC3264(0LL, v125);
          UnityEngine_Material__SetTexture(
            v124,
            this->fields.iconMaterialPropertyName,
            (UnityEngine_Texture_o *)v96,
            0LL);
          v129 = this->fields.exIconSet;
          if ( !v129 )
            sub_1BC3264(v126, v127);
          if ( v76 >= v129->max_length )
            sub_1BC326C(v126, v127, v128);
          v130 = v129->m_Items[v76];
          if ( !v130 )
            sub_1BC3264(v126, v127);
          v131 = (UnityEngine_Component_o *)v130->fields.offRenderer;
          if ( !v131 )
            sub_1BC3264(0LL, v127);
          gameObject = UnityEngine_Component__get_gameObject(v131, 0LL);
          if ( !gameObject )
            sub_1BC3264(0LL, v133);
          UnityEngine_GameObject__SetActive(gameObject, v181 == 0, 0LL);
          v137 = this->fields.exIconSet;
          if ( !v137 )
            sub_1BC3264(v134, v135);
          if ( v76 >= v137->max_length )
            sub_1BC326C(v134, v135, v136);
          v138 = v137->m_Items[v76];
          if ( !v138 )
            sub_1BC3264(v134, v135);
          v139 = (UnityEngine_Component_o *)v138->fields.onRenderer;
          if ( !v139 )
            sub_1BC3264(0LL, v135);
          v140 = UnityEngine_Component__get_gameObject(v139, 0LL);
          if ( !v140 )
            sub_1BC3264(0LL, v141);
          UnityEngine_GameObject__SetActive(v140, v181 != 0, 0LL);
          v145 = this->fields.exIconSet;
          if ( !v145 )
            sub_1BC3264(v142, v143);
          if ( v76 >= v145->max_length )
            sub_1BC326C(v142, v143, v144);
          v146 = v145->m_Items[v76];
          if ( !v146 )
            sub_1BC3264(v142, v143);
          releaseEffect = v146->fields.releaseEffect;
          if ( !releaseEffect )
            sub_1BC3264(0LL, v143);
          v148 = UnityEngine_GameObject__get_gameObject(releaseEffect, 0LL);
          if ( !v148 )
            sub_1BC3264(0LL, v149);
          UnityEngine_GameObject__SetActive(v148, 0, 0LL);
          if ( v181 )
          {
            if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
            IsPlayed = ClassBoardUtility__IsPlayedExClassReleaseEffect((int32_t)classId, 0LL);
            if ( !IsPlayed )
            {
              v153 = this->fields.exIconSet;
              if ( !v153 )
                sub_1BC3264(IsPlayed, v151);
              if ( v76 >= v153->max_length )
                sub_1BC326C(IsPlayed, v151, v152);
              v154 = v153->m_Items[v76];
              if ( !v154 )
                sub_1BC3264(IsPlayed, v151);
              animation = (UnityEngine_Object_o *)v154->fields.animation;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              v156 = UnityEngine_Object__op_Inequality(animation, 0LL, 0LL);
              if ( v156 )
              {
                v159 = this->fields.exIconSet;
                if ( !v159 )
                  sub_1BC3264(v156, v157);
                if ( v76 >= v159->max_length )
                  sub_1BC326C(v156, v157, v158);
                v160 = v159->m_Items[v76];
                if ( !v160 )
                  sub_1BC3264(v156, v157);
                v161 = (UnityEngine_Component_o *)v160->fields.offRenderer;
                if ( !v161 )
                  sub_1BC3264(0LL, v157);
                v162 = UnityEngine_Component__get_gameObject(v161, 0LL);
                if ( !v162 )
                  sub_1BC3264(0LL, v163);
                UnityEngine_GameObject__SetActive(v162, 1, 0LL);
                v167 = this->fields.exIconSet;
                if ( !v167 )
                  sub_1BC3264(v164, v165);
                if ( v76 >= v167->max_length )
                  sub_1BC326C(v164, v165, v166);
                v168 = v167->m_Items[v76];
                if ( !v168 )
                  sub_1BC3264(v164, v165);
                v169 = (UnityEngine_Component_o *)v168->fields.onRenderer;
                if ( !v169 )
                  sub_1BC3264(0LL, v165);
                v170 = UnityEngine_Component__get_gameObject(v169, 0LL);
                if ( !v170 )
                  sub_1BC3264(0LL, v171);
                UnityEngine_GameObject__SetActive(v170, 0, 0LL);
                v175 = this->fields.exIconSet;
                if ( !v175 )
                  sub_1BC3264(v172, v173);
                if ( v76 >= v175->max_length )
                  sub_1BC326C(v172, v173, v174);
                v176 = v175->m_Items[v76];
                if ( !v176 )
                  sub_1BC3264(v172, v173);
                exClassReleaseEffectAnimationDic = this->fields.exClassReleaseEffectAnimationDic;
                if ( !exClassReleaseEffectAnimationDic )
                  sub_1BC3264(0LL, classId);
                System_Collections_Generic_Dictionary_int__object___Add(
                  (System_Collections_Generic_Dictionary_int__object__o *)exClassReleaseEffectAnimationDic,
                  (int32_t)classId,
                  (Il2CppObject *)v176->fields.animation,
                  (const MethodInfo_3308554 *)Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__Add__);
              }
            }
          }
          goto LABEL_12;
        }
      }
      ++v76;
      v75 = this->fields.exIconSet;
      if ( !v75 )
        goto LABEL_94;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__bool___Dispose(
    &v187,
    (const MethodInfo_3457580 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardBackground__SetGrandClassIcon(
        ClassBoardBackground_o *this,
        int32_t iconId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x20
  __int64 v13; // x0
  __int64 v14; // x1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Collections_Generic_IEnumerable_TSource__o *grandIconTextures; // x21
  System_Func_object__bool__o *v18; // x22
  Il2CppObject *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  UnityEngine_Object_o *v22; // x21
  System_Collections_Generic_IEnumerable_T__o *grandIconRenderers; // x19
  System_Action_object__o *v24; // x21

  if ( (byte_4B057E7 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_Renderer__TypeInfo, *(_QWORD *)&iconId);
    sub_1BC3008(&Method_BasicHelper_ForEach_Renderer___, v5);
    sub_1BC3008(&Method_System_Linq_Enumerable_FirstOrDefault_Texture___, v6);
    sub_1BC3008(&System_Func_Texture__bool__TypeInfo, v7);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v8);
    sub_1BC3008(&Method_ClassBoardBackground___c__DisplayClass56_0__SetGrandClassIcon_b__0__, v9);
    sub_1BC3008(&Method_ClassBoardBackground___c__DisplayClass56_0__SetGrandClassIcon_b__1__, v10);
    sub_1BC3008(&ClassBoardBackground___c__DisplayClass56_0_TypeInfo, v11);
    byte_4B057E7 = 1;
  }
  v12 = sub_1BC3254(ClassBoardBackground___c__DisplayClass56_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    sub_1BC3264(v13, v14);
  *(_DWORD *)(v12 + 16) = iconId;
  *(_QWORD *)(v12 + 24) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v12 + 24), (int32_t)this, v15, v16);
  grandIconTextures = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.grandIconTextures;
  v18 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_Texture__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v18,
    (Il2CppObject *)v12,
    Method_ClassBoardBackground___c__DisplayClass56_0__SetGrandClassIcon_b__0__,
    0LL);
  v19 = System_Linq_Enumerable__FirstOrDefault_object__50493748(
          grandIconTextures,
          (System_Func_TSource__bool__o *)v18,
          (const MethodInfo_3027934 *)Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
  *(_QWORD *)(v12 + 32) = v19;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v12 + 32), (int32_t)v19, v20, v21);
  v22 = *(UnityEngine_Object_o **)(v12 + 32);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v22, 0LL, 0LL) )
  {
    grandIconRenderers = (System_Collections_Generic_IEnumerable_T__o *)this->fields.grandIconRenderers;
    v24 = (System_Action_object__o *)sub_1BC3254(System_Action_Renderer__TypeInfo);
    System_Action_object____ctor(
      v24,
      (Il2CppObject *)v12,
      Method_ClassBoardBackground___c__DisplayClass56_0__SetGrandClassIcon_b__1__,
      0LL);
    BasicHelper__ForEach_object_(
      grandIconRenderers,
      (System_Action_T__o *)v24,
      (const MethodInfo_2FEDEFC *)Method_BasicHelper_ForEach_Renderer___);
  }
}


void __fastcall ClassBoardBackground__SetShowBoardCallback(
        ClassBoardBackground_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.showBoardCallback = callback;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.showBoardCallback, (int32_t)callback, (int32_t)method, v3);
}


void __fastcall ClassBoardBackground__SkipStartMainEffectPlayer(ClassBoardBackground_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  ClassBoardEffectPlayer_o *skipMainEffectPlayer; // x0
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  Il2CppObject *v11; // x0
  System_String_o *v12; // x0
  SimpleAnimation_o *mainAnimation; // x20
  System_String_o *v14; // x21
  System_Action_o *v15; // x22
  const MethodInfo *v16; // x5
  int32_t Data_int; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B057EC & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&Method_ClassBoardBackground__SkipStartMainEffectPlayer_b__61_0__, v3);
    sub_1BC3008(&Method_ClassBoardEffectPlayer_GetData_int___, v4);
    sub_1BC3008(&int_TypeInfo, v5);
    sub_1BC3008(&StringLiteral_8792/*"MainTransition{0}"*/, v6);
    byte_4B057EC = 1;
  }
  skipMainEffectPlayer = this->fields.skipMainEffectPlayer;
  if ( !skipMainEffectPlayer )
    sub_1BC3264(0LL, method);
  Data_int = ClassBoardEffectPlayer__GetData_int_(
               skipMainEffectPlayer,
               (const MethodInfo_2FF56B0 *)Method_ClassBoardEffectPlayer_GetData_int___);
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Data_int, v8, v9, v10);
  v12 = System_String__Format((System_String_o *)StringLiteral_8792/*"MainTransition{0}"*/, v11, 0LL);
  mainAnimation = this->fields.mainAnimation;
  v14 = v12;
  v15 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_ClassBoardBackground__SkipStartMainEffectPlayer_b__61_0__, 0LL);
  ClassBoardBackground__ForceSkipSimpleAnimation(this, mainAnimation, v14, v15, 0, v16);
}


void __fastcall ClassBoardBackground__UseClassBoardSelectViewCamera(
        ClassBoardBackground_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ClassBoardBackground__ChangeCamera(this, this->fields.classBoardSelectViewCamera, v2);
}


void __fastcall ClassBoardBackground__UseClassBoardViewCamera(ClassBoardBackground_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ClassBoardBackground__ChangeCamera(this, this->fields.classBoardViewCamera, v2);
}


void __fastcall ClassBoardBackground__Validation(ClassBoardBackground_o *this, const MethodInfo *method)
{
  ;
}


System_Collections_IEnumerator_o *__fastcall ClassBoardBackground__WaitAnimationFinished(
        ClassBoardBackground_o *this,
        SimpleAnimation_o *anim,
        System_String_o *name,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  __int64 v8; // x22
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4B057F0 & 1) == 0 )
  {
    sub_1BC3008(&ClassBoardBackground__WaitAnimationFinished_d__66_TypeInfo, anim);
    byte_4B057F0 = 1;
  }
  v8 = sub_1BC3254(ClassBoardBackground__WaitAnimationFinished_d__66_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  *(_DWORD *)(v8 + 16) = 0;
  *(_QWORD *)(v8 + 32) = anim;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v8 + 32), (int32_t)anim, v9, v10);
  *(_QWORD *)(v8 + 40) = name;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v8 + 40), (int32_t)name, v11, v12);
  *(_QWORD *)(v8 + 48) = endCallback;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v8 + 48), (int32_t)endCallback, v13, v14);
  return (System_Collections_IEnumerator_o *)v8;
}


void __fastcall ClassBoardBackground___PlayStartExClassReleaseEffectPlayer_b__63_0(
        ClassBoardBackground_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_int__object__o *v5; // x0
  CGThumbnailListItem_o *p_exClassReleaseEffectAnimationDic; // x19
  struct System_Collections_Generic_Dictionary_int__SimpleAnimation__o *exClassReleaseEffectAnimationDic; // t1
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  System_Int32_array *v9; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4B057F3 & 1) == 0 )
  {
    sub_1BC3008(&ClassBoardUtility_TypeInfo, method);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__get_Keys__, v3);
    sub_1BC3008(&Method_System_Linq_Enumerable_ToArray_int___, v4);
    byte_4B057F3 = 1;
  }
  exClassReleaseEffectAnimationDic = this->fields.exClassReleaseEffectAnimationDic;
  p_exClassReleaseEffectAnimationDic = (CGThumbnailListItem_o *)&this->fields.exClassReleaseEffectAnimationDic;
  v5 = (System_Collections_Generic_Dictionary_int__object__o *)exClassReleaseEffectAnimationDic;
  if ( !exClassReleaseEffectAnimationDic )
    sub_1BC3264(0LL, method);
  Keys = System_Collections_Generic_Dictionary_int__object___get_Keys(
           v5,
           (const MethodInfo_3308214 *)Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__get_Keys__);
  v9 = System_Linq_Enumerable__ToArray_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
         (const MethodInfo_303E3B4 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
  ClassBoardUtility__SavePlayedExClassReleaseEffect(v9, 0LL);
  p_exClassReleaseEffectAnimationDic->klass = 0LL;
  sub_1BC2FAC(p_exClassReleaseEffectAnimationDic, 0, v10, v11);
}


void __fastcall ClassBoardBackground___PlayStartMainEffectPlayer_b__60_0(
        ClassBoardBackground_o *this,
        const MethodInfo *method)
{
  ClassBoardEffectPlayer_o *startMainEffectPlayer; // x0

  startMainEffectPlayer = this->fields.startMainEffectPlayer;
  if ( !startMainEffectPlayer )
    sub_1BC3264(0LL, method);
  ClassBoardEffectPlayer__End(startMainEffectPlayer, 0LL);
}


void __fastcall ClassBoardBackground___SkipStartMainEffectPlayer_b__61_0(
        ClassBoardBackground_o *this,
        const MethodInfo *method)
{
  ClassBoardEffectPlayer_o *skipMainEffectPlayer; // x0

  skipMainEffectPlayer = this->fields.skipMainEffectPlayer;
  if ( !skipMainEffectPlayer )
    sub_1BC3264(0LL, method);
  ClassBoardEffectPlayer__End(skipMainEffectPlayer, 0LL);
}


ClassBoardEffectPlayer_o *__fastcall ClassBoardBackground__get_SkipMainEffectPlayer(
        ClassBoardBackground_o *this,
        const MethodInfo *method)
{
  return this->fields.skipMainEffectPlayer;
}


ClassBoardEffectPlayer_o *__fastcall ClassBoardBackground__get_StartMainEffectPlayer(
        ClassBoardBackground_o *this,
        const MethodInfo *method)
{
  return this->fields.startMainEffectPlayer;
}


void __fastcall ClassBoardBackground_ExClassIconSet___ctor(
        ClassBoardBackground_ExClassIconSet_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ClassBoardBackground__PlayExClassReleaseEffectPlayer_d__62___ctor(
        ClassBoardBackground__PlayExClassReleaseEffectPlayer_d__62_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall ClassBoardBackground__PlayExClassReleaseEffectPlayer_d__62__MoveNext(
        ClassBoardBackground__PlayExClassReleaseEffectPlayer_d__62_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  struct ClassBoardBackground_o *_4__this; // x0
  float exClassReleaseEffectStartSec; // s8
  UnityEngine_WaitForSeconds_o *v6; // x20
  Il2CppObject **p__2__current; // x19
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  bool result; // w0

  if ( (byte_4B057F8 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_WaitForSeconds_TypeInfo, method);
    byte_4B057F8 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_10;
    ClassBoardBackground__PlayStartExClassReleaseEffectPlayer(_4__this, method);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    if ( _4__this )
    {
      exClassReleaseEffectStartSec = _4__this->fields.exClassReleaseEffectStartSec;
      v6 = (UnityEngine_WaitForSeconds_o *)sub_1BC3254(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v6, exClassReleaseEffectStartSec, 0LL);
      this->fields.__2__current = (Il2CppObject *)v6;
      p__2__current = &this->fields.__2__current;
      sub_1BC2FAC((CGThumbnailListItem_o *)p__2__current, (int32_t)v6, v8, v9);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
LABEL_10:
    sub_1BC3264(_4__this, method);
  }
  return 0;
}


Il2CppObject *__fastcall ClassBoardBackground__PlayExClassReleaseEffectPlayer_d__62__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ClassBoardBackground__PlayExClassReleaseEffectPlayer_d__62_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn ClassBoardBackground__PlayExClassReleaseEffectPlayer_d__62__System_Collections_IEnumerator_Reset(
        ClassBoardBackground__PlayExClassReleaseEffectPlayer_d__62_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BC301C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BC3254(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BC301C(&Method_ClassBoardBackground__PlayExClassReleaseEffectPlayer_d__62_System_Collections_IEnumerator_Reset__);
  sub_1BC3130(v3, v4);
}


Il2CppObject *__fastcall ClassBoardBackground__PlayExClassReleaseEffectPlayer_d__62__System_Collections_IEnumerator_get_Current(
        ClassBoardBackground__PlayExClassReleaseEffectPlayer_d__62_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall ClassBoardBackground__PlayExClassReleaseEffectPlayer_d__62__System_IDisposable_Dispose(
        ClassBoardBackground__PlayExClassReleaseEffectPlayer_d__62_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall ClassBoardBackground__WaitAnimationFinished_d__66___ctor(
        ClassBoardBackground__WaitAnimationFinished_d__66_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall ClassBoardBackground__WaitAnimationFinished_d__66__MoveNext(
        ClassBoardBackground__WaitAnimationFinished_d__66_o *this,
        const MethodInfo *method)
{
  SimpleAnimation_o *anim; // x0
  SimpleAnimation_State_o *State; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v6; // x20
  __int64 v7; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 p_method; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  bool result; // w0
  Il2CppObject **p__2__current; // x19

  if ( (byte_4B057F9 & 1) == 0 )
  {
    sub_1BC3008(&SimpleAnimation_State_TypeInfo, method);
    byte_4B057F9 = 1;
  }
  if ( this->fields.__1__state > 1u )
    return 0;
  anim = this->fields.anim;
  this->fields.__1__state = -1;
  if ( !anim )
    sub_1BC3264(0LL, method);
  State = SimpleAnimation__GetState(anim, this->fields.name, 0LL);
  if ( !State )
    goto LABEL_13;
  klass = State->klass;
  v6 = State;
  v7 = *(unsigned __int16 *)(&State->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&State->klass->_2.bitflags2 + 3) )
  {
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v7;
      p_offset += 2;
      if ( !v7 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 5].method;
  }
  else
  {
LABEL_10:
    p_method = sub_1C13570(State, SimpleAnimation_State_TypeInfo, 5LL);
  }
  if ( (*(float (__fastcall **)(SimpleAnimation_State_o *, _QWORD))p_method)(v6, *(_QWORD *)(p_method + 8)) >= 1.0 )
  {
LABEL_13:
    ActionExtensions__Call(this->fields.endCallback, 0LL);
    return 0;
  }
  this->fields.__2__current = 0LL;
  p__2__current = &this->fields.__2__current;
  sub_1BC2FAC((CGThumbnailListItem_o *)p__2__current, 0, v10, v11);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *__fastcall ClassBoardBackground__WaitAnimationFinished_d__66__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ClassBoardBackground__WaitAnimationFinished_d__66_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn ClassBoardBackground__WaitAnimationFinished_d__66__System_Collections_IEnumerator_Reset(
        ClassBoardBackground__WaitAnimationFinished_d__66_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BC301C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BC3254(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BC301C(&Method_ClassBoardBackground__WaitAnimationFinished_d__66_System_Collections_IEnumerator_Reset__);
  sub_1BC3130(v3, v4);
}


Il2CppObject *__fastcall ClassBoardBackground__WaitAnimationFinished_d__66__System_Collections_IEnumerator_get_Current(
        ClassBoardBackground__WaitAnimationFinished_d__66_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall ClassBoardBackground__WaitAnimationFinished_d__66__System_IDisposable_Dispose(
        ClassBoardBackground__WaitAnimationFinished_d__66_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall ClassBoardBackground___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B057F4 & 1) == 0 )
  {
    sub_1BC3008(&ClassBoardBackground___c_TypeInfo, v1);
    byte_4B057F4 = 1;
  }
  v2 = (Il2CppObject *)sub_1BC3254(ClassBoardBackground___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ClassBoardBackground___c_TypeInfo->static_fields->__9 = (struct ClassBoardBackground___c_o *)v2;
  sub_1BC2FAC((CGThumbnailListItem_o *)ClassBoardBackground___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall ClassBoardBackground___c___ctor(ClassBoardBackground___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ClassBoardBackground___c___GetIconIdList_b__57_0(
        ClassBoardBackground___c_o *this,
        ClassBoardClassEntity_o *a,
        ClassBoardClassEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1BC3264(this, a);
  return a->fields.classId - b->fields.classId;
}


void __fastcall ClassBoardBackground___c___OnDestroy_b__59_0(
        ClassBoardBackground___c_o *this,
        UnityEngine_Renderer_o *x,
        const MethodInfo *method)
{
  UnityEngine_Object_o *material; // x19

  if ( (byte_4B057F5 & 1) == 0 )
  {
    this = (ClassBoardBackground___c_o *)sub_1BC3008(&UnityEngine_Object_TypeInfo, x);
    byte_4B057F5 = 1;
  }
  if ( !x )
    sub_1BC3264(this, x);
  material = (UnityEngine_Object_o *)UnityEngine_Renderer__get_material(x, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_70034300(material, 0LL);
}


void __fastcall ClassBoardBackground___c___PlayStartExClassReleaseEffectPlayer_b__63_1(
        ClassBoardBackground___c_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall ClassBoardBackground___c__DisplayClass55_0___ctor(
        ClassBoardBackground___c__DisplayClass55_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ClassBoardBackground___c__DisplayClass55_0___SetClassIcon_b__0(
        ClassBoardBackground___c__DisplayClass55_0_o *this,
        UnityEngine_Texture_o *x,
        const MethodInfo *method)
{
  ClassBoardBackground___c__DisplayClass55_0_o *v4; // x19
  __int64 v5; // x1
  System_String_o *name; // x20
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  Il2CppObject *v10; // x0
  System_String_o *v11; // x0
  int32_t iconId; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_4B057F6 & 1) == 0 )
  {
    sub_1BC3008(&int_TypeInfo, x);
    this = (ClassBoardBackground___c__DisplayClass55_0_o *)sub_1BC3008(&StringLiteral_4449/*"ClassIcon{0}"*/, v5);
    byte_4B057F6 = 1;
  }
  if ( !x )
    sub_1BC3264(this, x);
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)x, 0LL);
  iconId = v4->fields.iconId;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId, v7, v8, v9);
  v11 = System_String__Format((System_String_o *)StringLiteral_4449/*"ClassIcon{0}"*/, v10, 0LL);
  return System_String__op_Equality(name, v11, 0LL);
}


void __fastcall ClassBoardBackground___c__DisplayClass55_0___SetClassIcon_b__1(
        ClassBoardBackground___c__DisplayClass55_0_o *this,
        UnityEngine_Renderer_o *x,
        const MethodInfo *method)
{
  ClassBoardBackground___c__DisplayClass55_0_o *v3; // x19
  struct ClassBoardBackground_o *_4__this; // x8

  if ( !x
    || (v3 = this,
        this = (ClassBoardBackground___c__DisplayClass55_0_o *)UnityEngine_Renderer__get_material(x, 0LL),
        (_4__this = v3->fields.__4__this) == 0LL)
    || !this )
  {
    sub_1BC3264(this, x);
  }
  UnityEngine_Material__SetTexture(
    (UnityEngine_Material_o *)this,
    _4__this->fields.iconMaterialPropertyName,
    v3->fields.iconTex,
    0LL);
}


void __fastcall ClassBoardBackground___c__DisplayClass55_1___ctor(
        ClassBoardBackground___c__DisplayClass55_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ClassBoardBackground___c__DisplayClass55_1___SetClassIcon_b__2(
        ClassBoardBackground___c__DisplayClass55_1_o *this,
        UnityEngine_Texture_o *x,
        const MethodInfo *method)
{
  System_String_o *name; // x0

  if ( !x )
    sub_1BC3264(this, 0LL);
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)x, 0LL);
  return System_String__op_Equality(name, this->fields.offIconName, 0LL);
}


bool __fastcall ClassBoardBackground___c__DisplayClass55_1___SetClassIcon_b__3(
        ClassBoardBackground___c__DisplayClass55_1_o *this,
        UnityEngine_Texture_o *x,
        const MethodInfo *method)
{
  System_String_o *name; // x0

  if ( !x )
    sub_1BC3264(this, 0LL);
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)x, 0LL);
  return System_String__op_Equality(name, this->fields.onIconName, 0LL);
}


bool __fastcall ClassBoardBackground___c__DisplayClass55_1___SetClassIcon_b__4(
        ClassBoardBackground___c__DisplayClass55_1_o *this,
        UnityEngine_Texture_o *x,
        const MethodInfo *method)
{
  System_String_o *name; // x0

  if ( !x )
    sub_1BC3264(this, 0LL);
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)x, 0LL);
  return System_String__op_Equality(name, this->fields.glowIconName, 0LL);
}


void __fastcall ClassBoardBackground___c__DisplayClass56_0___ctor(
        ClassBoardBackground___c__DisplayClass56_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ClassBoardBackground___c__DisplayClass56_0___SetGrandClassIcon_b__0(
        ClassBoardBackground___c__DisplayClass56_0_o *this,
        UnityEngine_Texture_o *x,
        const MethodInfo *method)
{
  ClassBoardBackground___c__DisplayClass56_0_o *v4; // x19
  __int64 v5; // x1
  System_String_o *name; // x20
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  Il2CppObject *v10; // x0
  System_String_o *v11; // x0
  int32_t iconId; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_4B057F7 & 1) == 0 )
  {
    sub_1BC3008(&int_TypeInfo, x);
    this = (ClassBoardBackground___c__DisplayClass56_0_o *)sub_1BC3008(&StringLiteral_7075/*"GrandClassIcon{0}"*/, v5);
    byte_4B057F7 = 1;
  }
  if ( !x )
    sub_1BC3264(this, x);
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)x, 0LL);
  iconId = v4->fields.iconId;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId, v7, v8, v9);
  v11 = System_String__Format((System_String_o *)StringLiteral_7075/*"GrandClassIcon{0}"*/, v10, 0LL);
  return System_String__op_Equality(name, v11, 0LL);
}


void __fastcall ClassBoardBackground___c__DisplayClass56_0___SetGrandClassIcon_b__1(
        ClassBoardBackground___c__DisplayClass56_0_o *this,
        UnityEngine_Renderer_o *x,
        const MethodInfo *method)
{
  ClassBoardBackground___c__DisplayClass56_0_o *v3; // x19
  struct ClassBoardBackground_o *_4__this; // x8

  if ( !x
    || (v3 = this,
        this = (ClassBoardBackground___c__DisplayClass56_0_o *)UnityEngine_Renderer__get_material(x, 0LL),
        (_4__this = v3->fields.__4__this) == 0LL)
    || !this )
  {
    sub_1BC3264(this, x);
  }
  UnityEngine_Material__SetTexture(
    (UnityEngine_Material_o *)this,
    _4__this->fields.iconMaterialPropertyName,
    v3->fields.iconTex,
    0LL);
}