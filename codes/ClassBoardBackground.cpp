void ClassBoardBackground___ctor(ClassBoardBackground_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1

  if ( (byte_4C5A74A & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_16274/*"_MainTex"*/);
    byte_4C5A74A = 1;
  }
  v5 = StringLiteral_16274/*"_MainTex"*/;
  this->fields.iconMaterialPropertyName = (struct System_String_o *)StringLiteral_16274/*"_MainTex"*/;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.iconMaterialPropertyName, v5, v2, v3);
  *(_OWORD *)&this->fields.classScorePosXMax = xmmword_C13290;
  this->fields.classScoreTweenStartDelay = 1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void ClassBoardBackground__ActivateEarthAccessories(ClassBoardBackground_o *this, bool value, const MethodInfo *method)
{
  UnityEngine_GameObject_o *earthAccessoriesObject; // x0

  earthAccessoriesObject = this->fields.earthAccessoriesObject;
  if ( !earthAccessoriesObject )
    sub_1C3E7C0(0, value);
  UnityEngine_GameObject__SetActive(earthAccessoriesObject, value, 0);
}


void ClassBoardBackground__Awake(ClassBoardBackground_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x0
  __int64 v4; // x1
  System_String_o *name; // x20
  ClassBoardEffectPlayer_o *v6; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct ClassBoardEffectPlayer_o *startMainEffectPlayer; // x20
  System_Action_o *v10; // x21
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_String_o *v13; // x20
  ClassBoardEffectPlayer_o *v14; // x21
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct ClassBoardEffectPlayer_o *skipMainEffectPlayer; // x20
  System_Action_o *v18; // x21
  int32_t v19; // w2
  const MethodInfo *v20; // x3

  if ( (byte_4C5A735 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_ClassBoardBackground_PlayStartMainEffectPlayer__);
    sub_1C3E564(&Method_ClassBoardBackground_SkipStartMainEffectPlayer__);
    sub_1C3E564(&ClassBoardEffectPlayer_TypeInfo);
    byte_4C5A735 = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_8;
  name = UnityEngine_Object__get_name(gameObject, 0);
  v6 = (ClassBoardEffectPlayer_o *)sub_1C3E7B0(ClassBoardEffectPlayer_TypeInfo);
  ClassBoardEffectPlayer___ctor_48096216(v6, name, 0);
  this->fields.startMainEffectPlayer = v6;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.startMainEffectPlayer, (int32_t)v6, v7, v8);
  startMainEffectPlayer = this->fields.startMainEffectPlayer;
  v10 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_ClassBoardBackground_PlayStartMainEffectPlayer__, 0);
  if ( !startMainEffectPlayer )
    goto LABEL_8;
  startMainEffectPlayer->fields.playCallback = v10;
  sub_1C3E508((CGThumbnailListItem_o *)&startMainEffectPlayer->fields.playCallback, (int32_t)v10, v11, v12);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_8;
  v13 = UnityEngine_Object__get_name(gameObject, 0);
  v14 = (ClassBoardEffectPlayer_o *)sub_1C3E7B0(ClassBoardEffectPlayer_TypeInfo);
  ClassBoardEffectPlayer___ctor_48096216(v14, v13, 0);
  this->fields.skipMainEffectPlayer = v14;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.skipMainEffectPlayer, (int32_t)v14, v15, v16);
  skipMainEffectPlayer = this->fields.skipMainEffectPlayer;
  v18 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v18, (Il2CppObject *)this, Method_ClassBoardBackground_SkipStartMainEffectPlayer__, 0);
  if ( !skipMainEffectPlayer )
LABEL_8:
    sub_1C3E7C0(gameObject, v4);
  skipMainEffectPlayer->fields.playCallback = v18;
  sub_1C3E508((CGThumbnailListItem_o *)&skipMainEffectPlayer->fields.playCallback, (int32_t)v18, v19, v20);
}


void ClassBoardBackground__CallAnimationEventBoardParent(ClassBoardBackground_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *boardParentAnimation; // x20
  UnityEngine_Object_o *boardParentAnimationClip; // x20
  __int64 v5; // x1
  UnityEngine_Object_o *name; // x0
  SimpleAnimation_o *v7; // x19

  if ( (byte_4C5A749 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5A749 = 1;
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
        || (v7 = this->fields.boardParentAnimation,
            name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0),
            !v7) )
      {
        sub_1C3E7C0(name, v5);
      }
      SimpleAnimation__Play_66582224(v7, (System_String_o *)name, 0);
    }
  }
}


void ClassBoardBackground__CallAnimationEventShowBoard(ClassBoardBackground_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  ActionExtensions__Call(this->fields.showBoardCallback, 0);
  this->fields.showBoardCallback = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.showBoardCallback, 0, v3, v4);
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

  if ( (byte_4C5A736 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5A736 = 1;
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
    sub_1C3E7C0(classBoardViewCamera, camera);
  }
  UnityEngine_GameObject__SetActive(v9, (unsigned __int8)classBoardViewCamera & 1, 0);
  this->fields.currentCamera = camera;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.currentCamera, (int32_t)camera, v10, v11);
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
  if ( (byte_4C5A747 & 1) == 0 )
  {
    this = (ClassBoardBackground_o *)sub_1C3E564(&SimpleAnimation_State_TypeInfo);
    byte_4C5A747 = 1;
  }
  if ( !anim )
    goto LABEL_14;
  SimpleAnimation__Rewind(anim, 0);
  SimpleAnimation__Play_66582224(anim, name, 0);
  this = (ClassBoardBackground_o *)SimpleAnimation__get_Item(anim, name, 0);
  v12 = this;
  LODWORD(v6) = 1.0;
  if ( isPlaySpecifiedPoint )
    *(float *)&v6 = v11->fields.directlyGrandAnimationStartPoint;
  if ( !this )
LABEL_14:
    sub_1C3E7C0(this, anim);
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
    v16 = sub_1C8ED7C(this, SimpleAnimation_State_TypeInfo, 6);
  }
  v17 = (ClassBoardBackground_o *)(*(__int64 (__fastcall **)(ClassBoardBackground_o *, _QWORD, long double))v16)(
                                    v12,
                                    *(_QWORD *)(v16 + 8),
                                    v6);
  v19 = ClassBoardBackground__WaitAnimationFinished(v17, anim, name, endCallback, v18);
  UnityEngine_MonoBehaviour__StartCoroutine_71327136((UnityEngine_MonoBehaviour_o *)v11, v19, 0);
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
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *v9; // x21
  System_Comparison_T__o *v10; // x22
  Il2CppObject *v11; // x23
  struct ClassBoardBackground___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  Il2CppObject *v15; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x22
  int v17; // w23
  _BOOL8 v18; // x0
  __int64 v19; // x1
  ClassBoardClassEntity_o *current; // x24
  BalanceConfig_c *v21; // x0
  BalanceConfig_c *v22; // x0
  _BOOL8 v23; // x0
  __int64 v24; // x1
  int32_t monitor_high; // w25
  _BOOL8 IsOpen; // x0
  __int64 v27; // x1
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+0h] [xbp-A0h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+20h] [xbp-80h] BYREF
  System_Collections_Generic_List_ClassBoardClassEntity__o *entitys; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4C5A73E & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&System_Comparison_ClassBoardClassEntity__TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMaster_ClassBoardClassMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__bool__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
    sub_1C3E564(&System_Collections_Generic_Dictionary_int__bool__TypeInfo);
    sub_1C3E564(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ClassBoardClassEntity__Sort__);
    sub_1C3E564(&Method_ClassBoardBackground___c__GetIconIdList_b__82_0__);
    sub_1C3E564(&ClassBoardBackground___c_TypeInfo);
    byte_4C5A73E = 1;
  }
  entitys = 0;
  memset(&v31, 0, sizeof(v31));
  entity = 0;
  v6 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v6,
    (const MethodInfo_33FD208 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
  if ( !Master_object )
    goto LABEL_43;
  if ( ClassBoardClassMaster__TryGetEntityList((ClassBoardClassMaster_o *)Master_object, &entitys, baseId, 0) )
  {
    v9 = (System_Collections_Generic_List_object__o *)entitys;
    Master_object = ClassBoardBackground___c_TypeInfo;
    if ( !ClassBoardBackground___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardBackground___c_TypeInfo);
      Master_object = ClassBoardBackground___c_TypeInfo;
    }
    v10 = *(System_Comparison_T__o **)(*((_QWORD *)Master_object + 23) + 40LL);
    if ( !v10 )
    {
      if ( !*((_DWORD *)Master_object + 56) )
      {
        j_il2cpp_runtime_class_init_0(Master_object);
        Master_object = ClassBoardBackground___c_TypeInfo;
      }
      v11 = (Il2CppObject *)**((_QWORD **)Master_object + 23);
      v10 = (System_Comparison_T__o *)sub_1C3E7B0(System_Comparison_ClassBoardClassEntity__TypeInfo);
      System_Comparison_object____ctor(v10, v11, Method_ClassBoardBackground___c__GetIconIdList_b__82_0__, 0);
      static_fields = ClassBoardBackground___c_TypeInfo->static_fields;
      static_fields->__9__82_0 = (struct System_Comparison_ClassBoardClassEntity__o *)v10;
      sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__82_0, (int32_t)v10, v13, v14);
    }
    if ( v9 )
    {
      System_Collections_Generic_List_object___Sort_58421028(
        v9,
        v10,
        (const MethodInfo_37B6F24 *)Method_System_Collections_Generic_List_ClassBoardClassEntity__Sort__);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v15 = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ServantClassMaster___);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ServantClassMaster___);
      if ( Master_object )
      {
        Master_object = ServantClassMaster__GetPlayableGrandBeastClassIds((ServantClassMaster_o *)Master_object, 0);
        if ( v15 )
        {
          v16 = (System_Collections_Generic_IEnumerable_TSource__o *)Master_object;
          Master_object = (void *)ServantClassMaster__GetPlayableGrandBeastBaseClassId((ServantClassMaster_o *)v15, 0);
          if ( entitys )
          {
            v17 = (int)Master_object;
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v29,
              (System_Collections_Generic_List_object__o *)entitys,
              (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__);
            v31 = v29;
            while ( 1 )
            {
              while ( 1 )
              {
                v18 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                        &v31,
                        (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__);
                if ( !v18 )
                {
                  System_Collections_Generic_List_Enumerator_object___Dispose(
                    &v31,
                    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__);
                  return v6;
                }
                current = (ClassBoardClassEntity_o *)v31.fields._current;
                if ( !isGrand )
                  break;
                if ( !v31.fields._current )
                  sub_1C3E7C0(v18, v19);
                if ( !System_Linq_Enumerable__Contains_int_(
                        v16,
                        HIDWORD(v31.fields._current[1].klass),
                        (const MethodInfo_3116AFC *)Method_System_Linq_Enumerable_Contains_int___)
                  || v17 == current->fields.classId )
                {
                  goto LABEL_33;
                }
              }
              v21 = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              if ( !current )
                sub_1C3E7C0(v21, v19);
              if ( System_Linq_Enumerable__Contains_int_(
                     (System_Collections_Generic_IEnumerable_TSource__o *)BalanceConfig_TypeInfo->static_fields->PlayableBeastClassIds,
                     current->fields.classId,
                     (const MethodInfo_3116AFC *)Method_System_Linq_Enumerable_Contains_int___) )
              {
                v22 = BalanceConfig_TypeInfo;
                if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  v22 = BalanceConfig_TypeInfo;
                }
                if ( v22->static_fields->PlayableBeastBaseClassId != current->fields.classId )
                  continue;
              }
LABEL_33:
              v23 = DataMasterBase_object__object__int___TryGetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)v15,
                      &entity,
                      current->fields.classId,
                      (const MethodInfo_33B2FA4 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
              if ( v23 )
              {
                if ( !entity )
                  sub_1C3E7C0(v23, v24);
                monitor_high = HIDWORD(entity[2].monitor);
                IsOpen = ClassBoardClassEntity__IsOpen(current, 0);
                if ( !v6 )
                  sub_1C3E7C0(IsOpen, v27);
                System_Collections_Generic_Dictionary_int__bool___Add(
                  v6,
                  monitor_high,
                  IsOpen,
                  (const MethodInfo_33FDBE0 *)Method_System_Collections_Generic_Dictionary_int__bool__Add__);
              }
            }
          }
        }
      }
    }
LABEL_43:
    sub_1C3E7C0(Master_object, v8);
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
    sub_1C3E7C0(0, method);
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
  if ( (byte_4C5A73F & 1) == 0 )
  {
    sub_1C3E564(&System_Action_ClassBoardBackground_ExClassIconSet__TypeInfo);
    sub_1C3E564(&Method_BasicHelper_ForEach_ClassBoardBackground_ExClassIconSet___);
    sub_1C3E564(&Method_ClassBoardBackground___c__InitGrandClassReleasedEffect_b__83_0__);
    this = (ClassBoardBackground_o *)sub_1C3E564(&ClassBoardBackground___c_TypeInfo);
    byte_4C5A73F = 1;
  }
  grandExIconSet = (System_Collections_Generic_IEnumerable_T__o *)v2->fields.grandExIconSet;
  if ( !grandExIconSet )
    sub_1C3E7C0(this, method);
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
      _9__83_0 = (System_Action_object__o *)sub_1C3E7B0(System_Action_ClassBoardBackground_ExClassIconSet__TypeInfo);
      System_Action_object____ctor(
        _9__83_0,
        v6,
        Method_ClassBoardBackground___c__InitGrandClassReleasedEffect_b__83_0__,
        0);
      static_fields = ClassBoardBackground___c_TypeInfo->static_fields;
      static_fields->__9__83_0 = (struct System_Action_ClassBoardBackground_ExClassIconSet__o *)_9__83_0;
      sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__83_0, (int32_t)_9__83_0, v8, v9);
    }
    BasicHelper__ForEach_object_(
      grandExIconSet,
      (System_Action_T__o *)_9__83_0,
      (const MethodInfo_30E5A30 *)Method_BasicHelper_ForEach_ClassBoardBackground_ExClassIconSet___);
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

  if ( (byte_4C5A741 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_Renderer__TypeInfo);
    sub_1C3E564(&Method_BasicHelper_ForEach_Renderer___);
    sub_1C3E564(&Method_ClassBoardBackground___c__OnDestroy_b__85_0__);
    sub_1C3E564(&ClassBoardBackground___c_TypeInfo);
    byte_4C5A741 = 1;
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
    _9__85_0 = (System_Action_object__o *)sub_1C3E7B0(System_Action_Renderer__TypeInfo);
    System_Action_object____ctor(_9__85_0, v6, Method_ClassBoardBackground___c__OnDestroy_b__85_0__, 0);
    static_fields = ClassBoardBackground___c_TypeInfo->static_fields;
    static_fields->__9__85_0 = (struct System_Action_Renderer__o *)_9__85_0;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__85_0, (int32_t)_9__85_0, v8, v9);
  }
  BasicHelper__ForEach_object_(
    iconRenderers,
    (System_Action_T__o *)_9__85_0,
    (const MethodInfo_30E5A30 *)Method_BasicHelper_ForEach_Renderer___);
}


void ClassBoardBackground__PlayBoardParentBeforeAnimation(ClassBoardBackground_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *boardParentAnimation; // x20
  UnityEngine_Object_o *boardParentBeforeAnimationClip; // x20
  __int64 v5; // x1
  SimpleAnimation_o *v6; // x0

  if ( (byte_4C5A740 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5A740 = 1;
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
      v6 = this->fields.boardParentAnimation;
      if ( !v6
        || (SimpleAnimation__set_clip(v6, this->fields.boardParentBeforeAnimationClip, 0),
            (v6 = this->fields.boardParentAnimation) == 0) )
      {
        sub_1C3E7C0(v6, v5);
      }
      SimpleAnimation__Play(v6, 0);
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

  if ( (byte_4C5A744 & 1) == 0 )
  {
    sub_1C3E564(&ClassBoardBackground__PlayExClassReleaseEffectPlayer_d__88_TypeInfo);
    byte_4C5A744 = 1;
  }
  v3 = sub_1C3E7B0(ClassBoardBackground__PlayExClassReleaseEffectPlayer_d__88_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
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
  __int64 v16; // x1
  UnityEngine_Object_o *name; // x0
  SimpleAnimation_o *v18; // x23
  UnityEngine_AnimationClip_o *v19; // x23
  SimpleAnimation_o *v20; // x24
  SimpleAnimation_o *v21; // x23
  SimpleAnimation_o *v22; // x23
  UnityEngine_Object_c *klass; // x8
  UnityEngine_Object_o *v24; // x23
  __int64 v25; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v27; // x0
  SimpleAnimation_o *v28; // x23
  UnityEngine_Object_c *v29; // x8
  UnityEngine_Object_o *v30; // x23
  __int64 v31; // x9
  SimpleAnimation_State_c **v32; // x10
  __int64 v33; // x0
  UnityEngine_Object_o *grandRootAnimation; // x22
  const MethodInfo *v35; // x6
  UnityEngine_Object_o *v36; // x22
  SimpleAnimation_o *v37; // x22
  UnityEngine_AnimationClip_o *v38; // x22
  SimpleAnimation_o *v39; // x23
  SimpleAnimation_o *v40; // x22
  SimpleAnimation_o *v41; // x22
  UnityEngine_Object_c *v42; // x8
  UnityEngine_Object_o *v43; // x22
  __int64 v44; // x9
  SimpleAnimation_State_c **v45; // x10
  __int64 v46; // x0
  SimpleAnimation_o *v47; // x22
  UnityEngine_Object_c *v48; // x8
  UnityEngine_Object_o *v49; // x22
  __int64 v50; // x9
  SimpleAnimation_State_c **v51; // x10
  __int64 v52; // x0
  bool v53; // w21
  const MethodInfo *v54; // x2
  System_Collections_IEnumerator_o *v55; // x1

  if ( (byte_4C5A73A & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&SimpleAnimation_State_TypeInfo);
    sub_1C3E564(&StringLiteral_7154/*"GrandReturn"*/);
    byte_4C5A73A = 1;
  }
  this->fields.boardRootAnimation = classBoardAnimation;
  sub_1C3E508(
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
      v18 = this->fields.boardRootAnimation;
      name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0);
      if ( !v18 )
        goto LABEL_76;
      name = (UnityEngine_Object_o *)SimpleAnimation__GetState(v18, (System_String_o *)name, 0);
      if ( !name )
      {
        v19 = this->fields.boardRootReturnAnimationClip;
        if ( !v19 )
          goto LABEL_76;
        v20 = this->fields.boardRootAnimation;
        name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(
                                         (UnityEngine_Object_o *)this->fields.boardRootReturnAnimationClip,
                                         0);
        if ( !v20 )
          goto LABEL_76;
        SimpleAnimation__AddClip(v20, v19, (System_String_o *)name, 0);
      }
    }
    name = (UnityEngine_Object_o *)this->fields.boardRootReturnAnimationClip;
    if ( !name )
      goto LABEL_76;
    v21 = this->fields.boardRootAnimation;
    name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0);
    if ( !v21 )
      goto LABEL_76;
    SimpleAnimation__Play_66582224(v21, (System_String_o *)name, 0);
    name = (UnityEngine_Object_o *)this->fields.boardRootReturnAnimationClip;
    if ( !name )
      goto LABEL_76;
    v22 = this->fields.boardRootAnimation;
    name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0);
    if ( !v22 )
      goto LABEL_76;
    name = (UnityEngine_Object_o *)SimpleAnimation__get_Item(v22, (System_String_o *)name, 0);
    *(float *)&v6 = isQuick ? 1.0 : 0.0;
    if ( !name )
      goto LABEL_76;
    klass = name->klass;
    v24 = name;
    v25 = *(unsigned __int16 *)&name->klass->_2.rank;
    if ( *(_WORD *)&name->klass->_2.rank )
    {
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v25;
        p_offset += 2;
        if ( !v25 )
          goto LABEL_27;
      }
      v27 = (__int64)(&klass[1]._1.byval_arg + *(_DWORD *)p_offset);
    }
    else
    {
LABEL_27:
      v27 = sub_1C8ED7C(name, SimpleAnimation_State_TypeInfo, 6);
    }
    (*(void (__fastcall **)(UnityEngine_Object_o *, _QWORD, long double))v27)(v24, *(_QWORD *)(v27 + 8), v6);
    name = (UnityEngine_Object_o *)this->fields.boardRootReturnAnimationClip;
    if ( !name
      || (v28 = this->fields.boardRootAnimation,
          name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0),
          !v28)
      || (name = (UnityEngine_Object_o *)SimpleAnimation__get_Item(v28, (System_String_o *)name, 0)) == 0 )
    {
LABEL_76:
      sub_1C3E7C0(name, v16);
    }
    v29 = name->klass;
    v30 = name;
    v31 = *(unsigned __int16 *)&name->klass->_2.rank;
    if ( *(_WORD *)&name->klass->_2.rank )
    {
      v32 = (SimpleAnimation_State_c **)&v29->_1.interfaceOffsets->offset;
      while ( *(v32 - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v31;
        v32 += 2;
        if ( !v31 )
          goto LABEL_36;
      }
      v33 = (__int64)(&v29[1]._1.element_class + 2 * *(_DWORD *)v32);
    }
    else
    {
LABEL_36:
      v33 = sub_1C8ED7C(name, SimpleAnimation_State_TypeInfo, 8);
    }
    (*(void (__fastcall **)(UnityEngine_Object_o *, _QWORD, float))v33)(v30, *(_QWORD *)(v33 + 8), 1.0);
  }
  this->fields.grandRootAnimation = grandBoardAnimation;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.grandRootAnimation, (int32_t)grandBoardAnimation, v13, v14);
  grandRootAnimation = (UnityEngine_Object_o *)this->fields.grandRootAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(grandRootAnimation, 0, 0) )
    goto LABEL_75;
  v36 = (UnityEngine_Object_o *)this->fields.boardRootReturnAnimationClip;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v36, 0, 0) )
  {
    name = (UnityEngine_Object_o *)this->fields.boardRootReturnAnimationClip;
    if ( !name )
      goto LABEL_76;
    v37 = this->fields.grandRootAnimation;
    name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0);
    if ( !v37 )
      goto LABEL_76;
    name = (UnityEngine_Object_o *)SimpleAnimation__GetState(v37, (System_String_o *)name, 0);
    if ( !name )
    {
      v38 = this->fields.boardRootReturnAnimationClip;
      if ( !v38 )
        goto LABEL_76;
      v39 = this->fields.grandRootAnimation;
      name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(
                                       (UnityEngine_Object_o *)this->fields.boardRootReturnAnimationClip,
                                       0);
      if ( !v39 )
        goto LABEL_76;
      SimpleAnimation__AddClip(v39, v38, (System_String_o *)name, 0);
    }
  }
  name = (UnityEngine_Object_o *)this->fields.boardRootReturnAnimationClip;
  if ( !name )
    goto LABEL_76;
  v40 = this->fields.grandRootAnimation;
  name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0);
  if ( !v40 )
    goto LABEL_76;
  SimpleAnimation__Play_66582224(v40, (System_String_o *)name, 0);
  name = (UnityEngine_Object_o *)this->fields.boardRootReturnAnimationClip;
  if ( !name )
    goto LABEL_76;
  v41 = this->fields.grandRootAnimation;
  name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0);
  if ( !v41 )
    goto LABEL_76;
  name = (UnityEngine_Object_o *)SimpleAnimation__get_Item(v41, (System_String_o *)name, 0);
  *(float *)&v6 = isQuick ? 1.0 : 0.0;
  if ( !name )
    goto LABEL_76;
  v42 = name->klass;
  v43 = name;
  v44 = *(unsigned __int16 *)&name->klass->_2.rank;
  if ( *(_WORD *)&name->klass->_2.rank )
  {
    v45 = (SimpleAnimation_State_c **)&v42->_1.interfaceOffsets->offset;
    while ( *(v45 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v44;
      v45 += 2;
      if ( !v44 )
        goto LABEL_63;
    }
    v46 = (__int64)(&v42[1]._1.byval_arg + *(_DWORD *)v45);
  }
  else
  {
LABEL_63:
    v46 = sub_1C8ED7C(name, SimpleAnimation_State_TypeInfo, 6);
  }
  (*(void (__fastcall **)(UnityEngine_Object_o *, _QWORD, long double))v46)(v43, *(_QWORD *)(v46 + 8), v6);
  name = (UnityEngine_Object_o *)this->fields.boardRootReturnAnimationClip;
  if ( !name )
    goto LABEL_76;
  v47 = this->fields.grandRootAnimation;
  name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0);
  if ( !v47 )
    goto LABEL_76;
  name = (UnityEngine_Object_o *)SimpleAnimation__get_Item(v47, (System_String_o *)name, 0);
  if ( !name )
    goto LABEL_76;
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
        goto LABEL_72;
    }
    v52 = (__int64)(&v48[1]._1.element_class + 2 * *(_DWORD *)v51);
  }
  else
  {
LABEL_72:
    v52 = sub_1C8ED7C(name, SimpleAnimation_State_TypeInfo, 8);
  }
  (*(void (__fastcall **)(UnityEngine_Object_o *, _QWORD, float))v52)(v49, *(_QWORD *)(v52 + 8), 1.0);
LABEL_75:
  v53 = isQuick;
  ClassBoardBackground__PlaySimpleAnimation(
    this,
    this->fields.mainAnimation,
    (System_String_o *)StringLiteral_7154/*"GrandReturn"*/,
    endCallback,
    v53,
    0,
    v35);
  v55 = ClassBoardBackground__PlayGrandReturnTransitionAnimationFromTween(this, v53, v54);
  UnityEngine_MonoBehaviour__StartCoroutine_71327136((UnityEngine_MonoBehaviour_o *)this, v55, 0);
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

  if ( (byte_4C5A73B & 1) == 0 )
  {
    sub_1C3E564(&ClassBoardBackground__PlayGrandReturnTransitionAnimationFromTween_d__79_TypeInfo);
    byte_4C5A73B = 1;
  }
  v5 = isQuick;
  v6 = sub_1C3E7B0(ClassBoardBackground__PlayGrandReturnTransitionAnimationFromTween_d__79_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  *(_DWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 32) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v6 + 32), (int32_t)this, v7, v8);
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
  __int64 v15; // x1
  UnityEngine_Object_o *name; // x0
  SimpleAnimation_o *v17; // x23
  UnityEngine_AnimationClip_o *v18; // x23
  SimpleAnimation_o *v19; // x24
  SimpleAnimation_o *v20; // x23
  SimpleAnimation_o *v21; // x23
  UnityEngine_Object_o *v22; // x23
  UnityEngine_Object_c *klass; // x8
  __int64 v24; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v26; // x0
  SimpleAnimation_o *v27; // x23
  UnityEngine_Object_c *v28; // x8
  UnityEngine_Object_o *v29; // x23
  __int64 v30; // x9
  SimpleAnimation_State_c **v31; // x10
  __int64 v32; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  UnityEngine_Object_o *grandRootAnimation; // x22
  const MethodInfo *v36; // x6
  UnityEngine_Object_o *v37; // x22
  SimpleAnimation_o *v38; // x22
  UnityEngine_AnimationClip_o *v39; // x22
  SimpleAnimation_o *v40; // x23
  SimpleAnimation_o *v41; // x22
  SimpleAnimation_o *v42; // x22
  UnityEngine_Object_o *v43; // x22
  UnityEngine_Object_c *v44; // x8
  __int64 v45; // x9
  SimpleAnimation_State_c **v46; // x10
  __int64 v47; // x0
  SimpleAnimation_o *v48; // x22
  UnityEngine_Object_c *v49; // x8
  UnityEngine_Object_o *v50; // x22
  __int64 v51; // x9
  SimpleAnimation_State_c **v52; // x10
  __int64 v53; // x0

  if ( (byte_4C5A738 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&SimpleAnimation_State_TypeInfo);
    sub_1C3E564(&StringLiteral_7166/*"GrandStart"*/);
    byte_4C5A738 = 1;
  }
  this->fields.boardRootAnimation = classBoardAnimation;
  sub_1C3E508(
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
      v17 = this->fields.boardRootAnimation;
      name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0);
      if ( !v17 )
        goto LABEL_74;
      name = (UnityEngine_Object_o *)SimpleAnimation__GetState(v17, (System_String_o *)name, 0);
      if ( !name )
      {
        v18 = this->fields.boardRootAnimationClip;
        if ( !v18 )
          goto LABEL_74;
        v19 = this->fields.boardRootAnimation;
        name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(
                                         (UnityEngine_Object_o *)this->fields.boardRootAnimationClip,
                                         0);
        if ( !v19 )
          goto LABEL_74;
        SimpleAnimation__AddClip(v19, v18, (System_String_o *)name, 0);
      }
    }
    name = (UnityEngine_Object_o *)this->fields.boardRootAnimationClip;
    if ( !name )
      goto LABEL_74;
    v20 = this->fields.boardRootAnimation;
    name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0);
    if ( !v20 )
      goto LABEL_74;
    SimpleAnimation__Play_66582224(v20, (System_String_o *)name, 0);
    name = (UnityEngine_Object_o *)this->fields.boardRootAnimationClip;
    if ( !name )
      goto LABEL_74;
    v21 = this->fields.boardRootAnimation;
    name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0);
    if ( !v21 )
      goto LABEL_74;
    name = (UnityEngine_Object_o *)SimpleAnimation__get_Item(v21, (System_String_o *)name, 0);
    v22 = name;
    LODWORD(v6) = 0;
    if ( isQuick )
      *(float *)&v6 = this->fields.directlyGrandAnimationStartPoint;
    if ( !name )
      goto LABEL_74;
    klass = name->klass;
    v24 = *(unsigned __int16 *)&name->klass->_2.rank;
    if ( *(_WORD *)&name->klass->_2.rank )
    {
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v24;
        p_offset += 2;
        if ( !v24 )
          goto LABEL_26;
      }
      v26 = (__int64)(&klass[1]._1.byval_arg + *(_DWORD *)p_offset);
    }
    else
    {
LABEL_26:
      v26 = sub_1C8ED7C(name, SimpleAnimation_State_TypeInfo, 6);
    }
    (*(void (__fastcall **)(UnityEngine_Object_o *, _QWORD, long double))v26)(v22, *(_QWORD *)(v26 + 8), v6);
    name = (UnityEngine_Object_o *)this->fields.boardRootAnimationClip;
    if ( !name
      || (v27 = this->fields.boardRootAnimation,
          name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0),
          !v27)
      || (name = (UnityEngine_Object_o *)SimpleAnimation__get_Item(v27, (System_String_o *)name, 0)) == 0 )
    {
LABEL_74:
      sub_1C3E7C0(name, v15);
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
          goto LABEL_35;
      }
      v32 = (__int64)(&v28[1]._1.element_class + 2 * *(_DWORD *)v31);
    }
    else
    {
LABEL_35:
      v32 = sub_1C8ED7C(name, SimpleAnimation_State_TypeInfo, 8);
    }
    (*(void (__fastcall **)(UnityEngine_Object_o *, _QWORD, float))v32)(v29, *(_QWORD *)(v32 + 8), 1.0);
  }
  ClassBoardBackground__PlayGrandTransitionAnimationFromTween(this, isQuick, v13);
  this->fields.grandRootAnimation = grandBoardAnimation;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.grandRootAnimation, (int32_t)grandBoardAnimation, v33, v34);
  grandRootAnimation = (UnityEngine_Object_o *)this->fields.grandRootAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(grandRootAnimation, 0, 0) )
    goto LABEL_73;
  v37 = (UnityEngine_Object_o *)this->fields.boardRootAnimationClip;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v37, 0, 0) )
  {
    name = (UnityEngine_Object_o *)this->fields.boardRootAnimationClip;
    if ( !name )
      goto LABEL_74;
    v38 = this->fields.grandRootAnimation;
    name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0);
    if ( !v38 )
      goto LABEL_74;
    name = (UnityEngine_Object_o *)SimpleAnimation__GetState(v38, (System_String_o *)name, 0);
    if ( !name )
    {
      v39 = this->fields.boardRootAnimationClip;
      if ( !v39 )
        goto LABEL_74;
      v40 = this->fields.grandRootAnimation;
      name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(
                                       (UnityEngine_Object_o *)this->fields.boardRootAnimationClip,
                                       0);
      if ( !v40 )
        goto LABEL_74;
      SimpleAnimation__AddClip(v40, v39, (System_String_o *)name, 0);
    }
  }
  name = (UnityEngine_Object_o *)this->fields.boardRootAnimationClip;
  if ( !name )
    goto LABEL_74;
  v41 = this->fields.grandRootAnimation;
  name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0);
  if ( !v41 )
    goto LABEL_74;
  SimpleAnimation__Play_66582224(v41, (System_String_o *)name, 0);
  name = (UnityEngine_Object_o *)this->fields.boardRootAnimationClip;
  if ( !name )
    goto LABEL_74;
  v42 = this->fields.grandRootAnimation;
  name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0);
  if ( !v42 )
    goto LABEL_74;
  name = (UnityEngine_Object_o *)SimpleAnimation__get_Item(v42, (System_String_o *)name, 0);
  v43 = name;
  LODWORD(v6) = 0;
  if ( isQuick )
    *(float *)&v6 = this->fields.directlyGrandAnimationStartPoint;
  if ( !name )
    goto LABEL_74;
  v44 = name->klass;
  v45 = *(unsigned __int16 *)&name->klass->_2.rank;
  if ( *(_WORD *)&name->klass->_2.rank )
  {
    v46 = (SimpleAnimation_State_c **)&v44->_1.interfaceOffsets->offset;
    while ( *(v46 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v45;
      v46 += 2;
      if ( !v45 )
        goto LABEL_61;
    }
    v47 = (__int64)(&v44[1]._1.byval_arg + *(_DWORD *)v46);
  }
  else
  {
LABEL_61:
    v47 = sub_1C8ED7C(name, SimpleAnimation_State_TypeInfo, 6);
  }
  (*(void (__fastcall **)(UnityEngine_Object_o *, _QWORD, long double))v47)(v43, *(_QWORD *)(v47 + 8), v6);
  name = (UnityEngine_Object_o *)this->fields.boardRootAnimationClip;
  if ( !name )
    goto LABEL_74;
  v48 = this->fields.grandRootAnimation;
  name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0);
  if ( !v48 )
    goto LABEL_74;
  name = (UnityEngine_Object_o *)SimpleAnimation__get_Item(v48, (System_String_o *)name, 0);
  if ( !name )
    goto LABEL_74;
  v49 = name->klass;
  v50 = name;
  v51 = *(unsigned __int16 *)&name->klass->_2.rank;
  if ( *(_WORD *)&name->klass->_2.rank )
  {
    v52 = (SimpleAnimation_State_c **)&v49->_1.interfaceOffsets->offset;
    while ( *(v52 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v51;
      v52 += 2;
      if ( !v51 )
        goto LABEL_70;
    }
    v53 = (__int64)(&v49[1]._1.element_class + 2 * *(_DWORD *)v52);
  }
  else
  {
LABEL_70:
    v53 = sub_1C8ED7C(name, SimpleAnimation_State_TypeInfo, 8);
  }
  (*(void (__fastcall **)(UnityEngine_Object_o *, _QWORD, float))v53)(v50, *(_QWORD *)(v53 + 8), 1.0);
LABEL_73:
  ClassBoardBackground__PlaySimpleAnimation(
    this,
    this->fields.mainAnimation,
    (System_String_o *)StringLiteral_7166/*"GrandStart"*/,
    endCallback,
    isQuick,
    isQuick,
    v36);
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
  __int64 v13; // x1
  UITweener_o *v14; // x19
  ClassBoardBackground___c_c *v15; // x0
  EventDelegate_Callback_o *_9__77_0; // x20
  Il2CppObject *v17; // x21
  struct ClassBoardBackground___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  UnityEngine_Vector3_o v21; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4C5A739 & 1) == 0 )
  {
    sub_1C3E564(&EventDelegate_Callback_TypeInfo);
    sub_1C3E564(&Method_ClassBoardBackground___c__PlayGrandTransitionAnimationFromTween_b__77_0__);
    sub_1C3E564(&ClassBoardBackground___c_TypeInfo);
    byte_4C5A739 = 1;
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
  v21.fields.x = this->fields.classScorePosXMin
               + (float)((float)(this->fields.classScorePosXMax - this->fields.classScorePosXMin) * v11);
  v21.fields.y = 0.0;
  v21.fields.z = 0.0;
  v12 = TweenPosition__Begin(this->fields.boardRoot, v5, v21, 0);
  if ( !v12 )
    sub_1C3E7C0(0, v13);
  v12->fields.method = 21;
  v14 = (UITweener_o *)v12;
  v15 = ClassBoardBackground___c_TypeInfo;
  if ( !ClassBoardBackground___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardBackground___c_TypeInfo);
    v15 = ClassBoardBackground___c_TypeInfo;
  }
  _9__77_0 = v15->static_fields->__9__77_0;
  if ( !_9__77_0 )
  {
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      v15 = ClassBoardBackground___c_TypeInfo;
    }
    v17 = (Il2CppObject *)v15->static_fields->__9;
    _9__77_0 = (EventDelegate_Callback_o *)sub_1C3E7B0(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(
      _9__77_0,
      v17,
      Method_ClassBoardBackground___c__PlayGrandTransitionAnimationFromTween_b__77_0__,
      0);
    static_fields = ClassBoardBackground___c_TypeInfo->static_fields;
    static_fields->__9__77_0 = _9__77_0;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__77_0, (int32_t)_9__77_0, v19, v20);
  }
  UITweener__SetOnFinished(v14, _9__77_0, 0);
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
      sub_1C3E7C0(this, 0);
    SimpleAnimation__Rewind(anim, 0);
    v11 = SimpleAnimation__Play_66582224(anim, name, 0);
    v13 = ClassBoardBackground__WaitAnimationFinished((ClassBoardBackground_o *)v11, anim, name, endCallback, v12);
    UnityEngine_MonoBehaviour__StartCoroutine_71327136((UnityEngine_MonoBehaviour_o *)this, v13, 0);
  }
}


void ClassBoardBackground__PlayStartExClassReleaseEffectPlayer(ClassBoardBackground_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_int__SimpleAnimation__o *exClassReleaseEffectAnimationDic; // x0
  char v5; // w21
  const MethodInfo *v6; // x6
  Il2CppObject *value; // x20
  System_Action_o *v8; // x21
  const MethodInfo *v9; // x6
  ClassBoardBackground___c_c *v10; // x0
  System_String_o *v11; // x21
  System_Action_o *_9__89_1; // x22
  Il2CppObject *v13; // x23
  struct ClassBoardBackground___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v17; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v18; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_4C5A745 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_ClassBoardBackground__PlayStartExClassReleaseEffectPlayer_b__89_0__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_KeyValuePair_int__SimpleAnimation__get_Key__);
    sub_1C3E564(&Method_System_Collections_Generic_KeyValuePair_int__SimpleAnimation__get_Value__);
    sub_1C3E564(&Method_ClassBoardBackground___c__PlayStartExClassReleaseEffectPlayer_b__89_1__);
    sub_1C3E564(&ClassBoardBackground___c_TypeInfo);
    sub_1C3E564(&StringLiteral_10563/*"Particle_CrassIcon_Ex_Released"*/);
    byte_4C5A745 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.exClassReleaseEffectAnimationDic, 0) )
  {
    exClassReleaseEffectAnimationDic = this->fields.exClassReleaseEffectAnimationDic;
    if ( !exClassReleaseEffectAnimationDic )
      sub_1C3E7C0(0, v3);
    System_Collections_Generic_Dictionary_int__object___GetEnumerator(
      &v17,
      (System_Collections_Generic_Dictionary_int__object__o *)exClassReleaseEffectAnimationDic,
      (const MethodInfo_340C874 *)Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__GetEnumerator__);
    v18 = v17;
    v5 = 1;
    while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
              &v18,
              (const MethodInfo_3563834 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__MoveNext__) )
    {
      value = v18.fields._current.fields.value;
      if ( (v5 & 1) != 0 )
      {
        v8 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
        System_Action___ctor(
          v8,
          (Il2CppObject *)this,
          Method_ClassBoardBackground__PlayStartExClassReleaseEffectPlayer_b__89_0__,
          0);
        ClassBoardBackground__PlaySimpleAnimation(
          this,
          (SimpleAnimation_o *)value,
          (System_String_o *)StringLiteral_10563/*"Particle_CrassIcon_Ex_Released"*/,
          v8,
          0,
          0,
          v9);
        v5 = 0;
      }
      else
      {
        v10 = ClassBoardBackground___c_TypeInfo;
        if ( !ClassBoardBackground___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ClassBoardBackground___c_TypeInfo);
          v10 = ClassBoardBackground___c_TypeInfo;
        }
        v11 = (System_String_o *)StringLiteral_10563/*"Particle_CrassIcon_Ex_Released"*/;
        _9__89_1 = v10->static_fields->__9__89_1;
        if ( !_9__89_1 )
        {
          if ( !v10->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v10);
            v10 = ClassBoardBackground___c_TypeInfo;
          }
          v13 = (Il2CppObject *)v10->static_fields->__9;
          _9__89_1 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
          System_Action___ctor(
            _9__89_1,
            v13,
            Method_ClassBoardBackground___c__PlayStartExClassReleaseEffectPlayer_b__89_1__,
            0);
          static_fields = ClassBoardBackground___c_TypeInfo->static_fields;
          static_fields->__9__89_1 = _9__89_1;
          sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__89_1, (int32_t)_9__89_1, v15, v16);
        }
        ClassBoardBackground__PlaySimpleAnimation(this, (SimpleAnimation_o *)value, v11, _9__89_1, 0, 0, v6);
        v5 = 0;
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
      &v18,
      (const MethodInfo_3563958 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__Dispose__);
  }
}


void ClassBoardBackground__PlayStartGrandExClassReleaseEffectPlayer(
        ClassBoardBackground_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x20
  struct System_Collections_Generic_Dictionary_int__SimpleAnimation__o *grandExClassReleaseEffectAnimationDic; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  char v12; // w28
  Il2CppObject *value; // x22
  __int64 v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  SimpleAnimation_o *v21; // x22
  System_Action_o *v22; // x23
  const MethodInfo *v23; // x6
  const MethodInfo *v24; // x6
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v25; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v26; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_4C5A746 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_KeyValuePair_int__SimpleAnimation__get_Key__);
    sub_1C3E564(&Method_System_Collections_Generic_KeyValuePair_int__SimpleAnimation__get_Value__);
    sub_1C3E564(&ClassBoardBackground___c__DisplayClass90_0_TypeInfo);
    sub_1C3E564(&Method_ClassBoardBackground___c__DisplayClass90_1__PlayStartGrandExClassReleaseEffectPlayer_b__0__);
    sub_1C3E564(&Method_ClassBoardBackground___c__DisplayClass90_1__PlayStartGrandExClassReleaseEffectPlayer_b__1__);
    sub_1C3E564(&ClassBoardBackground___c__DisplayClass90_1_TypeInfo);
    sub_1C3E564(&StringLiteral_10564/*"Particle_GrandCrassIcon_Ex_Released"*/);
    sub_1C3E564(&StringLiteral_10563/*"Particle_CrassIcon_Ex_Released"*/);
    byte_4C5A746 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  v5 = sub_1C3E7B0(ClassBoardBackground___c__DisplayClass90_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_16;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = callback;
  sub_1C3E508((CGThumbnailListItem_o *)(v5 + 24), (int32_t)callback, v10, v11);
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
    sub_1C3E7C0(grandExClassReleaseEffectAnimationDic, v7);
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v25,
    (System_Collections_Generic_Dictionary_int__object__o *)grandExClassReleaseEffectAnimationDic,
    (const MethodInfo_340C874 *)Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__GetEnumerator__);
  v26 = v25;
  v12 = 1;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v26,
            (const MethodInfo_3563834 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__MoveNext__) )
  {
    value = v26.fields._current.fields.value;
    v14 = sub_1C3E7B0(ClassBoardBackground___c__DisplayClass90_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v14, 0);
    if ( !v14 )
      sub_1C3E7C0(v15, v16);
    *(_QWORD *)(v14 + 24) = v5;
    sub_1C3E508((CGThumbnailListItem_o *)(v14 + 24), v5, v17, v18);
    *(_QWORD *)(v14 + 16) = value;
    sub_1C3E508((CGThumbnailListItem_o *)(v14 + 16), (int32_t)value, v19, v20);
    v21 = *(SimpleAnimation_o **)(v14 + 16);
    v22 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
    if ( (v12 & 1) != 0 )
    {
      System_Action___ctor(
        v22,
        (Il2CppObject *)v14,
        Method_ClassBoardBackground___c__DisplayClass90_1__PlayStartGrandExClassReleaseEffectPlayer_b__0__,
        0);
      ClassBoardBackground__PlaySimpleAnimation(this, v21, (System_String_o *)StringLiteral_10564/*"Particle_GrandCrassIcon_Ex_Released"*/, v22, 0, 0, v23);
    }
    else
    {
      System_Action___ctor(
        v22,
        (Il2CppObject *)v14,
        Method_ClassBoardBackground___c__DisplayClass90_1__PlayStartGrandExClassReleaseEffectPlayer_b__1__,
        0);
      ClassBoardBackground__PlaySimpleAnimation(this, v21, (System_String_o *)StringLiteral_10563/*"Particle_CrassIcon_Ex_Released"*/, v22, 0, 0, v24);
    }
    v12 = 0;
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v26,
    (const MethodInfo_3563958 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__Dispose__);
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

  if ( (byte_4C5A742 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_ClassBoardBackground__PlayStartMainEffectPlayer_b__86_0__);
    sub_1C3E564(&Method_ClassBoardEffectPlayer_GetData_int___);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&StringLiteral_8875/*"MainTransition{0}_Release"*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    sub_1C3E564(&StringLiteral_8874/*"MainTransition{0}"*/);
    byte_4C5A742 = 1;
  }
  startMainEffectPlayer = this->fields.startMainEffectPlayer;
  if ( !startMainEffectPlayer )
    sub_1C3E7C0(0, method);
  Data_int = ClassBoardEffectPlayer__GetData_int_(
               startMainEffectPlayer,
               (const MethodInfo_30ED2BC *)Method_ClassBoardEffectPlayer_GetData_int___);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.exClassReleaseEffectAnimationDic, 0) )
  {
    v19 = Data_int;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19, v5, v6, v7, v8, v9, v10);
    v12 = System_String__Format((System_String_o *)StringLiteral_8874/*"MainTransition{0}"*/, v11, 0);
  }
  else
  {
    v20 = Data_int;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20, v5, v6, v7, v8, v9, v10);
    v12 = System_String__Format((System_String_o *)StringLiteral_8875/*"MainTransition{0}_Release"*/, v13, 0);
    v15 = ClassBoardBackground__PlayExClassReleaseEffectPlayer(this, v14);
    UnityEngine_MonoBehaviour__StartCoroutine_71327136((UnityEngine_MonoBehaviour_o *)this, v15, 0);
  }
  mainAnimation = this->fields.mainAnimation;
  v17 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
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
  __int64 v9; // x1
  UnityEngine_Object_o *name; // x0
  SimpleAnimation_o *v11; // x21
  UnityEngine_AnimationClip_o *v12; // x21
  SimpleAnimation_o *v13; // x22
  UnityEngine_Object_o *boardParentBeforeAnimationClip; // x21
  SimpleAnimation_o *v15; // x21
  UnityEngine_AnimationClip_o *v16; // x21
  SimpleAnimation_o *v17; // x22
  SimpleAnimation_o *v18; // x21
  SimpleAnimation_o *v19; // x19
  UnityEngine_Object_c *klass; // x8
  UnityEngine_Object_o *v21; // x19
  __int64 v22; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v24; // x0

  if ( (byte_4C5A737 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&SimpleAnimation_State_TypeInfo);
    byte_4C5A737 = 1;
  }
  this->fields.boardParentAnimation = animation;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.boardParentAnimation, (int32_t)animation, isQuick, method);
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
    v11 = this->fields.boardParentAnimation;
    name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0);
    if ( !v11 )
      goto LABEL_38;
    name = (UnityEngine_Object_o *)SimpleAnimation__GetState(v11, (System_String_o *)name, 0);
    if ( !name )
    {
      v12 = this->fields.boardParentAnimationClip;
      if ( !v12 )
        goto LABEL_38;
      v13 = this->fields.boardParentAnimation;
      name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(
                                       (UnityEngine_Object_o *)this->fields.boardParentAnimationClip,
                                       0);
      if ( !v13 )
        goto LABEL_38;
      SimpleAnimation__AddClip(v13, v12, (System_String_o *)name, 0);
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
  v15 = this->fields.boardParentAnimation;
  name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0);
  if ( !v15 )
    goto LABEL_38;
  name = (UnityEngine_Object_o *)SimpleAnimation__GetState(v15, (System_String_o *)name, 0);
  if ( !name )
  {
    v16 = this->fields.boardParentBeforeAnimationClip;
    if ( !v16 )
      goto LABEL_38;
    v17 = this->fields.boardParentAnimation;
    name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(
                                     (UnityEngine_Object_o *)this->fields.boardParentBeforeAnimationClip,
                                     0);
    if ( !v17 )
      goto LABEL_38;
    SimpleAnimation__AddClip(v17, v16, (System_String_o *)name, 0);
  }
  name = (UnityEngine_Object_o *)this->fields.boardParentBeforeAnimationClip;
  if ( !name )
    goto LABEL_38;
  v18 = this->fields.boardParentAnimation;
  name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0);
  if ( !v18 )
    goto LABEL_38;
  SimpleAnimation__Play_66582224(v18, (System_String_o *)name, 0);
  if ( !isQuick )
    return;
  name = (UnityEngine_Object_o *)this->fields.boardParentBeforeAnimationClip;
  if ( !name
    || (v19 = this->fields.boardParentAnimation,
        name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0),
        !v19)
    || (name = (UnityEngine_Object_o *)SimpleAnimation__get_Item(v19, (System_String_o *)name, 0)) == 0 )
  {
LABEL_38:
    sub_1C3E7C0(name, v9);
  }
  klass = name->klass;
  v21 = name;
  v22 = *(unsigned __int16 *)&name->klass->_2.rank;
  if ( *(_WORD *)&name->klass->_2.rank )
  {
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v22;
      p_offset += 2;
      if ( !v22 )
        goto LABEL_34;
    }
    v24 = (__int64)(&klass[1]._1.byval_arg + *(_DWORD *)p_offset);
  }
  else
  {
LABEL_34:
    v24 = sub_1C8ED7C(name, SimpleAnimation_State_TypeInfo, 6);
  }
  (*(void (__fastcall **)(UnityEngine_Object_o *, _QWORD, float))v24)(v21, *(_QWORD *)(v24 + 8), 1.0);
}


void ClassBoardBackground__SetBoardRootObj(
        ClassBoardBackground_o *this,
        UnityEngine_GameObject_o *boardRootObj,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.boardRoot = boardRootObj;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.boardRoot, (int32_t)boardRootObj, (int32_t)method, v3);
}


void ClassBoardBackground__SetClassIcon(
        ClassBoardBackground_o *this,
        int32_t baseId,
        int32_t iconId,
        const MethodInfo *method)
{
  __int64 v6; // x22
  UnityEngine_Component_o *offRenderer; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Collections_Generic_IEnumerable_TSource__o *iconTextures; // x21
  System_Func_object__bool__o *v12; // x23
  Il2CppObject *v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  UnityEngine_Object_o *v16; // x21
  System_Collections_Generic_IEnumerable_T__o *iconRenderers; // x21
  System_Action_object__o *v18; // x23
  System_Collections_Generic_Dictionary_int__object__o *v19; // x21
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x3
  struct ClassBoardBackground_ExClassIconSet_array *exIconSet; // x19
  Il2CppObject *key; // x22
  __int64 v25; // x21
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  __int64 v29; // x5
  __int64 v30; // x6
  __int64 v31; // x7
  Il2CppObject *v32; // x1
  System_String_o *v33; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  __int64 v39; // x5
  __int64 v40; // x6
  __int64 v41; // x7
  Il2CppObject *v42; // x1
  System_String_o *v43; // x0
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  __int64 v49; // x5
  __int64 v50; // x6
  __int64 v51; // x7
  Il2CppObject *v52; // x1
  System_String_o *v53; // x0
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  _BOOL8 v56; // x0
  __int64 v57; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v58; // x8
  unsigned int v59; // w19
  System_Func_object__bool__o **v60; // x22
  System_Func_object__bool__o **v61; // x24
  System_Func_object__bool__o **v62; // x25
  unsigned int v63; // w9
  ClassBoardBackground_ExClassIconSet_o *v64; // x8
  System_Func_object__bool__o *v65; // x23
  System_Collections_Generic_IEnumerable_TSource__o *textures; // x27
  int32_t v67; // w2
  const MethodInfo *v68; // x3
  Il2CppObject *v69; // x0
  System_Func_object__bool__o *v70; // x26
  UnityEngine_Object_o *v71; // x23
  int32_t v72; // w2
  const MethodInfo *v73; // x3
  Il2CppObject *v74; // x0
  System_Func_object__bool__o *v75; // x28
  UnityEngine_Object_o *v76; // x26
  int32_t v77; // w2
  const MethodInfo *v78; // x3
  Il2CppObject *v79; // x27
  struct ClassBoardBackground_ExClassIconSet_array *v80; // x8
  ClassBoardBackground_ExClassIconSet_o *v81; // x8
  UnityEngine_Renderer_o *v82; // x0
  UnityEngine_Material_o *material; // x0
  __int64 v84; // x1
  __int64 v85; // x0
  __int64 v86; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v87; // x8
  ClassBoardBackground_ExClassIconSet_o *v88; // x8
  UnityEngine_Renderer_o *effectRenderer; // x0
  UnityEngine_Material_o *v90; // x0
  __int64 v91; // x1
  __int64 v92; // x0
  __int64 v93; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v94; // x8
  ClassBoardBackground_ExClassIconSet_o *v95; // x8
  UnityEngine_Renderer_o *onRenderer; // x0
  UnityEngine_Material_o *v97; // x0
  __int64 v98; // x1
  __int64 v99; // x0
  __int64 v100; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v101; // x8
  ClassBoardBackground_ExClassIconSet_o *v102; // x8
  UnityEngine_Renderer_o *effectGlowRenderer; // x0
  UnityEngine_Material_o *v104; // x0
  __int64 v105; // x1
  __int64 v106; // x0
  __int64 v107; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v108; // x8
  ClassBoardBackground_ExClassIconSet_o *v109; // x8
  UnityEngine_Component_o *v110; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v112; // x1
  __int64 v113; // x0
  __int64 v114; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v115; // x8
  ClassBoardBackground_ExClassIconSet_o *v116; // x8
  UnityEngine_Component_o *v117; // x0
  UnityEngine_GameObject_o *v118; // x0
  __int64 v119; // x1
  __int64 v120; // x0
  __int64 v121; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v122; // x8
  ClassBoardBackground_ExClassIconSet_o *v123; // x8
  UnityEngine_GameObject_o *releaseEffect; // x0
  UnityEngine_GameObject_o *v125; // x0
  __int64 v126; // x1
  _BOOL8 IsPlayed; // x0
  __int64 v128; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v129; // x8
  ClassBoardBackground_ExClassIconSet_o *v130; // x8
  UnityEngine_Object_o *animation; // x21
  _BOOL8 v132; // x0
  __int64 v133; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v134; // x8
  ClassBoardBackground_ExClassIconSet_o *v135; // x8
  UnityEngine_Component_o *v136; // x0
  UnityEngine_GameObject_o *v137; // x0
  __int64 v138; // x1
  __int64 v139; // x0
  __int64 v140; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v141; // x8
  ClassBoardBackground_ExClassIconSet_o *v142; // x8
  UnityEngine_Component_o *v143; // x0
  UnityEngine_GameObject_o *v144; // x0
  __int64 v145; // x1
  __int64 v146; // x0
  __int64 v147; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v148; // x8
  ClassBoardBackground_ExClassIconSet_o *v149; // x8
  struct System_Collections_Generic_Dictionary_int__SimpleAnimation__o *exClassReleaseEffectAnimationDic; // x0
  int max_length; // w8
  unsigned int v152; // w20
  ClassBoardBackground_ExClassIconSet_o *v153; // x21
  __int64 v154; // [xsp+0h] [xbp-C0h]
  int32_t classId[2]; // [xsp+8h] [xbp-B8h]
  int v157; // [xsp+18h] [xbp-A8h] BYREF
  int v158; // [xsp+1Ch] [xbp-A4h] BYREF
  _OWORD v159[2]; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v160; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4C5A73C & 1) == 0 )
  {
    sub_1C3E564(&System_Action_Renderer__TypeInfo);
    sub_1C3E564(&Method_BasicHelper_ForEach_Renderer___);
    sub_1C3E564(&ClassBoardUtility_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__SimpleAnimation___ctor__);
    sub_1C3E564(&System_Collections_Generic_Dictionary_int__SimpleAnimation__TypeInfo);
    sub_1C3E564(&Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__get_Current__);
    sub_1C3E564(&System_Func_Texture__bool__TypeInfo);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Key__);
    sub_1C3E564(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Value__);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_ClassBoardBackground___c__DisplayClass80_0__SetClassIcon_b__0__);
    sub_1C3E564(&Method_ClassBoardBackground___c__DisplayClass80_0__SetClassIcon_b__1__);
    sub_1C3E564(&ClassBoardBackground___c__DisplayClass80_0_TypeInfo);
    sub_1C3E564(&Method_ClassBoardBackground___c__DisplayClass80_1__SetClassIcon_b__2__);
    sub_1C3E564(&Method_ClassBoardBackground___c__DisplayClass80_1__SetClassIcon_b__3__);
    sub_1C3E564(&Method_ClassBoardBackground___c__DisplayClass80_1__SetClassIcon_b__4__);
    sub_1C3E564(&ClassBoardBackground___c__DisplayClass80_1_TypeInfo);
    sub_1C3E564(&StringLiteral_4485/*"ClassIconEx_off_{0}"*/);
    sub_1C3E564(&StringLiteral_4486/*"ClassIconEx_on_{0}"*/);
    sub_1C3E564(&StringLiteral_4484/*"ClassIconEx_ef_glow_{0}"*/);
    byte_4C5A73C = 1;
  }
  memset(&v160, 0, 32);
  v6 = sub_1C3E7B0(ClassBoardBackground___c__DisplayClass80_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  if ( !v6 )
    goto LABEL_162;
  *(_DWORD *)(v6 + 16) = iconId;
  *(_QWORD *)(v6 + 24) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v6 + 24), (int32_t)this, v9, v10);
  iconTextures = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.iconTextures;
  v12 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_Texture__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)v6,
    Method_ClassBoardBackground___c__DisplayClass80_0__SetClassIcon_b__0__,
    0);
  v13 = System_Linq_Enumerable__FirstOrDefault_object__51525108(
          iconTextures,
          (System_Func_TSource__bool__o *)v12,
          (const MethodInfo_31235F4 *)Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
  *(_QWORD *)(v6 + 32) = v13;
  sub_1C3E508((CGThumbnailListItem_o *)(v6 + 32), (int32_t)v13, v14, v15);
  v16 = *(UnityEngine_Object_o **)(v6 + 32);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v16, 0, 0) )
    return;
  iconRenderers = (System_Collections_Generic_IEnumerable_T__o *)this->fields.iconRenderers;
  v18 = (System_Action_object__o *)sub_1C3E7B0(System_Action_Renderer__TypeInfo);
  System_Action_object____ctor(
    v18,
    (Il2CppObject *)v6,
    Method_ClassBoardBackground___c__DisplayClass80_0__SetClassIcon_b__1__,
    0);
  BasicHelper__ForEach_object_(
    iconRenderers,
    (System_Action_T__o *)v18,
    (const MethodInfo_30E5A30 *)Method_BasicHelper_ForEach_Renderer___);
  v19 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_int__SimpleAnimation__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v19,
    (const MethodInfo_340BA68 *)Method_System_Collections_Generic_Dictionary_int__SimpleAnimation___ctor__);
  this->fields.exClassReleaseEffectAnimationDic = (struct System_Collections_Generic_Dictionary_int__SimpleAnimation__o *)v19;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.exClassReleaseEffectAnimationDic, (int32_t)v19, v20, v21);
  exIconSet = this->fields.exIconSet;
  if ( !exIconSet )
LABEL_162:
    sub_1C3E7C0(offRenderer, v8);
  if ( !exIconSet->max_length )
    return;
  if ( (baseId & 0xFFFFFFFE) != 8 )
  {
    max_length = exIconSet->max_length;
    if ( max_length < 1 )
      return;
    v152 = 0;
    while ( 1 )
    {
      if ( v152 >= max_length )
        sub_1C3E7C8(offRenderer, v8);
      v153 = exIconSet->m_Items[v152];
      if ( !v153 )
        break;
      offRenderer = (UnityEngine_Component_o *)v153->fields.offRenderer;
      if ( !offRenderer )
        break;
      offRenderer = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(offRenderer, 0);
      if ( !offRenderer )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)offRenderer, 0, 0);
      offRenderer = (UnityEngine_Component_o *)v153->fields.onRenderer;
      if ( !offRenderer )
        break;
      offRenderer = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(offRenderer, 0);
      if ( !offRenderer )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)offRenderer, 0, 0);
      offRenderer = (UnityEngine_Component_o *)v153->fields.releaseEffect;
      if ( !offRenderer )
        break;
      offRenderer = (UnityEngine_Component_o *)UnityEngine_GameObject__get_gameObject(
                                                 (UnityEngine_GameObject_o *)offRenderer,
                                                 0);
      if ( !offRenderer )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)offRenderer, 0, 0);
      max_length = exIconSet->max_length;
      if ( (int)++v152 >= max_length )
        return;
    }
    goto LABEL_162;
  }
  offRenderer = (UnityEngine_Component_o *)ClassBoardBackground__GetIconIdList(
                                             (ClassBoardBackground_o *)offRenderer,
                                             baseId,
                                             0,
                                             v22);
  if ( !offRenderer )
    goto LABEL_162;
  System_Collections_Generic_Dictionary_int__bool___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v159,
    (System_Collections_Generic_Dictionary_int__bool__o *)offRenderer,
    (const MethodInfo_33FDFCC *)Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
  *(_OWORD *)&v160.fields._dictionary = v159[0];
  v160.fields._current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v159[1];
LABEL_12:
  while ( System_Collections_Generic_Dictionary_Enumerator_int__bool___MoveNext(
            &v160,
            (const MethodInfo_3560D2C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__) )
  {
    key = v160.fields._current.fields.key;
    v25 = sub_1C3E7B0(ClassBoardBackground___c__DisplayClass80_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v25, 0);
    LODWORD(v159[0]) = (_DWORD)key;
    v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v159, v26, v27, v28, v29, v30, v31);
    v33 = System_String__Format((System_String_o *)StringLiteral_4486/*"ClassIconEx_on_{0}"*/, v32, 0);
    if ( !v25 )
      sub_1C3E7C0(v33, v33);
    *(_QWORD *)(v25 + 24) = v33;
    sub_1C3E508((CGThumbnailListItem_o *)(v25 + 24), (int32_t)v33, v34, v35);
    v158 = (int)key;
    v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v158, v36, v37, v38, v39, v40, v41);
    v43 = System_String__Format((System_String_o *)StringLiteral_4485/*"ClassIconEx_off_{0}"*/, v42, 0);
    *(_QWORD *)(v25 + 16) = v43;
    sub_1C3E508((CGThumbnailListItem_o *)(v25 + 16), (int32_t)v43, v44, v45);
    v157 = (int)key;
    v52 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v157, v46, v47, v48, v49, v50, v51);
    *(_QWORD *)classId = key;
    v53 = System_String__Format((System_String_o *)StringLiteral_4484/*"ClassIconEx_ef_glow_{0}"*/, v52, 0);
    *(_QWORD *)(v25 + 32) = v53;
    sub_1C3E508((CGThumbnailListItem_o *)(v25 + 32), (int32_t)v53, v54, v55);
    v58 = this->fields.exIconSet;
    if ( !v58 )
LABEL_94:
      sub_1C3E7C0(v56, v57);
    v59 = 0;
    v60 = (System_Func_object__bool__o **)(v25 + 40);
    v61 = (System_Func_object__bool__o **)(v25 + 48);
    v62 = (System_Func_object__bool__o **)(v25 + 56);
    v154 = *(_QWORD *)classId & 0xFF00000000LL;
    while ( 1 )
    {
      v63 = v58->max_length;
      if ( (int)v59 >= (int)v63 )
        break;
      if ( v59 >= v63 )
        sub_1C3E7C8(v56, v57);
      v64 = v58->m_Items[v59];
      if ( !v64 )
        sub_1C3E7C0(v56, v57);
      v65 = *v60;
      textures = (System_Collections_Generic_IEnumerable_TSource__o *)v64->fields.textures;
      if ( !*v60 )
      {
        v65 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_Texture__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v65,
          (Il2CppObject *)v25,
          Method_ClassBoardBackground___c__DisplayClass80_1__SetClassIcon_b__2__,
          0);
        *v60 = v65;
        sub_1C3E508((CGThumbnailListItem_o *)(v25 + 40), (int32_t)v65, v67, v68);
      }
      v69 = System_Linq_Enumerable__FirstOrDefault_object__51525108(
              textures,
              (System_Func_TSource__bool__o *)v65,
              (const MethodInfo_31235F4 *)Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
      v70 = *v61;
      v71 = (UnityEngine_Object_o *)v69;
      if ( !*v61 )
      {
        v70 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_Texture__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v70,
          (Il2CppObject *)v25,
          Method_ClassBoardBackground___c__DisplayClass80_1__SetClassIcon_b__3__,
          0);
        *v61 = v70;
        sub_1C3E508((CGThumbnailListItem_o *)(v25 + 48), (int32_t)v70, v72, v73);
      }
      v74 = System_Linq_Enumerable__FirstOrDefault_object__51525108(
              textures,
              (System_Func_TSource__bool__o *)v70,
              (const MethodInfo_31235F4 *)Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
      v75 = *v62;
      v76 = (UnityEngine_Object_o *)v74;
      if ( !*v62 )
      {
        v75 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_Texture__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v75,
          (Il2CppObject *)v25,
          Method_ClassBoardBackground___c__DisplayClass80_1__SetClassIcon_b__4__,
          0);
        *v62 = v75;
        sub_1C3E508((CGThumbnailListItem_o *)(v25 + 56), (int32_t)v75, v77, v78);
      }
      v79 = System_Linq_Enumerable__FirstOrDefault_object__51525108(
              textures,
              (System_Func_TSource__bool__o *)v75,
              (const MethodInfo_31235F4 *)Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v56 = UnityEngine_Object__op_Inequality(v76, 0, 0);
      if ( v56 )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v56 = UnityEngine_Object__op_Inequality(v71, 0, 0);
        if ( v56 )
        {
          v80 = this->fields.exIconSet;
          if ( !v80 )
            sub_1C3E7C0(v56, v57);
          if ( v59 >= LODWORD(v80->max_length) )
            sub_1C3E7C8(v56, v57);
          v81 = v80->m_Items[v59];
          if ( !v81 )
            sub_1C3E7C0(v56, v57);
          v82 = v81->fields.offRenderer;
          if ( !v82 )
            sub_1C3E7C0(0, v57);
          material = UnityEngine_Renderer__get_material(v82, 0);
          if ( !material )
            sub_1C3E7C0(0, v84);
          UnityEngine_Material__SetTexture(
            material,
            this->fields.iconMaterialPropertyName,
            (UnityEngine_Texture_o *)v71,
            0);
          v87 = this->fields.exIconSet;
          if ( !v87 )
            sub_1C3E7C0(v85, v86);
          if ( v59 >= LODWORD(v87->max_length) )
            sub_1C3E7C8(v85, v86);
          v88 = v87->m_Items[v59];
          if ( !v88 )
            sub_1C3E7C0(v85, v86);
          effectRenderer = v88->fields.effectRenderer;
          if ( !effectRenderer )
            sub_1C3E7C0(0, v86);
          v90 = UnityEngine_Renderer__get_material(effectRenderer, 0);
          if ( !v90 )
            sub_1C3E7C0(0, v91);
          UnityEngine_Material__SetTexture(v90, this->fields.iconMaterialPropertyName, (UnityEngine_Texture_o *)v71, 0);
          v94 = this->fields.exIconSet;
          if ( !v94 )
            sub_1C3E7C0(v92, v93);
          if ( v59 >= LODWORD(v94->max_length) )
            sub_1C3E7C8(v92, v93);
          v95 = v94->m_Items[v59];
          if ( !v95 )
            sub_1C3E7C0(v92, v93);
          onRenderer = v95->fields.onRenderer;
          if ( !onRenderer )
            sub_1C3E7C0(0, v93);
          v97 = UnityEngine_Renderer__get_material(onRenderer, 0);
          if ( !v97 )
            sub_1C3E7C0(0, v98);
          UnityEngine_Material__SetTexture(v97, this->fields.iconMaterialPropertyName, (UnityEngine_Texture_o *)v76, 0);
          v101 = this->fields.exIconSet;
          if ( !v101 )
            sub_1C3E7C0(v99, v100);
          if ( v59 >= LODWORD(v101->max_length) )
            sub_1C3E7C8(v99, v100);
          v102 = v101->m_Items[v59];
          if ( !v102 )
            sub_1C3E7C0(v99, v100);
          effectGlowRenderer = v102->fields.effectGlowRenderer;
          if ( !effectGlowRenderer )
            sub_1C3E7C0(0, v100);
          v104 = UnityEngine_Renderer__get_material(effectGlowRenderer, 0);
          if ( !v104 )
            sub_1C3E7C0(0, v105);
          UnityEngine_Material__SetTexture(v104, this->fields.iconMaterialPropertyName, (UnityEngine_Texture_o *)v79, 0);
          v108 = this->fields.exIconSet;
          if ( !v108 )
            sub_1C3E7C0(v106, v107);
          if ( v59 >= LODWORD(v108->max_length) )
            sub_1C3E7C8(v106, v107);
          v109 = v108->m_Items[v59];
          if ( !v109 )
            sub_1C3E7C0(v106, v107);
          v110 = (UnityEngine_Component_o *)v109->fields.offRenderer;
          if ( !v110 )
            sub_1C3E7C0(0, v107);
          gameObject = UnityEngine_Component__get_gameObject(v110, 0);
          if ( !gameObject )
            sub_1C3E7C0(0, v112);
          UnityEngine_GameObject__SetActive(gameObject, v154 == 0, 0);
          v115 = this->fields.exIconSet;
          if ( !v115 )
            sub_1C3E7C0(v113, v114);
          if ( v59 >= LODWORD(v115->max_length) )
            sub_1C3E7C8(v113, v114);
          v116 = v115->m_Items[v59];
          if ( !v116 )
            sub_1C3E7C0(v113, v114);
          v117 = (UnityEngine_Component_o *)v116->fields.onRenderer;
          if ( !v117 )
            sub_1C3E7C0(0, v114);
          v118 = UnityEngine_Component__get_gameObject(v117, 0);
          if ( !v118 )
            sub_1C3E7C0(0, v119);
          UnityEngine_GameObject__SetActive(v118, v154 != 0, 0);
          v122 = this->fields.exIconSet;
          if ( !v122 )
            sub_1C3E7C0(v120, v121);
          if ( v59 >= LODWORD(v122->max_length) )
            sub_1C3E7C8(v120, v121);
          v123 = v122->m_Items[v59];
          if ( !v123 )
            sub_1C3E7C0(v120, v121);
          releaseEffect = v123->fields.releaseEffect;
          if ( !releaseEffect )
            sub_1C3E7C0(0, v121);
          v125 = UnityEngine_GameObject__get_gameObject(releaseEffect, 0);
          if ( !v125 )
            sub_1C3E7C0(0, v126);
          UnityEngine_GameObject__SetActive(v125, 0, 0);
          if ( v154 )
          {
            if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
            IsPlayed = ClassBoardUtility__IsPlayedExClassReleaseEffect(classId[0], 0);
            if ( !IsPlayed )
            {
              v129 = this->fields.exIconSet;
              if ( !v129 )
                sub_1C3E7C0(IsPlayed, v128);
              if ( v59 >= LODWORD(v129->max_length) )
                sub_1C3E7C8(IsPlayed, v128);
              v130 = v129->m_Items[v59];
              if ( !v130 )
                sub_1C3E7C0(IsPlayed, v128);
              animation = (UnityEngine_Object_o *)v130->fields.animation;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              v132 = UnityEngine_Object__op_Inequality(animation, 0, 0);
              if ( v132 )
              {
                v134 = this->fields.exIconSet;
                if ( !v134 )
                  sub_1C3E7C0(v132, v133);
                if ( v59 >= LODWORD(v134->max_length) )
                  sub_1C3E7C8(v132, v133);
                v135 = v134->m_Items[v59];
                if ( !v135 )
                  sub_1C3E7C0(v132, v133);
                v136 = (UnityEngine_Component_o *)v135->fields.offRenderer;
                if ( !v136 )
                  sub_1C3E7C0(0, v133);
                v137 = UnityEngine_Component__get_gameObject(v136, 0);
                if ( !v137 )
                  sub_1C3E7C0(0, v138);
                UnityEngine_GameObject__SetActive(v137, 1, 0);
                v141 = this->fields.exIconSet;
                if ( !v141 )
                  sub_1C3E7C0(v139, v140);
                if ( v59 >= LODWORD(v141->max_length) )
                  sub_1C3E7C8(v139, v140);
                v142 = v141->m_Items[v59];
                if ( !v142 )
                  sub_1C3E7C0(v139, v140);
                v143 = (UnityEngine_Component_o *)v142->fields.onRenderer;
                if ( !v143 )
                  sub_1C3E7C0(0, v140);
                v144 = UnityEngine_Component__get_gameObject(v143, 0);
                if ( !v144 )
                  sub_1C3E7C0(0, v145);
                UnityEngine_GameObject__SetActive(v144, 0, 0);
                v148 = this->fields.exIconSet;
                if ( !v148 )
                  sub_1C3E7C0(v146, v147);
                if ( v59 >= LODWORD(v148->max_length) )
                  sub_1C3E7C8(v146, v147);
                v149 = v148->m_Items[v59];
                if ( !v149 )
                  sub_1C3E7C0(v146, v147);
                exClassReleaseEffectAnimationDic = this->fields.exClassReleaseEffectAnimationDic;
                if ( !exClassReleaseEffectAnimationDic )
                  sub_1C3E7C0(0, *(_QWORD *)classId);
                System_Collections_Generic_Dictionary_int__object___Add(
                  (System_Collections_Generic_Dictionary_int__object__o *)exClassReleaseEffectAnimationDic,
                  classId[0],
                  (Il2CppObject *)v149->fields.animation,
                  (const MethodInfo_340C43C *)Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__Add__);
              }
            }
          }
          goto LABEL_12;
        }
      }
      ++v59;
      v58 = this->fields.exIconSet;
      if ( !v58 )
        goto LABEL_94;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__bool___Dispose(
    &v160,
    (const MethodInfo_3560E34 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
}


void ClassBoardBackground__SetGrandClassIcon(
        ClassBoardBackground_o *this,
        int32_t baseId,
        int32_t iconId,
        const MethodInfo *method)
{
  __int64 v6; // x22
  System_Collections_Generic_Dictionary_int__bool__o *IconIdList; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Collections_Generic_IEnumerable_TSource__o *grandIconTextures; // x20
  System_Func_object__bool__o *v12; // x23
  Il2CppObject *v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  UnityEngine_Object_o *v16; // x20
  System_Collections_Generic_IEnumerable_T__o *grandIconRenderers; // x20
  System_Action_object__o *v18; // x23
  System_Collections_Generic_List_object__o *v19; // x20
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_Collections_Generic_Dictionary_int__object__o *v22; // x22
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  struct ClassBoardBackground_ExClassIconSet_array *grandExIconSet; // x8
  struct ClassBoardBackground_ExClassIconSet_array **p_grandExIconSet; // x29
  ClassBoardBackground___c_c *v27; // x0
  System_Collections_Generic_IEnumerable_T__o *v28; // x22
  System_Action_object__o *_9__81_3; // x23
  Il2CppObject *v30; // x24
  struct ClassBoardBackground___c_StaticFields *v31; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  ClassBoardBackground_o *v34; // x0
  const MethodInfo *v35; // x3
  Il2CppObject *key; // x21
  __int64 v37; // x22
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  __int64 v41; // x5
  __int64 v42; // x6
  __int64 v43; // x7
  Il2CppObject *v44; // x1
  System_String_o *v45; // x0
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  __int64 v51; // x5
  __int64 v52; // x6
  __int64 v53; // x7
  Il2CppObject *v54; // x1
  System_String_o *v55; // x0
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  __int64 v58; // x2
  __int64 v59; // x3
  __int64 v60; // x4
  __int64 v61; // x5
  __int64 v62; // x6
  __int64 v63; // x7
  Il2CppObject *v64; // x1
  System_String_o *v65; // x0
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  _BOOL8 v68; // x0
  __int64 v69; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v70; // x8
  System_Func_object__bool__o **v71; // x24
  __int64 v72; // x20
  int max_length; // w9
  unsigned int v74; // w26
  __int64 v75; // x8
  System_Func_object__bool__o *v76; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v77; // x23
  int32_t v78; // w2
  const MethodInfo *v79; // x3
  Il2CppObject *v80; // x25
  struct ClassBoardBackground_ExClassIconSet_array *v81; // x8
  __int64 v82; // x8
  UnityEngine_Renderer_o *v83; // x0
  UnityEngine_Material_o *material; // x0
  __int64 v85; // x1
  System_Func_object__bool__o *v86; // x24
  int32_t v87; // w2
  const MethodInfo *v88; // x3
  Il2CppObject *v89; // x0
  __int64 v90; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v91; // x8
  __int64 v92; // x8
  UnityEngine_Object_o *v93; // x24
  UnityEngine_Object_o *v94; // x25
  _BOOL8 v95; // x0
  __int64 v96; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v97; // x8
  __int64 v98; // x8
  UnityEngine_Renderer_o *v99; // x0
  UnityEngine_Material_o *v100; // x0
  __int64 v101; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v102; // x8
  __int64 v103; // x8
  UnityEngine_Object_o *v104; // x25
  _BOOL8 v105; // x0
  __int64 v106; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v107; // x8
  __int64 v108; // x8
  UnityEngine_GameObject_o *v109; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v111; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v112; // x8
  __int64 v113; // x8
  UnityEngine_Object_o *v114; // x25
  _BOOL8 v115; // x0
  __int64 v116; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v117; // x8
  __int64 v118; // x8
  UnityEngine_Renderer_o *v119; // x0
  UnityEngine_Material_o *v120; // x0
  __int64 v121; // x1
  System_Func_object__bool__o *v122; // x24
  int32_t v123; // w2
  const MethodInfo *v124; // x3
  Il2CppObject *v125; // x0
  __int64 v126; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v127; // x8
  __int64 v128; // x8
  UnityEngine_Texture_o *v129; // x22
  UnityEngine_Object_o *v130; // x23
  _BOOL8 v131; // x0
  __int64 v132; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v133; // x8
  __int64 v134; // x8
  UnityEngine_Renderer_o *v135; // x0
  UnityEngine_Material_o *v136; // x0
  __int64 v137; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v138; // x8
  __int64 v139; // x8
  UnityEngine_Object_o *v140; // x22
  _BOOL8 v141; // x0
  __int64 v142; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v143; // x8
  __int64 v144; // x8
  SimpleAnimation_o *v145; // x0
  __int64 v146; // x0
  __int64 v147; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v148; // x8
  __int64 v149; // x8
  SimpleAnimation_o *v150; // x0
  _BOOL8 IsPlayedGrand; // x0
  __int64 v152; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v153; // x8
  __int64 v154; // x8
  UnityEngine_Object_o *v155; // x22
  struct ClassBoardBackground_ExClassIconSet_array *v156; // x8
  __int64 v157; // x8
  UnityEngine_Component_o *v158; // x0
  UnityEngine_GameObject_o *v159; // x0
  __int64 v160; // x1
  __int64 v161; // x0
  __int64 v162; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v163; // x8
  __int64 v164; // x8
  UnityEngine_Object_o *v165; // x22
  _BOOL8 v166; // x0
  __int64 v167; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v168; // x8
  __int64 v169; // x8
  UnityEngine_Component_o *v170; // x0
  UnityEngine_GameObject_o *v171; // x0
  __int64 v172; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v173; // x8
  __int64 v174; // x8
  struct ClassBoardBackground_ExClassIconSet_array *v175; // x8
  __int64 v176; // x8
  UnityEngine_Component_o *v177; // x0
  UnityEngine_GameObject_o *v178; // x0
  __int64 v179; // x1
  __int64 v180; // x0
  __int64 v181; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v182; // x8
  __int64 v183; // x8
  UnityEngine_Object_o *v184; // x21
  _BOOL8 v185; // x0
  __int64 v186; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v187; // x8
  __int64 v188; // x8
  UnityEngine_Component_o *v189; // x0
  UnityEngine_GameObject_o *v190; // x0
  __int64 v191; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v192; // x8
  __int64 v193; // x8
  UnityEngine_Component_o *v194; // x0
  UnityEngine_GameObject_o *v195; // x0
  __int64 v196; // x1
  __int64 v197; // x0
  __int64 v198; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v199; // x8
  __int64 v200; // x8
  UnityEngine_Object_o *v201; // x21
  _BOOL8 v202; // x0
  __int64 v203; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v204; // x8
  __int64 v205; // x8
  UnityEngine_Component_o *v206; // x0
  UnityEngine_GameObject_o *v207; // x0
  __int64 v208; // x1
  ClassBoardBackground___c_c *v209; // x0
  System_Collections_Generic_IEnumerable_T__o *grandExIconObj; // x19
  System_Action_object__o *_9__81_2; // x20
  Il2CppObject *v212; // x21
  struct ClassBoardBackground___c_StaticFields *static_fields; // x0
  int32_t v214; // w2
  const MethodInfo *v215; // x3
  System_Collections_Generic_Dictionary_int__object__o **p_grandExClassReleaseEffectAnimationDic; // [xsp+8h] [xbp-B8h]
  int v218; // [xsp+18h] [xbp-A8h] BYREF
  int v219; // [xsp+1Ch] [xbp-A4h] BYREF
  _OWORD v220[2]; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v221; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4C5A73D & 1) == 0 )
  {
    sub_1C3E564(&System_Action_Renderer__TypeInfo);
    sub_1C3E564(&System_Action_GameObject__TypeInfo);
    sub_1C3E564(&Method_BasicHelper_ForEach_GameObject___);
    sub_1C3E564(&Method_BasicHelper_ForEach_Renderer___);
    sub_1C3E564(&ClassBoardUtility_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__SimpleAnimation___ctor__);
    sub_1C3E564(&System_Collections_Generic_Dictionary_int__SimpleAnimation__TypeInfo);
    sub_1C3E564(&Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__get_Current__);
    sub_1C3E564(&System_Func_Texture__bool__TypeInfo);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Key__);
    sub_1C3E564(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Value__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Material___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_Material__TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_ClassBoardBackground___c__SetGrandClassIcon_b__81_2__);
    sub_1C3E564(&Method_ClassBoardBackground___c__SetGrandClassIcon_b__81_3__);
    sub_1C3E564(&Method_ClassBoardBackground___c__DisplayClass81_0__SetGrandClassIcon_b__0__);
    sub_1C3E564(&Method_ClassBoardBackground___c__DisplayClass81_0__SetGrandClassIcon_b__1__);
    sub_1C3E564(&ClassBoardBackground___c__DisplayClass81_0_TypeInfo);
    sub_1C3E564(&Method_ClassBoardBackground___c__DisplayClass81_1__SetGrandClassIcon_b__4__);
    sub_1C3E564(&Method_ClassBoardBackground___c__DisplayClass81_1__SetGrandClassIcon_b__5__);
    sub_1C3E564(&Method_ClassBoardBackground___c__DisplayClass81_1__SetGrandClassIcon_b__6__);
    sub_1C3E564(&ClassBoardBackground___c__DisplayClass81_1_TypeInfo);
    sub_1C3E564(&ClassBoardBackground___c_TypeInfo);
    sub_1C3E564(&StringLiteral_7146/*"GrandClassIconEx_on_{0}"*/);
    sub_1C3E564(&StringLiteral_7145/*"GrandClassIconEx_off_{0}"*/);
    sub_1C3E564(&StringLiteral_7144/*"GrandClassIconEx_ef_glow_{0}"*/);
    byte_4C5A73D = 1;
  }
  memset(&v221, 0, 32);
  v6 = sub_1C3E7B0(ClassBoardBackground___c__DisplayClass81_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  if ( !v6 )
    goto LABEL_198;
  *(_DWORD *)(v6 + 16) = iconId;
  *(_QWORD *)(v6 + 24) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v6 + 24), (int32_t)this, v9, v10);
  grandIconTextures = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.grandIconTextures;
  v12 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_Texture__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)v6,
    Method_ClassBoardBackground___c__DisplayClass81_0__SetGrandClassIcon_b__0__,
    0);
  v13 = System_Linq_Enumerable__FirstOrDefault_object__51525108(
          grandIconTextures,
          (System_Func_TSource__bool__o *)v12,
          (const MethodInfo_31235F4 *)Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
  *(_QWORD *)(v6 + 32) = v13;
  sub_1C3E508((CGThumbnailListItem_o *)(v6 + 32), (int32_t)v13, v14, v15);
  v16 = *(UnityEngine_Object_o **)(v6 + 32);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v16, 0, 0) )
    return;
  grandIconRenderers = (System_Collections_Generic_IEnumerable_T__o *)this->fields.grandIconRenderers;
  v18 = (System_Action_object__o *)sub_1C3E7B0(System_Action_Renderer__TypeInfo);
  System_Action_object____ctor(
    v18,
    (Il2CppObject *)v6,
    Method_ClassBoardBackground___c__DisplayClass81_0__SetGrandClassIcon_b__1__,
    0);
  BasicHelper__ForEach_object_(
    grandIconRenderers,
    (System_Action_T__o *)v18,
    (const MethodInfo_30E5A30 *)Method_BasicHelper_ForEach_Renderer___);
  v19 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_Material__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_Material___ctor__);
  this->fields.grandStartAnimActiveIconMaterials = (struct System_Collections_Generic_List_Material__o *)v19;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.grandStartAnimActiveIconMaterials, (int32_t)v19, v20, v21);
  v22 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_int__SimpleAnimation__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v22,
    (const MethodInfo_340BA68 *)Method_System_Collections_Generic_Dictionary_int__SimpleAnimation___ctor__);
  this->fields.grandExClassReleaseEffectAnimationDic = (struct System_Collections_Generic_Dictionary_int__SimpleAnimation__o *)v22;
  p_grandExClassReleaseEffectAnimationDic = (System_Collections_Generic_Dictionary_int__object__o **)&this->fields.grandExClassReleaseEffectAnimationDic;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.grandExClassReleaseEffectAnimationDic, (int32_t)v22, v23, v24);
  p_grandExIconSet = &this->fields.grandExIconSet;
  grandExIconSet = this->fields.grandExIconSet;
  if ( !grandExIconSet )
    goto LABEL_198;
  if ( !grandExIconSet->max_length )
    return;
  if ( (unsigned int)baseId >> 1 != 5004 )
  {
    v209 = ClassBoardBackground___c_TypeInfo;
    grandExIconObj = (System_Collections_Generic_IEnumerable_T__o *)this->fields.grandExIconObj;
    if ( !ClassBoardBackground___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardBackground___c_TypeInfo);
      v209 = ClassBoardBackground___c_TypeInfo;
    }
    _9__81_2 = (System_Action_object__o *)v209->static_fields->__9__81_2;
    if ( !_9__81_2 )
    {
      if ( !v209->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v209);
        v209 = ClassBoardBackground___c_TypeInfo;
      }
      v212 = (Il2CppObject *)v209->static_fields->__9;
      _9__81_2 = (System_Action_object__o *)sub_1C3E7B0(System_Action_GameObject__TypeInfo);
      System_Action_object____ctor(_9__81_2, v212, Method_ClassBoardBackground___c__SetGrandClassIcon_b__81_2__, 0);
      static_fields = ClassBoardBackground___c_TypeInfo->static_fields;
      static_fields->__9__81_2 = (struct System_Action_GameObject__o *)_9__81_2;
      sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__81_2, (int32_t)_9__81_2, v214, v215);
    }
    BasicHelper__ForEach_object_(
      grandExIconObj,
      (System_Action_T__o *)_9__81_2,
      (const MethodInfo_30E5A30 *)Method_BasicHelper_ForEach_GameObject___);
    return;
  }
  v27 = ClassBoardBackground___c_TypeInfo;
  v28 = (System_Collections_Generic_IEnumerable_T__o *)this->fields.grandExIconObj;
  if ( !ClassBoardBackground___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardBackground___c_TypeInfo);
    v27 = ClassBoardBackground___c_TypeInfo;
  }
  _9__81_3 = (System_Action_object__o *)v27->static_fields->__9__81_3;
  if ( !_9__81_3 )
  {
    if ( !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27);
      v27 = ClassBoardBackground___c_TypeInfo;
    }
    v30 = (Il2CppObject *)v27->static_fields->__9;
    _9__81_3 = (System_Action_object__o *)sub_1C3E7B0(System_Action_GameObject__TypeInfo);
    System_Action_object____ctor(_9__81_3, v30, Method_ClassBoardBackground___c__SetGrandClassIcon_b__81_3__, 0);
    v31 = ClassBoardBackground___c_TypeInfo->static_fields;
    v31->__9__81_3 = (struct System_Action_GameObject__o *)_9__81_3;
    sub_1C3E508((CGThumbnailListItem_o *)&v31->__9__81_3, (int32_t)_9__81_3, v32, v33);
  }
  BasicHelper__ForEach_object_(
    v28,
    (System_Action_T__o *)_9__81_3,
    (const MethodInfo_30E5A30 *)Method_BasicHelper_ForEach_GameObject___);
  IconIdList = ClassBoardBackground__GetIconIdList(v34, baseId, 1, v35);
  if ( !IconIdList )
LABEL_198:
    sub_1C3E7C0(IconIdList, v8);
  System_Collections_Generic_Dictionary_int__bool___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v220,
    IconIdList,
    (const MethodInfo_33FDFCC *)Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
  *(_OWORD *)&v221.fields._dictionary = v220[0];
  v221.fields._current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v220[1];
LABEL_18:
  while ( System_Collections_Generic_Dictionary_Enumerator_int__bool___MoveNext(
            &v221,
            (const MethodInfo_3560D2C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__) )
  {
    key = v221.fields._current.fields.key;
    v37 = sub_1C3E7B0(ClassBoardBackground___c__DisplayClass81_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v37, 0);
    LODWORD(v220[0]) = (_DWORD)key;
    v44 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v220, v38, v39, v40, v41, v42, v43);
    v45 = System_String__Format((System_String_o *)StringLiteral_7146/*"GrandClassIconEx_on_{0}"*/, v44, 0);
    if ( !v37 )
      sub_1C3E7C0(v45, v45);
    *(_QWORD *)(v37 + 16) = v45;
    sub_1C3E508((CGThumbnailListItem_o *)(v37 + 16), (int32_t)v45, v46, v47);
    v219 = (int)key;
    v54 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v219, v48, v49, v50, v51, v52, v53);
    v55 = System_String__Format((System_String_o *)StringLiteral_7145/*"GrandClassIconEx_off_{0}"*/, v54, 0);
    *(_QWORD *)(v37 + 24) = v55;
    sub_1C3E508((CGThumbnailListItem_o *)(v37 + 24), (int32_t)v55, v56, v57);
    v218 = (int)key;
    v64 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v218, v58, v59, v60, v61, v62, v63);
    v65 = System_String__Format((System_String_o *)StringLiteral_7144/*"GrandClassIconEx_ef_glow_{0}"*/, v64, 0);
    *(_QWORD *)(v37 + 32) = v65;
    sub_1C3E508((CGThumbnailListItem_o *)(v37 + 32), (int32_t)v65, v66, v67);
    v70 = *p_grandExIconSet;
    if ( !*p_grandExIconSet )
LABEL_174:
      sub_1C3E7C0(v68, v69);
    v71 = (System_Func_object__bool__o **)(v37 + 40);
    v72 = 4;
    while ( 1 )
    {
      max_length = v70->max_length;
      v74 = v72 - 4;
      if ( (int)v72 - 4 >= max_length )
        break;
      if ( v74 >= max_length )
        sub_1C3E7C8(v68, v69);
      v75 = *((_QWORD *)&v70->obj.klass + v72);
      if ( !v75 )
        sub_1C3E7C0(v68, v69);
      v76 = *v71;
      v77 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v75 + 48);
      if ( !*v71 )
      {
        v76 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_Texture__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v76,
          (Il2CppObject *)v37,
          Method_ClassBoardBackground___c__DisplayClass81_1__SetGrandClassIcon_b__4__,
          0);
        *v71 = v76;
        sub_1C3E508((CGThumbnailListItem_o *)(v37 + 40), (int32_t)v76, v78, v79);
      }
      v80 = System_Linq_Enumerable__FirstOrDefault_object__51525108(
              v77,
              (System_Func_TSource__bool__o *)v76,
              (const MethodInfo_31235F4 *)Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v68 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v80, 0, 0);
      if ( !v68 )
      {
        v81 = *p_grandExIconSet;
        if ( !*p_grandExIconSet )
          sub_1C3E7C0(v68, v69);
        if ( v74 >= LODWORD(v81->max_length) )
          sub_1C3E7C8(v68, v69);
        v82 = *((_QWORD *)&v81->obj.klass + v72);
        if ( !v82 )
          sub_1C3E7C0(v68, v69);
        v83 = *(UnityEngine_Renderer_o **)(v82 + 16);
        if ( !v83 )
          sub_1C3E7C0(0, v69);
        material = UnityEngine_Renderer__get_material(v83, 0);
        if ( !material )
          sub_1C3E7C0(0, v85);
        UnityEngine_Material__SetTexture(
          material,
          this->fields.iconMaterialPropertyName,
          (UnityEngine_Texture_o *)v80,
          0);
        v86 = *(System_Func_object__bool__o **)(v37 + 48);
        if ( !v86 )
        {
          v86 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_Texture__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v86,
            (Il2CppObject *)v37,
            Method_ClassBoardBackground___c__DisplayClass81_1__SetGrandClassIcon_b__5__,
            0);
          *(_QWORD *)(v37 + 48) = v86;
          sub_1C3E508((CGThumbnailListItem_o *)(v37 + 48), (int32_t)v86, v87, v88);
        }
        v89 = System_Linq_Enumerable__FirstOrDefault_object__51525108(
                v77,
                (System_Func_TSource__bool__o *)v86,
                (const MethodInfo_31235F4 *)Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
        v91 = *p_grandExIconSet;
        if ( !*p_grandExIconSet )
          sub_1C3E7C0(v89, v90);
        if ( v74 >= LODWORD(v91->max_length) )
          sub_1C3E7C8(v89, v90);
        v92 = *((_QWORD *)&v91->obj.klass + v72);
        if ( !v92 )
          sub_1C3E7C0(v89, v90);
        v93 = (UnityEngine_Object_o *)v89;
        v94 = *(UnityEngine_Object_o **)(v92 + 24);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v95 = UnityEngine_Object__op_Inequality(v94, 0, 0);
        if ( v95 )
        {
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v95 = UnityEngine_Object__op_Inequality(v93, 0, 0);
          if ( v95 )
          {
            v97 = *p_grandExIconSet;
            if ( !*p_grandExIconSet )
              sub_1C3E7C0(v95, v96);
            if ( v74 >= LODWORD(v97->max_length) )
              sub_1C3E7C8(v95, v96);
            v98 = *((_QWORD *)&v97->obj.klass + v72);
            if ( !v98 )
              sub_1C3E7C0(v95, v96);
            v99 = *(UnityEngine_Renderer_o **)(v98 + 24);
            if ( !v99 )
              sub_1C3E7C0(0, v96);
            v100 = UnityEngine_Renderer__get_material(v99, 0);
            if ( !v100 )
              sub_1C3E7C0(0, v101);
            UnityEngine_Material__SetTexture(
              v100,
              this->fields.iconMaterialPropertyName,
              (UnityEngine_Texture_o *)v93,
              0);
          }
        }
        v102 = *p_grandExIconSet;
        if ( !*p_grandExIconSet )
          sub_1C3E7C0(v95, v96);
        if ( v74 >= LODWORD(v102->max_length) )
          sub_1C3E7C8(v95, v96);
        v103 = *((_QWORD *)&v102->obj.klass + v72);
        if ( !v103 )
          sub_1C3E7C0(v95, v96);
        v104 = *(UnityEngine_Object_o **)(v103 + 64);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v105 = UnityEngine_Object__op_Inequality(v104, 0, 0);
        if ( v105 )
        {
          v107 = *p_grandExIconSet;
          if ( !*p_grandExIconSet )
            sub_1C3E7C0(v105, v106);
          if ( v74 >= LODWORD(v107->max_length) )
            sub_1C3E7C8(v105, v106);
          v108 = *((_QWORD *)&v107->obj.klass + v72);
          if ( !v108 )
            sub_1C3E7C0(v105, v106);
          v109 = *(UnityEngine_GameObject_o **)(v108 + 64);
          if ( !v109 )
            sub_1C3E7C0(0, v106);
          gameObject = UnityEngine_GameObject__get_gameObject(v109, 0);
          if ( !gameObject )
            sub_1C3E7C0(0, v111);
          UnityEngine_GameObject__SetActive(gameObject, 0, 0);
        }
        v112 = *p_grandExIconSet;
        if ( !*p_grandExIconSet )
          sub_1C3E7C0(v105, v106);
        if ( v74 >= LODWORD(v112->max_length) )
          sub_1C3E7C8(v105, v106);
        v113 = *((_QWORD *)&v112->obj.klass + v72);
        if ( !v113 )
          sub_1C3E7C0(v105, v106);
        v114 = *(UnityEngine_Object_o **)(v113 + 32);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v115 = UnityEngine_Object__op_Inequality(v114, 0, 0);
        if ( v115 )
        {
          v117 = *p_grandExIconSet;
          if ( !*p_grandExIconSet )
            sub_1C3E7C0(v115, v116);
          if ( v74 >= LODWORD(v117->max_length) )
            sub_1C3E7C8(v115, v116);
          v118 = *((_QWORD *)&v117->obj.klass + v72);
          if ( !v118 )
            sub_1C3E7C0(v115, v116);
          v119 = *(UnityEngine_Renderer_o **)(v118 + 32);
          if ( !v119 )
            sub_1C3E7C0(0, v116);
          v120 = UnityEngine_Renderer__get_material(v119, 0);
          if ( !v120 )
            sub_1C3E7C0(0, v121);
          UnityEngine_Material__SetTexture(v120, this->fields.iconMaterialPropertyName, (UnityEngine_Texture_o *)v93, 0);
        }
        v122 = *(System_Func_object__bool__o **)(v37 + 56);
        if ( !v122 )
        {
          v122 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_Texture__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v122,
            (Il2CppObject *)v37,
            Method_ClassBoardBackground___c__DisplayClass81_1__SetGrandClassIcon_b__6__,
            0);
          *(_QWORD *)(v37 + 56) = v122;
          sub_1C3E508((CGThumbnailListItem_o *)(v37 + 56), (int32_t)v122, v123, v124);
        }
        v125 = System_Linq_Enumerable__FirstOrDefault_object__51525108(
                 v77,
                 (System_Func_TSource__bool__o *)v122,
                 (const MethodInfo_31235F4 *)Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
        v127 = *p_grandExIconSet;
        if ( !*p_grandExIconSet )
          sub_1C3E7C0(v125, v126);
        if ( v74 >= LODWORD(v127->max_length) )
          sub_1C3E7C8(v125, v126);
        v128 = *((_QWORD *)&v127->obj.klass + v72);
        if ( !v128 )
          sub_1C3E7C0(v125, v126);
        v129 = (UnityEngine_Texture_o *)v125;
        v130 = *(UnityEngine_Object_o **)(v128 + 40);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v131 = UnityEngine_Object__op_Inequality(v130, 0, 0);
        if ( v131 )
        {
          v133 = *p_grandExIconSet;
          if ( !*p_grandExIconSet )
            sub_1C3E7C0(v131, v132);
          if ( v74 >= LODWORD(v133->max_length) )
            sub_1C3E7C8(v131, v132);
          v134 = *((_QWORD *)&v133->obj.klass + v72);
          if ( !v134 )
            sub_1C3E7C0(v131, v132);
          v135 = *(UnityEngine_Renderer_o **)(v134 + 40);
          if ( !v135 )
            sub_1C3E7C0(0, v132);
          v136 = UnityEngine_Renderer__get_material(v135, 0);
          if ( !v136 )
            sub_1C3E7C0(0, v137);
          UnityEngine_Material__SetTexture(v136, this->fields.iconMaterialPropertyName, v129, 0);
        }
        v138 = *p_grandExIconSet;
        if ( !*p_grandExIconSet )
          sub_1C3E7C0(v131, v132);
        if ( v74 >= LODWORD(v138->max_length) )
          sub_1C3E7C8(v131, v132);
        v139 = *((_QWORD *)&v138->obj.klass + v72);
        if ( !v139 )
          sub_1C3E7C0(v131, v132);
        v140 = *(UnityEngine_Object_o **)(v139 + 56);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v141 = UnityEngine_Object__op_Inequality(v140, 0, 0);
        if ( v141 )
        {
          v143 = *p_grandExIconSet;
          if ( !*p_grandExIconSet )
            sub_1C3E7C0(v141, v142);
          if ( v74 >= LODWORD(v143->max_length) )
            sub_1C3E7C8(v141, v142);
          v144 = *((_QWORD *)&v143->obj.klass + v72);
          if ( !v144 )
            sub_1C3E7C0(v141, v142);
          v145 = *(SimpleAnimation_o **)(v144 + 56);
          if ( !v145 )
            sub_1C3E7C0(0, v142);
          SimpleAnimation__Rewind(v145, 0);
          v148 = *p_grandExIconSet;
          if ( !*p_grandExIconSet )
            sub_1C3E7C0(v146, v147);
          if ( v74 >= LODWORD(v148->max_length) )
            sub_1C3E7C8(v146, v147);
          v149 = *((_QWORD *)&v148->obj.klass + v72);
          if ( !v149 )
            sub_1C3E7C0(v146, v147);
          v150 = *(SimpleAnimation_o **)(v149 + 56);
          if ( !v150 )
            sub_1C3E7C0(0, v147);
          SimpleAnimation__Stop(v150, 0);
        }
        if ( ((unsigned __int64)key & 0xFF00000000LL) != 0 )
        {
          if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
          IsPlayedGrand = ClassBoardUtility__IsPlayedGrandExClassReleaseEffect((int32_t)key, 0);
          if ( IsPlayedGrand )
            goto LABEL_139;
          v153 = *p_grandExIconSet;
          if ( !*p_grandExIconSet )
            sub_1C3E7C0(IsPlayedGrand, v152);
          if ( v74 >= LODWORD(v153->max_length) )
            sub_1C3E7C8(IsPlayedGrand, v152);
          v154 = *((_QWORD *)&v153->obj.klass + v72);
          if ( !v154 )
            sub_1C3E7C0(IsPlayedGrand, v152);
          v155 = *(UnityEngine_Object_o **)(v154 + 56);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          IsPlayedGrand = UnityEngine_Object__op_Inequality(v155, 0, 0);
          if ( !IsPlayedGrand )
          {
LABEL_139:
            v175 = *p_grandExIconSet;
            if ( !*p_grandExIconSet )
              sub_1C3E7C0(IsPlayedGrand, v152);
            if ( v74 >= LODWORD(v175->max_length) )
              sub_1C3E7C8(IsPlayedGrand, v152);
            v176 = *((_QWORD *)&v175->obj.klass + v72);
            if ( !v176 )
              sub_1C3E7C0(IsPlayedGrand, v152);
            v177 = *(UnityEngine_Component_o **)(v176 + 16);
            if ( !v177 )
              sub_1C3E7C0(0, v152);
            v178 = UnityEngine_Component__get_gameObject(v177, 0);
            if ( !v178 )
              sub_1C3E7C0(0, v179);
            UnityEngine_GameObject__SetActive(v178, 1, 0);
            v182 = *p_grandExIconSet;
            if ( !*p_grandExIconSet )
              sub_1C3E7C0(v180, v181);
            if ( v74 >= LODWORD(v182->max_length) )
              sub_1C3E7C8(v180, v181);
            v183 = *((_QWORD *)&v182->obj.klass + v72);
            if ( !v183 )
              sub_1C3E7C0(v180, v181);
            v184 = *(UnityEngine_Object_o **)(v183 + 24);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            v185 = UnityEngine_Object__op_Inequality(v184, 0, 0);
            if ( v185 )
            {
              v187 = *p_grandExIconSet;
              if ( !*p_grandExIconSet )
                sub_1C3E7C0(v185, v186);
              if ( v74 >= LODWORD(v187->max_length) )
                sub_1C3E7C8(v185, v186);
              v188 = *((_QWORD *)&v187->obj.klass + v72);
              if ( !v188 )
                sub_1C3E7C0(v185, v186);
              v189 = *(UnityEngine_Component_o **)(v188 + 24);
              if ( !v189 )
                sub_1C3E7C0(0, v186);
              v190 = UnityEngine_Component__get_gameObject(v189, 0);
              if ( !v190 )
                sub_1C3E7C0(0, v191);
              UnityEngine_GameObject__SetActive(v190, 0, 0);
            }
          }
          else
          {
            v156 = *p_grandExIconSet;
            if ( !*p_grandExIconSet )
              sub_1C3E7C0(IsPlayedGrand, v152);
            if ( v74 >= LODWORD(v156->max_length) )
              sub_1C3E7C8(IsPlayedGrand, v152);
            v157 = *((_QWORD *)&v156->obj.klass + v72);
            if ( !v157 )
              sub_1C3E7C0(IsPlayedGrand, v152);
            v158 = *(UnityEngine_Component_o **)(v157 + 16);
            if ( !v158 )
              sub_1C3E7C0(0, v152);
            v159 = UnityEngine_Component__get_gameObject(v158, 0);
            if ( !v159 )
              sub_1C3E7C0(0, v160);
            UnityEngine_GameObject__SetActive(v159, 0, 0);
            v163 = *p_grandExIconSet;
            if ( !*p_grandExIconSet )
              sub_1C3E7C0(v161, v162);
            if ( v74 >= LODWORD(v163->max_length) )
              sub_1C3E7C8(v161, v162);
            v164 = *((_QWORD *)&v163->obj.klass + v72);
            if ( !v164 )
              sub_1C3E7C0(v161, v162);
            v165 = *(UnityEngine_Object_o **)(v164 + 24);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            v166 = UnityEngine_Object__op_Inequality(v165, 0, 0);
            if ( v166 )
            {
              v168 = *p_grandExIconSet;
              if ( !*p_grandExIconSet )
                sub_1C3E7C0(v166, v167);
              if ( v74 >= LODWORD(v168->max_length) )
                sub_1C3E7C8(v166, v167);
              v169 = *((_QWORD *)&v168->obj.klass + v72);
              if ( !v169 )
                sub_1C3E7C0(v166, v167);
              v170 = *(UnityEngine_Component_o **)(v169 + 24);
              if ( !v170 )
                sub_1C3E7C0(0, v167);
              v171 = UnityEngine_Component__get_gameObject(v170, 0);
              if ( !v171 )
                sub_1C3E7C0(0, v172);
              UnityEngine_GameObject__SetActive(v171, 1, 0);
            }
            v173 = *p_grandExIconSet;
            if ( !*p_grandExIconSet )
              sub_1C3E7C0(v166, v167);
            if ( v74 >= LODWORD(v173->max_length) )
              sub_1C3E7C8(v166, v167);
            v174 = *((_QWORD *)&v173->obj.klass + v72);
            if ( !v174 )
              sub_1C3E7C0(v166, v167);
            if ( !*p_grandExClassReleaseEffectAnimationDic )
              sub_1C3E7C0(0, v167);
            System_Collections_Generic_Dictionary_int__object___Add(
              *p_grandExClassReleaseEffectAnimationDic,
              (int32_t)key,
              *(Il2CppObject **)(v174 + 56),
              (const MethodInfo_340C43C *)Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__Add__);
          }
        }
        else
        {
          v192 = *p_grandExIconSet;
          if ( !*p_grandExIconSet )
            sub_1C3E7C0(v141, v142);
          if ( v74 >= LODWORD(v192->max_length) )
            sub_1C3E7C8(v141, v142);
          v193 = *((_QWORD *)&v192->obj.klass + v72);
          if ( !v193 )
            sub_1C3E7C0(v141, v142);
          v194 = *(UnityEngine_Component_o **)(v193 + 16);
          if ( !v194 )
            sub_1C3E7C0(0, v142);
          v195 = UnityEngine_Component__get_gameObject(v194, 0);
          if ( !v195 )
            sub_1C3E7C0(0, v196);
          UnityEngine_GameObject__SetActive(v195, 0, 0);
          v199 = *p_grandExIconSet;
          if ( !*p_grandExIconSet )
            sub_1C3E7C0(v197, v198);
          if ( v74 >= LODWORD(v199->max_length) )
            sub_1C3E7C8(v197, v198);
          v200 = *((_QWORD *)&v199->obj.klass + v72);
          if ( !v200 )
            sub_1C3E7C0(v197, v198);
          v201 = *(UnityEngine_Object_o **)(v200 + 24);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v202 = UnityEngine_Object__op_Inequality(v201, 0, 0);
          if ( v202 )
          {
            v204 = *p_grandExIconSet;
            if ( !*p_grandExIconSet )
              sub_1C3E7C0(v202, v203);
            if ( v74 >= LODWORD(v204->max_length) )
              sub_1C3E7C8(v202, v203);
            v205 = *((_QWORD *)&v204->obj.klass + v72);
            if ( !v205 )
              sub_1C3E7C0(v202, v203);
            v206 = *(UnityEngine_Component_o **)(v205 + 24);
            if ( !v206 )
              sub_1C3E7C0(0, v203);
            v207 = UnityEngine_Component__get_gameObject(v206, 0);
            if ( !v207 )
              sub_1C3E7C0(0, v208);
            UnityEngine_GameObject__SetActive(v207, 1, 0);
          }
        }
        goto LABEL_18;
      }
      v70 = *p_grandExIconSet;
      ++v72;
      if ( !*p_grandExIconSet )
        goto LABEL_174;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__bool___Dispose(
    &v221,
    (const MethodInfo_3560E34 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
}


void ClassBoardBackground__SetShowBoardCallback(
        ClassBoardBackground_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.showBoardCallback = callback;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.showBoardCallback, (int32_t)callback, (int32_t)method, v3);
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

  if ( (byte_4C5A743 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_ClassBoardBackground__SkipStartMainEffectPlayer_b__87_0__);
    sub_1C3E564(&Method_ClassBoardEffectPlayer_GetData_int___);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&StringLiteral_8874/*"MainTransition{0}"*/);
    byte_4C5A743 = 1;
  }
  skipMainEffectPlayer = this->fields.skipMainEffectPlayer;
  if ( !skipMainEffectPlayer )
    sub_1C3E7C0(0, method);
  Data_int = ClassBoardEffectPlayer__GetData_int_(
               skipMainEffectPlayer,
               (const MethodInfo_30ED2BC *)Method_ClassBoardEffectPlayer_GetData_int___);
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Data_int, v4, v5, v6, v7, v8, v9);
  v11 = System_String__Format((System_String_o *)StringLiteral_8874/*"MainTransition{0}"*/, v10, 0);
  mainAnimation = this->fields.mainAnimation;
  v13 = v11;
  v14 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
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

  if ( (byte_4C5A748 & 1) == 0 )
  {
    sub_1C3E564(&ClassBoardBackground__WaitAnimationFinished_d__93_TypeInfo);
    byte_4C5A748 = 1;
  }
  v8 = sub_1C3E7B0(ClassBoardBackground__WaitAnimationFinished_d__93_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0);
  *(_DWORD *)(v8 + 16) = 0;
  *(_QWORD *)(v8 + 32) = anim;
  sub_1C3E508((CGThumbnailListItem_o *)(v8 + 32), (int32_t)anim, v9, v10);
  *(_QWORD *)(v8 + 40) = name;
  sub_1C3E508((CGThumbnailListItem_o *)(v8 + 40), (int32_t)name, v11, v12);
  *(_QWORD *)(v8 + 48) = endCallback;
  sub_1C3E508((CGThumbnailListItem_o *)(v8 + 48), (int32_t)endCallback, v13, v14);
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

  if ( (byte_4C5A74B & 1) == 0 )
  {
    sub_1C3E564(&ClassBoardUtility_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__get_Keys__);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToArray_int___);
    byte_4C5A74B = 1;
  }
  exClassReleaseEffectAnimationDic = this->fields.exClassReleaseEffectAnimationDic;
  p_exClassReleaseEffectAnimationDic = (CGThumbnailListItem_o *)&this->fields.exClassReleaseEffectAnimationDic;
  v3 = (System_Collections_Generic_Dictionary_int__object__o *)exClassReleaseEffectAnimationDic;
  if ( !exClassReleaseEffectAnimationDic )
    sub_1C3E7C0(0, method);
  Keys = System_Collections_Generic_Dictionary_int__object___get_Keys(
           v3,
           (const MethodInfo_340C0FC *)Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__get_Keys__);
  v7 = System_Linq_Enumerable__ToArray_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
         (const MethodInfo_3139050 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
  ClassBoardUtility__SavePlayedExClassReleaseEffect(v7, 0);
  p_exClassReleaseEffectAnimationDic->klass = 0;
  sub_1C3E508(p_exClassReleaseEffectAnimationDic, 0, v8, v9);
}


void ClassBoardBackground___PlayStartMainEffectPlayer_b__86_0(ClassBoardBackground_o *this, const MethodInfo *method)
{
  ClassBoardEffectPlayer_o *startMainEffectPlayer; // x0

  startMainEffectPlayer = this->fields.startMainEffectPlayer;
  if ( !startMainEffectPlayer )
    sub_1C3E7C0(0, method);
  ClassBoardEffectPlayer__End(startMainEffectPlayer, 0);
}


void ClassBoardBackground___SkipStartMainEffectPlayer_b__87_0(ClassBoardBackground_o *this, const MethodInfo *method)
{
  ClassBoardEffectPlayer_o *skipMainEffectPlayer; // x0

  skipMainEffectPlayer = this->fields.skipMainEffectPlayer;
  if ( !skipMainEffectPlayer )
    sub_1C3E7C0(0, method);
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

  if ( (byte_4C5A752 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4C5A752 = 1;
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
      v6 = (UnityEngine_WaitForSeconds_o *)sub_1C3E7B0(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v6, exClassReleaseEffectStartSec, 0);
      this->fields.__2__current = (Il2CppObject *)v6;
      p__2__current = &this->fields.__2__current;
      sub_1C3E508((CGThumbnailListItem_o *)p__2__current, (int32_t)v6, v8, v9);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
LABEL_10:
    sub_1C3E7C0(_4__this, method);
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

  v2 = sub_1C3E578(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3E7B0(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3E578(&Method_ClassBoardBackground__PlayExClassReleaseEffectPlayer_d__88_System_Collections_IEnumerator_Reset__);
  sub_1C3E68C(v3, v4);
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
  if ( (byte_4C5A753 & 1) == 0 )
  {
    sub_1C3E564(&EventDelegate_Callback_TypeInfo);
    sub_1C3E564(&Method_ClassBoardBackground___c__PlayGrandReturnTransitionAnimationFromTween_b__79_0__);
    sub_1C3E564(&ClassBoardBackground___c_TypeInfo);
    this = (ClassBoardBackground__PlayGrandReturnTransitionAnimationFromTween_d__79_o *)sub_1C3E564(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4C5A753 = 1;
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
      _9__79_0 = (EventDelegate_Callback_o *)sub_1C3E7B0(EventDelegate_Callback_TypeInfo);
      EventDelegate_Callback___ctor(
        _9__79_0,
        v15,
        Method_ClassBoardBackground___c__PlayGrandReturnTransitionAnimationFromTween_b__79_0__,
        0);
      static_fields = ClassBoardBackground___c_TypeInfo->static_fields;
      static_fields->__9__79_0 = _9__79_0;
      sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__79_0, (int32_t)_9__79_0, v17, v18);
    }
    UITweener__SetOnFinished(v12, _9__79_0, 0);
  }
  else if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    if ( _4__this )
    {
      classScoreTweenStartDelay = _4__this->fields.classScoreTweenStartDelay;
      v6 = (UnityEngine_WaitForSeconds_o *)sub_1C3E7B0(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v6, classScoreTweenStartDelay, 0);
      v2->fields.__2__current = (Il2CppObject *)v6;
      p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
      sub_1C3E508(p__2__current, (int32_t)v6, v8, v9);
      result = 1;
      LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
      return result;
    }
LABEL_19:
    sub_1C3E7C0(this, method);
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

  v2 = sub_1C3E578(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3E7B0(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3E578(&Method_ClassBoardBackground__PlayGrandReturnTransitionAnimationFromTween_d__79_System_Collections_IEnumerator_Reset__);
  sub_1C3E68C(v3, v4);
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

  if ( (byte_4C5A754 & 1) == 0 )
  {
    sub_1C3E564(&SimpleAnimation_State_TypeInfo);
    byte_4C5A754 = 1;
  }
  if ( this->fields.__1__state > 1u )
    return 0;
  anim = this->fields.anim;
  this->fields.__1__state = -1;
  if ( !anim )
    sub_1C3E7C0(0, method);
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
    v9 = sub_1C8ED7C(State, SimpleAnimation_State_TypeInfo, 5);
  }
  if ( (*(float (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v9)(v6, *(_QWORD *)(v9 + 8)) >= 1.0 )
  {
LABEL_13:
    ActionExtensions__Call(this->fields.endCallback, 0);
    return 0;
  }
  this->fields.__2__current = 0;
  p__2__current = &this->fields.__2__current;
  sub_1C3E508((CGThumbnailListItem_o *)p__2__current, 0, v10, v11);
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

  v2 = sub_1C3E578(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3E7B0(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3E578(&Method_ClassBoardBackground__WaitAnimationFinished_d__93_System_Collections_IEnumerator_Reset__);
  sub_1C3E68C(v3, v4);
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

  if ( (byte_4C5A74C & 1) == 0 )
  {
    sub_1C3E564(&ClassBoardBackground___c_TypeInfo);
    byte_4C5A74C = 1;
  }
  v1 = (Il2CppObject *)sub_1C3E7B0(ClassBoardBackground___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ClassBoardBackground___c_TypeInfo->static_fields->__9 = (struct ClassBoardBackground___c_o *)v1;
  sub_1C3E508((CGThumbnailListItem_o *)ClassBoardBackground___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C3E7C0(this, a);
  return a->fields.classId - b->fields.classId;
}


void ClassBoardBackground___c___InitGrandClassReleasedEffect_b__83_0(
        ClassBoardBackground___c_o *this,
        ClassBoardBackground_ExClassIconSet_o *x,
        const MethodInfo *method)
{
  UnityEngine_Object_o *releaseEffect; // x20

  if ( (byte_4C5A74D & 1) == 0 )
  {
    this = (ClassBoardBackground___c_o *)sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5A74D = 1;
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
    sub_1C3E7C0(this, x);
  }
}


void ClassBoardBackground___c___OnDestroy_b__85_0(
        ClassBoardBackground___c_o *this,
        UnityEngine_Renderer_o *x,
        const MethodInfo *method)
{
  UnityEngine_Object_o *material; // x19

  if ( (byte_4C5A74E & 1) == 0 )
  {
    this = (ClassBoardBackground___c_o *)sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5A74E = 1;
  }
  if ( !x )
    sub_1C3E7C0(this, x);
  material = (UnityEngine_Object_o *)UnityEngine_Renderer__get_material(x, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71341564(material, 0);
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
    sub_1C3E7C0(this, 0);
  UnityEngine_GameObject__SetActive(x, 0, 0);
}


void ClassBoardBackground___c___SetGrandClassIcon_b__81_3(
        ClassBoardBackground___c_o *this,
        UnityEngine_GameObject_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
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
  if ( (byte_4C5A74F & 1) == 0 )
  {
    sub_1C3E564(&int_TypeInfo);
    this = (ClassBoardBackground___c__DisplayClass80_0_o *)sub_1C3E564(&StringLiteral_4488/*"ClassIcon{0}"*/);
    byte_4C5A74F = 1;
  }
  if ( !x )
    sub_1C3E7C0(this, x);
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
    sub_1C3E7C0(this, x);
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
    sub_1C3E7C0(this, 0);
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
    sub_1C3E7C0(this, 0);
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
    sub_1C3E7C0(this, 0);
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
  if ( (byte_4C5A750 & 1) == 0 )
  {
    sub_1C3E564(&int_TypeInfo);
    this = (ClassBoardBackground___c__DisplayClass81_0_o *)sub_1C3E564(&StringLiteral_7147/*"GrandClassIcon{0}"*/);
    byte_4C5A750 = 1;
  }
  if ( !x )
    sub_1C3E7C0(this, x);
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)x, 0);
  iconId = v4->fields.iconId;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId, v6, v7, v8, v9, v10, v11);
  v13 = System_String__Format((System_String_o *)StringLiteral_7147/*"GrandClassIcon{0}"*/, v12, 0);
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
    sub_1C3E7C0(this, x);
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
    sub_1C3E7C0(this, 0);
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
    sub_1C3E7C0(this, 0);
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
    sub_1C3E7C0(this, 0);
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

  if ( (byte_4C5A751 & 1) == 0 )
  {
    sub_1C3E564(&ClassBoardUtility_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__get_Keys__);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToArray_int___);
    byte_4C5A751 = 1;
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
           (const MethodInfo_340C0FC *)Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__get_Keys__);
  v7 = System_Linq_Enumerable__ToArray_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
         (const MethodInfo_3139050 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
  ClassBoardUtility__SavePlayedGrandExClassReleaseEffect(v7, 0);
  v10 = this->fields.CS___8__locals1;
  if ( !v10
    || (anim = (struct SimpleAnimation_o *)v10->fields.__4__this) == 0
    || (*(_QWORD *)&anim[1].fields.m_Initialized = 0,
        sub_1C3E508((CGThumbnailListItem_o *)&anim[1].fields.m_Initialized, 0, v8, v9),
        (v11 = this->fields.CS___8__locals1) == 0) )
  {
LABEL_13:
    sub_1C3E7C0(anim, method);
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
    sub_1C3E7C0(0, method);
  SimpleAnimation__Stop(anim, 0);
}