void ClassBoardBackground___ctor(ClassBoardBackground_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1

  if ( (byte_4CB9D1B & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_16258/*"_MainTex"*/);
    byte_4CB9D1B = 1;
  }
  v5 = StringLiteral_16258/*"_MainTex"*/;
  this->fields.iconMaterialPropertyName = (struct System_String_o *)StringLiteral_16258/*"_MainTex"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.iconMaterialPropertyName, v5, v2, v3);
  *(_OWORD *)&this->fields.classScorePosXMax = xmmword_CED550;
  this->fields.classScoreTweenStartDelay = 1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ClassBoardBackground__ActivateEarthAccessories(ClassBoardBackground_o *this, bool value, const MethodInfo *method)
{
  UnityEngine_GameObject_o *earthAccessoriesObject; // x0

  earthAccessoriesObject = this->fields.earthAccessoriesObject;
  if ( !earthAccessoriesObject )
    sub_1C6BC60(0, value);
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

  if ( (byte_4CB9D06 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_ClassBoardBackground_PlayStartMainEffectPlayer__);
    sub_1C6BA08(&Method_ClassBoardBackground_SkipStartMainEffectPlayer__);
    sub_1C6BA08(&ClassBoardEffectPlayer_TypeInfo);
    byte_4CB9D06 = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_8;
  name = UnityEngine_Object__get_name(gameObject, 0);
  v6 = (ClassBoardEffectPlayer_o *)sub_1C6BC54(ClassBoardEffectPlayer_TypeInfo);
  ClassBoardEffectPlayer___ctor_48325268(v6, name, 0);
  this->fields.startMainEffectPlayer = v6;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.startMainEffectPlayer, (int32_t)v6, v7, v8);
  startMainEffectPlayer = this->fields.startMainEffectPlayer;
  v10 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_ClassBoardBackground_PlayStartMainEffectPlayer__, 0);
  if ( !startMainEffectPlayer )
    goto LABEL_8;
  startMainEffectPlayer->fields.playCallback = v10;
  sub_1C6B9AC((CGThumbnailListItem_o *)&startMainEffectPlayer->fields.playCallback, (int32_t)v10, v11, v12);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_8;
  v13 = UnityEngine_Object__get_name(gameObject, 0);
  v14 = (ClassBoardEffectPlayer_o *)sub_1C6BC54(ClassBoardEffectPlayer_TypeInfo);
  ClassBoardEffectPlayer___ctor_48325268(v14, v13, 0);
  this->fields.skipMainEffectPlayer = v14;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.skipMainEffectPlayer, (int32_t)v14, v15, v16);
  skipMainEffectPlayer = this->fields.skipMainEffectPlayer;
  v18 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v18, (Il2CppObject *)this, Method_ClassBoardBackground_SkipStartMainEffectPlayer__, 0);
  if ( !skipMainEffectPlayer )
LABEL_8:
    sub_1C6BC60(gameObject, v4);
  skipMainEffectPlayer->fields.playCallback = v18;
  sub_1C6B9AC((CGThumbnailListItem_o *)&skipMainEffectPlayer->fields.playCallback, (int32_t)v18, v19, v20);
}


void ClassBoardBackground__CallAnimationEventBoardParent(ClassBoardBackground_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *boardParentAnimation; // x20
  UnityEngine_Object_o *boardParentAnimationClip; // x20
  __int64 v5; // x1
  UnityEngine_Object_o *name; // x0
  SimpleAnimation_o *v7; // x19

  if ( (byte_4CB9D1A & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB9D1A = 1;
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
        sub_1C6BC60(name, v5);
      }
      SimpleAnimation__Play_66911856(v7, (System_String_o *)name, 0);
    }
  }
}


void ClassBoardBackground__CallAnimationEventShowBoard(ClassBoardBackground_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  ActionExtensions__Call(this->fields.showBoardCallback, 0);
  this->fields.showBoardCallback = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.showBoardCallback, 0, v3, v4);
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

  if ( (byte_4CB9D07 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB9D07 = 1;
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
    sub_1C6BC60(classBoardViewCamera, camera);
  }
  UnityEngine_GameObject__SetActive(v9, (unsigned __int8)classBoardViewCamera & 1, 0);
  this->fields.currentCamera = camera;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.currentCamera, (int32_t)camera, v10, v11);
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
  if ( (byte_4CB9D18 & 1) == 0 )
  {
    this = (ClassBoardBackground_o *)sub_1C6BA08(&SimpleAnimation_State_TypeInfo);
    byte_4CB9D18 = 1;
  }
  if ( !anim )
    goto LABEL_14;
  SimpleAnimation__Rewind(anim, 0);
  SimpleAnimation__Play_66911856(anim, name, 0);
  this = (ClassBoardBackground_o *)SimpleAnimation__get_Item(anim, name, 0);
  v12 = this;
  LODWORD(v6) = 1.0;
  if ( isPlaySpecifiedPoint )
    *(float *)&v6 = v11->fields.directlyGrandAnimationStartPoint;
  if ( !this )
LABEL_14:
    sub_1C6BC60(this, anim);
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
    v16 = sub_1C41D90(this, SimpleAnimation_State_TypeInfo, 6);
  }
  v17 = (ClassBoardBackground_o *)(*(__int64 (__fastcall **)(ClassBoardBackground_o *, _QWORD, long double))v16)(
                                    v12,
                                    *(_QWORD *)(v16 + 8),
                                    v6);
  v19 = ClassBoardBackground__WaitAnimationFinished(v17, anim, name, endCallback, v18);
  UnityEngine_MonoBehaviour__StartCoroutine_71644868((UnityEngine_MonoBehaviour_o *)v11, v19, 0);
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

  if ( (byte_4CB9D0F & 1) == 0 )
  {
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    sub_1C6BA08(&System_Comparison_ClassBoardClassEntity__TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMaster_ClassBoardClassMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__bool__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
    sub_1C6BA08(&System_Collections_Generic_Dictionary_int__bool__TypeInfo);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ClassBoardClassEntity__Sort__);
    sub_1C6BA08(&Method_ClassBoardBackground___c__GetIconIdList_b__82_0__);
    sub_1C6BA08(&ClassBoardBackground___c_TypeInfo);
    byte_4CB9D0F = 1;
  }
  entitys = 0;
  memset(&v31, 0, sizeof(v31));
  entity = 0;
  v6 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v6,
    (const MethodInfo_34432BC *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
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
      v10 = (System_Comparison_T__o *)sub_1C6BC54(System_Comparison_ClassBoardClassEntity__TypeInfo);
      System_Comparison_object____ctor(v10, v11, Method_ClassBoardBackground___c__GetIconIdList_b__82_0__, 0);
      static_fields = ClassBoardBackground___c_TypeInfo->static_fields;
      static_fields->__9__82_0 = (struct System_Comparison_ClassBoardClassEntity__o *)v10;
      sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__82_0, (int32_t)v10, v13, v14);
    }
    if ( v9 )
    {
      System_Collections_Generic_List_object___Sort_58729528(
        v9,
        v10,
        (const MethodInfo_3802438 *)Method_System_Collections_Generic_List_ClassBoardClassEntity__Sort__);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v15 = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ServantClassMaster___);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ServantClassMaster___);
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
              (const MethodInfo_380146C *)Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__);
            v31 = v29;
            while ( 1 )
            {
              while ( 1 )
              {
                v18 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                        &v31,
                        (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__);
                if ( !v18 )
                {
                  System_Collections_Generic_List_Enumerator_object___Dispose(
                    &v31,
                    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__);
                  return v6;
                }
                current = (ClassBoardClassEntity_o *)v31.fields._current;
                if ( !isGrand )
                  break;
                if ( !v31.fields._current )
                  sub_1C6BC60(v18, v19);
                if ( !System_Linq_Enumerable__Contains_int_(
                        v16,
                        HIDWORD(v31.fields._current[1].klass),
                        (const MethodInfo_31583F4 *)Method_System_Linq_Enumerable_Contains_int___)
                  || v17 == current->fields.classId )
                {
                  goto LABEL_33;
                }
              }
              v21 = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              if ( !current )
                sub_1C6BC60(v21, v19);
              if ( System_Linq_Enumerable__Contains_int_(
                     (System_Collections_Generic_IEnumerable_TSource__o *)BalanceConfig_TypeInfo->static_fields->PlayableBeastClassIds,
                     current->fields.classId,
                     (const MethodInfo_31583F4 *)Method_System_Linq_Enumerable_Contains_int___) )
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
                      (const MethodInfo_33F9128 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
              if ( v23 )
              {
                if ( !entity )
                  sub_1C6BC60(v23, v24);
                monitor_high = HIDWORD(entity[2].monitor);
                IsOpen = ClassBoardClassEntity__IsOpen(current, 0);
                if ( !v6 )
                  sub_1C6BC60(IsOpen, v27);
                System_Collections_Generic_Dictionary_int__bool___Add(
                  v6,
                  monitor_high,
                  IsOpen,
                  (const MethodInfo_3443C94 *)Method_System_Collections_Generic_Dictionary_int__bool__Add__);
              }
            }
          }
        }
      }
    }
LABEL_43:
    sub_1C6BC60(Master_object, v8);
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
    sub_1C6BC60(0, method);
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
  if ( (byte_4CB9D10 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_ClassBoardBackground_ExClassIconSet__TypeInfo);
    sub_1C6BA08(&Method_BasicHelper_ForEach_ClassBoardBackground_ExClassIconSet___);
    sub_1C6BA08(&Method_ClassBoardBackground___c__InitGrandClassReleasedEffect_b__83_0__);
    this = (ClassBoardBackground_o *)sub_1C6BA08(&ClassBoardBackground___c_TypeInfo);
    byte_4CB9D10 = 1;
  }
  grandExIconSet = (System_Collections_Generic_IEnumerable_T__o *)v2->fields.grandExIconSet;
  if ( !grandExIconSet )
    sub_1C6BC60(this, method);
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
      _9__83_0 = (System_Action_object__o *)sub_1C6BC54(System_Action_ClassBoardBackground_ExClassIconSet__TypeInfo);
      System_Action_object____ctor(
        _9__83_0,
        v6,
        Method_ClassBoardBackground___c__InitGrandClassReleasedEffect_b__83_0__,
        0);
      static_fields = ClassBoardBackground___c_TypeInfo->static_fields;
      static_fields->__9__83_0 = (struct System_Action_ClassBoardBackground_ExClassIconSet__o *)_9__83_0;
      sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__83_0, (int32_t)_9__83_0, v8, v9);
    }
    BasicHelper__ForEach_object_(
      grandExIconSet,
      (System_Action_T__o *)_9__83_0,
      (const MethodInfo_3127050 *)Method_BasicHelper_ForEach_ClassBoardBackground_ExClassIconSet___);
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

  if ( (byte_4CB9D12 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_Renderer__TypeInfo);
    sub_1C6BA08(&Method_BasicHelper_ForEach_Renderer___);
    sub_1C6BA08(&Method_ClassBoardBackground___c__OnDestroy_b__85_0__);
    sub_1C6BA08(&ClassBoardBackground___c_TypeInfo);
    byte_4CB9D12 = 1;
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
    _9__85_0 = (System_Action_object__o *)sub_1C6BC54(System_Action_Renderer__TypeInfo);
    System_Action_object____ctor(_9__85_0, v6, Method_ClassBoardBackground___c__OnDestroy_b__85_0__, 0);
    static_fields = ClassBoardBackground___c_TypeInfo->static_fields;
    static_fields->__9__85_0 = (struct System_Action_Renderer__o *)_9__85_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__85_0, (int32_t)_9__85_0, v8, v9);
  }
  BasicHelper__ForEach_object_(
    iconRenderers,
    (System_Action_T__o *)_9__85_0,
    (const MethodInfo_3127050 *)Method_BasicHelper_ForEach_Renderer___);
}


void ClassBoardBackground__PlayBoardParentBeforeAnimation(ClassBoardBackground_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *boardParentAnimation; // x20
  UnityEngine_Object_o *boardParentBeforeAnimationClip; // x20
  __int64 v5; // x1
  SimpleAnimation_o *v6; // x0

  if ( (byte_4CB9D11 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB9D11 = 1;
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
        sub_1C6BC60(v6, v5);
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

  if ( (byte_4CB9D15 & 1) == 0 )
  {
    sub_1C6BA08(&ClassBoardBackground__PlayExClassReleaseEffectPlayer_d__88_TypeInfo);
    byte_4CB9D15 = 1;
  }
  v3 = sub_1C6BC54(ClassBoardBackground__PlayExClassReleaseEffectPlayer_d__88_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
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

  if ( (byte_4CB9D0B & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&SimpleAnimation_State_TypeInfo);
    sub_1C6BA08(&StringLiteral_7147/*"GrandReturn"*/);
    byte_4CB9D0B = 1;
  }
  this->fields.boardRootAnimation = classBoardAnimation;
  sub_1C6B9AC(
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
    SimpleAnimation__Play_66911856(v21, (System_String_o *)name, 0);
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
      v27 = sub_1C41D90(name, SimpleAnimation_State_TypeInfo, 6);
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
      sub_1C6BC60(name, v16);
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
      v33 = sub_1C41D90(name, SimpleAnimation_State_TypeInfo, 8);
    }
    (*(void (__fastcall **)(UnityEngine_Object_o *, _QWORD, float))v33)(v30, *(_QWORD *)(v33 + 8), 1.0);
  }
  this->fields.grandRootAnimation = grandBoardAnimation;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.grandRootAnimation, (int32_t)grandBoardAnimation, v13, v14);
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
  SimpleAnimation__Play_66911856(v40, (System_String_o *)name, 0);
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
    v46 = sub_1C41D90(name, SimpleAnimation_State_TypeInfo, 6);
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
    v52 = sub_1C41D90(name, SimpleAnimation_State_TypeInfo, 8);
  }
  (*(void (__fastcall **)(UnityEngine_Object_o *, _QWORD, float))v52)(v49, *(_QWORD *)(v52 + 8), 1.0);
LABEL_75:
  v53 = isQuick;
  ClassBoardBackground__PlaySimpleAnimation(
    this,
    this->fields.mainAnimation,
    (System_String_o *)StringLiteral_7147/*"GrandReturn"*/,
    endCallback,
    v53,
    0,
    v35);
  v55 = ClassBoardBackground__PlayGrandReturnTransitionAnimationFromTween(this, v53, v54);
  UnityEngine_MonoBehaviour__StartCoroutine_71644868((UnityEngine_MonoBehaviour_o *)this, v55, 0);
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

  if ( (byte_4CB9D0C & 1) == 0 )
  {
    sub_1C6BA08(&ClassBoardBackground__PlayGrandReturnTransitionAnimationFromTween_d__79_TypeInfo);
    byte_4CB9D0C = 1;
  }
  v5 = isQuick;
  v6 = sub_1C6BC54(ClassBoardBackground__PlayGrandReturnTransitionAnimationFromTween_d__79_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  *(_DWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 32) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v6 + 32), (int32_t)this, v7, v8);
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

  if ( (byte_4CB9D09 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&SimpleAnimation_State_TypeInfo);
    sub_1C6BA08(&StringLiteral_7159/*"GrandStart"*/);
    byte_4CB9D09 = 1;
  }
  this->fields.boardRootAnimation = classBoardAnimation;
  sub_1C6B9AC(
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
    SimpleAnimation__Play_66911856(v20, (System_String_o *)name, 0);
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
      v26 = sub_1C41D90(name, SimpleAnimation_State_TypeInfo, 6);
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
      sub_1C6BC60(name, v15);
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
      v32 = sub_1C41D90(name, SimpleAnimation_State_TypeInfo, 8);
    }
    (*(void (__fastcall **)(UnityEngine_Object_o *, _QWORD, float))v32)(v29, *(_QWORD *)(v32 + 8), 1.0);
  }
  ClassBoardBackground__PlayGrandTransitionAnimationFromTween(this, isQuick, v13);
  this->fields.grandRootAnimation = grandBoardAnimation;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.grandRootAnimation, (int32_t)grandBoardAnimation, v33, v34);
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
  SimpleAnimation__Play_66911856(v41, (System_String_o *)name, 0);
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
    v47 = sub_1C41D90(name, SimpleAnimation_State_TypeInfo, 6);
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
    v53 = sub_1C41D90(name, SimpleAnimation_State_TypeInfo, 8);
  }
  (*(void (__fastcall **)(UnityEngine_Object_o *, _QWORD, float))v53)(v50, *(_QWORD *)(v53 + 8), 1.0);
LABEL_73:
  ClassBoardBackground__PlaySimpleAnimation(
    this,
    this->fields.mainAnimation,
    (System_String_o *)StringLiteral_7159/*"GrandStart"*/,
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

  if ( (byte_4CB9D0A & 1) == 0 )
  {
    sub_1C6BA08(&EventDelegate_Callback_TypeInfo);
    sub_1C6BA08(&Method_ClassBoardBackground___c__PlayGrandTransitionAnimationFromTween_b__77_0__);
    sub_1C6BA08(&ClassBoardBackground___c_TypeInfo);
    byte_4CB9D0A = 1;
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
    sub_1C6BC60(0, v13);
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
    _9__77_0 = (EventDelegate_Callback_o *)sub_1C6BC54(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(
      _9__77_0,
      v17,
      Method_ClassBoardBackground___c__PlayGrandTransitionAnimationFromTween_b__77_0__,
      0);
    static_fields = ClassBoardBackground___c_TypeInfo->static_fields;
    static_fields->__9__77_0 = _9__77_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__77_0, (int32_t)_9__77_0, v19, v20);
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
      sub_1C6BC60(this, 0);
    SimpleAnimation__Rewind(anim, 0);
    v11 = SimpleAnimation__Play_66911856(anim, name, 0);
    v13 = ClassBoardBackground__WaitAnimationFinished((ClassBoardBackground_o *)v11, anim, name, endCallback, v12);
    UnityEngine_MonoBehaviour__StartCoroutine_71644868((UnityEngine_MonoBehaviour_o *)this, v13, 0);
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

  if ( (byte_4CB9D16 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_ClassBoardBackground__PlayStartExClassReleaseEffectPlayer_b__89_0__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_KeyValuePair_int__SimpleAnimation__get_Key__);
    sub_1C6BA08(&Method_System_Collections_Generic_KeyValuePair_int__SimpleAnimation__get_Value__);
    sub_1C6BA08(&Method_ClassBoardBackground___c__PlayStartExClassReleaseEffectPlayer_b__89_1__);
    sub_1C6BA08(&ClassBoardBackground___c_TypeInfo);
    sub_1C6BA08(&StringLiteral_10559/*"Particle_CrassIcon_Ex_Released"*/);
    byte_4CB9D16 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.exClassReleaseEffectAnimationDic, 0) )
  {
    exClassReleaseEffectAnimationDic = this->fields.exClassReleaseEffectAnimationDic;
    if ( !exClassReleaseEffectAnimationDic )
      sub_1C6BC60(0, v3);
    System_Collections_Generic_Dictionary_int__object___GetEnumerator(
      &v17,
      (System_Collections_Generic_Dictionary_int__object__o *)exClassReleaseEffectAnimationDic,
      (const MethodInfo_3452928 *)Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__GetEnumerator__);
    v18 = v17;
    v5 = 1;
    while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
              &v18,
              (const MethodInfo_35AA310 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__MoveNext__) )
    {
      value = v18.fields._current.fields.value;
      if ( (v5 & 1) != 0 )
      {
        v8 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
        System_Action___ctor(
          v8,
          (Il2CppObject *)this,
          Method_ClassBoardBackground__PlayStartExClassReleaseEffectPlayer_b__89_0__,
          0);
        ClassBoardBackground__PlaySimpleAnimation(
          this,
          (SimpleAnimation_o *)value,
          (System_String_o *)StringLiteral_10559/*"Particle_CrassIcon_Ex_Released"*/,
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
        v11 = (System_String_o *)StringLiteral_10559/*"Particle_CrassIcon_Ex_Released"*/;
        _9__89_1 = v10->static_fields->__9__89_1;
        if ( !_9__89_1 )
        {
          if ( !v10->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v10);
            v10 = ClassBoardBackground___c_TypeInfo;
          }
          v13 = (Il2CppObject *)v10->static_fields->__9;
          _9__89_1 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
          System_Action___ctor(
            _9__89_1,
            v13,
            Method_ClassBoardBackground___c__PlayStartExClassReleaseEffectPlayer_b__89_1__,
            0);
          static_fields = ClassBoardBackground___c_TypeInfo->static_fields;
          static_fields->__9__89_1 = _9__89_1;
          sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__89_1, (int32_t)_9__89_1, v15, v16);
        }
        ClassBoardBackground__PlaySimpleAnimation(this, (SimpleAnimation_o *)value, v11, _9__89_1, 0, 0, v6);
        v5 = 0;
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
      &v18,
      (const MethodInfo_35AA434 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__Dispose__);
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

  if ( (byte_4CB9D17 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_KeyValuePair_int__SimpleAnimation__get_Key__);
    sub_1C6BA08(&Method_System_Collections_Generic_KeyValuePair_int__SimpleAnimation__get_Value__);
    sub_1C6BA08(&ClassBoardBackground___c__DisplayClass90_0_TypeInfo);
    sub_1C6BA08(&Method_ClassBoardBackground___c__DisplayClass90_1__PlayStartGrandExClassReleaseEffectPlayer_b__0__);
    sub_1C6BA08(&Method_ClassBoardBackground___c__DisplayClass90_1__PlayStartGrandExClassReleaseEffectPlayer_b__1__);
    sub_1C6BA08(&ClassBoardBackground___c__DisplayClass90_1_TypeInfo);
    sub_1C6BA08(&StringLiteral_10560/*"Particle_GrandCrassIcon_Ex_Released"*/);
    sub_1C6BA08(&StringLiteral_10559/*"Particle_CrassIcon_Ex_Released"*/);
    byte_4CB9D17 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  v5 = sub_1C6BC54(ClassBoardBackground___c__DisplayClass90_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_16;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = callback;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 24), (int32_t)callback, v10, v11);
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
    sub_1C6BC60(grandExClassReleaseEffectAnimationDic, v7);
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v25,
    (System_Collections_Generic_Dictionary_int__object__o *)grandExClassReleaseEffectAnimationDic,
    (const MethodInfo_3452928 *)Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__GetEnumerator__);
  v26 = v25;
  v12 = 1;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v26,
            (const MethodInfo_35AA310 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__MoveNext__) )
  {
    value = v26.fields._current.fields.value;
    v14 = sub_1C6BC54(ClassBoardBackground___c__DisplayClass90_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v14, 0);
    if ( !v14 )
      sub_1C6BC60(v15, v16);
    *(_QWORD *)(v14 + 24) = v5;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v14 + 24), v5, v17, v18);
    *(_QWORD *)(v14 + 16) = value;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v14 + 16), (int32_t)value, v19, v20);
    v21 = *(SimpleAnimation_o **)(v14 + 16);
    v22 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    if ( (v12 & 1) != 0 )
    {
      System_Action___ctor(
        v22,
        (Il2CppObject *)v14,
        Method_ClassBoardBackground___c__DisplayClass90_1__PlayStartGrandExClassReleaseEffectPlayer_b__0__,
        0);
      ClassBoardBackground__PlaySimpleAnimation(this, v21, (System_String_o *)StringLiteral_10560/*"Particle_GrandCrassIcon_Ex_Released"*/, v22, 0, 0, v23);
    }
    else
    {
      System_Action___ctor(
        v22,
        (Il2CppObject *)v14,
        Method_ClassBoardBackground___c__DisplayClass90_1__PlayStartGrandExClassReleaseEffectPlayer_b__1__,
        0);
      ClassBoardBackground__PlaySimpleAnimation(this, v21, (System_String_o *)StringLiteral_10559/*"Particle_CrassIcon_Ex_Released"*/, v22, 0, 0, v24);
    }
    v12 = 0;
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v26,
    (const MethodInfo_35AA434 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__Dispose__);
}


void ClassBoardBackground__PlayStartMainEffectPlayer(ClassBoardBackground_o *this, const MethodInfo *method)
{
  ClassBoardEffectPlayer_o *startMainEffectPlayer; // x0
  int32_t Data_int; // w20
  Il2CppObject *v5; // x0
  System_String_o *v6; // x20
  Il2CppObject *v7; // x0
  const MethodInfo *v8; // x1
  System_Collections_IEnumerator_o *v9; // x0
  SimpleAnimation_o *mainAnimation; // x21
  System_Action_o *v11; // x22
  const MethodInfo *v12; // x6
  int32_t v13; // [xsp+8h] [xbp-38h] BYREF
  int32_t v14; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CB9D13 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_ClassBoardBackground__PlayStartMainEffectPlayer_b__86_0__);
    sub_1C6BA08(&Method_ClassBoardEffectPlayer_GetData_int___);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&StringLiteral_8872/*"MainTransition{0}_Release"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    sub_1C6BA08(&StringLiteral_8871/*"MainTransition{0}"*/);
    byte_4CB9D13 = 1;
  }
  startMainEffectPlayer = this->fields.startMainEffectPlayer;
  if ( !startMainEffectPlayer )
    sub_1C6BC60(0, method);
  Data_int = ClassBoardEffectPlayer__GetData_int_(
               startMainEffectPlayer,
               (const MethodInfo_312EAAC *)Method_ClassBoardEffectPlayer_GetData_int___);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.exClassReleaseEffectAnimationDic, 0) )
  {
    v13 = Data_int;
    v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13);
    v6 = System_String__Format((System_String_o *)StringLiteral_8871/*"MainTransition{0}"*/, v5, 0);
  }
  else
  {
    v14 = Data_int;
    v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14);
    v6 = System_String__Format((System_String_o *)StringLiteral_8872/*"MainTransition{0}_Release"*/, v7, 0);
    v9 = ClassBoardBackground__PlayExClassReleaseEffectPlayer(this, v8);
    UnityEngine_MonoBehaviour__StartCoroutine_71644868((UnityEngine_MonoBehaviour_o *)this, v9, 0);
  }
  mainAnimation = this->fields.mainAnimation;
  v11 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_ClassBoardBackground__PlayStartMainEffectPlayer_b__86_0__, 0);
  ClassBoardBackground__PlaySimpleAnimation(this, mainAnimation, v6, v11, 0, 0, v12);
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

  if ( (byte_4CB9D08 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&SimpleAnimation_State_TypeInfo);
    byte_4CB9D08 = 1;
  }
  this->fields.boardParentAnimation = animation;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.boardParentAnimation, (int32_t)animation, isQuick, method);
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
  SimpleAnimation__Play_66911856(v18, (System_String_o *)name, 0);
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
    sub_1C6BC60(name, v9);
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
    v24 = sub_1C41D90(name, SimpleAnimation_State_TypeInfo, 6);
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
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.boardRoot, (int32_t)boardRootObj, (int32_t)method, v3);
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
  Il2CppObject *v26; // x1
  System_String_o *v27; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  Il2CppObject *v30; // x1
  System_String_o *v31; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  Il2CppObject *v34; // x1
  System_String_o *v35; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  _BOOL8 v38; // x0
  __int64 v39; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v40; // x8
  unsigned int v41; // w19
  System_Func_object__bool__o **v42; // x22
  System_Func_object__bool__o **v43; // x24
  System_Func_object__bool__o **v44; // x25
  unsigned int v45; // w9
  ClassBoardBackground_ExClassIconSet_o *v46; // x8
  System_Func_object__bool__o *v47; // x23
  System_Collections_Generic_IEnumerable_TSource__o *textures; // x27
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  Il2CppObject *v51; // x0
  System_Func_object__bool__o *v52; // x26
  UnityEngine_Object_o *v53; // x23
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  Il2CppObject *v56; // x0
  System_Func_object__bool__o *v57; // x28
  UnityEngine_Object_o *v58; // x26
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  Il2CppObject *v61; // x27
  struct ClassBoardBackground_ExClassIconSet_array *v62; // x8
  ClassBoardBackground_ExClassIconSet_o *v63; // x8
  UnityEngine_Renderer_o *v64; // x0
  UnityEngine_Material_o *material; // x0
  __int64 v66; // x1
  __int64 v67; // x0
  __int64 v68; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v69; // x8
  ClassBoardBackground_ExClassIconSet_o *v70; // x8
  UnityEngine_Renderer_o *effectRenderer; // x0
  UnityEngine_Material_o *v72; // x0
  __int64 v73; // x1
  __int64 v74; // x0
  __int64 v75; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v76; // x8
  ClassBoardBackground_ExClassIconSet_o *v77; // x8
  UnityEngine_Renderer_o *onRenderer; // x0
  UnityEngine_Material_o *v79; // x0
  __int64 v80; // x1
  __int64 v81; // x0
  __int64 v82; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v83; // x8
  ClassBoardBackground_ExClassIconSet_o *v84; // x8
  UnityEngine_Renderer_o *effectGlowRenderer; // x0
  UnityEngine_Material_o *v86; // x0
  __int64 v87; // x1
  __int64 v88; // x0
  __int64 v89; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v90; // x8
  ClassBoardBackground_ExClassIconSet_o *v91; // x8
  UnityEngine_Component_o *v92; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v94; // x1
  __int64 v95; // x0
  __int64 v96; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v97; // x8
  ClassBoardBackground_ExClassIconSet_o *v98; // x8
  UnityEngine_Component_o *v99; // x0
  UnityEngine_GameObject_o *v100; // x0
  __int64 v101; // x1
  __int64 v102; // x0
  __int64 v103; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v104; // x8
  ClassBoardBackground_ExClassIconSet_o *v105; // x8
  UnityEngine_GameObject_o *releaseEffect; // x0
  UnityEngine_GameObject_o *v107; // x0
  __int64 v108; // x1
  _BOOL8 IsPlayed; // x0
  __int64 v110; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v111; // x8
  ClassBoardBackground_ExClassIconSet_o *v112; // x8
  UnityEngine_Object_o *animation; // x21
  _BOOL8 v114; // x0
  __int64 v115; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v116; // x8
  ClassBoardBackground_ExClassIconSet_o *v117; // x8
  UnityEngine_Component_o *v118; // x0
  UnityEngine_GameObject_o *v119; // x0
  __int64 v120; // x1
  __int64 v121; // x0
  __int64 v122; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v123; // x8
  ClassBoardBackground_ExClassIconSet_o *v124; // x8
  UnityEngine_Component_o *v125; // x0
  UnityEngine_GameObject_o *v126; // x0
  __int64 v127; // x1
  __int64 v128; // x0
  __int64 v129; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v130; // x8
  ClassBoardBackground_ExClassIconSet_o *v131; // x8
  struct System_Collections_Generic_Dictionary_int__SimpleAnimation__o *exClassReleaseEffectAnimationDic; // x0
  int max_length; // w8
  unsigned int v134; // w20
  ClassBoardBackground_ExClassIconSet_o *v135; // x21
  __int64 v136; // [xsp+0h] [xbp-C0h]
  int32_t classId[2]; // [xsp+8h] [xbp-B8h]
  int v139; // [xsp+18h] [xbp-A8h] BYREF
  int v140; // [xsp+1Ch] [xbp-A4h] BYREF
  _OWORD v141[2]; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v142; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4CB9D0D & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_Renderer__TypeInfo);
    sub_1C6BA08(&Method_BasicHelper_ForEach_Renderer___);
    sub_1C6BA08(&ClassBoardUtility_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__SimpleAnimation___ctor__);
    sub_1C6BA08(&System_Collections_Generic_Dictionary_int__SimpleAnimation__TypeInfo);
    sub_1C6BA08(&Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__get_Current__);
    sub_1C6BA08(&System_Func_Texture__bool__TypeInfo);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Key__);
    sub_1C6BA08(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Value__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_ClassBoardBackground___c__DisplayClass80_0__SetClassIcon_b__0__);
    sub_1C6BA08(&Method_ClassBoardBackground___c__DisplayClass80_0__SetClassIcon_b__1__);
    sub_1C6BA08(&ClassBoardBackground___c__DisplayClass80_0_TypeInfo);
    sub_1C6BA08(&Method_ClassBoardBackground___c__DisplayClass80_1__SetClassIcon_b__2__);
    sub_1C6BA08(&Method_ClassBoardBackground___c__DisplayClass80_1__SetClassIcon_b__3__);
    sub_1C6BA08(&Method_ClassBoardBackground___c__DisplayClass80_1__SetClassIcon_b__4__);
    sub_1C6BA08(&ClassBoardBackground___c__DisplayClass80_1_TypeInfo);
    sub_1C6BA08(&StringLiteral_4475/*"ClassIconEx_off_{0}"*/);
    sub_1C6BA08(&StringLiteral_4476/*"ClassIconEx_on_{0}"*/);
    sub_1C6BA08(&StringLiteral_4474/*"ClassIconEx_ef_glow_{0}"*/);
    byte_4CB9D0D = 1;
  }
  memset(&v142, 0, 32);
  v6 = sub_1C6BC54(ClassBoardBackground___c__DisplayClass80_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  if ( !v6 )
    goto LABEL_162;
  *(_DWORD *)(v6 + 16) = iconId;
  *(_QWORD *)(v6 + 24) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v6 + 24), (int32_t)this, v9, v10);
  iconTextures = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.iconTextures;
  v12 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_Texture__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)v6,
    Method_ClassBoardBackground___c__DisplayClass80_0__SetClassIcon_b__0__,
    0);
  v13 = System_Linq_Enumerable__FirstOrDefault_object__51793644(
          iconTextures,
          (System_Func_TSource__bool__o *)v12,
          (const MethodInfo_3164EEC *)Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
  *(_QWORD *)(v6 + 32) = v13;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v6 + 32), (int32_t)v13, v14, v15);
  v16 = *(UnityEngine_Object_o **)(v6 + 32);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v16, 0, 0) )
    return;
  iconRenderers = (System_Collections_Generic_IEnumerable_T__o *)this->fields.iconRenderers;
  v18 = (System_Action_object__o *)sub_1C6BC54(System_Action_Renderer__TypeInfo);
  System_Action_object____ctor(
    v18,
    (Il2CppObject *)v6,
    Method_ClassBoardBackground___c__DisplayClass80_0__SetClassIcon_b__1__,
    0);
  BasicHelper__ForEach_object_(
    iconRenderers,
    (System_Action_T__o *)v18,
    (const MethodInfo_3127050 *)Method_BasicHelper_ForEach_Renderer___);
  v19 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_int__SimpleAnimation__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v19,
    (const MethodInfo_3451B1C *)Method_System_Collections_Generic_Dictionary_int__SimpleAnimation___ctor__);
  this->fields.exClassReleaseEffectAnimationDic = (struct System_Collections_Generic_Dictionary_int__SimpleAnimation__o *)v19;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.exClassReleaseEffectAnimationDic, (int32_t)v19, v20, v21);
  exIconSet = this->fields.exIconSet;
  if ( !exIconSet )
LABEL_162:
    sub_1C6BC60(offRenderer, v8);
  if ( !exIconSet->max_length )
    return;
  if ( (baseId & 0xFFFFFFFE) != 8 )
  {
    max_length = exIconSet->max_length;
    if ( max_length < 1 )
      return;
    v134 = 0;
    while ( 1 )
    {
      if ( v134 >= max_length )
        sub_1C6BC68(offRenderer);
      v135 = exIconSet->m_Items[v134];
      if ( !v135 )
        break;
      offRenderer = (UnityEngine_Component_o *)v135->fields.offRenderer;
      if ( !offRenderer )
        break;
      offRenderer = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(offRenderer, 0);
      if ( !offRenderer )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)offRenderer, 0, 0);
      offRenderer = (UnityEngine_Component_o *)v135->fields.onRenderer;
      if ( !offRenderer )
        break;
      offRenderer = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(offRenderer, 0);
      if ( !offRenderer )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)offRenderer, 0, 0);
      offRenderer = (UnityEngine_Component_o *)v135->fields.releaseEffect;
      if ( !offRenderer )
        break;
      offRenderer = (UnityEngine_Component_o *)UnityEngine_GameObject__get_gameObject(
                                                 (UnityEngine_GameObject_o *)offRenderer,
                                                 0);
      if ( !offRenderer )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)offRenderer, 0, 0);
      max_length = exIconSet->max_length;
      if ( (int)++v134 >= max_length )
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
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v141,
    (System_Collections_Generic_Dictionary_int__bool__o *)offRenderer,
    (const MethodInfo_3444080 *)Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
  *(_OWORD *)&v142.fields._dictionary = v141[0];
  v142.fields._current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v141[1];
LABEL_12:
  while ( System_Collections_Generic_Dictionary_Enumerator_int__bool___MoveNext(
            &v142,
            (const MethodInfo_35A7808 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__) )
  {
    key = v142.fields._current.fields.key;
    v25 = sub_1C6BC54(ClassBoardBackground___c__DisplayClass80_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v25, 0);
    LODWORD(v141[0]) = (_DWORD)key;
    v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v141);
    v27 = System_String__Format((System_String_o *)StringLiteral_4476/*"ClassIconEx_on_{0}"*/, v26, 0);
    if ( !v25 )
      sub_1C6BC60(v27, v27);
    *(_QWORD *)(v25 + 24) = v27;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v25 + 24), (int32_t)v27, v28, v29);
    v140 = (int)key;
    v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v140);
    v31 = System_String__Format((System_String_o *)StringLiteral_4475/*"ClassIconEx_off_{0}"*/, v30, 0);
    *(_QWORD *)(v25 + 16) = v31;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v25 + 16), (int32_t)v31, v32, v33);
    v139 = (int)key;
    v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v139);
    *(_QWORD *)classId = key;
    v35 = System_String__Format((System_String_o *)StringLiteral_4474/*"ClassIconEx_ef_glow_{0}"*/, v34, 0);
    *(_QWORD *)(v25 + 32) = v35;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v25 + 32), (int32_t)v35, v36, v37);
    v40 = this->fields.exIconSet;
    if ( !v40 )
LABEL_94:
      sub_1C6BC60(v38, v39);
    v41 = 0;
    v42 = (System_Func_object__bool__o **)(v25 + 40);
    v43 = (System_Func_object__bool__o **)(v25 + 48);
    v44 = (System_Func_object__bool__o **)(v25 + 56);
    v136 = *(_QWORD *)classId & 0xFF00000000LL;
    while ( 1 )
    {
      v45 = v40->max_length;
      if ( (int)v41 >= (int)v45 )
        break;
      if ( v41 >= v45 )
        sub_1C6BC68(v38);
      v46 = v40->m_Items[v41];
      if ( !v46 )
        sub_1C6BC60(v38, v39);
      v47 = *v42;
      textures = (System_Collections_Generic_IEnumerable_TSource__o *)v46->fields.textures;
      if ( !*v42 )
      {
        v47 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_Texture__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v47,
          (Il2CppObject *)v25,
          Method_ClassBoardBackground___c__DisplayClass80_1__SetClassIcon_b__2__,
          0);
        *v42 = v47;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v25 + 40), (int32_t)v47, v49, v50);
      }
      v51 = System_Linq_Enumerable__FirstOrDefault_object__51793644(
              textures,
              (System_Func_TSource__bool__o *)v47,
              (const MethodInfo_3164EEC *)Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
      v52 = *v43;
      v53 = (UnityEngine_Object_o *)v51;
      if ( !*v43 )
      {
        v52 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_Texture__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v52,
          (Il2CppObject *)v25,
          Method_ClassBoardBackground___c__DisplayClass80_1__SetClassIcon_b__3__,
          0);
        *v43 = v52;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v25 + 48), (int32_t)v52, v54, v55);
      }
      v56 = System_Linq_Enumerable__FirstOrDefault_object__51793644(
              textures,
              (System_Func_TSource__bool__o *)v52,
              (const MethodInfo_3164EEC *)Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
      v57 = *v44;
      v58 = (UnityEngine_Object_o *)v56;
      if ( !*v44 )
      {
        v57 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_Texture__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v57,
          (Il2CppObject *)v25,
          Method_ClassBoardBackground___c__DisplayClass80_1__SetClassIcon_b__4__,
          0);
        *v44 = v57;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v25 + 56), (int32_t)v57, v59, v60);
      }
      v61 = System_Linq_Enumerable__FirstOrDefault_object__51793644(
              textures,
              (System_Func_TSource__bool__o *)v57,
              (const MethodInfo_3164EEC *)Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v38 = UnityEngine_Object__op_Inequality(v58, 0, 0);
      if ( v38 )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v38 = UnityEngine_Object__op_Inequality(v53, 0, 0);
        if ( v38 )
        {
          v62 = this->fields.exIconSet;
          if ( !v62 )
            sub_1C6BC60(v38, v39);
          if ( v41 >= LODWORD(v62->max_length) )
            sub_1C6BC68(v38);
          v63 = v62->m_Items[v41];
          if ( !v63 )
            sub_1C6BC60(v38, v39);
          v64 = v63->fields.offRenderer;
          if ( !v64 )
            sub_1C6BC60(0, v39);
          material = UnityEngine_Renderer__get_material(v64, 0);
          if ( !material )
            sub_1C6BC60(0, v66);
          UnityEngine_Material__SetTexture(
            material,
            this->fields.iconMaterialPropertyName,
            (UnityEngine_Texture_o *)v53,
            0);
          v69 = this->fields.exIconSet;
          if ( !v69 )
            sub_1C6BC60(v67, v68);
          if ( v41 >= LODWORD(v69->max_length) )
            sub_1C6BC68(v67);
          v70 = v69->m_Items[v41];
          if ( !v70 )
            sub_1C6BC60(v67, v68);
          effectRenderer = v70->fields.effectRenderer;
          if ( !effectRenderer )
            sub_1C6BC60(0, v68);
          v72 = UnityEngine_Renderer__get_material(effectRenderer, 0);
          if ( !v72 )
            sub_1C6BC60(0, v73);
          UnityEngine_Material__SetTexture(v72, this->fields.iconMaterialPropertyName, (UnityEngine_Texture_o *)v53, 0);
          v76 = this->fields.exIconSet;
          if ( !v76 )
            sub_1C6BC60(v74, v75);
          if ( v41 >= LODWORD(v76->max_length) )
            sub_1C6BC68(v74);
          v77 = v76->m_Items[v41];
          if ( !v77 )
            sub_1C6BC60(v74, v75);
          onRenderer = v77->fields.onRenderer;
          if ( !onRenderer )
            sub_1C6BC60(0, v75);
          v79 = UnityEngine_Renderer__get_material(onRenderer, 0);
          if ( !v79 )
            sub_1C6BC60(0, v80);
          UnityEngine_Material__SetTexture(v79, this->fields.iconMaterialPropertyName, (UnityEngine_Texture_o *)v58, 0);
          v83 = this->fields.exIconSet;
          if ( !v83 )
            sub_1C6BC60(v81, v82);
          if ( v41 >= LODWORD(v83->max_length) )
            sub_1C6BC68(v81);
          v84 = v83->m_Items[v41];
          if ( !v84 )
            sub_1C6BC60(v81, v82);
          effectGlowRenderer = v84->fields.effectGlowRenderer;
          if ( !effectGlowRenderer )
            sub_1C6BC60(0, v82);
          v86 = UnityEngine_Renderer__get_material(effectGlowRenderer, 0);
          if ( !v86 )
            sub_1C6BC60(0, v87);
          UnityEngine_Material__SetTexture(v86, this->fields.iconMaterialPropertyName, (UnityEngine_Texture_o *)v61, 0);
          v90 = this->fields.exIconSet;
          if ( !v90 )
            sub_1C6BC60(v88, v89);
          if ( v41 >= LODWORD(v90->max_length) )
            sub_1C6BC68(v88);
          v91 = v90->m_Items[v41];
          if ( !v91 )
            sub_1C6BC60(v88, v89);
          v92 = (UnityEngine_Component_o *)v91->fields.offRenderer;
          if ( !v92 )
            sub_1C6BC60(0, v89);
          gameObject = UnityEngine_Component__get_gameObject(v92, 0);
          if ( !gameObject )
            sub_1C6BC60(0, v94);
          UnityEngine_GameObject__SetActive(gameObject, v136 == 0, 0);
          v97 = this->fields.exIconSet;
          if ( !v97 )
            sub_1C6BC60(v95, v96);
          if ( v41 >= LODWORD(v97->max_length) )
            sub_1C6BC68(v95);
          v98 = v97->m_Items[v41];
          if ( !v98 )
            sub_1C6BC60(v95, v96);
          v99 = (UnityEngine_Component_o *)v98->fields.onRenderer;
          if ( !v99 )
            sub_1C6BC60(0, v96);
          v100 = UnityEngine_Component__get_gameObject(v99, 0);
          if ( !v100 )
            sub_1C6BC60(0, v101);
          UnityEngine_GameObject__SetActive(v100, v136 != 0, 0);
          v104 = this->fields.exIconSet;
          if ( !v104 )
            sub_1C6BC60(v102, v103);
          if ( v41 >= LODWORD(v104->max_length) )
            sub_1C6BC68(v102);
          v105 = v104->m_Items[v41];
          if ( !v105 )
            sub_1C6BC60(v102, v103);
          releaseEffect = v105->fields.releaseEffect;
          if ( !releaseEffect )
            sub_1C6BC60(0, v103);
          v107 = UnityEngine_GameObject__get_gameObject(releaseEffect, 0);
          if ( !v107 )
            sub_1C6BC60(0, v108);
          UnityEngine_GameObject__SetActive(v107, 0, 0);
          if ( v136 )
          {
            if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
            IsPlayed = ClassBoardUtility__IsPlayedExClassReleaseEffect(classId[0], 0);
            if ( !IsPlayed )
            {
              v111 = this->fields.exIconSet;
              if ( !v111 )
                sub_1C6BC60(IsPlayed, v110);
              if ( v41 >= LODWORD(v111->max_length) )
                sub_1C6BC68(IsPlayed);
              v112 = v111->m_Items[v41];
              if ( !v112 )
                sub_1C6BC60(IsPlayed, v110);
              animation = (UnityEngine_Object_o *)v112->fields.animation;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              v114 = UnityEngine_Object__op_Inequality(animation, 0, 0);
              if ( v114 )
              {
                v116 = this->fields.exIconSet;
                if ( !v116 )
                  sub_1C6BC60(v114, v115);
                if ( v41 >= LODWORD(v116->max_length) )
                  sub_1C6BC68(v114);
                v117 = v116->m_Items[v41];
                if ( !v117 )
                  sub_1C6BC60(v114, v115);
                v118 = (UnityEngine_Component_o *)v117->fields.offRenderer;
                if ( !v118 )
                  sub_1C6BC60(0, v115);
                v119 = UnityEngine_Component__get_gameObject(v118, 0);
                if ( !v119 )
                  sub_1C6BC60(0, v120);
                UnityEngine_GameObject__SetActive(v119, 1, 0);
                v123 = this->fields.exIconSet;
                if ( !v123 )
                  sub_1C6BC60(v121, v122);
                if ( v41 >= LODWORD(v123->max_length) )
                  sub_1C6BC68(v121);
                v124 = v123->m_Items[v41];
                if ( !v124 )
                  sub_1C6BC60(v121, v122);
                v125 = (UnityEngine_Component_o *)v124->fields.onRenderer;
                if ( !v125 )
                  sub_1C6BC60(0, v122);
                v126 = UnityEngine_Component__get_gameObject(v125, 0);
                if ( !v126 )
                  sub_1C6BC60(0, v127);
                UnityEngine_GameObject__SetActive(v126, 0, 0);
                v130 = this->fields.exIconSet;
                if ( !v130 )
                  sub_1C6BC60(v128, v129);
                if ( v41 >= LODWORD(v130->max_length) )
                  sub_1C6BC68(v128);
                v131 = v130->m_Items[v41];
                if ( !v131 )
                  sub_1C6BC60(v128, v129);
                exClassReleaseEffectAnimationDic = this->fields.exClassReleaseEffectAnimationDic;
                if ( !exClassReleaseEffectAnimationDic )
                  sub_1C6BC60(0, *(_QWORD *)classId);
                System_Collections_Generic_Dictionary_int__object___Add(
                  (System_Collections_Generic_Dictionary_int__object__o *)exClassReleaseEffectAnimationDic,
                  classId[0],
                  (Il2CppObject *)v131->fields.animation,
                  (const MethodInfo_34524F0 *)Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__Add__);
              }
            }
          }
          goto LABEL_12;
        }
      }
      ++v41;
      v40 = this->fields.exIconSet;
      if ( !v40 )
        goto LABEL_94;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__bool___Dispose(
    &v142,
    (const MethodInfo_35A7910 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
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
  Il2CppObject *v38; // x1
  System_String_o *v39; // x0
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  Il2CppObject *v42; // x1
  System_String_o *v43; // x0
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  Il2CppObject *v46; // x1
  System_String_o *v47; // x0
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  _BOOL8 v50; // x0
  __int64 v51; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v52; // x8
  System_Func_object__bool__o **v53; // x24
  __int64 v54; // x20
  int max_length; // w9
  unsigned int v56; // w26
  __int64 v57; // x8
  System_Func_object__bool__o *v58; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v59; // x23
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  Il2CppObject *v62; // x25
  struct ClassBoardBackground_ExClassIconSet_array *v63; // x8
  __int64 v64; // x8
  UnityEngine_Renderer_o *v65; // x0
  UnityEngine_Material_o *material; // x0
  __int64 v67; // x1
  System_Func_object__bool__o *v68; // x24
  int32_t v69; // w2
  const MethodInfo *v70; // x3
  Il2CppObject *v71; // x0
  __int64 v72; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v73; // x8
  __int64 v74; // x8
  UnityEngine_Object_o *v75; // x24
  UnityEngine_Object_o *v76; // x25
  _BOOL8 v77; // x0
  __int64 v78; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v79; // x8
  __int64 v80; // x8
  UnityEngine_Renderer_o *v81; // x0
  UnityEngine_Material_o *v82; // x0
  __int64 v83; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v84; // x8
  __int64 v85; // x8
  UnityEngine_Object_o *v86; // x25
  _BOOL8 v87; // x0
  __int64 v88; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v89; // x8
  __int64 v90; // x8
  UnityEngine_GameObject_o *v91; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v93; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v94; // x8
  __int64 v95; // x8
  UnityEngine_Object_o *v96; // x25
  _BOOL8 v97; // x0
  __int64 v98; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v99; // x8
  __int64 v100; // x8
  UnityEngine_Renderer_o *v101; // x0
  UnityEngine_Material_o *v102; // x0
  __int64 v103; // x1
  System_Func_object__bool__o *v104; // x24
  int32_t v105; // w2
  const MethodInfo *v106; // x3
  Il2CppObject *v107; // x0
  __int64 v108; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v109; // x8
  __int64 v110; // x8
  UnityEngine_Texture_o *v111; // x22
  UnityEngine_Object_o *v112; // x23
  _BOOL8 v113; // x0
  __int64 v114; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v115; // x8
  __int64 v116; // x8
  UnityEngine_Renderer_o *v117; // x0
  UnityEngine_Material_o *v118; // x0
  __int64 v119; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v120; // x8
  __int64 v121; // x8
  UnityEngine_Object_o *v122; // x22
  _BOOL8 v123; // x0
  __int64 v124; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v125; // x8
  __int64 v126; // x8
  SimpleAnimation_o *v127; // x0
  __int64 v128; // x0
  __int64 v129; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v130; // x8
  __int64 v131; // x8
  SimpleAnimation_o *v132; // x0
  _BOOL8 IsPlayedGrand; // x0
  __int64 v134; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v135; // x8
  __int64 v136; // x8
  UnityEngine_Object_o *v137; // x22
  struct ClassBoardBackground_ExClassIconSet_array *v138; // x8
  __int64 v139; // x8
  UnityEngine_Component_o *v140; // x0
  UnityEngine_GameObject_o *v141; // x0
  __int64 v142; // x1
  __int64 v143; // x0
  __int64 v144; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v145; // x8
  __int64 v146; // x8
  UnityEngine_Object_o *v147; // x22
  _BOOL8 v148; // x0
  __int64 v149; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v150; // x8
  __int64 v151; // x8
  UnityEngine_Component_o *v152; // x0
  UnityEngine_GameObject_o *v153; // x0
  __int64 v154; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v155; // x8
  __int64 v156; // x8
  struct ClassBoardBackground_ExClassIconSet_array *v157; // x8
  __int64 v158; // x8
  UnityEngine_Component_o *v159; // x0
  UnityEngine_GameObject_o *v160; // x0
  __int64 v161; // x1
  __int64 v162; // x0
  __int64 v163; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v164; // x8
  __int64 v165; // x8
  UnityEngine_Object_o *v166; // x21
  _BOOL8 v167; // x0
  __int64 v168; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v169; // x8
  __int64 v170; // x8
  UnityEngine_Component_o *v171; // x0
  UnityEngine_GameObject_o *v172; // x0
  __int64 v173; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v174; // x8
  __int64 v175; // x8
  UnityEngine_Component_o *v176; // x0
  UnityEngine_GameObject_o *v177; // x0
  __int64 v178; // x1
  __int64 v179; // x0
  __int64 v180; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v181; // x8
  __int64 v182; // x8
  UnityEngine_Object_o *v183; // x21
  _BOOL8 v184; // x0
  __int64 v185; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v186; // x8
  __int64 v187; // x8
  UnityEngine_Component_o *v188; // x0
  UnityEngine_GameObject_o *v189; // x0
  __int64 v190; // x1
  ClassBoardBackground___c_c *v191; // x0
  System_Collections_Generic_IEnumerable_T__o *grandExIconObj; // x19
  System_Action_object__o *_9__81_2; // x20
  Il2CppObject *v194; // x21
  struct ClassBoardBackground___c_StaticFields *static_fields; // x0
  int32_t v196; // w2
  const MethodInfo *v197; // x3
  System_Collections_Generic_Dictionary_int__object__o **p_grandExClassReleaseEffectAnimationDic; // [xsp+8h] [xbp-B8h]
  int v200; // [xsp+18h] [xbp-A8h] BYREF
  int v201; // [xsp+1Ch] [xbp-A4h] BYREF
  _OWORD v202[2]; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v203; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4CB9D0E & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_Renderer__TypeInfo);
    sub_1C6BA08(&System_Action_GameObject__TypeInfo);
    sub_1C6BA08(&Method_BasicHelper_ForEach_GameObject___);
    sub_1C6BA08(&Method_BasicHelper_ForEach_Renderer___);
    sub_1C6BA08(&ClassBoardUtility_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__SimpleAnimation___ctor__);
    sub_1C6BA08(&System_Collections_Generic_Dictionary_int__SimpleAnimation__TypeInfo);
    sub_1C6BA08(&Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__get_Current__);
    sub_1C6BA08(&System_Func_Texture__bool__TypeInfo);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Key__);
    sub_1C6BA08(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Value__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Material___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_Material__TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_ClassBoardBackground___c__SetGrandClassIcon_b__81_2__);
    sub_1C6BA08(&Method_ClassBoardBackground___c__SetGrandClassIcon_b__81_3__);
    sub_1C6BA08(&Method_ClassBoardBackground___c__DisplayClass81_0__SetGrandClassIcon_b__0__);
    sub_1C6BA08(&Method_ClassBoardBackground___c__DisplayClass81_0__SetGrandClassIcon_b__1__);
    sub_1C6BA08(&ClassBoardBackground___c__DisplayClass81_0_TypeInfo);
    sub_1C6BA08(&Method_ClassBoardBackground___c__DisplayClass81_1__SetGrandClassIcon_b__4__);
    sub_1C6BA08(&Method_ClassBoardBackground___c__DisplayClass81_1__SetGrandClassIcon_b__5__);
    sub_1C6BA08(&Method_ClassBoardBackground___c__DisplayClass81_1__SetGrandClassIcon_b__6__);
    sub_1C6BA08(&ClassBoardBackground___c__DisplayClass81_1_TypeInfo);
    sub_1C6BA08(&ClassBoardBackground___c_TypeInfo);
    sub_1C6BA08(&StringLiteral_7139/*"GrandClassIconEx_on_{0}"*/);
    sub_1C6BA08(&StringLiteral_7138/*"GrandClassIconEx_off_{0}"*/);
    sub_1C6BA08(&StringLiteral_7137/*"GrandClassIconEx_ef_glow_{0}"*/);
    byte_4CB9D0E = 1;
  }
  memset(&v203, 0, 32);
  v6 = sub_1C6BC54(ClassBoardBackground___c__DisplayClass81_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  if ( !v6 )
    goto LABEL_198;
  *(_DWORD *)(v6 + 16) = iconId;
  *(_QWORD *)(v6 + 24) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v6 + 24), (int32_t)this, v9, v10);
  grandIconTextures = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.grandIconTextures;
  v12 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_Texture__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)v6,
    Method_ClassBoardBackground___c__DisplayClass81_0__SetGrandClassIcon_b__0__,
    0);
  v13 = System_Linq_Enumerable__FirstOrDefault_object__51793644(
          grandIconTextures,
          (System_Func_TSource__bool__o *)v12,
          (const MethodInfo_3164EEC *)Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
  *(_QWORD *)(v6 + 32) = v13;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v6 + 32), (int32_t)v13, v14, v15);
  v16 = *(UnityEngine_Object_o **)(v6 + 32);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v16, 0, 0) )
    return;
  grandIconRenderers = (System_Collections_Generic_IEnumerable_T__o *)this->fields.grandIconRenderers;
  v18 = (System_Action_object__o *)sub_1C6BC54(System_Action_Renderer__TypeInfo);
  System_Action_object____ctor(
    v18,
    (Il2CppObject *)v6,
    Method_ClassBoardBackground___c__DisplayClass81_0__SetGrandClassIcon_b__1__,
    0);
  BasicHelper__ForEach_object_(
    grandIconRenderers,
    (System_Action_T__o *)v18,
    (const MethodInfo_3127050 *)Method_BasicHelper_ForEach_Renderer___);
  v19 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_Material__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_Material___ctor__);
  this->fields.grandStartAnimActiveIconMaterials = (struct System_Collections_Generic_List_Material__o *)v19;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.grandStartAnimActiveIconMaterials, (int32_t)v19, v20, v21);
  v22 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_int__SimpleAnimation__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v22,
    (const MethodInfo_3451B1C *)Method_System_Collections_Generic_Dictionary_int__SimpleAnimation___ctor__);
  this->fields.grandExClassReleaseEffectAnimationDic = (struct System_Collections_Generic_Dictionary_int__SimpleAnimation__o *)v22;
  p_grandExClassReleaseEffectAnimationDic = (System_Collections_Generic_Dictionary_int__object__o **)&this->fields.grandExClassReleaseEffectAnimationDic;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.grandExClassReleaseEffectAnimationDic, (int32_t)v22, v23, v24);
  p_grandExIconSet = &this->fields.grandExIconSet;
  grandExIconSet = this->fields.grandExIconSet;
  if ( !grandExIconSet )
    goto LABEL_198;
  if ( !grandExIconSet->max_length )
    return;
  if ( (unsigned int)baseId >> 1 != 5004 )
  {
    v191 = ClassBoardBackground___c_TypeInfo;
    grandExIconObj = (System_Collections_Generic_IEnumerable_T__o *)this->fields.grandExIconObj;
    if ( !ClassBoardBackground___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardBackground___c_TypeInfo);
      v191 = ClassBoardBackground___c_TypeInfo;
    }
    _9__81_2 = (System_Action_object__o *)v191->static_fields->__9__81_2;
    if ( !_9__81_2 )
    {
      if ( !v191->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v191);
        v191 = ClassBoardBackground___c_TypeInfo;
      }
      v194 = (Il2CppObject *)v191->static_fields->__9;
      _9__81_2 = (System_Action_object__o *)sub_1C6BC54(System_Action_GameObject__TypeInfo);
      System_Action_object____ctor(_9__81_2, v194, Method_ClassBoardBackground___c__SetGrandClassIcon_b__81_2__, 0);
      static_fields = ClassBoardBackground___c_TypeInfo->static_fields;
      static_fields->__9__81_2 = (struct System_Action_GameObject__o *)_9__81_2;
      sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__81_2, (int32_t)_9__81_2, v196, v197);
    }
    BasicHelper__ForEach_object_(
      grandExIconObj,
      (System_Action_T__o *)_9__81_2,
      (const MethodInfo_3127050 *)Method_BasicHelper_ForEach_GameObject___);
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
    _9__81_3 = (System_Action_object__o *)sub_1C6BC54(System_Action_GameObject__TypeInfo);
    System_Action_object____ctor(_9__81_3, v30, Method_ClassBoardBackground___c__SetGrandClassIcon_b__81_3__, 0);
    v31 = ClassBoardBackground___c_TypeInfo->static_fields;
    v31->__9__81_3 = (struct System_Action_GameObject__o *)_9__81_3;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v31->__9__81_3, (int32_t)_9__81_3, v32, v33);
  }
  BasicHelper__ForEach_object_(
    v28,
    (System_Action_T__o *)_9__81_3,
    (const MethodInfo_3127050 *)Method_BasicHelper_ForEach_GameObject___);
  IconIdList = ClassBoardBackground__GetIconIdList(v34, baseId, 1, v35);
  if ( !IconIdList )
LABEL_198:
    sub_1C6BC60(IconIdList, v8);
  System_Collections_Generic_Dictionary_int__bool___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v202,
    IconIdList,
    (const MethodInfo_3444080 *)Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
  *(_OWORD *)&v203.fields._dictionary = v202[0];
  v203.fields._current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v202[1];
LABEL_18:
  while ( System_Collections_Generic_Dictionary_Enumerator_int__bool___MoveNext(
            &v203,
            (const MethodInfo_35A7808 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__) )
  {
    key = v203.fields._current.fields.key;
    v37 = sub_1C6BC54(ClassBoardBackground___c__DisplayClass81_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v37, 0);
    LODWORD(v202[0]) = (_DWORD)key;
    v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v202);
    v39 = System_String__Format((System_String_o *)StringLiteral_7139/*"GrandClassIconEx_on_{0}"*/, v38, 0);
    if ( !v37 )
      sub_1C6BC60(v39, v39);
    *(_QWORD *)(v37 + 16) = v39;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v37 + 16), (int32_t)v39, v40, v41);
    v201 = (int)key;
    v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v201);
    v43 = System_String__Format((System_String_o *)StringLiteral_7138/*"GrandClassIconEx_off_{0}"*/, v42, 0);
    *(_QWORD *)(v37 + 24) = v43;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v37 + 24), (int32_t)v43, v44, v45);
    v200 = (int)key;
    v46 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v200);
    v47 = System_String__Format((System_String_o *)StringLiteral_7137/*"GrandClassIconEx_ef_glow_{0}"*/, v46, 0);
    *(_QWORD *)(v37 + 32) = v47;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v37 + 32), (int32_t)v47, v48, v49);
    v52 = *p_grandExIconSet;
    if ( !*p_grandExIconSet )
LABEL_174:
      sub_1C6BC60(v50, v51);
    v53 = (System_Func_object__bool__o **)(v37 + 40);
    v54 = 4;
    while ( 1 )
    {
      max_length = v52->max_length;
      v56 = v54 - 4;
      if ( (int)v54 - 4 >= max_length )
        break;
      if ( v56 >= max_length )
        sub_1C6BC68(v50);
      v57 = *((_QWORD *)&v52->obj.klass + v54);
      if ( !v57 )
        sub_1C6BC60(v50, v51);
      v58 = *v53;
      v59 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v57 + 48);
      if ( !*v53 )
      {
        v58 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_Texture__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v58,
          (Il2CppObject *)v37,
          Method_ClassBoardBackground___c__DisplayClass81_1__SetGrandClassIcon_b__4__,
          0);
        *v53 = v58;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v37 + 40), (int32_t)v58, v60, v61);
      }
      v62 = System_Linq_Enumerable__FirstOrDefault_object__51793644(
              v59,
              (System_Func_TSource__bool__o *)v58,
              (const MethodInfo_3164EEC *)Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v50 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v62, 0, 0);
      if ( !v50 )
      {
        v63 = *p_grandExIconSet;
        if ( !*p_grandExIconSet )
          sub_1C6BC60(v50, v51);
        if ( v56 >= LODWORD(v63->max_length) )
          sub_1C6BC68(v50);
        v64 = *((_QWORD *)&v63->obj.klass + v54);
        if ( !v64 )
          sub_1C6BC60(v50, v51);
        v65 = *(UnityEngine_Renderer_o **)(v64 + 16);
        if ( !v65 )
          sub_1C6BC60(0, v51);
        material = UnityEngine_Renderer__get_material(v65, 0);
        if ( !material )
          sub_1C6BC60(0, v67);
        UnityEngine_Material__SetTexture(
          material,
          this->fields.iconMaterialPropertyName,
          (UnityEngine_Texture_o *)v62,
          0);
        v68 = *(System_Func_object__bool__o **)(v37 + 48);
        if ( !v68 )
        {
          v68 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_Texture__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v68,
            (Il2CppObject *)v37,
            Method_ClassBoardBackground___c__DisplayClass81_1__SetGrandClassIcon_b__5__,
            0);
          *(_QWORD *)(v37 + 48) = v68;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v37 + 48), (int32_t)v68, v69, v70);
        }
        v71 = System_Linq_Enumerable__FirstOrDefault_object__51793644(
                v59,
                (System_Func_TSource__bool__o *)v68,
                (const MethodInfo_3164EEC *)Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
        v73 = *p_grandExIconSet;
        if ( !*p_grandExIconSet )
          sub_1C6BC60(v71, v72);
        if ( v56 >= LODWORD(v73->max_length) )
          sub_1C6BC68(v71);
        v74 = *((_QWORD *)&v73->obj.klass + v54);
        if ( !v74 )
          sub_1C6BC60(v71, v72);
        v75 = (UnityEngine_Object_o *)v71;
        v76 = *(UnityEngine_Object_o **)(v74 + 24);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v77 = UnityEngine_Object__op_Inequality(v76, 0, 0);
        if ( v77 )
        {
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v77 = UnityEngine_Object__op_Inequality(v75, 0, 0);
          if ( v77 )
          {
            v79 = *p_grandExIconSet;
            if ( !*p_grandExIconSet )
              sub_1C6BC60(v77, v78);
            if ( v56 >= LODWORD(v79->max_length) )
              sub_1C6BC68(v77);
            v80 = *((_QWORD *)&v79->obj.klass + v54);
            if ( !v80 )
              sub_1C6BC60(v77, v78);
            v81 = *(UnityEngine_Renderer_o **)(v80 + 24);
            if ( !v81 )
              sub_1C6BC60(0, v78);
            v82 = UnityEngine_Renderer__get_material(v81, 0);
            if ( !v82 )
              sub_1C6BC60(0, v83);
            UnityEngine_Material__SetTexture(
              v82,
              this->fields.iconMaterialPropertyName,
              (UnityEngine_Texture_o *)v75,
              0);
          }
        }
        v84 = *p_grandExIconSet;
        if ( !*p_grandExIconSet )
          sub_1C6BC60(v77, v78);
        if ( v56 >= LODWORD(v84->max_length) )
          sub_1C6BC68(v77);
        v85 = *((_QWORD *)&v84->obj.klass + v54);
        if ( !v85 )
          sub_1C6BC60(v77, v78);
        v86 = *(UnityEngine_Object_o **)(v85 + 64);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v87 = UnityEngine_Object__op_Inequality(v86, 0, 0);
        if ( v87 )
        {
          v89 = *p_grandExIconSet;
          if ( !*p_grandExIconSet )
            sub_1C6BC60(v87, v88);
          if ( v56 >= LODWORD(v89->max_length) )
            sub_1C6BC68(v87);
          v90 = *((_QWORD *)&v89->obj.klass + v54);
          if ( !v90 )
            sub_1C6BC60(v87, v88);
          v91 = *(UnityEngine_GameObject_o **)(v90 + 64);
          if ( !v91 )
            sub_1C6BC60(0, v88);
          gameObject = UnityEngine_GameObject__get_gameObject(v91, 0);
          if ( !gameObject )
            sub_1C6BC60(0, v93);
          UnityEngine_GameObject__SetActive(gameObject, 0, 0);
        }
        v94 = *p_grandExIconSet;
        if ( !*p_grandExIconSet )
          sub_1C6BC60(v87, v88);
        if ( v56 >= LODWORD(v94->max_length) )
          sub_1C6BC68(v87);
        v95 = *((_QWORD *)&v94->obj.klass + v54);
        if ( !v95 )
          sub_1C6BC60(v87, v88);
        v96 = *(UnityEngine_Object_o **)(v95 + 32);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v97 = UnityEngine_Object__op_Inequality(v96, 0, 0);
        if ( v97 )
        {
          v99 = *p_grandExIconSet;
          if ( !*p_grandExIconSet )
            sub_1C6BC60(v97, v98);
          if ( v56 >= LODWORD(v99->max_length) )
            sub_1C6BC68(v97);
          v100 = *((_QWORD *)&v99->obj.klass + v54);
          if ( !v100 )
            sub_1C6BC60(v97, v98);
          v101 = *(UnityEngine_Renderer_o **)(v100 + 32);
          if ( !v101 )
            sub_1C6BC60(0, v98);
          v102 = UnityEngine_Renderer__get_material(v101, 0);
          if ( !v102 )
            sub_1C6BC60(0, v103);
          UnityEngine_Material__SetTexture(v102, this->fields.iconMaterialPropertyName, (UnityEngine_Texture_o *)v75, 0);
        }
        v104 = *(System_Func_object__bool__o **)(v37 + 56);
        if ( !v104 )
        {
          v104 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_Texture__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v104,
            (Il2CppObject *)v37,
            Method_ClassBoardBackground___c__DisplayClass81_1__SetGrandClassIcon_b__6__,
            0);
          *(_QWORD *)(v37 + 56) = v104;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v37 + 56), (int32_t)v104, v105, v106);
        }
        v107 = System_Linq_Enumerable__FirstOrDefault_object__51793644(
                 v59,
                 (System_Func_TSource__bool__o *)v104,
                 (const MethodInfo_3164EEC *)Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
        v109 = *p_grandExIconSet;
        if ( !*p_grandExIconSet )
          sub_1C6BC60(v107, v108);
        if ( v56 >= LODWORD(v109->max_length) )
          sub_1C6BC68(v107);
        v110 = *((_QWORD *)&v109->obj.klass + v54);
        if ( !v110 )
          sub_1C6BC60(v107, v108);
        v111 = (UnityEngine_Texture_o *)v107;
        v112 = *(UnityEngine_Object_o **)(v110 + 40);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v113 = UnityEngine_Object__op_Inequality(v112, 0, 0);
        if ( v113 )
        {
          v115 = *p_grandExIconSet;
          if ( !*p_grandExIconSet )
            sub_1C6BC60(v113, v114);
          if ( v56 >= LODWORD(v115->max_length) )
            sub_1C6BC68(v113);
          v116 = *((_QWORD *)&v115->obj.klass + v54);
          if ( !v116 )
            sub_1C6BC60(v113, v114);
          v117 = *(UnityEngine_Renderer_o **)(v116 + 40);
          if ( !v117 )
            sub_1C6BC60(0, v114);
          v118 = UnityEngine_Renderer__get_material(v117, 0);
          if ( !v118 )
            sub_1C6BC60(0, v119);
          UnityEngine_Material__SetTexture(v118, this->fields.iconMaterialPropertyName, v111, 0);
        }
        v120 = *p_grandExIconSet;
        if ( !*p_grandExIconSet )
          sub_1C6BC60(v113, v114);
        if ( v56 >= LODWORD(v120->max_length) )
          sub_1C6BC68(v113);
        v121 = *((_QWORD *)&v120->obj.klass + v54);
        if ( !v121 )
          sub_1C6BC60(v113, v114);
        v122 = *(UnityEngine_Object_o **)(v121 + 56);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v123 = UnityEngine_Object__op_Inequality(v122, 0, 0);
        if ( v123 )
        {
          v125 = *p_grandExIconSet;
          if ( !*p_grandExIconSet )
            sub_1C6BC60(v123, v124);
          if ( v56 >= LODWORD(v125->max_length) )
            sub_1C6BC68(v123);
          v126 = *((_QWORD *)&v125->obj.klass + v54);
          if ( !v126 )
            sub_1C6BC60(v123, v124);
          v127 = *(SimpleAnimation_o **)(v126 + 56);
          if ( !v127 )
            sub_1C6BC60(0, v124);
          SimpleAnimation__Rewind(v127, 0);
          v130 = *p_grandExIconSet;
          if ( !*p_grandExIconSet )
            sub_1C6BC60(v128, v129);
          if ( v56 >= LODWORD(v130->max_length) )
            sub_1C6BC68(v128);
          v131 = *((_QWORD *)&v130->obj.klass + v54);
          if ( !v131 )
            sub_1C6BC60(v128, v129);
          v132 = *(SimpleAnimation_o **)(v131 + 56);
          if ( !v132 )
            sub_1C6BC60(0, v129);
          SimpleAnimation__Stop(v132, 0);
        }
        if ( ((unsigned __int64)key & 0xFF00000000LL) != 0 )
        {
          if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
          IsPlayedGrand = ClassBoardUtility__IsPlayedGrandExClassReleaseEffect((int32_t)key, 0);
          if ( IsPlayedGrand )
            goto LABEL_139;
          v135 = *p_grandExIconSet;
          if ( !*p_grandExIconSet )
            sub_1C6BC60(IsPlayedGrand, v134);
          if ( v56 >= LODWORD(v135->max_length) )
            sub_1C6BC68(IsPlayedGrand);
          v136 = *((_QWORD *)&v135->obj.klass + v54);
          if ( !v136 )
            sub_1C6BC60(IsPlayedGrand, v134);
          v137 = *(UnityEngine_Object_o **)(v136 + 56);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          IsPlayedGrand = UnityEngine_Object__op_Inequality(v137, 0, 0);
          if ( !IsPlayedGrand )
          {
LABEL_139:
            v157 = *p_grandExIconSet;
            if ( !*p_grandExIconSet )
              sub_1C6BC60(IsPlayedGrand, v134);
            if ( v56 >= LODWORD(v157->max_length) )
              sub_1C6BC68(IsPlayedGrand);
            v158 = *((_QWORD *)&v157->obj.klass + v54);
            if ( !v158 )
              sub_1C6BC60(IsPlayedGrand, v134);
            v159 = *(UnityEngine_Component_o **)(v158 + 16);
            if ( !v159 )
              sub_1C6BC60(0, v134);
            v160 = UnityEngine_Component__get_gameObject(v159, 0);
            if ( !v160 )
              sub_1C6BC60(0, v161);
            UnityEngine_GameObject__SetActive(v160, 1, 0);
            v164 = *p_grandExIconSet;
            if ( !*p_grandExIconSet )
              sub_1C6BC60(v162, v163);
            if ( v56 >= LODWORD(v164->max_length) )
              sub_1C6BC68(v162);
            v165 = *((_QWORD *)&v164->obj.klass + v54);
            if ( !v165 )
              sub_1C6BC60(v162, v163);
            v166 = *(UnityEngine_Object_o **)(v165 + 24);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            v167 = UnityEngine_Object__op_Inequality(v166, 0, 0);
            if ( v167 )
            {
              v169 = *p_grandExIconSet;
              if ( !*p_grandExIconSet )
                sub_1C6BC60(v167, v168);
              if ( v56 >= LODWORD(v169->max_length) )
                sub_1C6BC68(v167);
              v170 = *((_QWORD *)&v169->obj.klass + v54);
              if ( !v170 )
                sub_1C6BC60(v167, v168);
              v171 = *(UnityEngine_Component_o **)(v170 + 24);
              if ( !v171 )
                sub_1C6BC60(0, v168);
              v172 = UnityEngine_Component__get_gameObject(v171, 0);
              if ( !v172 )
                sub_1C6BC60(0, v173);
              UnityEngine_GameObject__SetActive(v172, 0, 0);
            }
          }
          else
          {
            v138 = *p_grandExIconSet;
            if ( !*p_grandExIconSet )
              sub_1C6BC60(IsPlayedGrand, v134);
            if ( v56 >= LODWORD(v138->max_length) )
              sub_1C6BC68(IsPlayedGrand);
            v139 = *((_QWORD *)&v138->obj.klass + v54);
            if ( !v139 )
              sub_1C6BC60(IsPlayedGrand, v134);
            v140 = *(UnityEngine_Component_o **)(v139 + 16);
            if ( !v140 )
              sub_1C6BC60(0, v134);
            v141 = UnityEngine_Component__get_gameObject(v140, 0);
            if ( !v141 )
              sub_1C6BC60(0, v142);
            UnityEngine_GameObject__SetActive(v141, 0, 0);
            v145 = *p_grandExIconSet;
            if ( !*p_grandExIconSet )
              sub_1C6BC60(v143, v144);
            if ( v56 >= LODWORD(v145->max_length) )
              sub_1C6BC68(v143);
            v146 = *((_QWORD *)&v145->obj.klass + v54);
            if ( !v146 )
              sub_1C6BC60(v143, v144);
            v147 = *(UnityEngine_Object_o **)(v146 + 24);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            v148 = UnityEngine_Object__op_Inequality(v147, 0, 0);
            if ( v148 )
            {
              v150 = *p_grandExIconSet;
              if ( !*p_grandExIconSet )
                sub_1C6BC60(v148, v149);
              if ( v56 >= LODWORD(v150->max_length) )
                sub_1C6BC68(v148);
              v151 = *((_QWORD *)&v150->obj.klass + v54);
              if ( !v151 )
                sub_1C6BC60(v148, v149);
              v152 = *(UnityEngine_Component_o **)(v151 + 24);
              if ( !v152 )
                sub_1C6BC60(0, v149);
              v153 = UnityEngine_Component__get_gameObject(v152, 0);
              if ( !v153 )
                sub_1C6BC60(0, v154);
              UnityEngine_GameObject__SetActive(v153, 1, 0);
            }
            v155 = *p_grandExIconSet;
            if ( !*p_grandExIconSet )
              sub_1C6BC60(v148, v149);
            if ( v56 >= LODWORD(v155->max_length) )
              sub_1C6BC68(v148);
            v156 = *((_QWORD *)&v155->obj.klass + v54);
            if ( !v156 )
              sub_1C6BC60(v148, v149);
            if ( !*p_grandExClassReleaseEffectAnimationDic )
              sub_1C6BC60(0, v149);
            System_Collections_Generic_Dictionary_int__object___Add(
              *p_grandExClassReleaseEffectAnimationDic,
              (int32_t)key,
              *(Il2CppObject **)(v156 + 56),
              (const MethodInfo_34524F0 *)Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__Add__);
          }
        }
        else
        {
          v174 = *p_grandExIconSet;
          if ( !*p_grandExIconSet )
            sub_1C6BC60(v123, v124);
          if ( v56 >= LODWORD(v174->max_length) )
            sub_1C6BC68(v123);
          v175 = *((_QWORD *)&v174->obj.klass + v54);
          if ( !v175 )
            sub_1C6BC60(v123, v124);
          v176 = *(UnityEngine_Component_o **)(v175 + 16);
          if ( !v176 )
            sub_1C6BC60(0, v124);
          v177 = UnityEngine_Component__get_gameObject(v176, 0);
          if ( !v177 )
            sub_1C6BC60(0, v178);
          UnityEngine_GameObject__SetActive(v177, 0, 0);
          v181 = *p_grandExIconSet;
          if ( !*p_grandExIconSet )
            sub_1C6BC60(v179, v180);
          if ( v56 >= LODWORD(v181->max_length) )
            sub_1C6BC68(v179);
          v182 = *((_QWORD *)&v181->obj.klass + v54);
          if ( !v182 )
            sub_1C6BC60(v179, v180);
          v183 = *(UnityEngine_Object_o **)(v182 + 24);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v184 = UnityEngine_Object__op_Inequality(v183, 0, 0);
          if ( v184 )
          {
            v186 = *p_grandExIconSet;
            if ( !*p_grandExIconSet )
              sub_1C6BC60(v184, v185);
            if ( v56 >= LODWORD(v186->max_length) )
              sub_1C6BC68(v184);
            v187 = *((_QWORD *)&v186->obj.klass + v54);
            if ( !v187 )
              sub_1C6BC60(v184, v185);
            v188 = *(UnityEngine_Component_o **)(v187 + 24);
            if ( !v188 )
              sub_1C6BC60(0, v185);
            v189 = UnityEngine_Component__get_gameObject(v188, 0);
            if ( !v189 )
              sub_1C6BC60(0, v190);
            UnityEngine_GameObject__SetActive(v189, 1, 0);
          }
        }
        goto LABEL_18;
      }
      v52 = *p_grandExIconSet;
      ++v54;
      if ( !*p_grandExIconSet )
        goto LABEL_174;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__bool___Dispose(
    &v203,
    (const MethodInfo_35A7910 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
}


void ClassBoardBackground__SetShowBoardCallback(
        ClassBoardBackground_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.showBoardCallback = callback;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.showBoardCallback, (int32_t)callback, (int32_t)method, v3);
}


void ClassBoardBackground__SkipStartMainEffectPlayer(ClassBoardBackground_o *this, const MethodInfo *method)
{
  ClassBoardEffectPlayer_o *skipMainEffectPlayer; // x0
  Il2CppObject *v4; // x0
  System_String_o *v5; // x0
  SimpleAnimation_o *mainAnimation; // x20
  System_String_o *v7; // x21
  System_Action_o *v8; // x22
  const MethodInfo *v9; // x5
  int32_t Data_int; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CB9D14 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_ClassBoardBackground__SkipStartMainEffectPlayer_b__87_0__);
    sub_1C6BA08(&Method_ClassBoardEffectPlayer_GetData_int___);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&StringLiteral_8871/*"MainTransition{0}"*/);
    byte_4CB9D14 = 1;
  }
  skipMainEffectPlayer = this->fields.skipMainEffectPlayer;
  if ( !skipMainEffectPlayer )
    sub_1C6BC60(0, method);
  Data_int = ClassBoardEffectPlayer__GetData_int_(
               skipMainEffectPlayer,
               (const MethodInfo_312EAAC *)Method_ClassBoardEffectPlayer_GetData_int___);
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Data_int);
  v5 = System_String__Format((System_String_o *)StringLiteral_8871/*"MainTransition{0}"*/, v4, 0);
  mainAnimation = this->fields.mainAnimation;
  v7 = v5;
  v8 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_ClassBoardBackground__SkipStartMainEffectPlayer_b__87_0__, 0);
  ClassBoardBackground__ForceSkipSimpleAnimation(this, mainAnimation, v7, v8, 0, v9);
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

  if ( (byte_4CB9D19 & 1) == 0 )
  {
    sub_1C6BA08(&ClassBoardBackground__WaitAnimationFinished_d__93_TypeInfo);
    byte_4CB9D19 = 1;
  }
  v8 = sub_1C6BC54(ClassBoardBackground__WaitAnimationFinished_d__93_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0);
  *(_DWORD *)(v8 + 16) = 0;
  *(_QWORD *)(v8 + 32) = anim;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v8 + 32), (int32_t)anim, v9, v10);
  *(_QWORD *)(v8 + 40) = name;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v8 + 40), (int32_t)name, v11, v12);
  *(_QWORD *)(v8 + 48) = endCallback;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v8 + 48), (int32_t)endCallback, v13, v14);
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

  if ( (byte_4CB9D1C & 1) == 0 )
  {
    sub_1C6BA08(&ClassBoardUtility_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__get_Keys__);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToArray_int___);
    byte_4CB9D1C = 1;
  }
  exClassReleaseEffectAnimationDic = this->fields.exClassReleaseEffectAnimationDic;
  p_exClassReleaseEffectAnimationDic = (CGThumbnailListItem_o *)&this->fields.exClassReleaseEffectAnimationDic;
  v3 = (System_Collections_Generic_Dictionary_int__object__o *)exClassReleaseEffectAnimationDic;
  if ( !exClassReleaseEffectAnimationDic )
    sub_1C6BC60(0, method);
  Keys = System_Collections_Generic_Dictionary_int__object___get_Keys(
           v3,
           (const MethodInfo_34521B0 *)Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__get_Keys__);
  v7 = System_Linq_Enumerable__ToArray_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
         (const MethodInfo_317B0B0 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
  ClassBoardUtility__SavePlayedExClassReleaseEffect(v7, 0);
  p_exClassReleaseEffectAnimationDic->klass = 0;
  sub_1C6B9AC(p_exClassReleaseEffectAnimationDic, 0, v8, v9);
}


void ClassBoardBackground___PlayStartMainEffectPlayer_b__86_0(ClassBoardBackground_o *this, const MethodInfo *method)
{
  ClassBoardEffectPlayer_o *startMainEffectPlayer; // x0

  startMainEffectPlayer = this->fields.startMainEffectPlayer;
  if ( !startMainEffectPlayer )
    sub_1C6BC60(0, method);
  ClassBoardEffectPlayer__End(startMainEffectPlayer, 0);
}


void ClassBoardBackground___SkipStartMainEffectPlayer_b__87_0(ClassBoardBackground_o *this, const MethodInfo *method)
{
  ClassBoardEffectPlayer_o *skipMainEffectPlayer; // x0

  skipMainEffectPlayer = this->fields.skipMainEffectPlayer;
  if ( !skipMainEffectPlayer )
    sub_1C6BC60(0, method);
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

  if ( (byte_4CB9D23 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4CB9D23 = 1;
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
      v6 = (UnityEngine_WaitForSeconds_o *)sub_1C6BC54(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v6, exClassReleaseEffectStartSec, 0);
      this->fields.__2__current = (Il2CppObject *)v6;
      p__2__current = &this->fields.__2__current;
      sub_1C6B9AC((CGThumbnailListItem_o *)p__2__current, (int32_t)v6, v8, v9);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
LABEL_10:
    sub_1C6BC60(_4__this, method);
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

  v2 = sub_1C6BA1C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C6BC54(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C6BA1C(&Method_ClassBoardBackground__PlayExClassReleaseEffectPlayer_d__88_System_Collections_IEnumerator_Reset__);
  sub_1C6BB30(v3, v4);
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
  if ( (byte_4CB9D24 & 1) == 0 )
  {
    sub_1C6BA08(&EventDelegate_Callback_TypeInfo);
    sub_1C6BA08(&Method_ClassBoardBackground___c__PlayGrandReturnTransitionAnimationFromTween_b__79_0__);
    sub_1C6BA08(&ClassBoardBackground___c_TypeInfo);
    this = (ClassBoardBackground__PlayGrandReturnTransitionAnimationFromTween_d__79_o *)sub_1C6BA08(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4CB9D24 = 1;
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
      _9__79_0 = (EventDelegate_Callback_o *)sub_1C6BC54(EventDelegate_Callback_TypeInfo);
      EventDelegate_Callback___ctor(
        _9__79_0,
        v15,
        Method_ClassBoardBackground___c__PlayGrandReturnTransitionAnimationFromTween_b__79_0__,
        0);
      static_fields = ClassBoardBackground___c_TypeInfo->static_fields;
      static_fields->__9__79_0 = _9__79_0;
      sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__79_0, (int32_t)_9__79_0, v17, v18);
    }
    UITweener__SetOnFinished(v12, _9__79_0, 0);
  }
  else if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    if ( _4__this )
    {
      classScoreTweenStartDelay = _4__this->fields.classScoreTweenStartDelay;
      v6 = (UnityEngine_WaitForSeconds_o *)sub_1C6BC54(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v6, classScoreTweenStartDelay, 0);
      v2->fields.__2__current = (Il2CppObject *)v6;
      p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
      sub_1C6B9AC(p__2__current, (int32_t)v6, v8, v9);
      result = 1;
      LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
      return result;
    }
LABEL_19:
    sub_1C6BC60(this, method);
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

  v2 = sub_1C6BA1C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C6BC54(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C6BA1C(&Method_ClassBoardBackground__PlayGrandReturnTransitionAnimationFromTween_d__79_System_Collections_IEnumerator_Reset__);
  sub_1C6BB30(v3, v4);
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

  if ( (byte_4CB9D25 & 1) == 0 )
  {
    sub_1C6BA08(&SimpleAnimation_State_TypeInfo);
    byte_4CB9D25 = 1;
  }
  if ( this->fields.__1__state > 1u )
    return 0;
  anim = this->fields.anim;
  this->fields.__1__state = -1;
  if ( !anim )
    sub_1C6BC60(0, method);
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
    v9 = sub_1C41D90(State, SimpleAnimation_State_TypeInfo, 5);
  }
  if ( (*(float (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v9)(v6, *(_QWORD *)(v9 + 8)) >= 1.0 )
  {
LABEL_13:
    ActionExtensions__Call(this->fields.endCallback, 0);
    return 0;
  }
  this->fields.__2__current = 0;
  p__2__current = &this->fields.__2__current;
  sub_1C6B9AC((CGThumbnailListItem_o *)p__2__current, 0, v10, v11);
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

  v2 = sub_1C6BA1C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C6BC54(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C6BA1C(&Method_ClassBoardBackground__WaitAnimationFinished_d__93_System_Collections_IEnumerator_Reset__);
  sub_1C6BB30(v3, v4);
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

  if ( (byte_4CB9D1D & 1) == 0 )
  {
    sub_1C6BA08(&ClassBoardBackground___c_TypeInfo);
    byte_4CB9D1D = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(ClassBoardBackground___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ClassBoardBackground___c_TypeInfo->static_fields->__9 = (struct ClassBoardBackground___c_o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)ClassBoardBackground___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C6BC60(this, a);
  return a->fields.classId - b->fields.classId;
}


void ClassBoardBackground___c___InitGrandClassReleasedEffect_b__83_0(
        ClassBoardBackground___c_o *this,
        ClassBoardBackground_ExClassIconSet_o *x,
        const MethodInfo *method)
{
  UnityEngine_Object_o *releaseEffect; // x20

  if ( (byte_4CB9D1E & 1) == 0 )
  {
    this = (ClassBoardBackground___c_o *)sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB9D1E = 1;
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
    sub_1C6BC60(this, x);
  }
}


void ClassBoardBackground___c___OnDestroy_b__85_0(
        ClassBoardBackground___c_o *this,
        UnityEngine_Renderer_o *x,
        const MethodInfo *method)
{
  UnityEngine_Object_o *material; // x19

  if ( (byte_4CB9D1F & 1) == 0 )
  {
    this = (ClassBoardBackground___c_o *)sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB9D1F = 1;
  }
  if ( !x )
    sub_1C6BC60(this, x);
  material = (UnityEngine_Object_o *)UnityEngine_Renderer__get_material(x, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71659676(material, 0);
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
    sub_1C6BC60(this, 0);
  UnityEngine_GameObject__SetActive(x, 0, 0);
}


void ClassBoardBackground___c___SetGrandClassIcon_b__81_3(
        ClassBoardBackground___c_o *this,
        UnityEngine_GameObject_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C6BC60(this, 0);
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
  Il2CppObject *v6; // x0
  System_String_o *v7; // x0
  int32_t iconId; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_4CB9D20 & 1) == 0 )
  {
    sub_1C6BA08(&int_TypeInfo);
    this = (ClassBoardBackground___c__DisplayClass80_0_o *)sub_1C6BA08(&StringLiteral_4478/*"ClassIcon{0}"*/);
    byte_4CB9D20 = 1;
  }
  if ( !x )
    sub_1C6BC60(this, x);
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)x, 0);
  iconId = v4->fields.iconId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId);
  v7 = System_String__Format((System_String_o *)StringLiteral_4478/*"ClassIcon{0}"*/, v6, 0);
  return System_String__op_Equality(name, v7, 0);
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
    sub_1C6BC60(this, x);
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
    sub_1C6BC60(this, 0);
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
    sub_1C6BC60(this, 0);
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
    sub_1C6BC60(this, 0);
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
  Il2CppObject *v6; // x0
  System_String_o *v7; // x0
  int32_t iconId; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_4CB9D21 & 1) == 0 )
  {
    sub_1C6BA08(&int_TypeInfo);
    this = (ClassBoardBackground___c__DisplayClass81_0_o *)sub_1C6BA08(&StringLiteral_7140/*"GrandClassIcon{0}"*/);
    byte_4CB9D21 = 1;
  }
  if ( !x )
    sub_1C6BC60(this, x);
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)x, 0);
  iconId = v4->fields.iconId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId);
  v7 = System_String__Format((System_String_o *)StringLiteral_7140/*"GrandClassIcon{0}"*/, v6, 0);
  return System_String__op_Equality(name, v7, 0);
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
    sub_1C6BC60(this, x);
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
    sub_1C6BC60(this, 0);
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
    sub_1C6BC60(this, 0);
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
    sub_1C6BC60(this, 0);
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

  if ( (byte_4CB9D22 & 1) == 0 )
  {
    sub_1C6BA08(&ClassBoardUtility_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__get_Keys__);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToArray_int___);
    byte_4CB9D22 = 1;
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
           (const MethodInfo_34521B0 *)Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__get_Keys__);
  v7 = System_Linq_Enumerable__ToArray_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
         (const MethodInfo_317B0B0 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
  ClassBoardUtility__SavePlayedGrandExClassReleaseEffect(v7, 0);
  v10 = this->fields.CS___8__locals1;
  if ( !v10
    || (anim = (struct SimpleAnimation_o *)v10->fields.__4__this) == 0
    || (*(_QWORD *)&anim[1].fields.m_Initialized = 0,
        sub_1C6B9AC((CGThumbnailListItem_o *)&anim[1].fields.m_Initialized, 0, v8, v9),
        (v11 = this->fields.CS___8__locals1) == 0) )
  {
LABEL_13:
    sub_1C6BC60(anim, method);
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
    sub_1C6BC60(0, method);
  SimpleAnimation__Stop(anim, 0);
}