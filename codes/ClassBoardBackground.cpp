void ClassBoardBackground___ctor(ClassBoardBackground_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1

  if ( (byte_4C3B340 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_16262/*"_MainTex"*/);
    byte_4C3B340 = 1;
  }
  v5 = StringLiteral_16262/*"_MainTex"*/;
  this->fields.iconMaterialPropertyName = (struct System_String_o *)StringLiteral_16262/*"_MainTex"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.iconMaterialPropertyName, v5, v2, v3);
  *(_OWORD *)&this->fields.classScorePosXMax = xmmword_C0DCA0;
  this->fields.classScoreTweenStartDelay = 1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ClassBoardBackground__ActivateEarthAccessories(ClassBoardBackground_o *this, bool value, const MethodInfo *method)
{
  UnityEngine_GameObject_o *earthAccessoriesObject; // x0

  earthAccessoriesObject = this->fields.earthAccessoriesObject;
  if ( !earthAccessoriesObject )
    sub_1C32E7C(0);
  UnityEngine_GameObject__SetActive(earthAccessoriesObject, value, 0);
}


void ClassBoardBackground__Awake(ClassBoardBackground_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x0
  System_String_o *name; // x20
  ClassBoardEffectPlayer_o *v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct ClassBoardEffectPlayer_o *startMainEffectPlayer; // x20
  System_Action_o *v9; // x21
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_String_o *v12; // x20
  ClassBoardEffectPlayer_o *v13; // x21
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct ClassBoardEffectPlayer_o *skipMainEffectPlayer; // x20
  System_Action_o *v17; // x21
  int32_t v18; // w2
  const MethodInfo *v19; // x3

  if ( (byte_4C3B32B & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_ClassBoardBackground_PlayStartMainEffectPlayer__);
    sub_1C32C20(&Method_ClassBoardBackground_SkipStartMainEffectPlayer__);
    sub_1C32C20(&ClassBoardEffectPlayer_TypeInfo);
    byte_4C3B32B = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_8;
  name = UnityEngine_Object__get_name(gameObject, 0);
  v5 = (ClassBoardEffectPlayer_o *)sub_1C32E6C(ClassBoardEffectPlayer_TypeInfo);
  ClassBoardEffectPlayer___ctor_47816920(v5, name, 0);
  this->fields.startMainEffectPlayer = v5;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.startMainEffectPlayer, (int32_t)v5, v6, v7);
  startMainEffectPlayer = this->fields.startMainEffectPlayer;
  v9 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_ClassBoardBackground_PlayStartMainEffectPlayer__, 0);
  if ( !startMainEffectPlayer )
    goto LABEL_8;
  startMainEffectPlayer->fields.playCallback = v9;
  sub_1C32BC4((CGThumbnailListItem_o *)&startMainEffectPlayer->fields.playCallback, (int32_t)v9, v10, v11);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_8;
  v12 = UnityEngine_Object__get_name(gameObject, 0);
  v13 = (ClassBoardEffectPlayer_o *)sub_1C32E6C(ClassBoardEffectPlayer_TypeInfo);
  ClassBoardEffectPlayer___ctor_47816920(v13, v12, 0);
  this->fields.skipMainEffectPlayer = v13;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.skipMainEffectPlayer, (int32_t)v13, v14, v15);
  skipMainEffectPlayer = this->fields.skipMainEffectPlayer;
  v17 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_ClassBoardBackground_SkipStartMainEffectPlayer__, 0);
  if ( !skipMainEffectPlayer )
LABEL_8:
    sub_1C32E7C(gameObject);
  skipMainEffectPlayer->fields.playCallback = v17;
  sub_1C32BC4((CGThumbnailListItem_o *)&skipMainEffectPlayer->fields.playCallback, (int32_t)v17, v18, v19);
}


void ClassBoardBackground__CallAnimationEventBoardParent(ClassBoardBackground_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *boardParentAnimation; // x20
  UnityEngine_Object_o *boardParentAnimationClip; // x20
  UnityEngine_Object_o *name; // x0
  SimpleAnimation_o *v6; // x19

  if ( (byte_4C3B33F & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3B33F = 1;
  }
  boardParentAnimation = (UnityEngine_Object_o *)this->fields.boardParentAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(boardParentAnimation, 0, 0) )
  {
    boardParentAnimationClip = (UnityEngine_Object_o *)this->fields.boardParentAnimationClip;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(boardParentAnimationClip, 0, 0) )
    {
      name = (UnityEngine_Object_o *)this->fields.boardParentAnimationClip;
      if ( !name
        || (v6 = this->fields.boardParentAnimation,
            name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0),
            !v6) )
      {
        sub_1C32E7C(name);
      }
      SimpleAnimation__Play_66464300(v6, (System_String_o *)name, 0);
    }
  }
}


void ClassBoardBackground__CallAnimationEventShowBoard(ClassBoardBackground_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  ActionExtensions__Call(this->fields.showBoardCallback, 0);
  this->fields.showBoardCallback = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.showBoardCallback, 0, v3, v4);
}


void ClassBoardBackground__ChangeCamera(
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

  if ( (byte_4C3B32C & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3B32C = 1;
  }
  classBoardViewCamera = this->fields.classBoardViewCamera;
  if ( !classBoardViewCamera )
    goto LABEL_10;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)classBoardViewCamera, 0);
  v7 = (UnityEngine_Object_o *)this->fields.classBoardViewCamera;
  v8 = gameObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  classBoardViewCamera = (struct UnityEngine_Camera_o *)UnityEngine_Object__op_Equality(
                                                          (UnityEngine_Object_o *)camera,
                                                          v7,
                                                          0);
  if ( !v8
    || (UnityEngine_GameObject__SetActive(v8, (unsigned __int8)classBoardViewCamera & 1, 0),
        (classBoardViewCamera = this->fields.classBoardSelectViewCamera) == 0)
    || (v9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)classBoardViewCamera, 0),
        classBoardViewCamera = (struct UnityEngine_Camera_o *)UnityEngine_Object__op_Equality(
                                                                (UnityEngine_Object_o *)camera,
                                                                (UnityEngine_Object_o *)this->fields.classBoardSelectViewCamera,
                                                                0),
        !v9) )
  {
LABEL_10:
    sub_1C32E7C(classBoardViewCamera);
  }
  UnityEngine_GameObject__SetActive(v9, (unsigned __int8)classBoardViewCamera & 1, 0);
  this->fields.currentCamera = camera;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.currentCamera, (int32_t)camera, v10, v11);
}


void ClassBoardBackground__ForceSkipSimpleAnimation(
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
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v16; // x0
  ClassBoardBackground_o *v17; // x0
  const MethodInfo *v18; // x4
  System_Collections_IEnumerator_o *v19; // x1

  v11 = this;
  if ( (byte_4C3B33D & 1) == 0 )
  {
    this = (ClassBoardBackground_o *)sub_1C32C20(&SimpleAnimation_State_TypeInfo);
    byte_4C3B33D = 1;
  }
  if ( !anim )
    goto LABEL_14;
  SimpleAnimation__Rewind(anim, 0);
  SimpleAnimation__Play_66464300(anim, name, 0);
  this = (ClassBoardBackground_o *)SimpleAnimation__get_Item(anim, name, 0);
  v12 = this;
  LODWORD(v6) = 1.0;
  if ( isPlaySpecifiedPoint )
    *(float *)&v6 = v11->fields.directlyGrandAnimationStartPoint;
  if ( !this )
LABEL_14:
    sub_1C32E7C(this);
  klass = this->klass;
  v14 = *(unsigned __int16 *)&this->klass->_2.rank;
  if ( *(_WORD *)&this->klass->_2.rank )
  {
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v14;
      p_offset += 2;
      if ( !v14 )
        goto LABEL_11;
    }
    v16 = (__int64)(&klass[1]._1.byval_arg + *(_DWORD *)p_offset);
  }
  else
  {
LABEL_11:
    v16 = sub_1C83438(this, SimpleAnimation_State_TypeInfo, 6);
  }
  v17 = (ClassBoardBackground_o *)(*(__int64 (__fastcall **)(ClassBoardBackground_o *, _QWORD, long double))v16)(
                                    v12,
                                    *(_QWORD *)(v16 + 8),
                                    v6);
  v19 = ClassBoardBackground__WaitAnimationFinished(v17, anim, name, endCallback, v18);
  UnityEngine_MonoBehaviour__StartCoroutine_71209212((UnityEngine_MonoBehaviour_o *)v11, v19, 0);
}


int32_t ClassBoardBackground__GetCameraResetEasingType(ClassBoardBackground_o *this, const MethodInfo *method)
{
  return this->fields.cameraResetEasingType;
}


float ClassBoardBackground__GetCameraResetSec(ClassBoardBackground_o *this, const MethodInfo *method)
{
  return this->fields.cameraResetSec;
}


int32_t ClassBoardBackground__GetFullReleaseEffectCameraResetEasingType(
        ClassBoardBackground_o *this,
        const MethodInfo *method)
{
  return this->fields.fullReleaseEffectCameraEasingType;
}


float ClassBoardBackground__GetFullReleaseEffectCameraResetSec(ClassBoardBackground_o *this, const MethodInfo *method)
{
  return this->fields.fullReleaseEffectCameraResetSec;
}


float ClassBoardBackground__GetGrandScoreExReleaseEffectDelayTime(
        ClassBoardBackground_o *this,
        const MethodInfo *method)
{
  return this->fields.GrandScoreExReleaseEffectDelayTime;
}


float ClassBoardBackground__GetGrandScoreSignEffectStartSec(ClassBoardBackground_o *this, const MethodInfo *method)
{
  return this->fields.grandScoreSignEffectStartSec;
}


float ClassBoardBackground__GetGrandScoreSignEffectStartSecDirectly(
        ClassBoardBackground_o *this,
        const MethodInfo *method)
{
  return this->fields.grandScoreSignEffectStartSecDirectly;
}


System_Collections_Generic_Dictionary_int__bool__o *ClassBoardBackground__GetIconIdList(
        ClassBoardBackground_o *this,
        int32_t baseId,
        bool isGrand,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__bool__o *v6; // x19
  void *Master_object; // x0
  System_Collections_Generic_List_object__o *v8; // x21
  System_Comparison_T__o *v9; // x22
  Il2CppObject *v10; // x23
  struct ClassBoardBackground___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  Il2CppObject *v14; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x22
  int v16; // w23
  _BOOL8 v17; // x0
  ClassBoardClassEntity_o *current; // x24
  BalanceConfig_c *v19; // x0
  BalanceConfig_c *v20; // x0
  _BOOL8 v21; // x0
  int32_t monitor_high; // w25
  _BOOL8 IsOpen; // x0
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+0h] [xbp-A0h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-80h] BYREF
  System_Collections_Generic_List_ClassBoardClassEntity__o *entitys; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4C3B334 & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&System_Comparison_ClassBoardClassEntity__TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_ClassBoardClassMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__bool__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_int__bool__TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ClassBoardClassEntity__Sort__);
    sub_1C32C20(&Method_ClassBoardBackground___c__GetIconIdList_b__82_0__);
    sub_1C32C20(&ClassBoardBackground___c_TypeInfo);
    byte_4C3B334 = 1;
  }
  entitys = 0;
  memset(&v27, 0, sizeof(v27));
  entity = 0;
  v6 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v6,
    (const MethodInfo_33E0AE8 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
  if ( !Master_object )
    goto LABEL_43;
  if ( ClassBoardClassMaster__TryGetEntityList((ClassBoardClassMaster_o *)Master_object, &entitys, baseId, 0) )
  {
    v8 = (System_Collections_Generic_List_object__o *)entitys;
    Master_object = ClassBoardBackground___c_TypeInfo;
    if ( !ClassBoardBackground___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardBackground___c_TypeInfo);
      Master_object = ClassBoardBackground___c_TypeInfo;
    }
    v9 = *(System_Comparison_T__o **)(*((_QWORD *)Master_object + 23) + 40LL);
    if ( !v9 )
    {
      if ( !*((_DWORD *)Master_object + 56) )
      {
        j_il2cpp_runtime_class_init_0(Master_object);
        Master_object = ClassBoardBackground___c_TypeInfo;
      }
      v10 = (Il2CppObject *)**((_QWORD **)Master_object + 23);
      v9 = (System_Comparison_T__o *)sub_1C32E6C(System_Comparison_ClassBoardClassEntity__TypeInfo);
      System_Comparison_object____ctor(v9, v10, Method_ClassBoardBackground___c__GetIconIdList_b__82_0__, 0);
      static_fields = ClassBoardBackground___c_TypeInfo->static_fields;
      static_fields->__9__82_0 = (struct System_Comparison_ClassBoardClassEntity__o *)v9;
      sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__82_0, (int32_t)v9, v12, v13);
    }
    if ( v8 )
    {
      System_Collections_Generic_List_object___Sort_58303104(
        v8,
        v9,
        (const MethodInfo_379A280 *)Method_System_Collections_Generic_List_ClassBoardClassEntity__Sort__);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v14 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantClassMaster___);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantClassMaster___);
      if ( Master_object )
      {
        Master_object = ServantClassMaster__GetPlayableGrandBeastClassIds((ServantClassMaster_o *)Master_object, 0);
        if ( v14 )
        {
          v15 = (System_Collections_Generic_IEnumerable_TSource__o *)Master_object;
          Master_object = (void *)ServantClassMaster__GetPlayableGrandBeastBaseClassId((ServantClassMaster_o *)v14, 0);
          if ( entitys )
          {
            v16 = (int)Master_object;
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v25,
              (System_Collections_Generic_List_object__o *)entitys,
              (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__);
            v27 = v25;
            while ( 1 )
            {
              while ( 1 )
              {
                v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                        &v27,
                        (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__);
                if ( !v17 )
                {
                  System_Collections_Generic_List_Enumerator_object___Dispose(
                    &v27,
                    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__);
                  return v6;
                }
                current = (ClassBoardClassEntity_o *)v27.fields._current;
                if ( !isGrand )
                  break;
                if ( !v27.fields._current )
                  sub_1C32E7C(v17);
                if ( !System_Linq_Enumerable__Contains_int_(
                        v15,
                        HIDWORD(v27.fields._current[1].klass),
                        (const MethodInfo_30FA3A0 *)Method_System_Linq_Enumerable_Contains_int___)
                  || v16 == current->fields.classId )
                {
                  goto LABEL_33;
                }
              }
              v19 = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              if ( !current )
                sub_1C32E7C(v19);
              if ( System_Linq_Enumerable__Contains_int_(
                     (System_Collections_Generic_IEnumerable_TSource__o *)BalanceConfig_TypeInfo->static_fields->PlayableBeastClassIds,
                     current->fields.classId,
                     (const MethodInfo_30FA3A0 *)Method_System_Linq_Enumerable_Contains_int___) )
              {
                v20 = BalanceConfig_TypeInfo;
                if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  v20 = BalanceConfig_TypeInfo;
                }
                if ( v20->static_fields->PlayableBeastBaseClassId != current->fields.classId )
                  continue;
              }
LABEL_33:
              v21 = DataMasterBase_object__object__int___TryGetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)v14,
                      &entity,
                      current->fields.classId,
                      (const MethodInfo_3396884 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
              if ( v21 )
              {
                if ( !entity )
                  sub_1C32E7C(v21);
                monitor_high = HIDWORD(entity[2].monitor);
                IsOpen = ClassBoardClassEntity__IsOpen(current, 0);
                if ( !v6 )
                  sub_1C32E7C(IsOpen);
                System_Collections_Generic_Dictionary_int__bool___Add(
                  v6,
                  monitor_high,
                  IsOpen,
                  (const MethodInfo_33E14C0 *)Method_System_Collections_Generic_Dictionary_int__bool__Add__);
              }
            }
          }
        }
      }
    }
LABEL_43:
    sub_1C32E7C(Master_object);
  }
  return v6;
}


UnityEngine_RenderTexture_o *ClassBoardBackground__GetRenderTexture(
        ClassBoardBackground_o *this,
        const MethodInfo *method)
{
  UnityEngine_Camera_o *currentCamera; // x0

  currentCamera = this->fields.currentCamera;
  if ( !currentCamera )
    sub_1C32E7C(0);
  return UnityEngine_Camera__get_targetTexture(currentCamera, 0);
}


float ClassBoardBackground__GrandScoreDialogViewDelayTime(ClassBoardBackground_o *this, const MethodInfo *method)
{
  return this->fields.grandScoreDialogViewDelayTime;
}


float ClassBoardBackground__GrandScoreNoneDialogUMedalCreateEffectDelayTime(
        ClassBoardBackground_o *this,
        const MethodInfo *method)
{
  return this->fields.grandScoreNoneDialogUMedalCreateEffectDelayTime;
}


void ClassBoardBackground__InitGrandClassReleasedEffect(ClassBoardBackground_o *this, const MethodInfo *method)
{
  ClassBoardBackground_o *v2; // x19
  System_Collections_Generic_IEnumerable_T__o *grandExIconSet; // x19
  ClassBoardBackground___c_c *v4; // x0
  System_Action_object__o *_9__83_0; // x20
  Il2CppObject *v6; // x21
  struct ClassBoardBackground___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  v2 = this;
  if ( (byte_4C3B335 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_ClassBoardBackground_ExClassIconSet__TypeInfo);
    sub_1C32C20(&Method_BasicHelper_ForEach_ClassBoardBackground_ExClassIconSet___);
    sub_1C32C20(&Method_ClassBoardBackground___c__InitGrandClassReleasedEffect_b__83_0__);
    this = (ClassBoardBackground_o *)sub_1C32C20(&ClassBoardBackground___c_TypeInfo);
    byte_4C3B335 = 1;
  }
  grandExIconSet = (System_Collections_Generic_IEnumerable_T__o *)v2->fields.grandExIconSet;
  if ( !grandExIconSet )
    sub_1C32E7C(this);
  if ( grandExIconSet[1].monitor )
  {
    v4 = ClassBoardBackground___c_TypeInfo;
    if ( !ClassBoardBackground___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardBackground___c_TypeInfo);
      v4 = ClassBoardBackground___c_TypeInfo;
    }
    _9__83_0 = (System_Action_object__o *)v4->static_fields->__9__83_0;
    if ( !_9__83_0 )
    {
      if ( !v4->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v4);
        v4 = ClassBoardBackground___c_TypeInfo;
      }
      v6 = (Il2CppObject *)v4->static_fields->__9;
      _9__83_0 = (System_Action_object__o *)sub_1C32E6C(System_Action_ClassBoardBackground_ExClassIconSet__TypeInfo);
      System_Action_object____ctor(
        _9__83_0,
        v6,
        Method_ClassBoardBackground___c__InitGrandClassReleasedEffect_b__83_0__,
        0);
      static_fields = ClassBoardBackground___c_TypeInfo->static_fields;
      static_fields->__9__83_0 = (struct System_Action_ClassBoardBackground_ExClassIconSet__o *)_9__83_0;
      sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__83_0, (int32_t)_9__83_0, v8, v9);
    }
    BasicHelper__ForEach_object_(
      grandExIconSet,
      (System_Action_T__o *)_9__83_0,
      (const MethodInfo_30C93B0 *)Method_BasicHelper_ForEach_ClassBoardBackground_ExClassIconSet___);
  }
}


void ClassBoardBackground__OnDestroy(ClassBoardBackground_o *this, const MethodInfo *method)
{
  ClassBoardBackground___c_c *v3; // x0
  System_Collections_Generic_IEnumerable_T__o *iconRenderers; // x19
  System_Action_object__o *_9__85_0; // x20
  Il2CppObject *v6; // x21
  struct ClassBoardBackground___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C3B337 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_Renderer__TypeInfo);
    sub_1C32C20(&Method_BasicHelper_ForEach_Renderer___);
    sub_1C32C20(&Method_ClassBoardBackground___c__OnDestroy_b__85_0__);
    sub_1C32C20(&ClassBoardBackground___c_TypeInfo);
    byte_4C3B337 = 1;
  }
  v3 = ClassBoardBackground___c_TypeInfo;
  iconRenderers = (System_Collections_Generic_IEnumerable_T__o *)this->fields.iconRenderers;
  if ( !ClassBoardBackground___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardBackground___c_TypeInfo);
    v3 = ClassBoardBackground___c_TypeInfo;
  }
  _9__85_0 = (System_Action_object__o *)v3->static_fields->__9__85_0;
  if ( !_9__85_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = ClassBoardBackground___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__85_0 = (System_Action_object__o *)sub_1C32E6C(System_Action_Renderer__TypeInfo);
    System_Action_object____ctor(_9__85_0, v6, Method_ClassBoardBackground___c__OnDestroy_b__85_0__, 0);
    static_fields = ClassBoardBackground___c_TypeInfo->static_fields;
    static_fields->__9__85_0 = (struct System_Action_Renderer__o *)_9__85_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__85_0, (int32_t)_9__85_0, v8, v9);
  }
  BasicHelper__ForEach_object_(
    iconRenderers,
    (System_Action_T__o *)_9__85_0,
    (const MethodInfo_30C93B0 *)Method_BasicHelper_ForEach_Renderer___);
}


void ClassBoardBackground__PlayBoardParentBeforeAnimation(ClassBoardBackground_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *boardParentAnimation; // x20
  UnityEngine_Object_o *boardParentBeforeAnimationClip; // x20
  SimpleAnimation_o *v5; // x0

  if ( (byte_4C3B336 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3B336 = 1;
  }
  boardParentAnimation = (UnityEngine_Object_o *)this->fields.boardParentAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(boardParentAnimation, 0, 0) )
  {
    boardParentBeforeAnimationClip = (UnityEngine_Object_o *)this->fields.boardParentBeforeAnimationClip;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(boardParentBeforeAnimationClip, 0, 0) )
    {
      v5 = this->fields.boardParentAnimation;
      if ( !v5
        || (SimpleAnimation__set_clip(v5, this->fields.boardParentBeforeAnimationClip, 0),
            (v5 = this->fields.boardParentAnimation) == 0) )
      {
        sub_1C32E7C(v5);
      }
      SimpleAnimation__Play(v5, 0);
    }
  }
}


System_Collections_IEnumerator_o *ClassBoardBackground__PlayExClassReleaseEffectPlayer(
        ClassBoardBackground_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C3B33A & 1) == 0 )
  {
    sub_1C32C20(&ClassBoardBackground__PlayExClassReleaseEffectPlayer_d__88_TypeInfo);
    byte_4C3B33A = 1;
  }
  v3 = sub_1C32E6C(ClassBoardBackground__PlayExClassReleaseEffectPlayer_d__88_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void ClassBoardBackground__PlayGrandReturnTransitionAnimation(
        ClassBoardBackground_o *this,
        SimpleAnimation_o *classBoardAnimation,
        SimpleAnimation_o *grandBoardAnimation,
        System_Action_o *endCallback,
        bool isQuick,
        const MethodInfo *method)
{
  long double v6; // q8
  UnityEngine_Object_o *boardRootAnimation; // x23
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  UnityEngine_Object_o *boardRootReturnAnimationClip; // x23
  UnityEngine_Object_o *name; // x0
  SimpleAnimation_o *v17; // x23
  UnityEngine_AnimationClip_o *v18; // x23
  SimpleAnimation_o *v19; // x24
  SimpleAnimation_o *v20; // x23
  SimpleAnimation_o *v21; // x23
  UnityEngine_Object_c *klass; // x8
  UnityEngine_Object_o *v23; // x23
  __int64 v24; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v26; // x0
  SimpleAnimation_o *v27; // x23
  UnityEngine_Object_c *v28; // x8
  UnityEngine_Object_o *v29; // x23
  __int64 v30; // x9
  SimpleAnimation_State_c **v31; // x10
  __int64 v32; // x0
  UnityEngine_Object_o *grandRootAnimation; // x22
  const MethodInfo *v34; // x6
  UnityEngine_Object_o *v35; // x22
  SimpleAnimation_o *v36; // x22
  UnityEngine_AnimationClip_o *v37; // x22
  SimpleAnimation_o *v38; // x23
  SimpleAnimation_o *v39; // x22
  SimpleAnimation_o *v40; // x22
  UnityEngine_Object_c *v41; // x8
  UnityEngine_Object_o *v42; // x22
  __int64 v43; // x9
  SimpleAnimation_State_c **v44; // x10
  __int64 v45; // x0
  SimpleAnimation_o *v46; // x22
  UnityEngine_Object_c *v47; // x8
  UnityEngine_Object_o *v48; // x22
  __int64 v49; // x9
  SimpleAnimation_State_c **v50; // x10
  __int64 v51; // x0
  bool v52; // w21
  const MethodInfo *v53; // x2
  System_Collections_IEnumerator_o *v54; // x1

  if ( (byte_4C3B330 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&SimpleAnimation_State_TypeInfo);
    sub_1C32C20(&StringLiteral_7153/*"GrandReturn"*/);
    byte_4C3B330 = 1;
  }
  this->fields.boardRootAnimation = classBoardAnimation;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields.boardRootAnimation,
    (int32_t)classBoardAnimation,
    (int32_t)grandBoardAnimation,
    (const MethodInfo *)endCallback);
  boardRootAnimation = (UnityEngine_Object_o *)this->fields.boardRootAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(boardRootAnimation, 0, 0) )
  {
    boardRootReturnAnimationClip = (UnityEngine_Object_o *)this->fields.boardRootReturnAnimationClip;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(boardRootReturnAnimationClip, 0, 0) )
    {
      name = (UnityEngine_Object_o *)this->fields.boardRootReturnAnimationClip;
      if ( !name )
        goto LABEL_76;
      v17 = this->fields.boardRootAnimation;
      name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0);
      if ( !v17 )
        goto LABEL_76;
      name = (UnityEngine_Object_o *)SimpleAnimation__GetState(v17, (System_String_o *)name, 0);
      if ( !name )
      {
        v18 = this->fields.boardRootReturnAnimationClip;
        if ( !v18 )
          goto LABEL_76;
        v19 = this->fields.boardRootAnimation;
        name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(
                                         (UnityEngine_Object_o *)this->fields.boardRootReturnAnimationClip,
                                         0);
        if ( !v19 )
          goto LABEL_76;
        SimpleAnimation__AddClip(v19, v18, (System_String_o *)name, 0);
      }
    }
    name = (UnityEngine_Object_o *)this->fields.boardRootReturnAnimationClip;
    if ( !name )
      goto LABEL_76;
    v20 = this->fields.boardRootAnimation;
    name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0);
    if ( !v20 )
      goto LABEL_76;
    SimpleAnimation__Play_66464300(v20, (System_String_o *)name, 0);
    name = (UnityEngine_Object_o *)this->fields.boardRootReturnAnimationClip;
    if ( !name )
      goto LABEL_76;
    v21 = this->fields.boardRootAnimation;
    name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0);
    if ( !v21 )
      goto LABEL_76;
    name = (UnityEngine_Object_o *)SimpleAnimation__get_Item(v21, (System_String_o *)name, 0);
    *(float *)&v6 = isQuick ? 1.0 : 0.0;
    if ( !name )
      goto LABEL_76;
    klass = name->klass;
    v23 = name;
    v24 = *(unsigned __int16 *)&name->klass->_2.rank;
    if ( *(_WORD *)&name->klass->_2.rank )
    {
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v24;
        p_offset += 2;
        if ( !v24 )
          goto LABEL_27;
      }
      v26 = (__int64)(&klass[1]._1.byval_arg + *(_DWORD *)p_offset);
    }
    else
    {
LABEL_27:
      v26 = sub_1C83438(name, SimpleAnimation_State_TypeInfo, 6);
    }
    (*(void (__fastcall **)(UnityEngine_Object_o *, _QWORD, long double))v26)(v23, *(_QWORD *)(v26 + 8), v6);
    name = (UnityEngine_Object_o *)this->fields.boardRootReturnAnimationClip;
    if ( !name
      || (v27 = this->fields.boardRootAnimation,
          name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0),
          !v27)
      || (name = (UnityEngine_Object_o *)SimpleAnimation__get_Item(v27, (System_String_o *)name, 0)) == 0 )
    {
LABEL_76:
      sub_1C32E7C(name);
    }
    v28 = name->klass;
    v29 = name;
    v30 = *(unsigned __int16 *)&name->klass->_2.rank;
    if ( *(_WORD *)&name->klass->_2.rank )
    {
      v31 = (SimpleAnimation_State_c **)&v28->_1.interfaceOffsets->offset;
      while ( *(v31 - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v30;
        v31 += 2;
        if ( !v30 )
          goto LABEL_36;
      }
      v32 = (__int64)(&v28[1]._1.element_class + 2 * *(_DWORD *)v31);
    }
    else
    {
LABEL_36:
      v32 = sub_1C83438(name, SimpleAnimation_State_TypeInfo, 8);
    }
    (*(void (__fastcall **)(UnityEngine_Object_o *, _QWORD, float))v32)(v29, *(_QWORD *)(v32 + 8), 1.0);
  }
  this->fields.grandRootAnimation = grandBoardAnimation;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.grandRootAnimation, (int32_t)grandBoardAnimation, v13, v14);
  grandRootAnimation = (UnityEngine_Object_o *)this->fields.grandRootAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(grandRootAnimation, 0, 0) )
    goto LABEL_75;
  v35 = (UnityEngine_Object_o *)this->fields.boardRootReturnAnimationClip;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v35, 0, 0) )
  {
    name = (UnityEngine_Object_o *)this->fields.boardRootReturnAnimationClip;
    if ( !name )
      goto LABEL_76;
    v36 = this->fields.grandRootAnimation;
    name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0);
    if ( !v36 )
      goto LABEL_76;
    name = (UnityEngine_Object_o *)SimpleAnimation__GetState(v36, (System_String_o *)name, 0);
    if ( !name )
    {
      v37 = this->fields.boardRootReturnAnimationClip;
      if ( !v37 )
        goto LABEL_76;
      v38 = this->fields.grandRootAnimation;
      name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(
                                       (UnityEngine_Object_o *)this->fields.boardRootReturnAnimationClip,
                                       0);
      if ( !v38 )
        goto LABEL_76;
      SimpleAnimation__AddClip(v38, v37, (System_String_o *)name, 0);
    }
  }
  name = (UnityEngine_Object_o *)this->fields.boardRootReturnAnimationClip;
  if ( !name )
    goto LABEL_76;
  v39 = this->fields.grandRootAnimation;
  name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0);
  if ( !v39 )
    goto LABEL_76;
  SimpleAnimation__Play_66464300(v39, (System_String_o *)name, 0);
  name = (UnityEngine_Object_o *)this->fields.boardRootReturnAnimationClip;
  if ( !name )
    goto LABEL_76;
  v40 = this->fields.grandRootAnimation;
  name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0);
  if ( !v40 )
    goto LABEL_76;
  name = (UnityEngine_Object_o *)SimpleAnimation__get_Item(v40, (System_String_o *)name, 0);
  *(float *)&v6 = isQuick ? 1.0 : 0.0;
  if ( !name )
    goto LABEL_76;
  v41 = name->klass;
  v42 = name;
  v43 = *(unsigned __int16 *)&name->klass->_2.rank;
  if ( *(_WORD *)&name->klass->_2.rank )
  {
    v44 = (SimpleAnimation_State_c **)&v41->_1.interfaceOffsets->offset;
    while ( *(v44 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v43;
      v44 += 2;
      if ( !v43 )
        goto LABEL_63;
    }
    v45 = (__int64)(&v41[1]._1.byval_arg + *(_DWORD *)v44);
  }
  else
  {
LABEL_63:
    v45 = sub_1C83438(name, SimpleAnimation_State_TypeInfo, 6);
  }
  (*(void (__fastcall **)(UnityEngine_Object_o *, _QWORD, long double))v45)(v42, *(_QWORD *)(v45 + 8), v6);
  name = (UnityEngine_Object_o *)this->fields.boardRootReturnAnimationClip;
  if ( !name )
    goto LABEL_76;
  v46 = this->fields.grandRootAnimation;
  name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0);
  if ( !v46 )
    goto LABEL_76;
  name = (UnityEngine_Object_o *)SimpleAnimation__get_Item(v46, (System_String_o *)name, 0);
  if ( !name )
    goto LABEL_76;
  v47 = name->klass;
  v48 = name;
  v49 = *(unsigned __int16 *)&name->klass->_2.rank;
  if ( *(_WORD *)&name->klass->_2.rank )
  {
    v50 = (SimpleAnimation_State_c **)&v47->_1.interfaceOffsets->offset;
    while ( *(v50 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v49;
      v50 += 2;
      if ( !v49 )
        goto LABEL_72;
    }
    v51 = (__int64)(&v47[1]._1.element_class + 2 * *(_DWORD *)v50);
  }
  else
  {
LABEL_72:
    v51 = sub_1C83438(name, SimpleAnimation_State_TypeInfo, 8);
  }
  (*(void (__fastcall **)(UnityEngine_Object_o *, _QWORD, float))v51)(v48, *(_QWORD *)(v51 + 8), 1.0);
LABEL_75:
  v52 = isQuick;
  ClassBoardBackground__PlaySimpleAnimation(
    this,
    this->fields.mainAnimation,
    (System_String_o *)StringLiteral_7153/*"GrandReturn"*/,
    endCallback,
    v52,
    0,
    v34);
  v54 = ClassBoardBackground__PlayGrandReturnTransitionAnimationFromTween(this, v52, v53);
  UnityEngine_MonoBehaviour__StartCoroutine_71209212((UnityEngine_MonoBehaviour_o *)this, v54, 0);
}


System_Collections_IEnumerator_o *ClassBoardBackground__PlayGrandReturnTransitionAnimationFromTween(
        ClassBoardBackground_o *this,
        bool isQuick,
        const MethodInfo *method)
{
  bool v5; // w21
  __int64 v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C3B331 & 1) == 0 )
  {
    sub_1C32C20(&ClassBoardBackground__PlayGrandReturnTransitionAnimationFromTween_d__79_TypeInfo);
    byte_4C3B331 = 1;
  }
  v5 = isQuick;
  v6 = sub_1C32E6C(ClassBoardBackground__PlayGrandReturnTransitionAnimationFromTween_d__79_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  *(_DWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 32) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v6 + 32), (int32_t)this, v7, v8);
  *(_BYTE *)(v6 + 40) = v5;
  return (System_Collections_IEnumerator_o *)v6;
}


void ClassBoardBackground__PlayGrandTransitionAnimation(
        ClassBoardBackground_o *this,
        SimpleAnimation_o *classBoardAnimation,
        SimpleAnimation_o *grandBoardAnimation,
        System_Action_o *endCallback,
        bool isQuick,
        const MethodInfo *method)
{
  long double v6; // q8
  UnityEngine_Object_o *boardRootAnimation; // x23
  const MethodInfo *v13; // x2
  UnityEngine_Object_o *boardRootAnimationClip; // x23
  UnityEngine_Object_o *name; // x0
  SimpleAnimation_o *v16; // x23
  UnityEngine_AnimationClip_o *v17; // x23
  SimpleAnimation_o *v18; // x24
  SimpleAnimation_o *v19; // x23
  SimpleAnimation_o *v20; // x23
  UnityEngine_Object_o *v21; // x23
  UnityEngine_Object_c *klass; // x8
  __int64 v23; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v25; // x0
  SimpleAnimation_o *v26; // x23
  UnityEngine_Object_c *v27; // x8
  UnityEngine_Object_o *v28; // x23
  __int64 v29; // x9
  SimpleAnimation_State_c **v30; // x10
  __int64 v31; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  UnityEngine_Object_o *grandRootAnimation; // x22
  const MethodInfo *v35; // x6
  UnityEngine_Object_o *v36; // x22
  SimpleAnimation_o *v37; // x22
  UnityEngine_AnimationClip_o *v38; // x22
  SimpleAnimation_o *v39; // x23
  SimpleAnimation_o *v40; // x22
  SimpleAnimation_o *v41; // x22
  UnityEngine_Object_o *v42; // x22
  UnityEngine_Object_c *v43; // x8
  __int64 v44; // x9
  SimpleAnimation_State_c **v45; // x10
  __int64 v46; // x0
  SimpleAnimation_o *v47; // x22
  UnityEngine_Object_c *v48; // x8
  UnityEngine_Object_o *v49; // x22
  __int64 v50; // x9
  SimpleAnimation_State_c **v51; // x10
  __int64 v52; // x0

  if ( (byte_4C3B32E & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&SimpleAnimation_State_TypeInfo);
    sub_1C32C20(&StringLiteral_7165/*"GrandStart"*/);
    byte_4C3B32E = 1;
  }
  this->fields.boardRootAnimation = classBoardAnimation;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields.boardRootAnimation,
    (int32_t)classBoardAnimation,
    (int32_t)grandBoardAnimation,
    (const MethodInfo *)endCallback);
  boardRootAnimation = (UnityEngine_Object_o *)this->fields.boardRootAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(boardRootAnimation, 0, 0) )
  {
    boardRootAnimationClip = (UnityEngine_Object_o *)this->fields.boardRootAnimationClip;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(boardRootAnimationClip, 0, 0) )
    {
      name = (UnityEngine_Object_o *)this->fields.boardRootAnimationClip;
      if ( !name )
        goto LABEL_74;
      v16 = this->fields.boardRootAnimation;
      name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0);
      if ( !v16 )
        goto LABEL_74;
      name = (UnityEngine_Object_o *)SimpleAnimation__GetState(v16, (System_String_o *)name, 0);
      if ( !name )
      {
        v17 = this->fields.boardRootAnimationClip;
        if ( !v17 )
          goto LABEL_74;
        v18 = this->fields.boardRootAnimation;
        name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(
                                         (UnityEngine_Object_o *)this->fields.boardRootAnimationClip,
                                         0);
        if ( !v18 )
          goto LABEL_74;
        SimpleAnimation__AddClip(v18, v17, (System_String_o *)name, 0);
      }
    }
    name = (UnityEngine_Object_o *)this->fields.boardRootAnimationClip;
    if ( !name )
      goto LABEL_74;
    v19 = this->fields.boardRootAnimation;
    name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0);
    if ( !v19 )
      goto LABEL_74;
    SimpleAnimation__Play_66464300(v19, (System_String_o *)name, 0);
    name = (UnityEngine_Object_o *)this->fields.boardRootAnimationClip;
    if ( !name )
      goto LABEL_74;
    v20 = this->fields.boardRootAnimation;
    name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0);
    if ( !v20 )
      goto LABEL_74;
    name = (UnityEngine_Object_o *)SimpleAnimation__get_Item(v20, (System_String_o *)name, 0);
    v21 = name;
    LODWORD(v6) = 0;
    if ( isQuick )
      *(float *)&v6 = this->fields.directlyGrandAnimationStartPoint;
    if ( !name )
      goto LABEL_74;
    klass = name->klass;
    v23 = *(unsigned __int16 *)&name->klass->_2.rank;
    if ( *(_WORD *)&name->klass->_2.rank )
    {
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v23;
        p_offset += 2;
        if ( !v23 )
          goto LABEL_26;
      }
      v25 = (__int64)(&klass[1]._1.byval_arg + *(_DWORD *)p_offset);
    }
    else
    {
LABEL_26:
      v25 = sub_1C83438(name, SimpleAnimation_State_TypeInfo, 6);
    }
    (*(void (__fastcall **)(UnityEngine_Object_o *, _QWORD, long double))v25)(v21, *(_QWORD *)(v25 + 8), v6);
    name = (UnityEngine_Object_o *)this->fields.boardRootAnimationClip;
    if ( !name
      || (v26 = this->fields.boardRootAnimation,
          name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0),
          !v26)
      || (name = (UnityEngine_Object_o *)SimpleAnimation__get_Item(v26, (System_String_o *)name, 0)) == 0 )
    {
LABEL_74:
      sub_1C32E7C(name);
    }
    v27 = name->klass;
    v28 = name;
    v29 = *(unsigned __int16 *)&name->klass->_2.rank;
    if ( *(_WORD *)&name->klass->_2.rank )
    {
      v30 = (SimpleAnimation_State_c **)&v27->_1.interfaceOffsets->offset;
      while ( *(v30 - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v29;
        v30 += 2;
        if ( !v29 )
          goto LABEL_35;
      }
      v31 = (__int64)(&v27[1]._1.element_class + 2 * *(_DWORD *)v30);
    }
    else
    {
LABEL_35:
      v31 = sub_1C83438(name, SimpleAnimation_State_TypeInfo, 8);
    }
    (*(void (__fastcall **)(UnityEngine_Object_o *, _QWORD, float))v31)(v28, *(_QWORD *)(v31 + 8), 1.0);
  }
  ClassBoardBackground__PlayGrandTransitionAnimationFromTween(this, isQuick, v13);
  this->fields.grandRootAnimation = grandBoardAnimation;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.grandRootAnimation, (int32_t)grandBoardAnimation, v32, v33);
  grandRootAnimation = (UnityEngine_Object_o *)this->fields.grandRootAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(grandRootAnimation, 0, 0) )
    goto LABEL_73;
  v36 = (UnityEngine_Object_o *)this->fields.boardRootAnimationClip;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v36, 0, 0) )
  {
    name = (UnityEngine_Object_o *)this->fields.boardRootAnimationClip;
    if ( !name )
      goto LABEL_74;
    v37 = this->fields.grandRootAnimation;
    name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0);
    if ( !v37 )
      goto LABEL_74;
    name = (UnityEngine_Object_o *)SimpleAnimation__GetState(v37, (System_String_o *)name, 0);
    if ( !name )
    {
      v38 = this->fields.boardRootAnimationClip;
      if ( !v38 )
        goto LABEL_74;
      v39 = this->fields.grandRootAnimation;
      name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(
                                       (UnityEngine_Object_o *)this->fields.boardRootAnimationClip,
                                       0);
      if ( !v39 )
        goto LABEL_74;
      SimpleAnimation__AddClip(v39, v38, (System_String_o *)name, 0);
    }
  }
  name = (UnityEngine_Object_o *)this->fields.boardRootAnimationClip;
  if ( !name )
    goto LABEL_74;
  v40 = this->fields.grandRootAnimation;
  name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0);
  if ( !v40 )
    goto LABEL_74;
  SimpleAnimation__Play_66464300(v40, (System_String_o *)name, 0);
  name = (UnityEngine_Object_o *)this->fields.boardRootAnimationClip;
  if ( !name )
    goto LABEL_74;
  v41 = this->fields.grandRootAnimation;
  name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0);
  if ( !v41 )
    goto LABEL_74;
  name = (UnityEngine_Object_o *)SimpleAnimation__get_Item(v41, (System_String_o *)name, 0);
  v42 = name;
  LODWORD(v6) = 0;
  if ( isQuick )
    *(float *)&v6 = this->fields.directlyGrandAnimationStartPoint;
  if ( !name )
    goto LABEL_74;
  v43 = name->klass;
  v44 = *(unsigned __int16 *)&name->klass->_2.rank;
  if ( *(_WORD *)&name->klass->_2.rank )
  {
    v45 = (SimpleAnimation_State_c **)&v43->_1.interfaceOffsets->offset;
    while ( *(v45 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v44;
      v45 += 2;
      if ( !v44 )
        goto LABEL_61;
    }
    v46 = (__int64)(&v43[1]._1.byval_arg + *(_DWORD *)v45);
  }
  else
  {
LABEL_61:
    v46 = sub_1C83438(name, SimpleAnimation_State_TypeInfo, 6);
  }
  (*(void (__fastcall **)(UnityEngine_Object_o *, _QWORD, long double))v46)(v42, *(_QWORD *)(v46 + 8), v6);
  name = (UnityEngine_Object_o *)this->fields.boardRootAnimationClip;
  if ( !name )
    goto LABEL_74;
  v47 = this->fields.grandRootAnimation;
  name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0);
  if ( !v47 )
    goto LABEL_74;
  name = (UnityEngine_Object_o *)SimpleAnimation__get_Item(v47, (System_String_o *)name, 0);
  if ( !name )
    goto LABEL_74;
  v48 = name->klass;
  v49 = name;
  v50 = *(unsigned __int16 *)&name->klass->_2.rank;
  if ( *(_WORD *)&name->klass->_2.rank )
  {
    v51 = (SimpleAnimation_State_c **)&v48->_1.interfaceOffsets->offset;
    while ( *(v51 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v50;
      v51 += 2;
      if ( !v50 )
        goto LABEL_70;
    }
    v52 = (__int64)(&v48[1]._1.element_class + 2 * *(_DWORD *)v51);
  }
  else
  {
LABEL_70:
    v52 = sub_1C83438(name, SimpleAnimation_State_TypeInfo, 8);
  }
  (*(void (__fastcall **)(UnityEngine_Object_o *, _QWORD, float))v52)(v49, *(_QWORD *)(v52 + 8), 1.0);
LABEL_73:
  ClassBoardBackground__PlaySimpleAnimation(
    this,
    this->fields.mainAnimation,
    (System_String_o *)StringLiteral_7165/*"GrandStart"*/,
    endCallback,
    isQuick,
    isQuick,
    v35);
}


void ClassBoardBackground__PlayGrandTransitionAnimationFromTween(
        ClassBoardBackground_o *this,
        bool isQuick,
        const MethodInfo *method)
{
  float v5; // s8
  int32_t width; // w20
  float v7; // s0
  bool v8; // nf
  float v9; // s0
  float v10; // s3
  float v11; // s0
  TweenPosition_o *v12; // x0
  UITweener_o *v13; // x19
  ClassBoardBackground___c_c *v14; // x0
  EventDelegate_Callback_o *_9__77_0; // x20
  Il2CppObject *v16; // x21
  struct ClassBoardBackground___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  UnityEngine_Vector3_o v20; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4C3B32F & 1) == 0 )
  {
    sub_1C32C20(&EventDelegate_Callback_TypeInfo);
    sub_1C32C20(&Method_ClassBoardBackground___c__PlayGrandTransitionAnimationFromTween_b__77_0__);
    sub_1C32C20(&ClassBoardBackground___c_TypeInfo);
    byte_4C3B32F = 1;
  }
  if ( isQuick )
    v5 = 0.0;
  else
    v5 = 1.0;
  width = UnityEngine_Screen__get_width(0);
  v7 = (float)width / (float)UnityEngine_Screen__get_height(0);
  v8 = v7 < 2.274;
  v9 = (float)(fminf(v7, 2.333) + -2.274) / 0.059;
  if ( v8 )
    v9 = 0.0;
  v10 = fminf(v9, 1.0);
  if ( v9 < 0.0 )
    v11 = 0.0;
  else
    v11 = v10;
  v20.fields.x = this->fields.classScorePosXMin
               + (float)((float)(this->fields.classScorePosXMax - this->fields.classScorePosXMin) * v11);
  v20.fields.y = 0.0;
  v20.fields.z = 0.0;
  v12 = TweenPosition__Begin(this->fields.boardRoot, v5, v20, 0);
  if ( !v12 )
    sub_1C32E7C(0);
  v12->fields.method = 21;
  v13 = (UITweener_o *)v12;
  v14 = ClassBoardBackground___c_TypeInfo;
  if ( !ClassBoardBackground___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardBackground___c_TypeInfo);
    v14 = ClassBoardBackground___c_TypeInfo;
  }
  _9__77_0 = v14->static_fields->__9__77_0;
  if ( !_9__77_0 )
  {
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = ClassBoardBackground___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v14->static_fields->__9;
    _9__77_0 = (EventDelegate_Callback_o *)sub_1C32E6C(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(
      _9__77_0,
      v16,
      Method_ClassBoardBackground___c__PlayGrandTransitionAnimationFromTween_b__77_0__,
      0);
    static_fields = ClassBoardBackground___c_TypeInfo->static_fields;
    static_fields->__9__77_0 = _9__77_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__77_0, (int32_t)_9__77_0, v18, v19);
  }
  UITweener__SetOnFinished(v13, _9__77_0, 0);
}


// local variable allocation has failed, the output may be wrong!
void ClassBoardBackground__PlaySimpleAnimation(
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
      sub_1C32E7C(this);
    SimpleAnimation__Rewind(anim, 0);
    v11 = SimpleAnimation__Play_66464300(anim, name, 0);
    v13 = ClassBoardBackground__WaitAnimationFinished((ClassBoardBackground_o *)v11, anim, name, endCallback, v12);
    UnityEngine_MonoBehaviour__StartCoroutine_71209212((UnityEngine_MonoBehaviour_o *)this, v13, 0);
  }
}


void ClassBoardBackground__PlayStartExClassReleaseEffectPlayer(ClassBoardBackground_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__SimpleAnimation__o *exClassReleaseEffectAnimationDic; // x0
  char v4; // w21
  const MethodInfo *v5; // x6
  Il2CppObject *value; // x20
  System_Action_o *v7; // x21
  const MethodInfo *v8; // x6
  ClassBoardBackground___c_c *v9; // x0
  System_String_o *v10; // x21
  System_Action_o *_9__89_1; // x22
  Il2CppObject *v12; // x23
  struct ClassBoardBackground___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v16; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v17; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_4C3B33B & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_ClassBoardBackground__PlayStartExClassReleaseEffectPlayer_b__89_0__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_int__SimpleAnimation__get_Key__);
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_int__SimpleAnimation__get_Value__);
    sub_1C32C20(&Method_ClassBoardBackground___c__PlayStartExClassReleaseEffectPlayer_b__89_1__);
    sub_1C32C20(&ClassBoardBackground___c_TypeInfo);
    sub_1C32C20(&StringLiteral_10560/*"Particle_CrassIcon_Ex_Released"*/);
    byte_4C3B33B = 1;
  }
  memset(&v17, 0, sizeof(v17));
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.exClassReleaseEffectAnimationDic, 0) )
  {
    exClassReleaseEffectAnimationDic = this->fields.exClassReleaseEffectAnimationDic;
    if ( !exClassReleaseEffectAnimationDic )
      sub_1C32E7C(0);
    System_Collections_Generic_Dictionary_int__object___GetEnumerator(
      &v16,
      (System_Collections_Generic_Dictionary_int__object__o *)exClassReleaseEffectAnimationDic,
      (const MethodInfo_33F0154 *)Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__GetEnumerator__);
    v17 = v16;
    v4 = 1;
    while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
              &v17,
              (const MethodInfo_3546B90 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__MoveNext__) )
    {
      value = v17.fields._current.fields.value;
      if ( (v4 & 1) != 0 )
      {
        v7 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
        System_Action___ctor(
          v7,
          (Il2CppObject *)this,
          Method_ClassBoardBackground__PlayStartExClassReleaseEffectPlayer_b__89_0__,
          0);
        ClassBoardBackground__PlaySimpleAnimation(
          this,
          (SimpleAnimation_o *)value,
          (System_String_o *)StringLiteral_10560/*"Particle_CrassIcon_Ex_Released"*/,
          v7,
          0,
          0,
          v8);
        v4 = 0;
      }
      else
      {
        v9 = ClassBoardBackground___c_TypeInfo;
        if ( !ClassBoardBackground___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ClassBoardBackground___c_TypeInfo);
          v9 = ClassBoardBackground___c_TypeInfo;
        }
        v10 = (System_String_o *)StringLiteral_10560/*"Particle_CrassIcon_Ex_Released"*/;
        _9__89_1 = v9->static_fields->__9__89_1;
        if ( !_9__89_1 )
        {
          if ( !v9->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v9);
            v9 = ClassBoardBackground___c_TypeInfo;
          }
          v12 = (Il2CppObject *)v9->static_fields->__9;
          _9__89_1 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
          System_Action___ctor(
            _9__89_1,
            v12,
            Method_ClassBoardBackground___c__PlayStartExClassReleaseEffectPlayer_b__89_1__,
            0);
          static_fields = ClassBoardBackground___c_TypeInfo->static_fields;
          static_fields->__9__89_1 = _9__89_1;
          sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__89_1, (int32_t)_9__89_1, v14, v15);
        }
        ClassBoardBackground__PlaySimpleAnimation(this, (SimpleAnimation_o *)value, v10, _9__89_1, 0, 0, v5);
        v4 = 0;
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
      &v17,
      (const MethodInfo_3546CB4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__Dispose__);
  }
}


void ClassBoardBackground__PlayStartGrandExClassReleaseEffectPlayer(
        ClassBoardBackground_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x20
  struct System_Collections_Generic_Dictionary_int__SimpleAnimation__o *grandExClassReleaseEffectAnimationDic; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  char v11; // w28
  Il2CppObject *value; // x22
  __int64 v13; // x21
  __int64 v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  SimpleAnimation_o *v19; // x22
  System_Action_o *v20; // x23
  const MethodInfo *v21; // x6
  const MethodInfo *v22; // x6
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v23; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v24; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_4C3B33C & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_int__SimpleAnimation__get_Key__);
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_int__SimpleAnimation__get_Value__);
    sub_1C32C20(&ClassBoardBackground___c__DisplayClass90_0_TypeInfo);
    sub_1C32C20(&Method_ClassBoardBackground___c__DisplayClass90_1__PlayStartGrandExClassReleaseEffectPlayer_b__0__);
    sub_1C32C20(&Method_ClassBoardBackground___c__DisplayClass90_1__PlayStartGrandExClassReleaseEffectPlayer_b__1__);
    sub_1C32C20(&ClassBoardBackground___c__DisplayClass90_1_TypeInfo);
    sub_1C32C20(&StringLiteral_10561/*"Particle_GrandCrassIcon_Ex_Released"*/);
    sub_1C32C20(&StringLiteral_10560/*"Particle_CrassIcon_Ex_Released"*/);
    byte_4C3B33C = 1;
  }
  memset(&v24, 0, sizeof(v24));
  v5 = sub_1C32E6C(ClassBoardBackground___c__DisplayClass90_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_16;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v7, v8);
  *(_QWORD *)(v5 + 24) = callback;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 24), (int32_t)callback, v9, v10);
  if ( BasicHelper__IsNullOrEmpty(
         (System_Collections_ICollection_o *)this->fields.grandExClassReleaseEffectAnimationDic,
         0) )
  {
    ActionExtensions__Call(*(System_Action_o **)(v5 + 24), 0);
    return;
  }
  grandExClassReleaseEffectAnimationDic = this->fields.grandExClassReleaseEffectAnimationDic;
  if ( !grandExClassReleaseEffectAnimationDic )
LABEL_16:
    sub_1C32E7C(grandExClassReleaseEffectAnimationDic);
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v23,
    (System_Collections_Generic_Dictionary_int__object__o *)grandExClassReleaseEffectAnimationDic,
    (const MethodInfo_33F0154 *)Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__GetEnumerator__);
  v24 = v23;
  v11 = 1;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v24,
            (const MethodInfo_3546B90 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__MoveNext__) )
  {
    value = v24.fields._current.fields.value;
    v13 = sub_1C32E6C(ClassBoardBackground___c__DisplayClass90_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v13, 0);
    if ( !v13 )
      sub_1C32E7C(v14);
    *(_QWORD *)(v13 + 24) = v5;
    sub_1C32BC4((CGThumbnailListItem_o *)(v13 + 24), v5, v15, v16);
    *(_QWORD *)(v13 + 16) = value;
    sub_1C32BC4((CGThumbnailListItem_o *)(v13 + 16), (int32_t)value, v17, v18);
    v19 = *(SimpleAnimation_o **)(v13 + 16);
    v20 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    if ( (v11 & 1) != 0 )
    {
      System_Action___ctor(
        v20,
        (Il2CppObject *)v13,
        Method_ClassBoardBackground___c__DisplayClass90_1__PlayStartGrandExClassReleaseEffectPlayer_b__0__,
        0);
      ClassBoardBackground__PlaySimpleAnimation(this, v19, (System_String_o *)StringLiteral_10561/*"Particle_GrandCrassIcon_Ex_Released"*/, v20, 0, 0, v21);
    }
    else
    {
      System_Action___ctor(
        v20,
        (Il2CppObject *)v13,
        Method_ClassBoardBackground___c__DisplayClass90_1__PlayStartGrandExClassReleaseEffectPlayer_b__1__,
        0);
      ClassBoardBackground__PlaySimpleAnimation(this, v19, (System_String_o *)StringLiteral_10560/*"Particle_CrassIcon_Ex_Released"*/, v20, 0, 0, v22);
    }
    v11 = 0;
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v24,
    (const MethodInfo_3546CB4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__Dispose__);
}


void ClassBoardBackground__PlayStartMainEffectPlayer(ClassBoardBackground_o *this, const MethodInfo *method)
{
  ClassBoardEffectPlayer_o *startMainEffectPlayer; // x0
  int32_t Data_int; // w20
  __int64 v5; // x2
  __int64 v6; // x3
  __int64 v7; // x4
  __int64 v8; // x5
  __int64 v9; // x6
  __int64 v10; // x7
  Il2CppObject *v11; // x0
  System_String_o *v12; // x20
  Il2CppObject *v13; // x0
  const MethodInfo *v14; // x1
  System_Collections_IEnumerator_o *v15; // x0
  SimpleAnimation_o *mainAnimation; // x21
  System_Action_o *v17; // x22
  const MethodInfo *v18; // x6
  int32_t v19; // [xsp+8h] [xbp-38h] BYREF
  int32_t v20; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C3B338 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_ClassBoardBackground__PlayStartMainEffectPlayer_b__86_0__);
    sub_1C32C20(&Method_ClassBoardEffectPlayer_GetData_int___);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&StringLiteral_8874/*"MainTransition{0}_Release"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    sub_1C32C20(&StringLiteral_8873/*"MainTransition{0}"*/);
    byte_4C3B338 = 1;
  }
  startMainEffectPlayer = this->fields.startMainEffectPlayer;
  if ( !startMainEffectPlayer )
    sub_1C32E7C(0);
  Data_int = ClassBoardEffectPlayer__GetData_int_(
               startMainEffectPlayer,
               (const MethodInfo_30D0C3C *)Method_ClassBoardEffectPlayer_GetData_int___);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.exClassReleaseEffectAnimationDic, 0) )
  {
    v19 = Data_int;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19, v5, v6, v7, v8, v9, v10);
    v12 = System_String__Format((System_String_o *)StringLiteral_8873/*"MainTransition{0}"*/, v11, 0);
  }
  else
  {
    v20 = Data_int;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20, v5, v6, v7, v8, v9, v10);
    v12 = System_String__Format((System_String_o *)StringLiteral_8874/*"MainTransition{0}_Release"*/, v13, 0);
    v15 = ClassBoardBackground__PlayExClassReleaseEffectPlayer(this, v14);
    UnityEngine_MonoBehaviour__StartCoroutine_71209212((UnityEngine_MonoBehaviour_o *)this, v15, 0);
  }
  mainAnimation = this->fields.mainAnimation;
  v17 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_ClassBoardBackground__PlayStartMainEffectPlayer_b__86_0__, 0);
  ClassBoardBackground__PlaySimpleAnimation(this, mainAnimation, v12, v17, 0, 0, v18);
}


void ClassBoardBackground__SetBoardParentAnimation(
        ClassBoardBackground_o *this,
        SimpleAnimation_o *animation,
        bool isQuick,
        const MethodInfo *method)
{
  UnityEngine_Object_o *boardParentAnimation; // x21
  UnityEngine_Object_o *boardParentAnimationClip; // x21
  UnityEngine_Object_o *name; // x0
  SimpleAnimation_o *v10; // x21
  UnityEngine_AnimationClip_o *v11; // x21
  SimpleAnimation_o *v12; // x22
  UnityEngine_Object_o *boardParentBeforeAnimationClip; // x21
  SimpleAnimation_o *v14; // x21
  UnityEngine_AnimationClip_o *v15; // x21
  SimpleAnimation_o *v16; // x22
  SimpleAnimation_o *v17; // x21
  SimpleAnimation_o *v18; // x19
  UnityEngine_Object_c *klass; // x8
  UnityEngine_Object_o *v20; // x19
  __int64 v21; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v23; // x0

  if ( (byte_4C3B32D & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&SimpleAnimation_State_TypeInfo);
    byte_4C3B32D = 1;
  }
  this->fields.boardParentAnimation = animation;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.boardParentAnimation, (int32_t)animation, isQuick, method);
  boardParentAnimation = (UnityEngine_Object_o *)this->fields.boardParentAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(boardParentAnimation, 0, 0) )
    return;
  boardParentAnimationClip = (UnityEngine_Object_o *)this->fields.boardParentAnimationClip;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(boardParentAnimationClip, 0, 0) )
  {
    name = (UnityEngine_Object_o *)this->fields.boardParentAnimationClip;
    if ( !name )
      goto LABEL_38;
    v10 = this->fields.boardParentAnimation;
    name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0);
    if ( !v10 )
      goto LABEL_38;
    name = (UnityEngine_Object_o *)SimpleAnimation__GetState(v10, (System_String_o *)name, 0);
    if ( !name )
    {
      v11 = this->fields.boardParentAnimationClip;
      if ( !v11 )
        goto LABEL_38;
      v12 = this->fields.boardParentAnimation;
      name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(
                                       (UnityEngine_Object_o *)this->fields.boardParentAnimationClip,
                                       0);
      if ( !v12 )
        goto LABEL_38;
      SimpleAnimation__AddClip(v12, v11, (System_String_o *)name, 0);
    }
  }
  boardParentBeforeAnimationClip = (UnityEngine_Object_o *)this->fields.boardParentBeforeAnimationClip;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(boardParentBeforeAnimationClip, 0, 0) )
    return;
  name = (UnityEngine_Object_o *)this->fields.boardParentBeforeAnimationClip;
  if ( !name )
    goto LABEL_38;
  v14 = this->fields.boardParentAnimation;
  name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0);
  if ( !v14 )
    goto LABEL_38;
  name = (UnityEngine_Object_o *)SimpleAnimation__GetState(v14, (System_String_o *)name, 0);
  if ( !name )
  {
    v15 = this->fields.boardParentBeforeAnimationClip;
    if ( !v15 )
      goto LABEL_38;
    v16 = this->fields.boardParentAnimation;
    name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(
                                     (UnityEngine_Object_o *)this->fields.boardParentBeforeAnimationClip,
                                     0);
    if ( !v16 )
      goto LABEL_38;
    SimpleAnimation__AddClip(v16, v15, (System_String_o *)name, 0);
  }
  name = (UnityEngine_Object_o *)this->fields.boardParentBeforeAnimationClip;
  if ( !name )
    goto LABEL_38;
  v17 = this->fields.boardParentAnimation;
  name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0);
  if ( !v17 )
    goto LABEL_38;
  SimpleAnimation__Play_66464300(v17, (System_String_o *)name, 0);
  if ( !isQuick )
    return;
  name = (UnityEngine_Object_o *)this->fields.boardParentBeforeAnimationClip;
  if ( !name
    || (v18 = this->fields.boardParentAnimation,
        name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0),
        !v18)
    || (name = (UnityEngine_Object_o *)SimpleAnimation__get_Item(v18, (System_String_o *)name, 0)) == 0 )
  {
LABEL_38:
    sub_1C32E7C(name);
  }
  klass = name->klass;
  v20 = name;
  v21 = *(unsigned __int16 *)&name->klass->_2.rank;
  if ( *(_WORD *)&name->klass->_2.rank )
  {
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v21;
      p_offset += 2;
      if ( !v21 )
        goto LABEL_34;
    }
    v23 = (__int64)(&klass[1]._1.byval_arg + *(_DWORD *)p_offset);
  }
  else
  {
LABEL_34:
    v23 = sub_1C83438(name, SimpleAnimation_State_TypeInfo, 6);
  }
  (*(void (__fastcall **)(UnityEngine_Object_o *, _QWORD, float))v23)(v20, *(_QWORD *)(v23 + 8), 1.0);
}


void ClassBoardBackground__SetBoardRootObj(
        ClassBoardBackground_o *this,
        UnityEngine_GameObject_o *boardRootObj,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.boardRoot = boardRootObj;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.boardRoot, (int32_t)boardRootObj, (int32_t)method, v3);
}


void ClassBoardBackground__SetClassIcon(
        ClassBoardBackground_o *this,
        int32_t baseId,
        int32_t iconId,
        const MethodInfo *method)
{
  __int64 v6; // x22
  UnityEngine_Component_o *offRenderer; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Collections_Generic_IEnumerable_TSource__o *iconTextures; // x21
  System_Func_object__bool__o *v11; // x23
  Il2CppObject *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  UnityEngine_Object_o *v15; // x21
  System_Collections_Generic_IEnumerable_T__o *iconRenderers; // x21
  System_Action_object__o *v17; // x23
  System_Collections_Generic_Dictionary_int__object__o *v18; // x21
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x3
  struct ClassBoardBackground_ExClassIconSet_array *exIconSet; // x19
  Il2CppObject *key; // x22
  __int64 v24; // x21
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  __int64 v28; // x5
  __int64 v29; // x6
  __int64 v30; // x7
  Il2CppObject *v31; // x1
  System_String_o *v32; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  __int64 v38; // x5
  __int64 v39; // x6
  __int64 v40; // x7
  Il2CppObject *v41; // x1
  System_String_o *v42; // x0
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  __int64 v48; // x5
  __int64 v49; // x6
  __int64 v50; // x7
  Il2CppObject *v51; // x1
  System_String_o *v52; // x0
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  _BOOL8 v55; // x0
  struct ClassBoardBackground_ExClassIconSet_array *v56; // x8
  unsigned int v57; // w19
  System_Func_object__bool__o **v58; // x22
  System_Func_object__bool__o **v59; // x24
  System_Func_object__bool__o **v60; // x25
  unsigned int v61; // w9
  ClassBoardBackground_ExClassIconSet_o *v62; // x8
  System_Func_object__bool__o *v63; // x23
  System_Collections_Generic_IEnumerable_TSource__o *textures; // x27
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  Il2CppObject *v67; // x0
  System_Func_object__bool__o *v68; // x26
  UnityEngine_Object_o *v69; // x23
  int32_t v70; // w2
  const MethodInfo *v71; // x3
  Il2CppObject *v72; // x0
  System_Func_object__bool__o *v73; // x28
  UnityEngine_Object_o *v74; // x26
  int32_t v75; // w2
  const MethodInfo *v76; // x3
  Il2CppObject *v77; // x27
  struct ClassBoardBackground_ExClassIconSet_array *v78; // x8
  ClassBoardBackground_ExClassIconSet_o *v79; // x8
  UnityEngine_Renderer_o *v80; // x0
  UnityEngine_Material_o *material; // x0
  __int64 v82; // x0
  struct ClassBoardBackground_ExClassIconSet_array *v83; // x8
  ClassBoardBackground_ExClassIconSet_o *v84; // x8
  UnityEngine_Renderer_o *effectRenderer; // x0
  UnityEngine_Material_o *v86; // x0
  __int64 v87; // x0
  struct ClassBoardBackground_ExClassIconSet_array *v88; // x8
  ClassBoardBackground_ExClassIconSet_o *v89; // x8
  UnityEngine_Renderer_o *onRenderer; // x0
  UnityEngine_Material_o *v91; // x0
  __int64 v92; // x0
  struct ClassBoardBackground_ExClassIconSet_array *v93; // x8
  ClassBoardBackground_ExClassIconSet_o *v94; // x8
  UnityEngine_Renderer_o *effectGlowRenderer; // x0
  UnityEngine_Material_o *v96; // x0
  __int64 v97; // x0
  struct ClassBoardBackground_ExClassIconSet_array *v98; // x8
  ClassBoardBackground_ExClassIconSet_o *v99; // x8
  UnityEngine_Component_o *v100; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v102; // x0
  struct ClassBoardBackground_ExClassIconSet_array *v103; // x8
  ClassBoardBackground_ExClassIconSet_o *v104; // x8
  UnityEngine_Component_o *v105; // x0
  UnityEngine_GameObject_o *v106; // x0
  __int64 v107; // x0
  struct ClassBoardBackground_ExClassIconSet_array *v108; // x8
  ClassBoardBackground_ExClassIconSet_o *v109; // x8
  UnityEngine_GameObject_o *releaseEffect; // x0
  UnityEngine_GameObject_o *v111; // x0
  _BOOL8 IsPlayed; // x0
  struct ClassBoardBackground_ExClassIconSet_array *v113; // x8
  ClassBoardBackground_ExClassIconSet_o *v114; // x8
  UnityEngine_Object_o *animation; // x21
  _BOOL8 v116; // x0
  struct ClassBoardBackground_ExClassIconSet_array *v117; // x8
  ClassBoardBackground_ExClassIconSet_o *v118; // x8
  UnityEngine_Component_o *v119; // x0
  UnityEngine_GameObject_o *v120; // x0
  __int64 v121; // x0
  struct ClassBoardBackground_ExClassIconSet_array *v122; // x8
  ClassBoardBackground_ExClassIconSet_o *v123; // x8
  UnityEngine_Component_o *v124; // x0
  UnityEngine_GameObject_o *v125; // x0
  __int64 v126; // x0
  struct ClassBoardBackground_ExClassIconSet_array *v127; // x8
  ClassBoardBackground_ExClassIconSet_o *v128; // x8
  struct System_Collections_Generic_Dictionary_int__SimpleAnimation__o *exClassReleaseEffectAnimationDic; // x0
  int max_length; // w8
  unsigned int v131; // w20
  ClassBoardBackground_ExClassIconSet_o *v132; // x21
  __int64 v133; // [xsp+0h] [xbp-C0h]
  int32_t classId[2]; // [xsp+8h] [xbp-B8h]
  int v136; // [xsp+18h] [xbp-A8h] BYREF
  int v137; // [xsp+1Ch] [xbp-A4h] BYREF
  _OWORD v138[2]; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v139; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4C3B332 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_Renderer__TypeInfo);
    sub_1C32C20(&Method_BasicHelper_ForEach_Renderer___);
    sub_1C32C20(&ClassBoardUtility_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__SimpleAnimation___ctor__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_int__SimpleAnimation__TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__get_Current__);
    sub_1C32C20(&System_Func_Texture__bool__TypeInfo);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Key__);
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Value__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_ClassBoardBackground___c__DisplayClass80_0__SetClassIcon_b__0__);
    sub_1C32C20(&Method_ClassBoardBackground___c__DisplayClass80_0__SetClassIcon_b__1__);
    sub_1C32C20(&ClassBoardBackground___c__DisplayClass80_0_TypeInfo);
    sub_1C32C20(&Method_ClassBoardBackground___c__DisplayClass80_1__SetClassIcon_b__2__);
    sub_1C32C20(&Method_ClassBoardBackground___c__DisplayClass80_1__SetClassIcon_b__3__);
    sub_1C32C20(&Method_ClassBoardBackground___c__DisplayClass80_1__SetClassIcon_b__4__);
    sub_1C32C20(&ClassBoardBackground___c__DisplayClass80_1_TypeInfo);
    sub_1C32C20(&StringLiteral_4485/*"ClassIconEx_off_{0}"*/);
    sub_1C32C20(&StringLiteral_4486/*"ClassIconEx_on_{0}"*/);
    sub_1C32C20(&StringLiteral_4484/*"ClassIconEx_ef_glow_{0}"*/);
    byte_4C3B332 = 1;
  }
  memset(&v139, 0, 32);
  v6 = sub_1C32E6C(ClassBoardBackground___c__DisplayClass80_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  if ( !v6 )
    goto LABEL_162;
  *(_DWORD *)(v6 + 16) = iconId;
  *(_QWORD *)(v6 + 24) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v6 + 24), (int32_t)this, v8, v9);
  iconTextures = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.iconTextures;
  v11 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_Texture__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v6,
    Method_ClassBoardBackground___c__DisplayClass80_0__SetClassIcon_b__0__,
    0);
  v12 = System_Linq_Enumerable__FirstOrDefault_object__51408536(
          iconTextures,
          (System_Func_TSource__bool__o *)v11,
          (const MethodInfo_3106E98 *)Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
  *(_QWORD *)(v6 + 32) = v12;
  sub_1C32BC4((CGThumbnailListItem_o *)(v6 + 32), (int32_t)v12, v13, v14);
  v15 = *(UnityEngine_Object_o **)(v6 + 32);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v15, 0, 0) )
    return;
  iconRenderers = (System_Collections_Generic_IEnumerable_T__o *)this->fields.iconRenderers;
  v17 = (System_Action_object__o *)sub_1C32E6C(System_Action_Renderer__TypeInfo);
  System_Action_object____ctor(
    v17,
    (Il2CppObject *)v6,
    Method_ClassBoardBackground___c__DisplayClass80_0__SetClassIcon_b__1__,
    0);
  BasicHelper__ForEach_object_(
    iconRenderers,
    (System_Action_T__o *)v17,
    (const MethodInfo_30C93B0 *)Method_BasicHelper_ForEach_Renderer___);
  v18 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_int__SimpleAnimation__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v18,
    (const MethodInfo_33EF348 *)Method_System_Collections_Generic_Dictionary_int__SimpleAnimation___ctor__);
  this->fields.exClassReleaseEffectAnimationDic = (struct System_Collections_Generic_Dictionary_int__SimpleAnimation__o *)v18;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.exClassReleaseEffectAnimationDic, (int32_t)v18, v19, v20);
  exIconSet = this->fields.exIconSet;
  if ( !exIconSet )
LABEL_162:
    sub_1C32E7C(offRenderer);
  if ( !exIconSet->max_length )
    return;
  if ( (baseId & 0xFFFFFFFE) != 8 )
  {
    max_length = exIconSet->max_length;
    if ( max_length < 1 )
      return;
    v131 = 0;
    while ( 1 )
    {
      if ( v131 >= max_length )
        sub_1C32E84(offRenderer);
      v132 = exIconSet->m_Items[v131];
      if ( !v132 )
        break;
      offRenderer = (UnityEngine_Component_o *)v132->fields.offRenderer;
      if ( !offRenderer )
        break;
      offRenderer = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(offRenderer, 0);
      if ( !offRenderer )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)offRenderer, 0, 0);
      offRenderer = (UnityEngine_Component_o *)v132->fields.onRenderer;
      if ( !offRenderer )
        break;
      offRenderer = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(offRenderer, 0);
      if ( !offRenderer )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)offRenderer, 0, 0);
      offRenderer = (UnityEngine_Component_o *)v132->fields.releaseEffect;
      if ( !offRenderer )
        break;
      offRenderer = (UnityEngine_Component_o *)UnityEngine_GameObject__get_gameObject(
                                                 (UnityEngine_GameObject_o *)offRenderer,
                                                 0);
      if ( !offRenderer )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)offRenderer, 0, 0);
      max_length = exIconSet->max_length;
      if ( (int)++v131 >= max_length )
        return;
    }
    goto LABEL_162;
  }
  offRenderer = (UnityEngine_Component_o *)ClassBoardBackground__GetIconIdList(
                                             (ClassBoardBackground_o *)offRenderer,
                                             baseId,
                                             0,
                                             v21);
  if ( !offRenderer )
    goto LABEL_162;
  System_Collections_Generic_Dictionary_int__bool___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v138,
    (System_Collections_Generic_Dictionary_int__bool__o *)offRenderer,
    (const MethodInfo_33E18AC *)Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
  *(_OWORD *)&v139.fields._dictionary = v138[0];
  v139.fields._current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v138[1];
LABEL_12:
  while ( System_Collections_Generic_Dictionary_Enumerator_int__bool___MoveNext(
            &v139,
            (const MethodInfo_3544088 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__) )
  {
    key = v139.fields._current.fields.key;
    v24 = sub_1C32E6C(ClassBoardBackground___c__DisplayClass80_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v24, 0);
    LODWORD(v138[0]) = (_DWORD)key;
    v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v138, v25, v26, v27, v28, v29, v30);
    v32 = System_String__Format((System_String_o *)StringLiteral_4486/*"ClassIconEx_on_{0}"*/, v31, 0);
    if ( !v24 )
      sub_1C32E7C(v32);
    *(_QWORD *)(v24 + 24) = v32;
    sub_1C32BC4((CGThumbnailListItem_o *)(v24 + 24), (int32_t)v32, v33, v34);
    v137 = (int)key;
    v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v137, v35, v36, v37, v38, v39, v40);
    v42 = System_String__Format((System_String_o *)StringLiteral_4485/*"ClassIconEx_off_{0}"*/, v41, 0);
    *(_QWORD *)(v24 + 16) = v42;
    sub_1C32BC4((CGThumbnailListItem_o *)(v24 + 16), (int32_t)v42, v43, v44);
    v136 = (int)key;
    v51 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v136, v45, v46, v47, v48, v49, v50);
    *(_QWORD *)classId = key;
    v52 = System_String__Format((System_String_o *)StringLiteral_4484/*"ClassIconEx_ef_glow_{0}"*/, v51, 0);
    *(_QWORD *)(v24 + 32) = v52;
    sub_1C32BC4((CGThumbnailListItem_o *)(v24 + 32), (int32_t)v52, v53, v54);
    v56 = this->fields.exIconSet;
    if ( !v56 )
LABEL_94:
      sub_1C32E7C(v55);
    v57 = 0;
    v58 = (System_Func_object__bool__o **)(v24 + 40);
    v59 = (System_Func_object__bool__o **)(v24 + 48);
    v60 = (System_Func_object__bool__o **)(v24 + 56);
    v133 = *(_QWORD *)classId & 0xFF00000000LL;
    while ( 1 )
    {
      v61 = v56->max_length;
      if ( (int)v57 >= (int)v61 )
        break;
      if ( v57 >= v61 )
        sub_1C32E84(v55);
      v62 = v56->m_Items[v57];
      if ( !v62 )
        sub_1C32E7C(v55);
      v63 = *v58;
      textures = (System_Collections_Generic_IEnumerable_TSource__o *)v62->fields.textures;
      if ( !*v58 )
      {
        v63 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_Texture__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v63,
          (Il2CppObject *)v24,
          Method_ClassBoardBackground___c__DisplayClass80_1__SetClassIcon_b__2__,
          0);
        *v58 = v63;
        sub_1C32BC4((CGThumbnailListItem_o *)(v24 + 40), (int32_t)v63, v65, v66);
      }
      v67 = System_Linq_Enumerable__FirstOrDefault_object__51408536(
              textures,
              (System_Func_TSource__bool__o *)v63,
              (const MethodInfo_3106E98 *)Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
      v68 = *v59;
      v69 = (UnityEngine_Object_o *)v67;
      if ( !*v59 )
      {
        v68 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_Texture__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v68,
          (Il2CppObject *)v24,
          Method_ClassBoardBackground___c__DisplayClass80_1__SetClassIcon_b__3__,
          0);
        *v59 = v68;
        sub_1C32BC4((CGThumbnailListItem_o *)(v24 + 48), (int32_t)v68, v70, v71);
      }
      v72 = System_Linq_Enumerable__FirstOrDefault_object__51408536(
              textures,
              (System_Func_TSource__bool__o *)v68,
              (const MethodInfo_3106E98 *)Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
      v73 = *v60;
      v74 = (UnityEngine_Object_o *)v72;
      if ( !*v60 )
      {
        v73 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_Texture__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v73,
          (Il2CppObject *)v24,
          Method_ClassBoardBackground___c__DisplayClass80_1__SetClassIcon_b__4__,
          0);
        *v60 = v73;
        sub_1C32BC4((CGThumbnailListItem_o *)(v24 + 56), (int32_t)v73, v75, v76);
      }
      v77 = System_Linq_Enumerable__FirstOrDefault_object__51408536(
              textures,
              (System_Func_TSource__bool__o *)v73,
              (const MethodInfo_3106E98 *)Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v55 = UnityEngine_Object__op_Inequality(v74, 0, 0);
      if ( v55 )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v55 = UnityEngine_Object__op_Inequality(v69, 0, 0);
        if ( v55 )
        {
          v78 = this->fields.exIconSet;
          if ( !v78 )
            sub_1C32E7C(v55);
          if ( v57 >= LODWORD(v78->max_length) )
            sub_1C32E84(v55);
          v79 = v78->m_Items[v57];
          if ( !v79 )
            sub_1C32E7C(v55);
          v80 = v79->fields.offRenderer;
          if ( !v80 )
            sub_1C32E7C(0);
          material = UnityEngine_Renderer__get_material(v80, 0);
          if ( !material )
            sub_1C32E7C(0);
          UnityEngine_Material__SetTexture(
            material,
            this->fields.iconMaterialPropertyName,
            (UnityEngine_Texture_o *)v69,
            0);
          v83 = this->fields.exIconSet;
          if ( !v83 )
            sub_1C32E7C(v82);
          if ( v57 >= LODWORD(v83->max_length) )
            sub_1C32E84(v82);
          v84 = v83->m_Items[v57];
          if ( !v84 )
            sub_1C32E7C(v82);
          effectRenderer = v84->fields.effectRenderer;
          if ( !effectRenderer )
            sub_1C32E7C(0);
          v86 = UnityEngine_Renderer__get_material(effectRenderer, 0);
          if ( !v86 )
            sub_1C32E7C(0);
          UnityEngine_Material__SetTexture(v86, this->fields.iconMaterialPropertyName, (UnityEngine_Texture_o *)v69, 0);
          v88 = this->fields.exIconSet;
          if ( !v88 )
            sub_1C32E7C(v87);
          if ( v57 >= LODWORD(v88->max_length) )
            sub_1C32E84(v87);
          v89 = v88->m_Items[v57];
          if ( !v89 )
            sub_1C32E7C(v87);
          onRenderer = v89->fields.onRenderer;
          if ( !onRenderer )
            sub_1C32E7C(0);
          v91 = UnityEngine_Renderer__get_material(onRenderer, 0);
          if ( !v91 )
            sub_1C32E7C(0);
          UnityEngine_Material__SetTexture(v91, this->fields.iconMaterialPropertyName, (UnityEngine_Texture_o *)v74, 0);
          v93 = this->fields.exIconSet;
          if ( !v93 )
            sub_1C32E7C(v92);
          if ( v57 >= LODWORD(v93->max_length) )
            sub_1C32E84(v92);
          v94 = v93->m_Items[v57];
          if ( !v94 )
            sub_1C32E7C(v92);
          effectGlowRenderer = v94->fields.effectGlowRenderer;
          if ( !effectGlowRenderer )
            sub_1C32E7C(0);
          v96 = UnityEngine_Renderer__get_material(effectGlowRenderer, 0);
          if ( !v96 )
            sub_1C32E7C(0);
          UnityEngine_Material__SetTexture(v96, this->fields.iconMaterialPropertyName, (UnityEngine_Texture_o *)v77, 0);
          v98 = this->fields.exIconSet;
          if ( !v98 )
            sub_1C32E7C(v97);
          if ( v57 >= LODWORD(v98->max_length) )
            sub_1C32E84(v97);
          v99 = v98->m_Items[v57];
          if ( !v99 )
            sub_1C32E7C(v97);
          v100 = (UnityEngine_Component_o *)v99->fields.offRenderer;
          if ( !v100 )
            sub_1C32E7C(0);
          gameObject = UnityEngine_Component__get_gameObject(v100, 0);
          if ( !gameObject )
            sub_1C32E7C(0);
          UnityEngine_GameObject__SetActive(gameObject, v133 == 0, 0);
          v103 = this->fields.exIconSet;
          if ( !v103 )
            sub_1C32E7C(v102);
          if ( v57 >= LODWORD(v103->max_length) )
            sub_1C32E84(v102);
          v104 = v103->m_Items[v57];
          if ( !v104 )
            sub_1C32E7C(v102);
          v105 = (UnityEngine_Component_o *)v104->fields.onRenderer;
          if ( !v105 )
            sub_1C32E7C(0);
          v106 = UnityEngine_Component__get_gameObject(v105, 0);
          if ( !v106 )
            sub_1C32E7C(0);
          UnityEngine_GameObject__SetActive(v106, v133 != 0, 0);
          v108 = this->fields.exIconSet;
          if ( !v108 )
            sub_1C32E7C(v107);
          if ( v57 >= LODWORD(v108->max_length) )
            sub_1C32E84(v107);
          v109 = v108->m_Items[v57];
          if ( !v109 )
            sub_1C32E7C(v107);
          releaseEffect = v109->fields.releaseEffect;
          if ( !releaseEffect )
            sub_1C32E7C(0);
          v111 = UnityEngine_GameObject__get_gameObject(releaseEffect, 0);
          if ( !v111 )
            sub_1C32E7C(0);
          UnityEngine_GameObject__SetActive(v111, 0, 0);
          if ( v133 )
          {
            if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
            IsPlayed = ClassBoardUtility__IsPlayedExClassReleaseEffect(classId[0], 0);
            if ( !IsPlayed )
            {
              v113 = this->fields.exIconSet;
              if ( !v113 )
                sub_1C32E7C(IsPlayed);
              if ( v57 >= LODWORD(v113->max_length) )
                sub_1C32E84(IsPlayed);
              v114 = v113->m_Items[v57];
              if ( !v114 )
                sub_1C32E7C(IsPlayed);
              animation = (UnityEngine_Object_o *)v114->fields.animation;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              v116 = UnityEngine_Object__op_Inequality(animation, 0, 0);
              if ( v116 )
              {
                v117 = this->fields.exIconSet;
                if ( !v117 )
                  sub_1C32E7C(v116);
                if ( v57 >= LODWORD(v117->max_length) )
                  sub_1C32E84(v116);
                v118 = v117->m_Items[v57];
                if ( !v118 )
                  sub_1C32E7C(v116);
                v119 = (UnityEngine_Component_o *)v118->fields.offRenderer;
                if ( !v119 )
                  sub_1C32E7C(0);
                v120 = UnityEngine_Component__get_gameObject(v119, 0);
                if ( !v120 )
                  sub_1C32E7C(0);
                UnityEngine_GameObject__SetActive(v120, 1, 0);
                v122 = this->fields.exIconSet;
                if ( !v122 )
                  sub_1C32E7C(v121);
                if ( v57 >= LODWORD(v122->max_length) )
                  sub_1C32E84(v121);
                v123 = v122->m_Items[v57];
                if ( !v123 )
                  sub_1C32E7C(v121);
                v124 = (UnityEngine_Component_o *)v123->fields.onRenderer;
                if ( !v124 )
                  sub_1C32E7C(0);
                v125 = UnityEngine_Component__get_gameObject(v124, 0);
                if ( !v125 )
                  sub_1C32E7C(0);
                UnityEngine_GameObject__SetActive(v125, 0, 0);
                v127 = this->fields.exIconSet;
                if ( !v127 )
                  sub_1C32E7C(v126);
                if ( v57 >= LODWORD(v127->max_length) )
                  sub_1C32E84(v126);
                v128 = v127->m_Items[v57];
                if ( !v128 )
                  sub_1C32E7C(v126);
                exClassReleaseEffectAnimationDic = this->fields.exClassReleaseEffectAnimationDic;
                if ( !exClassReleaseEffectAnimationDic )
                  sub_1C32E7C(0);
                System_Collections_Generic_Dictionary_int__object___Add(
                  (System_Collections_Generic_Dictionary_int__object__o *)exClassReleaseEffectAnimationDic,
                  classId[0],
                  (Il2CppObject *)v128->fields.animation,
                  (const MethodInfo_33EFD1C *)Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__Add__);
              }
            }
          }
          goto LABEL_12;
        }
      }
      ++v57;
      v56 = this->fields.exIconSet;
      if ( !v56 )
        goto LABEL_94;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__bool___Dispose(
    &v139,
    (const MethodInfo_3544190 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
}


void ClassBoardBackground__SetGrandClassIcon(
        ClassBoardBackground_o *this,
        int32_t baseId,
        int32_t iconId,
        const MethodInfo *method)
{
  __int64 v6; // x22
  System_Collections_Generic_Dictionary_int__bool__o *IconIdList; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Collections_Generic_IEnumerable_TSource__o *grandIconTextures; // x20
  System_Func_object__bool__o *v11; // x23
  Il2CppObject *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  UnityEngine_Object_o *v15; // x20
  System_Collections_Generic_IEnumerable_T__o *grandIconRenderers; // x20
  System_Action_object__o *v17; // x23
  System_Collections_Generic_List_object__o *v18; // x20
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_Collections_Generic_Dictionary_int__object__o *v21; // x22
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct ClassBoardBackground_ExClassIconSet_array *grandExIconSet; // x8
  struct ClassBoardBackground_ExClassIconSet_array **p_grandExIconSet; // x29
  ClassBoardBackground___c_c *v26; // x0
  System_Collections_Generic_IEnumerable_T__o *v27; // x22
  System_Action_object__o *_9__81_3; // x23
  Il2CppObject *v29; // x24
  struct ClassBoardBackground___c_StaticFields *v30; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  ClassBoardBackground_o *v33; // x0
  const MethodInfo *v34; // x3
  Il2CppObject *key; // x21
  __int64 v36; // x22
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  __int64 v40; // x5
  __int64 v41; // x6
  __int64 v42; // x7
  Il2CppObject *v43; // x1
  System_String_o *v44; // x0
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  __int64 v50; // x5
  __int64 v51; // x6
  __int64 v52; // x7
  Il2CppObject *v53; // x1
  System_String_o *v54; // x0
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  __int64 v57; // x2
  __int64 v58; // x3
  __int64 v59; // x4
  __int64 v60; // x5
  __int64 v61; // x6
  __int64 v62; // x7
  Il2CppObject *v63; // x1
  System_String_o *v64; // x0
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  _BOOL8 v67; // x0
  struct ClassBoardBackground_ExClassIconSet_array *v68; // x8
  System_Func_object__bool__o **v69; // x24
  __int64 v70; // x20
  int max_length; // w9
  unsigned int v72; // w26
  __int64 v73; // x8
  System_Func_object__bool__o *v74; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v75; // x23
  int32_t v76; // w2
  const MethodInfo *v77; // x3
  Il2CppObject *v78; // x25
  struct ClassBoardBackground_ExClassIconSet_array *v79; // x8
  __int64 v80; // x8
  UnityEngine_Renderer_o *v81; // x0
  UnityEngine_Material_o *material; // x0
  System_Func_object__bool__o *v83; // x24
  int32_t v84; // w2
  const MethodInfo *v85; // x3
  Il2CppObject *v86; // x0
  struct ClassBoardBackground_ExClassIconSet_array *v87; // x8
  __int64 v88; // x8
  UnityEngine_Object_o *v89; // x24
  UnityEngine_Object_o *v90; // x25
  _BOOL8 v91; // x0
  struct ClassBoardBackground_ExClassIconSet_array *v92; // x8
  __int64 v93; // x8
  UnityEngine_Renderer_o *v94; // x0
  UnityEngine_Material_o *v95; // x0
  struct ClassBoardBackground_ExClassIconSet_array *v96; // x8
  __int64 v97; // x8
  UnityEngine_Object_o *v98; // x25
  _BOOL8 v99; // x0
  struct ClassBoardBackground_ExClassIconSet_array *v100; // x8
  __int64 v101; // x8
  UnityEngine_GameObject_o *v102; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct ClassBoardBackground_ExClassIconSet_array *v104; // x8
  __int64 v105; // x8
  UnityEngine_Object_o *v106; // x25
  _BOOL8 v107; // x0
  struct ClassBoardBackground_ExClassIconSet_array *v108; // x8
  __int64 v109; // x8
  UnityEngine_Renderer_o *v110; // x0
  UnityEngine_Material_o *v111; // x0
  System_Func_object__bool__o *v112; // x24
  int32_t v113; // w2
  const MethodInfo *v114; // x3
  Il2CppObject *v115; // x0
  struct ClassBoardBackground_ExClassIconSet_array *v116; // x8
  __int64 v117; // x8
  UnityEngine_Texture_o *v118; // x22
  UnityEngine_Object_o *v119; // x23
  _BOOL8 v120; // x0
  struct ClassBoardBackground_ExClassIconSet_array *v121; // x8
  __int64 v122; // x8
  UnityEngine_Renderer_o *v123; // x0
  UnityEngine_Material_o *v124; // x0
  struct ClassBoardBackground_ExClassIconSet_array *v125; // x8
  __int64 v126; // x8
  UnityEngine_Object_o *v127; // x22
  _BOOL8 v128; // x0
  struct ClassBoardBackground_ExClassIconSet_array *v129; // x8
  __int64 v130; // x8
  SimpleAnimation_o *v131; // x0
  __int64 v132; // x0
  struct ClassBoardBackground_ExClassIconSet_array *v133; // x8
  __int64 v134; // x8
  SimpleAnimation_o *v135; // x0
  _BOOL8 IsPlayedGrand; // x0
  struct ClassBoardBackground_ExClassIconSet_array *v137; // x8
  __int64 v138; // x8
  UnityEngine_Object_o *v139; // x22
  struct ClassBoardBackground_ExClassIconSet_array *v140; // x8
  __int64 v141; // x8
  UnityEngine_Component_o *v142; // x0
  UnityEngine_GameObject_o *v143; // x0
  __int64 v144; // x0
  struct ClassBoardBackground_ExClassIconSet_array *v145; // x8
  __int64 v146; // x8
  UnityEngine_Object_o *v147; // x22
  _BOOL8 v148; // x0
  struct ClassBoardBackground_ExClassIconSet_array *v149; // x8
  __int64 v150; // x8
  UnityEngine_Component_o *v151; // x0
  UnityEngine_GameObject_o *v152; // x0
  struct ClassBoardBackground_ExClassIconSet_array *v153; // x8
  __int64 v154; // x8
  struct ClassBoardBackground_ExClassIconSet_array *v155; // x8
  __int64 v156; // x8
  UnityEngine_Component_o *v157; // x0
  UnityEngine_GameObject_o *v158; // x0
  __int64 v159; // x0
  struct ClassBoardBackground_ExClassIconSet_array *v160; // x8
  __int64 v161; // x8
  UnityEngine_Object_o *v162; // x21
  _BOOL8 v163; // x0
  struct ClassBoardBackground_ExClassIconSet_array *v164; // x8
  __int64 v165; // x8
  UnityEngine_Component_o *v166; // x0
  UnityEngine_GameObject_o *v167; // x0
  struct ClassBoardBackground_ExClassIconSet_array *v168; // x8
  __int64 v169; // x8
  UnityEngine_Component_o *v170; // x0
  UnityEngine_GameObject_o *v171; // x0
  __int64 v172; // x0
  struct ClassBoardBackground_ExClassIconSet_array *v173; // x8
  __int64 v174; // x8
  UnityEngine_Object_o *v175; // x21
  _BOOL8 v176; // x0
  struct ClassBoardBackground_ExClassIconSet_array *v177; // x8
  __int64 v178; // x8
  UnityEngine_Component_o *v179; // x0
  UnityEngine_GameObject_o *v180; // x0
  ClassBoardBackground___c_c *v181; // x0
  System_Collections_Generic_IEnumerable_T__o *grandExIconObj; // x19
  System_Action_object__o *_9__81_2; // x20
  Il2CppObject *v184; // x21
  struct ClassBoardBackground___c_StaticFields *static_fields; // x0
  int32_t v186; // w2
  const MethodInfo *v187; // x3
  System_Collections_Generic_Dictionary_int__object__o **p_grandExClassReleaseEffectAnimationDic; // [xsp+8h] [xbp-B8h]
  int v190; // [xsp+18h] [xbp-A8h] BYREF
  int v191; // [xsp+1Ch] [xbp-A4h] BYREF
  _OWORD v192[2]; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v193; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4C3B333 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_Renderer__TypeInfo);
    sub_1C32C20(&System_Action_GameObject__TypeInfo);
    sub_1C32C20(&Method_BasicHelper_ForEach_GameObject___);
    sub_1C32C20(&Method_BasicHelper_ForEach_Renderer___);
    sub_1C32C20(&ClassBoardUtility_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__SimpleAnimation___ctor__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_int__SimpleAnimation__TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__get_Current__);
    sub_1C32C20(&System_Func_Texture__bool__TypeInfo);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Key__);
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Value__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Material___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_Material__TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_ClassBoardBackground___c__SetGrandClassIcon_b__81_2__);
    sub_1C32C20(&Method_ClassBoardBackground___c__SetGrandClassIcon_b__81_3__);
    sub_1C32C20(&Method_ClassBoardBackground___c__DisplayClass81_0__SetGrandClassIcon_b__0__);
    sub_1C32C20(&Method_ClassBoardBackground___c__DisplayClass81_0__SetGrandClassIcon_b__1__);
    sub_1C32C20(&ClassBoardBackground___c__DisplayClass81_0_TypeInfo);
    sub_1C32C20(&Method_ClassBoardBackground___c__DisplayClass81_1__SetGrandClassIcon_b__4__);
    sub_1C32C20(&Method_ClassBoardBackground___c__DisplayClass81_1__SetGrandClassIcon_b__5__);
    sub_1C32C20(&Method_ClassBoardBackground___c__DisplayClass81_1__SetGrandClassIcon_b__6__);
    sub_1C32C20(&ClassBoardBackground___c__DisplayClass81_1_TypeInfo);
    sub_1C32C20(&ClassBoardBackground___c_TypeInfo);
    sub_1C32C20(&StringLiteral_7145/*"GrandClassIconEx_on_{0}"*/);
    sub_1C32C20(&StringLiteral_7144/*"GrandClassIconEx_off_{0}"*/);
    sub_1C32C20(&StringLiteral_7143/*"GrandClassIconEx_ef_glow_{0}"*/);
    byte_4C3B333 = 1;
  }
  memset(&v193, 0, 32);
  v6 = sub_1C32E6C(ClassBoardBackground___c__DisplayClass81_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  if ( !v6 )
    goto LABEL_198;
  *(_DWORD *)(v6 + 16) = iconId;
  *(_QWORD *)(v6 + 24) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v6 + 24), (int32_t)this, v8, v9);
  grandIconTextures = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.grandIconTextures;
  v11 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_Texture__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v6,
    Method_ClassBoardBackground___c__DisplayClass81_0__SetGrandClassIcon_b__0__,
    0);
  v12 = System_Linq_Enumerable__FirstOrDefault_object__51408536(
          grandIconTextures,
          (System_Func_TSource__bool__o *)v11,
          (const MethodInfo_3106E98 *)Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
  *(_QWORD *)(v6 + 32) = v12;
  sub_1C32BC4((CGThumbnailListItem_o *)(v6 + 32), (int32_t)v12, v13, v14);
  v15 = *(UnityEngine_Object_o **)(v6 + 32);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v15, 0, 0) )
    return;
  grandIconRenderers = (System_Collections_Generic_IEnumerable_T__o *)this->fields.grandIconRenderers;
  v17 = (System_Action_object__o *)sub_1C32E6C(System_Action_Renderer__TypeInfo);
  System_Action_object____ctor(
    v17,
    (Il2CppObject *)v6,
    Method_ClassBoardBackground___c__DisplayClass81_0__SetGrandClassIcon_b__1__,
    0);
  BasicHelper__ForEach_object_(
    grandIconRenderers,
    (System_Action_T__o *)v17,
    (const MethodInfo_30C93B0 *)Method_BasicHelper_ForEach_Renderer___);
  v18 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_Material__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_Material___ctor__);
  this->fields.grandStartAnimActiveIconMaterials = (struct System_Collections_Generic_List_Material__o *)v18;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.grandStartAnimActiveIconMaterials, (int32_t)v18, v19, v20);
  v21 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_int__SimpleAnimation__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v21,
    (const MethodInfo_33EF348 *)Method_System_Collections_Generic_Dictionary_int__SimpleAnimation___ctor__);
  this->fields.grandExClassReleaseEffectAnimationDic = (struct System_Collections_Generic_Dictionary_int__SimpleAnimation__o *)v21;
  p_grandExClassReleaseEffectAnimationDic = (System_Collections_Generic_Dictionary_int__object__o **)&this->fields.grandExClassReleaseEffectAnimationDic;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.grandExClassReleaseEffectAnimationDic, (int32_t)v21, v22, v23);
  p_grandExIconSet = &this->fields.grandExIconSet;
  grandExIconSet = this->fields.grandExIconSet;
  if ( !grandExIconSet )
    goto LABEL_198;
  if ( !grandExIconSet->max_length )
    return;
  if ( (unsigned int)baseId >> 1 != 5004 )
  {
    v181 = ClassBoardBackground___c_TypeInfo;
    grandExIconObj = (System_Collections_Generic_IEnumerable_T__o *)this->fields.grandExIconObj;
    if ( !ClassBoardBackground___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardBackground___c_TypeInfo);
      v181 = ClassBoardBackground___c_TypeInfo;
    }
    _9__81_2 = (System_Action_object__o *)v181->static_fields->__9__81_2;
    if ( !_9__81_2 )
    {
      if ( !v181->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v181);
        v181 = ClassBoardBackground___c_TypeInfo;
      }
      v184 = (Il2CppObject *)v181->static_fields->__9;
      _9__81_2 = (System_Action_object__o *)sub_1C32E6C(System_Action_GameObject__TypeInfo);
      System_Action_object____ctor(_9__81_2, v184, Method_ClassBoardBackground___c__SetGrandClassIcon_b__81_2__, 0);
      static_fields = ClassBoardBackground___c_TypeInfo->static_fields;
      static_fields->__9__81_2 = (struct System_Action_GameObject__o *)_9__81_2;
      sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__81_2, (int32_t)_9__81_2, v186, v187);
    }
    BasicHelper__ForEach_object_(
      grandExIconObj,
      (System_Action_T__o *)_9__81_2,
      (const MethodInfo_30C93B0 *)Method_BasicHelper_ForEach_GameObject___);
    return;
  }
  v26 = ClassBoardBackground___c_TypeInfo;
  v27 = (System_Collections_Generic_IEnumerable_T__o *)this->fields.grandExIconObj;
  if ( !ClassBoardBackground___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardBackground___c_TypeInfo);
    v26 = ClassBoardBackground___c_TypeInfo;
  }
  _9__81_3 = (System_Action_object__o *)v26->static_fields->__9__81_3;
  if ( !_9__81_3 )
  {
    if ( !v26->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v26);
      v26 = ClassBoardBackground___c_TypeInfo;
    }
    v29 = (Il2CppObject *)v26->static_fields->__9;
    _9__81_3 = (System_Action_object__o *)sub_1C32E6C(System_Action_GameObject__TypeInfo);
    System_Action_object____ctor(_9__81_3, v29, Method_ClassBoardBackground___c__SetGrandClassIcon_b__81_3__, 0);
    v30 = ClassBoardBackground___c_TypeInfo->static_fields;
    v30->__9__81_3 = (struct System_Action_GameObject__o *)_9__81_3;
    sub_1C32BC4((CGThumbnailListItem_o *)&v30->__9__81_3, (int32_t)_9__81_3, v31, v32);
  }
  BasicHelper__ForEach_object_(
    v27,
    (System_Action_T__o *)_9__81_3,
    (const MethodInfo_30C93B0 *)Method_BasicHelper_ForEach_GameObject___);
  IconIdList = ClassBoardBackground__GetIconIdList(v33, baseId, 1, v34);
  if ( !IconIdList )
LABEL_198:
    sub_1C32E7C(IconIdList);
  System_Collections_Generic_Dictionary_int__bool___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v192,
    IconIdList,
    (const MethodInfo_33E18AC *)Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
  *(_OWORD *)&v193.fields._dictionary = v192[0];
  v193.fields._current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v192[1];
LABEL_18:
  while ( System_Collections_Generic_Dictionary_Enumerator_int__bool___MoveNext(
            &v193,
            (const MethodInfo_3544088 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__) )
  {
    key = v193.fields._current.fields.key;
    v36 = sub_1C32E6C(ClassBoardBackground___c__DisplayClass81_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v36, 0);
    LODWORD(v192[0]) = (_DWORD)key;
    v43 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v192, v37, v38, v39, v40, v41, v42);
    v44 = System_String__Format((System_String_o *)StringLiteral_7145/*"GrandClassIconEx_on_{0}"*/, v43, 0);
    if ( !v36 )
      sub_1C32E7C(v44);
    *(_QWORD *)(v36 + 16) = v44;
    sub_1C32BC4((CGThumbnailListItem_o *)(v36 + 16), (int32_t)v44, v45, v46);
    v191 = (int)key;
    v53 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v191, v47, v48, v49, v50, v51, v52);
    v54 = System_String__Format((System_String_o *)StringLiteral_7144/*"GrandClassIconEx_off_{0}"*/, v53, 0);
    *(_QWORD *)(v36 + 24) = v54;
    sub_1C32BC4((CGThumbnailListItem_o *)(v36 + 24), (int32_t)v54, v55, v56);
    v190 = (int)key;
    v63 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v190, v57, v58, v59, v60, v61, v62);
    v64 = System_String__Format((System_String_o *)StringLiteral_7143/*"GrandClassIconEx_ef_glow_{0}"*/, v63, 0);
    *(_QWORD *)(v36 + 32) = v64;
    sub_1C32BC4((CGThumbnailListItem_o *)(v36 + 32), (int32_t)v64, v65, v66);
    v68 = *p_grandExIconSet;
    if ( !*p_grandExIconSet )
LABEL_174:
      sub_1C32E7C(v67);
    v69 = (System_Func_object__bool__o **)(v36 + 40);
    v70 = 4;
    while ( 1 )
    {
      max_length = v68->max_length;
      v72 = v70 - 4;
      if ( (int)v70 - 4 >= max_length )
        break;
      if ( v72 >= max_length )
        sub_1C32E84(v67);
      v73 = *((_QWORD *)&v68->obj.klass + v70);
      if ( !v73 )
        sub_1C32E7C(v67);
      v74 = *v69;
      v75 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v73 + 48);
      if ( !*v69 )
      {
        v74 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_Texture__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v74,
          (Il2CppObject *)v36,
          Method_ClassBoardBackground___c__DisplayClass81_1__SetGrandClassIcon_b__4__,
          0);
        *v69 = v74;
        sub_1C32BC4((CGThumbnailListItem_o *)(v36 + 40), (int32_t)v74, v76, v77);
      }
      v78 = System_Linq_Enumerable__FirstOrDefault_object__51408536(
              v75,
              (System_Func_TSource__bool__o *)v74,
              (const MethodInfo_3106E98 *)Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v67 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v78, 0, 0);
      if ( !v67 )
      {
        v79 = *p_grandExIconSet;
        if ( !*p_grandExIconSet )
          sub_1C32E7C(v67);
        if ( v72 >= LODWORD(v79->max_length) )
          sub_1C32E84(v67);
        v80 = *((_QWORD *)&v79->obj.klass + v70);
        if ( !v80 )
          sub_1C32E7C(v67);
        v81 = *(UnityEngine_Renderer_o **)(v80 + 16);
        if ( !v81 )
          sub_1C32E7C(0);
        material = UnityEngine_Renderer__get_material(v81, 0);
        if ( !material )
          sub_1C32E7C(0);
        UnityEngine_Material__SetTexture(
          material,
          this->fields.iconMaterialPropertyName,
          (UnityEngine_Texture_o *)v78,
          0);
        v83 = *(System_Func_object__bool__o **)(v36 + 48);
        if ( !v83 )
        {
          v83 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_Texture__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v83,
            (Il2CppObject *)v36,
            Method_ClassBoardBackground___c__DisplayClass81_1__SetGrandClassIcon_b__5__,
            0);
          *(_QWORD *)(v36 + 48) = v83;
          sub_1C32BC4((CGThumbnailListItem_o *)(v36 + 48), (int32_t)v83, v84, v85);
        }
        v86 = System_Linq_Enumerable__FirstOrDefault_object__51408536(
                v75,
                (System_Func_TSource__bool__o *)v83,
                (const MethodInfo_3106E98 *)Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
        v87 = *p_grandExIconSet;
        if ( !*p_grandExIconSet )
          sub_1C32E7C(v86);
        if ( v72 >= LODWORD(v87->max_length) )
          sub_1C32E84(v86);
        v88 = *((_QWORD *)&v87->obj.klass + v70);
        if ( !v88 )
          sub_1C32E7C(v86);
        v89 = (UnityEngine_Object_o *)v86;
        v90 = *(UnityEngine_Object_o **)(v88 + 24);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v91 = UnityEngine_Object__op_Inequality(v90, 0, 0);
        if ( v91 )
        {
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v91 = UnityEngine_Object__op_Inequality(v89, 0, 0);
          if ( v91 )
          {
            v92 = *p_grandExIconSet;
            if ( !*p_grandExIconSet )
              sub_1C32E7C(v91);
            if ( v72 >= LODWORD(v92->max_length) )
              sub_1C32E84(v91);
            v93 = *((_QWORD *)&v92->obj.klass + v70);
            if ( !v93 )
              sub_1C32E7C(v91);
            v94 = *(UnityEngine_Renderer_o **)(v93 + 24);
            if ( !v94 )
              sub_1C32E7C(0);
            v95 = UnityEngine_Renderer__get_material(v94, 0);
            if ( !v95 )
              sub_1C32E7C(0);
            UnityEngine_Material__SetTexture(
              v95,
              this->fields.iconMaterialPropertyName,
              (UnityEngine_Texture_o *)v89,
              0);
          }
        }
        v96 = *p_grandExIconSet;
        if ( !*p_grandExIconSet )
          sub_1C32E7C(v91);
        if ( v72 >= LODWORD(v96->max_length) )
          sub_1C32E84(v91);
        v97 = *((_QWORD *)&v96->obj.klass + v70);
        if ( !v97 )
          sub_1C32E7C(v91);
        v98 = *(UnityEngine_Object_o **)(v97 + 64);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v99 = UnityEngine_Object__op_Inequality(v98, 0, 0);
        if ( v99 )
        {
          v100 = *p_grandExIconSet;
          if ( !*p_grandExIconSet )
            sub_1C32E7C(v99);
          if ( v72 >= LODWORD(v100->max_length) )
            sub_1C32E84(v99);
          v101 = *((_QWORD *)&v100->obj.klass + v70);
          if ( !v101 )
            sub_1C32E7C(v99);
          v102 = *(UnityEngine_GameObject_o **)(v101 + 64);
          if ( !v102 )
            sub_1C32E7C(0);
          gameObject = UnityEngine_GameObject__get_gameObject(v102, 0);
          if ( !gameObject )
            sub_1C32E7C(0);
          UnityEngine_GameObject__SetActive(gameObject, 0, 0);
        }
        v104 = *p_grandExIconSet;
        if ( !*p_grandExIconSet )
          sub_1C32E7C(v99);
        if ( v72 >= LODWORD(v104->max_length) )
          sub_1C32E84(v99);
        v105 = *((_QWORD *)&v104->obj.klass + v70);
        if ( !v105 )
          sub_1C32E7C(v99);
        v106 = *(UnityEngine_Object_o **)(v105 + 32);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v107 = UnityEngine_Object__op_Inequality(v106, 0, 0);
        if ( v107 )
        {
          v108 = *p_grandExIconSet;
          if ( !*p_grandExIconSet )
            sub_1C32E7C(v107);
          if ( v72 >= LODWORD(v108->max_length) )
            sub_1C32E84(v107);
          v109 = *((_QWORD *)&v108->obj.klass + v70);
          if ( !v109 )
            sub_1C32E7C(v107);
          v110 = *(UnityEngine_Renderer_o **)(v109 + 32);
          if ( !v110 )
            sub_1C32E7C(0);
          v111 = UnityEngine_Renderer__get_material(v110, 0);
          if ( !v111 )
            sub_1C32E7C(0);
          UnityEngine_Material__SetTexture(v111, this->fields.iconMaterialPropertyName, (UnityEngine_Texture_o *)v89, 0);
        }
        v112 = *(System_Func_object__bool__o **)(v36 + 56);
        if ( !v112 )
        {
          v112 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_Texture__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v112,
            (Il2CppObject *)v36,
            Method_ClassBoardBackground___c__DisplayClass81_1__SetGrandClassIcon_b__6__,
            0);
          *(_QWORD *)(v36 + 56) = v112;
          sub_1C32BC4((CGThumbnailListItem_o *)(v36 + 56), (int32_t)v112, v113, v114);
        }
        v115 = System_Linq_Enumerable__FirstOrDefault_object__51408536(
                 v75,
                 (System_Func_TSource__bool__o *)v112,
                 (const MethodInfo_3106E98 *)Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
        v116 = *p_grandExIconSet;
        if ( !*p_grandExIconSet )
          sub_1C32E7C(v115);
        if ( v72 >= LODWORD(v116->max_length) )
          sub_1C32E84(v115);
        v117 = *((_QWORD *)&v116->obj.klass + v70);
        if ( !v117 )
          sub_1C32E7C(v115);
        v118 = (UnityEngine_Texture_o *)v115;
        v119 = *(UnityEngine_Object_o **)(v117 + 40);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v120 = UnityEngine_Object__op_Inequality(v119, 0, 0);
        if ( v120 )
        {
          v121 = *p_grandExIconSet;
          if ( !*p_grandExIconSet )
            sub_1C32E7C(v120);
          if ( v72 >= LODWORD(v121->max_length) )
            sub_1C32E84(v120);
          v122 = *((_QWORD *)&v121->obj.klass + v70);
          if ( !v122 )
            sub_1C32E7C(v120);
          v123 = *(UnityEngine_Renderer_o **)(v122 + 40);
          if ( !v123 )
            sub_1C32E7C(0);
          v124 = UnityEngine_Renderer__get_material(v123, 0);
          if ( !v124 )
            sub_1C32E7C(0);
          UnityEngine_Material__SetTexture(v124, this->fields.iconMaterialPropertyName, v118, 0);
        }
        v125 = *p_grandExIconSet;
        if ( !*p_grandExIconSet )
          sub_1C32E7C(v120);
        if ( v72 >= LODWORD(v125->max_length) )
          sub_1C32E84(v120);
        v126 = *((_QWORD *)&v125->obj.klass + v70);
        if ( !v126 )
          sub_1C32E7C(v120);
        v127 = *(UnityEngine_Object_o **)(v126 + 56);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v128 = UnityEngine_Object__op_Inequality(v127, 0, 0);
        if ( v128 )
        {
          v129 = *p_grandExIconSet;
          if ( !*p_grandExIconSet )
            sub_1C32E7C(v128);
          if ( v72 >= LODWORD(v129->max_length) )
            sub_1C32E84(v128);
          v130 = *((_QWORD *)&v129->obj.klass + v70);
          if ( !v130 )
            sub_1C32E7C(v128);
          v131 = *(SimpleAnimation_o **)(v130 + 56);
          if ( !v131 )
            sub_1C32E7C(0);
          SimpleAnimation__Rewind(v131, 0);
          v133 = *p_grandExIconSet;
          if ( !*p_grandExIconSet )
            sub_1C32E7C(v132);
          if ( v72 >= LODWORD(v133->max_length) )
            sub_1C32E84(v132);
          v134 = *((_QWORD *)&v133->obj.klass + v70);
          if ( !v134 )
            sub_1C32E7C(v132);
          v135 = *(SimpleAnimation_o **)(v134 + 56);
          if ( !v135 )
            sub_1C32E7C(0);
          SimpleAnimation__Stop(v135, 0);
        }
        if ( ((unsigned __int64)key & 0xFF00000000LL) != 0 )
        {
          if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
          IsPlayedGrand = ClassBoardUtility__IsPlayedGrandExClassReleaseEffect((int32_t)key, 0);
          if ( IsPlayedGrand )
            goto LABEL_139;
          v137 = *p_grandExIconSet;
          if ( !*p_grandExIconSet )
            sub_1C32E7C(IsPlayedGrand);
          if ( v72 >= LODWORD(v137->max_length) )
            sub_1C32E84(IsPlayedGrand);
          v138 = *((_QWORD *)&v137->obj.klass + v70);
          if ( !v138 )
            sub_1C32E7C(IsPlayedGrand);
          v139 = *(UnityEngine_Object_o **)(v138 + 56);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          IsPlayedGrand = UnityEngine_Object__op_Inequality(v139, 0, 0);
          if ( !IsPlayedGrand )
          {
LABEL_139:
            v155 = *p_grandExIconSet;
            if ( !*p_grandExIconSet )
              sub_1C32E7C(IsPlayedGrand);
            if ( v72 >= LODWORD(v155->max_length) )
              sub_1C32E84(IsPlayedGrand);
            v156 = *((_QWORD *)&v155->obj.klass + v70);
            if ( !v156 )
              sub_1C32E7C(IsPlayedGrand);
            v157 = *(UnityEngine_Component_o **)(v156 + 16);
            if ( !v157 )
              sub_1C32E7C(0);
            v158 = UnityEngine_Component__get_gameObject(v157, 0);
            if ( !v158 )
              sub_1C32E7C(0);
            UnityEngine_GameObject__SetActive(v158, 1, 0);
            v160 = *p_grandExIconSet;
            if ( !*p_grandExIconSet )
              sub_1C32E7C(v159);
            if ( v72 >= LODWORD(v160->max_length) )
              sub_1C32E84(v159);
            v161 = *((_QWORD *)&v160->obj.klass + v70);
            if ( !v161 )
              sub_1C32E7C(v159);
            v162 = *(UnityEngine_Object_o **)(v161 + 24);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            v163 = UnityEngine_Object__op_Inequality(v162, 0, 0);
            if ( v163 )
            {
              v164 = *p_grandExIconSet;
              if ( !*p_grandExIconSet )
                sub_1C32E7C(v163);
              if ( v72 >= LODWORD(v164->max_length) )
                sub_1C32E84(v163);
              v165 = *((_QWORD *)&v164->obj.klass + v70);
              if ( !v165 )
                sub_1C32E7C(v163);
              v166 = *(UnityEngine_Component_o **)(v165 + 24);
              if ( !v166 )
                sub_1C32E7C(0);
              v167 = UnityEngine_Component__get_gameObject(v166, 0);
              if ( !v167 )
                sub_1C32E7C(0);
              UnityEngine_GameObject__SetActive(v167, 0, 0);
            }
          }
          else
          {
            v140 = *p_grandExIconSet;
            if ( !*p_grandExIconSet )
              sub_1C32E7C(IsPlayedGrand);
            if ( v72 >= LODWORD(v140->max_length) )
              sub_1C32E84(IsPlayedGrand);
            v141 = *((_QWORD *)&v140->obj.klass + v70);
            if ( !v141 )
              sub_1C32E7C(IsPlayedGrand);
            v142 = *(UnityEngine_Component_o **)(v141 + 16);
            if ( !v142 )
              sub_1C32E7C(0);
            v143 = UnityEngine_Component__get_gameObject(v142, 0);
            if ( !v143 )
              sub_1C32E7C(0);
            UnityEngine_GameObject__SetActive(v143, 0, 0);
            v145 = *p_grandExIconSet;
            if ( !*p_grandExIconSet )
              sub_1C32E7C(v144);
            if ( v72 >= LODWORD(v145->max_length) )
              sub_1C32E84(v144);
            v146 = *((_QWORD *)&v145->obj.klass + v70);
            if ( !v146 )
              sub_1C32E7C(v144);
            v147 = *(UnityEngine_Object_o **)(v146 + 24);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            v148 = UnityEngine_Object__op_Inequality(v147, 0, 0);
            if ( v148 )
            {
              v149 = *p_grandExIconSet;
              if ( !*p_grandExIconSet )
                sub_1C32E7C(v148);
              if ( v72 >= LODWORD(v149->max_length) )
                sub_1C32E84(v148);
              v150 = *((_QWORD *)&v149->obj.klass + v70);
              if ( !v150 )
                sub_1C32E7C(v148);
              v151 = *(UnityEngine_Component_o **)(v150 + 24);
              if ( !v151 )
                sub_1C32E7C(0);
              v152 = UnityEngine_Component__get_gameObject(v151, 0);
              if ( !v152 )
                sub_1C32E7C(0);
              UnityEngine_GameObject__SetActive(v152, 1, 0);
            }
            v153 = *p_grandExIconSet;
            if ( !*p_grandExIconSet )
              sub_1C32E7C(v148);
            if ( v72 >= LODWORD(v153->max_length) )
              sub_1C32E84(v148);
            v154 = *((_QWORD *)&v153->obj.klass + v70);
            if ( !v154 )
              sub_1C32E7C(v148);
            if ( !*p_grandExClassReleaseEffectAnimationDic )
              sub_1C32E7C(0);
            System_Collections_Generic_Dictionary_int__object___Add(
              *p_grandExClassReleaseEffectAnimationDic,
              (int32_t)key,
              *(Il2CppObject **)(v154 + 56),
              (const MethodInfo_33EFD1C *)Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__Add__);
          }
        }
        else
        {
          v168 = *p_grandExIconSet;
          if ( !*p_grandExIconSet )
            sub_1C32E7C(v128);
          if ( v72 >= LODWORD(v168->max_length) )
            sub_1C32E84(v128);
          v169 = *((_QWORD *)&v168->obj.klass + v70);
          if ( !v169 )
            sub_1C32E7C(v128);
          v170 = *(UnityEngine_Component_o **)(v169 + 16);
          if ( !v170 )
            sub_1C32E7C(0);
          v171 = UnityEngine_Component__get_gameObject(v170, 0);
          if ( !v171 )
            sub_1C32E7C(0);
          UnityEngine_GameObject__SetActive(v171, 0, 0);
          v173 = *p_grandExIconSet;
          if ( !*p_grandExIconSet )
            sub_1C32E7C(v172);
          if ( v72 >= LODWORD(v173->max_length) )
            sub_1C32E84(v172);
          v174 = *((_QWORD *)&v173->obj.klass + v70);
          if ( !v174 )
            sub_1C32E7C(v172);
          v175 = *(UnityEngine_Object_o **)(v174 + 24);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v176 = UnityEngine_Object__op_Inequality(v175, 0, 0);
          if ( v176 )
          {
            v177 = *p_grandExIconSet;
            if ( !*p_grandExIconSet )
              sub_1C32E7C(v176);
            if ( v72 >= LODWORD(v177->max_length) )
              sub_1C32E84(v176);
            v178 = *((_QWORD *)&v177->obj.klass + v70);
            if ( !v178 )
              sub_1C32E7C(v176);
            v179 = *(UnityEngine_Component_o **)(v178 + 24);
            if ( !v179 )
              sub_1C32E7C(0);
            v180 = UnityEngine_Component__get_gameObject(v179, 0);
            if ( !v180 )
              sub_1C32E7C(0);
            UnityEngine_GameObject__SetActive(v180, 1, 0);
          }
        }
        goto LABEL_18;
      }
      v68 = *p_grandExIconSet;
      ++v70;
      if ( !*p_grandExIconSet )
        goto LABEL_174;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__bool___Dispose(
    &v193,
    (const MethodInfo_3544190 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
}


void ClassBoardBackground__SetShowBoardCallback(
        ClassBoardBackground_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.showBoardCallback = callback;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.showBoardCallback, (int32_t)callback, (int32_t)method, v3);
}


void ClassBoardBackground__SkipStartMainEffectPlayer(ClassBoardBackground_o *this, const MethodInfo *method)
{
  ClassBoardEffectPlayer_o *skipMainEffectPlayer; // x0
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  __int64 v7; // x5
  __int64 v8; // x6
  __int64 v9; // x7
  Il2CppObject *v10; // x0
  System_String_o *v11; // x0
  SimpleAnimation_o *mainAnimation; // x20
  System_String_o *v13; // x21
  System_Action_o *v14; // x22
  const MethodInfo *v15; // x5
  int32_t Data_int; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C3B339 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_ClassBoardBackground__SkipStartMainEffectPlayer_b__87_0__);
    sub_1C32C20(&Method_ClassBoardEffectPlayer_GetData_int___);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&StringLiteral_8873/*"MainTransition{0}"*/);
    byte_4C3B339 = 1;
  }
  skipMainEffectPlayer = this->fields.skipMainEffectPlayer;
  if ( !skipMainEffectPlayer )
    sub_1C32E7C(0);
  Data_int = ClassBoardEffectPlayer__GetData_int_(
               skipMainEffectPlayer,
               (const MethodInfo_30D0C3C *)Method_ClassBoardEffectPlayer_GetData_int___);
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Data_int, v4, v5, v6, v7, v8, v9);
  v11 = System_String__Format((System_String_o *)StringLiteral_8873/*"MainTransition{0}"*/, v10, 0);
  mainAnimation = this->fields.mainAnimation;
  v13 = v11;
  v14 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_ClassBoardBackground__SkipStartMainEffectPlayer_b__87_0__, 0);
  ClassBoardBackground__ForceSkipSimpleAnimation(this, mainAnimation, v13, v14, 0, v15);
}


void ClassBoardBackground__UseClassBoardSelectViewCamera(ClassBoardBackground_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ClassBoardBackground__ChangeCamera(this, this->fields.classBoardSelectViewCamera, v2);
}


void ClassBoardBackground__UseClassBoardViewCamera(ClassBoardBackground_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ClassBoardBackground__ChangeCamera(this, this->fields.classBoardViewCamera, v2);
}


void ClassBoardBackground__Validation(ClassBoardBackground_o *this, const MethodInfo *method)
{
  ;
}


System_Collections_IEnumerator_o *ClassBoardBackground__WaitAnimationFinished(
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

  if ( (byte_4C3B33E & 1) == 0 )
  {
    sub_1C32C20(&ClassBoardBackground__WaitAnimationFinished_d__93_TypeInfo);
    byte_4C3B33E = 1;
  }
  v8 = sub_1C32E6C(ClassBoardBackground__WaitAnimationFinished_d__93_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0);
  *(_DWORD *)(v8 + 16) = 0;
  *(_QWORD *)(v8 + 32) = anim;
  sub_1C32BC4((CGThumbnailListItem_o *)(v8 + 32), (int32_t)anim, v9, v10);
  *(_QWORD *)(v8 + 40) = name;
  sub_1C32BC4((CGThumbnailListItem_o *)(v8 + 40), (int32_t)name, v11, v12);
  *(_QWORD *)(v8 + 48) = endCallback;
  sub_1C32BC4((CGThumbnailListItem_o *)(v8 + 48), (int32_t)endCallback, v13, v14);
  return (System_Collections_IEnumerator_o *)v8;
}


void ClassBoardBackground___PlayStartExClassReleaseEffectPlayer_b__89_0(
        ClassBoardBackground_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x0
  CGThumbnailListItem_o *p_exClassReleaseEffectAnimationDic; // x19
  struct System_Collections_Generic_Dictionary_int__SimpleAnimation__o *exClassReleaseEffectAnimationDic; // t1
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  System_Int32_array *v7; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C3B341 & 1) == 0 )
  {
    sub_1C32C20(&ClassBoardUtility_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__get_Keys__);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_int___);
    byte_4C3B341 = 1;
  }
  exClassReleaseEffectAnimationDic = this->fields.exClassReleaseEffectAnimationDic;
  p_exClassReleaseEffectAnimationDic = (CGThumbnailListItem_o *)&this->fields.exClassReleaseEffectAnimationDic;
  v3 = (System_Collections_Generic_Dictionary_int__object__o *)exClassReleaseEffectAnimationDic;
  if ( !exClassReleaseEffectAnimationDic )
    sub_1C32E7C(0);
  Keys = System_Collections_Generic_Dictionary_int__object___get_Keys(
           v3,
           (const MethodInfo_33EF9DC *)Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__get_Keys__);
  v7 = System_Linq_Enumerable__ToArray_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
         (const MethodInfo_311C8F4 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
  ClassBoardUtility__SavePlayedExClassReleaseEffect(v7, 0);
  p_exClassReleaseEffectAnimationDic->klass = 0;
  sub_1C32BC4(p_exClassReleaseEffectAnimationDic, 0, v8, v9);
}


void ClassBoardBackground___PlayStartMainEffectPlayer_b__86_0(ClassBoardBackground_o *this, const MethodInfo *method)
{
  ClassBoardEffectPlayer_o *startMainEffectPlayer; // x0

  startMainEffectPlayer = this->fields.startMainEffectPlayer;
  if ( !startMainEffectPlayer )
    sub_1C32E7C(0);
  ClassBoardEffectPlayer__End(startMainEffectPlayer, 0);
}


void ClassBoardBackground___SkipStartMainEffectPlayer_b__87_0(ClassBoardBackground_o *this, const MethodInfo *method)
{
  ClassBoardEffectPlayer_o *skipMainEffectPlayer; // x0

  skipMainEffectPlayer = this->fields.skipMainEffectPlayer;
  if ( !skipMainEffectPlayer )
    sub_1C32E7C(0);
  ClassBoardEffectPlayer__End(skipMainEffectPlayer, 0);
}


ClassBoardEffectPlayer_o *ClassBoardBackground__get_SkipMainEffectPlayer(
        ClassBoardBackground_o *this,
        const MethodInfo *method)
{
  return this->fields.skipMainEffectPlayer;
}


ClassBoardEffectPlayer_o *ClassBoardBackground__get_StartMainEffectPlayer(
        ClassBoardBackground_o *this,
        const MethodInfo *method)
{
  return this->fields.startMainEffectPlayer;
}


void ClassBoardBackground_ExClassIconSet___ctor(ClassBoardBackground_ExClassIconSet_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardBackground__PlayExClassReleaseEffectPlayer_d__88___ctor(
        ClassBoardBackground__PlayExClassReleaseEffectPlayer_d__88_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool ClassBoardBackground__PlayExClassReleaseEffectPlayer_d__88__MoveNext(
        ClassBoardBackground__PlayExClassReleaseEffectPlayer_d__88_o *this,
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

  if ( (byte_4C3B348 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4C3B348 = 1;
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
      v6 = (UnityEngine_WaitForSeconds_o *)sub_1C32E6C(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v6, exClassReleaseEffectStartSec, 0);
      this->fields.__2__current = (Il2CppObject *)v6;
      p__2__current = &this->fields.__2__current;
      sub_1C32BC4((CGThumbnailListItem_o *)p__2__current, (int32_t)v6, v8, v9);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
LABEL_10:
    sub_1C32E7C(_4__this);
  }
  return 0;
}


Il2CppObject *ClassBoardBackground__PlayExClassReleaseEffectPlayer_d__88__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ClassBoardBackground__PlayExClassReleaseEffectPlayer_d__88_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn ClassBoardBackground__PlayExClassReleaseEffectPlayer_d__88__System_Collections_IEnumerator_Reset(
        ClassBoardBackground__PlayExClassReleaseEffectPlayer_d__88_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C32C34(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C32E6C(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C32C34(&Method_ClassBoardBackground__PlayExClassReleaseEffectPlayer_d__88_System_Collections_IEnumerator_Reset__);
  sub_1C32D48(v3, v4);
}


Il2CppObject *ClassBoardBackground__PlayExClassReleaseEffectPlayer_d__88__System_Collections_IEnumerator_get_Current(
        ClassBoardBackground__PlayExClassReleaseEffectPlayer_d__88_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void ClassBoardBackground__PlayExClassReleaseEffectPlayer_d__88__System_IDisposable_Dispose(
        ClassBoardBackground__PlayExClassReleaseEffectPlayer_d__88_o *this,
        const MethodInfo *method)
{
  ;
}


void ClassBoardBackground__PlayGrandReturnTransitionAnimationFromTween_d__79___ctor(
        ClassBoardBackground__PlayGrandReturnTransitionAnimationFromTween_d__79_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool ClassBoardBackground__PlayGrandReturnTransitionAnimationFromTween_d__79__MoveNext(
        ClassBoardBackground__PlayGrandReturnTransitionAnimationFromTween_d__79_o *this,
        const MethodInfo *method)
{
  ClassBoardBackground__PlayGrandReturnTransitionAnimationFromTween_d__79_o *v2; // x19
  int32_t _1__state; // w9
  struct ClassBoardBackground_o *_4__this; // x8
  float classScoreTweenStartDelay; // s8
  UnityEngine_WaitForSeconds_o *v6; // x20
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  bool result; // w0
  float v11; // s0
  UITweener_o *v12; // x19
  ClassBoardBackground___c_c *v13; // x0
  EventDelegate_Callback_o *_9__79_0; // x20
  Il2CppObject *v15; // x21
  struct ClassBoardBackground___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  UnityEngine_Vector3_o v19; // 0:s1.4,4:s2.4,8:s3.4

  v2 = this;
  if ( (byte_4C3B349 & 1) == 0 )
  {
    sub_1C32C20(&EventDelegate_Callback_TypeInfo);
    sub_1C32C20(&Method_ClassBoardBackground___c__PlayGrandReturnTransitionAnimationFromTween_b__79_0__);
    sub_1C32C20(&ClassBoardBackground___c_TypeInfo);
    this = (ClassBoardBackground__PlayGrandReturnTransitionAnimationFromTween_d__79_o *)sub_1C32C20(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4C3B349 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_19;
    v11 = 0.0;
    if ( !v2->fields.isQuick )
      v11 = 1.0;
    v19.fields.x = 0.0;
    v19.fields.y = 0.0;
    v19.fields.z = 0.0;
    this = (ClassBoardBackground__PlayGrandReturnTransitionAnimationFromTween_d__79_o *)TweenPosition__Begin(
                                                                                          _4__this->fields.boardRoot,
                                                                                          v11,
                                                                                          v19,
                                                                                          0);
    if ( !this )
      goto LABEL_19;
    LODWORD(this->fields.__4__this) = 21;
    v12 = (UITweener_o *)this;
    v13 = ClassBoardBackground___c_TypeInfo;
    if ( !ClassBoardBackground___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardBackground___c_TypeInfo);
      v13 = ClassBoardBackground___c_TypeInfo;
    }
    _9__79_0 = v13->static_fields->__9__79_0;
    if ( !_9__79_0 )
    {
      if ( !v13->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v13);
        v13 = ClassBoardBackground___c_TypeInfo;
      }
      v15 = (Il2CppObject *)v13->static_fields->__9;
      _9__79_0 = (EventDelegate_Callback_o *)sub_1C32E6C(EventDelegate_Callback_TypeInfo);
      EventDelegate_Callback___ctor(
        _9__79_0,
        v15,
        Method_ClassBoardBackground___c__PlayGrandReturnTransitionAnimationFromTween_b__79_0__,
        0);
      static_fields = ClassBoardBackground___c_TypeInfo->static_fields;
      static_fields->__9__79_0 = _9__79_0;
      sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__79_0, (int32_t)_9__79_0, v17, v18);
    }
    UITweener__SetOnFinished(v12, _9__79_0, 0);
  }
  else if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    if ( _4__this )
    {
      classScoreTweenStartDelay = _4__this->fields.classScoreTweenStartDelay;
      v6 = (UnityEngine_WaitForSeconds_o *)sub_1C32E6C(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v6, classScoreTweenStartDelay, 0);
      v2->fields.__2__current = (Il2CppObject *)v6;
      p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
      sub_1C32BC4(p__2__current, (int32_t)v6, v8, v9);
      result = 1;
      LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
      return result;
    }
LABEL_19:
    sub_1C32E7C(this);
  }
  return 0;
}


Il2CppObject *ClassBoardBackground__PlayGrandReturnTransitionAnimationFromTween_d__79__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ClassBoardBackground__PlayGrandReturnTransitionAnimationFromTween_d__79_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn ClassBoardBackground__PlayGrandReturnTransitionAnimationFromTween_d__79__System_Collections_IEnumerator_Reset(
        ClassBoardBackground__PlayGrandReturnTransitionAnimationFromTween_d__79_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C32C34(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C32E6C(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C32C34(&Method_ClassBoardBackground__PlayGrandReturnTransitionAnimationFromTween_d__79_System_Collections_IEnumerator_Reset__);
  sub_1C32D48(v3, v4);
}


Il2CppObject *ClassBoardBackground__PlayGrandReturnTransitionAnimationFromTween_d__79__System_Collections_IEnumerator_get_Current(
        ClassBoardBackground__PlayGrandReturnTransitionAnimationFromTween_d__79_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void ClassBoardBackground__PlayGrandReturnTransitionAnimationFromTween_d__79__System_IDisposable_Dispose(
        ClassBoardBackground__PlayGrandReturnTransitionAnimationFromTween_d__79_o *this,
        const MethodInfo *method)
{
  ;
}


void ClassBoardBackground__WaitAnimationFinished_d__93___ctor(
        ClassBoardBackground__WaitAnimationFinished_d__93_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool ClassBoardBackground__WaitAnimationFinished_d__93__MoveNext(
        ClassBoardBackground__WaitAnimationFinished_d__93_o *this,
        const MethodInfo *method)
{
  SimpleAnimation_o *anim; // x0
  SimpleAnimation_State_o *State; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v6; // x20
  __int64 v7; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  bool result; // w0
  Il2CppObject **p__2__current; // x19

  if ( (byte_4C3B34A & 1) == 0 )
  {
    sub_1C32C20(&SimpleAnimation_State_TypeInfo);
    byte_4C3B34A = 1;
  }
  if ( this->fields.__1__state > 1u )
    return 0;
  anim = this->fields.anim;
  this->fields.__1__state = -1;
  if ( !anim )
    sub_1C32E7C(0);
  State = SimpleAnimation__GetState(anim, this->fields.name, 0);
  if ( !State )
    goto LABEL_13;
  klass = State->klass;
  v6 = State;
  v7 = *(unsigned __int16 *)&State->klass->_2.rank;
  if ( *(_WORD *)&State->klass->_2.rank )
  {
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v7;
      p_offset += 2;
      if ( !v7 )
        goto LABEL_10;
    }
    v9 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 5];
  }
  else
  {
LABEL_10:
    v9 = sub_1C83438(State, SimpleAnimation_State_TypeInfo, 5);
  }
  if ( (*(float (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v9)(v6, *(_QWORD *)(v9 + 8)) >= 1.0 )
  {
LABEL_13:
    ActionExtensions__Call(this->fields.endCallback, 0);
    return 0;
  }
  this->fields.__2__current = 0;
  p__2__current = &this->fields.__2__current;
  sub_1C32BC4((CGThumbnailListItem_o *)p__2__current, 0, v10, v11);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *ClassBoardBackground__WaitAnimationFinished_d__93__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ClassBoardBackground__WaitAnimationFinished_d__93_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn ClassBoardBackground__WaitAnimationFinished_d__93__System_Collections_IEnumerator_Reset(
        ClassBoardBackground__WaitAnimationFinished_d__93_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C32C34(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C32E6C(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C32C34(&Method_ClassBoardBackground__WaitAnimationFinished_d__93_System_Collections_IEnumerator_Reset__);
  sub_1C32D48(v3, v4);
}


Il2CppObject *ClassBoardBackground__WaitAnimationFinished_d__93__System_Collections_IEnumerator_get_Current(
        ClassBoardBackground__WaitAnimationFinished_d__93_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void ClassBoardBackground__WaitAnimationFinished_d__93__System_IDisposable_Dispose(
        ClassBoardBackground__WaitAnimationFinished_d__93_o *this,
        const MethodInfo *method)
{
  ;
}


void ClassBoardBackground___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C3B342 & 1) == 0 )
  {
    sub_1C32C20(&ClassBoardBackground___c_TypeInfo);
    byte_4C3B342 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(ClassBoardBackground___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ClassBoardBackground___c_TypeInfo->static_fields->__9 = (struct ClassBoardBackground___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)ClassBoardBackground___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void ClassBoardBackground___c___ctor(ClassBoardBackground___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t ClassBoardBackground___c___GetIconIdList_b__82_0(
        ClassBoardBackground___c_o *this,
        ClassBoardClassEntity_o *a,
        ClassBoardClassEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C32E7C(this);
  return a->fields.classId - b->fields.classId;
}


void ClassBoardBackground___c___InitGrandClassReleasedEffect_b__83_0(
        ClassBoardBackground___c_o *this,
        ClassBoardBackground_ExClassIconSet_o *x,
        const MethodInfo *method)
{
  UnityEngine_Object_o *releaseEffect; // x20

  if ( (byte_4C3B343 & 1) == 0 )
  {
    this = (ClassBoardBackground___c_o *)sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3B343 = 1;
  }
  if ( !x )
    goto LABEL_10;
  releaseEffect = (UnityEngine_Object_o *)x->fields.releaseEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(releaseEffect, 0, 0) )
  {
    this = (ClassBoardBackground___c_o *)x->fields.releaseEffect;
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      return;
    }
LABEL_10:
    sub_1C32E7C(this);
  }
}


void ClassBoardBackground___c___OnDestroy_b__85_0(
        ClassBoardBackground___c_o *this,
        UnityEngine_Renderer_o *x,
        const MethodInfo *method)
{
  UnityEngine_Object_o *material; // x19

  if ( (byte_4C3B344 & 1) == 0 )
  {
    this = (ClassBoardBackground___c_o *)sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3B344 = 1;
  }
  if ( !x )
    sub_1C32E7C(this);
  material = (UnityEngine_Object_o *)UnityEngine_Renderer__get_material(x, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71223640(material, 0);
}


void ClassBoardBackground___c___PlayGrandReturnTransitionAnimationFromTween_b__79_0(
        ClassBoardBackground___c_o *this,
        const MethodInfo *method)
{
  ;
}


void ClassBoardBackground___c___PlayGrandTransitionAnimationFromTween_b__77_0(
        ClassBoardBackground___c_o *this,
        const MethodInfo *method)
{
  ;
}


void ClassBoardBackground___c___PlayStartExClassReleaseEffectPlayer_b__89_1(
        ClassBoardBackground___c_o *this,
        const MethodInfo *method)
{
  ;
}


void ClassBoardBackground___c___SetGrandClassIcon_b__81_2(
        ClassBoardBackground___c_o *this,
        UnityEngine_GameObject_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  UnityEngine_GameObject__SetActive(x, 0, 0);
}


void ClassBoardBackground___c___SetGrandClassIcon_b__81_3(
        ClassBoardBackground___c_o *this,
        UnityEngine_GameObject_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  UnityEngine_GameObject__SetActive(x, 1, 0);
}


void ClassBoardBackground___c__DisplayClass80_0___ctor(
        ClassBoardBackground___c__DisplayClass80_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ClassBoardBackground___c__DisplayClass80_0___SetClassIcon_b__0(
        ClassBoardBackground___c__DisplayClass80_0_o *this,
        UnityEngine_Texture_o *x,
        const MethodInfo *method)
{
  ClassBoardBackground___c__DisplayClass80_0_o *v4; // x19
  System_String_o *name; // x20
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  __int64 v9; // x5
  __int64 v10; // x6
  __int64 v11; // x7
  Il2CppObject *v12; // x0
  System_String_o *v13; // x0
  int32_t iconId; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_4C3B345 & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    this = (ClassBoardBackground___c__DisplayClass80_0_o *)sub_1C32C20(&StringLiteral_4488/*"ClassIcon{0}"*/);
    byte_4C3B345 = 1;
  }
  if ( !x )
    sub_1C32E7C(this);
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)x, 0);
  iconId = v4->fields.iconId;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId, v6, v7, v8, v9, v10, v11);
  v13 = System_String__Format((System_String_o *)StringLiteral_4488/*"ClassIcon{0}"*/, v12, 0);
  return System_String__op_Equality(name, v13, 0);
}


void ClassBoardBackground___c__DisplayClass80_0___SetClassIcon_b__1(
        ClassBoardBackground___c__DisplayClass80_0_o *this,
        UnityEngine_Renderer_o *x,
        const MethodInfo *method)
{
  ClassBoardBackground___c__DisplayClass80_0_o *v3; // x19
  struct ClassBoardBackground_o *_4__this; // x8

  if ( !x
    || (v3 = this,
        this = (ClassBoardBackground___c__DisplayClass80_0_o *)UnityEngine_Renderer__get_material(x, 0),
        (_4__this = v3->fields.__4__this) == 0)
    || !this )
  {
    sub_1C32E7C(this);
  }
  UnityEngine_Material__SetTexture(
    (UnityEngine_Material_o *)this,
    _4__this->fields.iconMaterialPropertyName,
    v3->fields.iconTex,
    0);
}


void ClassBoardBackground___c__DisplayClass80_1___ctor(
        ClassBoardBackground___c__DisplayClass80_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ClassBoardBackground___c__DisplayClass80_1___SetClassIcon_b__2(
        ClassBoardBackground___c__DisplayClass80_1_o *this,
        UnityEngine_Texture_o *x,
        const MethodInfo *method)
{
  System_String_o *name; // x0

  if ( !x )
    sub_1C32E7C(this);
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)x, 0);
  return System_String__op_Equality(name, this->fields.offIconName, 0);
}


bool ClassBoardBackground___c__DisplayClass80_1___SetClassIcon_b__3(
        ClassBoardBackground___c__DisplayClass80_1_o *this,
        UnityEngine_Texture_o *x,
        const MethodInfo *method)
{
  System_String_o *name; // x0

  if ( !x )
    sub_1C32E7C(this);
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)x, 0);
  return System_String__op_Equality(name, this->fields.onIconName, 0);
}


bool ClassBoardBackground___c__DisplayClass80_1___SetClassIcon_b__4(
        ClassBoardBackground___c__DisplayClass80_1_o *this,
        UnityEngine_Texture_o *x,
        const MethodInfo *method)
{
  System_String_o *name; // x0

  if ( !x )
    sub_1C32E7C(this);
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)x, 0);
  return System_String__op_Equality(name, this->fields.glowIconName, 0);
}


void ClassBoardBackground___c__DisplayClass81_0___ctor(
        ClassBoardBackground___c__DisplayClass81_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ClassBoardBackground___c__DisplayClass81_0___SetGrandClassIcon_b__0(
        ClassBoardBackground___c__DisplayClass81_0_o *this,
        UnityEngine_Texture_o *x,
        const MethodInfo *method)
{
  ClassBoardBackground___c__DisplayClass81_0_o *v4; // x19
  System_String_o *name; // x20
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  __int64 v9; // x5
  __int64 v10; // x6
  __int64 v11; // x7
  Il2CppObject *v12; // x0
  System_String_o *v13; // x0
  int32_t iconId; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_4C3B346 & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    this = (ClassBoardBackground___c__DisplayClass81_0_o *)sub_1C32C20(&StringLiteral_7146/*"GrandClassIcon{0}"*/);
    byte_4C3B346 = 1;
  }
  if ( !x )
    sub_1C32E7C(this);
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)x, 0);
  iconId = v4->fields.iconId;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId, v6, v7, v8, v9, v10, v11);
  v13 = System_String__Format((System_String_o *)StringLiteral_7146/*"GrandClassIcon{0}"*/, v12, 0);
  return System_String__op_Equality(name, v13, 0);
}


void ClassBoardBackground___c__DisplayClass81_0___SetGrandClassIcon_b__1(
        ClassBoardBackground___c__DisplayClass81_0_o *this,
        UnityEngine_Renderer_o *x,
        const MethodInfo *method)
{
  ClassBoardBackground___c__DisplayClass81_0_o *v3; // x19
  struct ClassBoardBackground_o *_4__this; // x8

  if ( !x
    || (v3 = this,
        this = (ClassBoardBackground___c__DisplayClass81_0_o *)UnityEngine_Renderer__get_material(x, 0),
        (_4__this = v3->fields.__4__this) == 0)
    || !this )
  {
    sub_1C32E7C(this);
  }
  UnityEngine_Material__SetTexture(
    (UnityEngine_Material_o *)this,
    _4__this->fields.iconMaterialPropertyName,
    v3->fields.iconTex,
    0);
}


void ClassBoardBackground___c__DisplayClass81_1___ctor(
        ClassBoardBackground___c__DisplayClass81_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ClassBoardBackground___c__DisplayClass81_1___SetGrandClassIcon_b__4(
        ClassBoardBackground___c__DisplayClass81_1_o *this,
        UnityEngine_Texture_o *x,
        const MethodInfo *method)
{
  System_String_o *name; // x0

  if ( !x )
    sub_1C32E7C(this);
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)x, 0);
  return System_String__op_Equality(name, this->fields.onIconName, 0);
}


bool ClassBoardBackground___c__DisplayClass81_1___SetGrandClassIcon_b__5(
        ClassBoardBackground___c__DisplayClass81_1_o *this,
        UnityEngine_Texture_o *x,
        const MethodInfo *method)
{
  System_String_o *name; // x0

  if ( !x )
    sub_1C32E7C(this);
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)x, 0);
  return System_String__op_Equality(name, this->fields.offIconName, 0);
}


bool ClassBoardBackground___c__DisplayClass81_1___SetGrandClassIcon_b__6(
        ClassBoardBackground___c__DisplayClass81_1_o *this,
        UnityEngine_Texture_o *x,
        const MethodInfo *method)
{
  System_String_o *name; // x0

  if ( !x )
    sub_1C32E7C(this);
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)x, 0);
  return System_String__op_Equality(name, this->fields.glowIconName, 0);
}


void ClassBoardBackground___c__DisplayClass90_0___ctor(
        ClassBoardBackground___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardBackground___c__DisplayClass90_1___ctor(
        ClassBoardBackground___c__DisplayClass90_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardBackground___c__DisplayClass90_1___PlayStartGrandExClassReleaseEffectPlayer_b__0(
        ClassBoardBackground___c__DisplayClass90_1_o *this,
        const MethodInfo *method)
{
  struct SimpleAnimation_o *anim; // x0
  struct ClassBoardBackground___c__DisplayClass90_0_o *CS___8__locals1; // x8
  struct ClassBoardBackground_o *_4__this; // x8
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  System_Int32_array *v7; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct ClassBoardBackground___c__DisplayClass90_0_o *v10; // x8
  struct ClassBoardBackground___c__DisplayClass90_0_o *v11; // x8

  if ( (byte_4C3B347 & 1) == 0 )
  {
    sub_1C32C20(&ClassBoardUtility_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__get_Keys__);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_int___);
    byte_4C3B347 = 1;
  }
  anim = this->fields.anim;
  if ( !anim )
    goto LABEL_13;
  SimpleAnimation__Stop(anim, 0);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_13;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  anim = (struct SimpleAnimation_o *)_4__this->fields.grandExClassReleaseEffectAnimationDic;
  if ( !anim )
    goto LABEL_13;
  Keys = System_Collections_Generic_Dictionary_int__object___get_Keys(
           (System_Collections_Generic_Dictionary_int__object__o *)anim,
           (const MethodInfo_33EF9DC *)Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__get_Keys__);
  v7 = System_Linq_Enumerable__ToArray_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
         (const MethodInfo_311C8F4 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
  ClassBoardUtility__SavePlayedGrandExClassReleaseEffect(v7, 0);
  v10 = this->fields.CS___8__locals1;
  if ( !v10
    || (anim = (struct SimpleAnimation_o *)v10->fields.__4__this) == 0
    || (*(_QWORD *)&anim[1].fields.m_Initialized = 0,
        sub_1C32BC4((CGThumbnailListItem_o *)&anim[1].fields.m_Initialized, 0, v8, v9),
        (v11 = this->fields.CS___8__locals1) == 0) )
  {
LABEL_13:
    sub_1C32E7C(anim);
  }
  ActionExtensions__Call(v11->fields.callback, 0);
}


void ClassBoardBackground___c__DisplayClass90_1___PlayStartGrandExClassReleaseEffectPlayer_b__1(
        ClassBoardBackground___c__DisplayClass90_1_o *this,
        const MethodInfo *method)
{
  SimpleAnimation_o *anim; // x0

  anim = this->fields.anim;
  if ( !anim )
    sub_1C32E7C(0);
  SimpleAnimation__Stop(anim, 0);
}