void ClassBoardBackground___ctor(ClassBoardBackground_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1

  if ( (byte_4C2AC21 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_16260/*"_MainTex"*/);
    byte_4C2AC21 = 1;
  }
  v5 = StringLiteral_16260/*"_MainTex"*/;
  this->fields.iconMaterialPropertyName = (struct System_String_o *)StringLiteral_16260/*"_MainTex"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.iconMaterialPropertyName, v5, v2, v3);
  *(_OWORD *)&this->fields.classScorePosXMax = xmmword_C0A8C0;
  this->fields.classScoreTweenStartDelay = 1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ClassBoardBackground__ActivateEarthAccessories(ClassBoardBackground_o *this, bool value, const MethodInfo *method)
{
  UnityEngine_GameObject_o *earthAccessoriesObject; // x0

  earthAccessoriesObject = this->fields.earthAccessoriesObject;
  if ( !earthAccessoriesObject )
    sub_1C2D6EC(0, value);
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

  if ( (byte_4C2AC0C & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_ClassBoardBackground_PlayStartMainEffectPlayer__);
    sub_1C2D490(&Method_ClassBoardBackground_SkipStartMainEffectPlayer__);
    sub_1C2D490(&ClassBoardEffectPlayer_TypeInfo);
    byte_4C2AC0C = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_8;
  name = UnityEngine_Object__get_name(gameObject, 0);
  v6 = (ClassBoardEffectPlayer_o *)sub_1C2D6DC(ClassBoardEffectPlayer_TypeInfo);
  ClassBoardEffectPlayer___ctor_47666036(v6, name, 0);
  this->fields.startMainEffectPlayer = v6;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.startMainEffectPlayer, (int32_t)v6, v7, v8);
  startMainEffectPlayer = this->fields.startMainEffectPlayer;
  v10 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_ClassBoardBackground_PlayStartMainEffectPlayer__, 0);
  if ( !startMainEffectPlayer )
    goto LABEL_8;
  startMainEffectPlayer->fields.playCallback = v10;
  sub_1C2D434((CGThumbnailListItem_o *)&startMainEffectPlayer->fields.playCallback, (int32_t)v10, v11, v12);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_8;
  v13 = UnityEngine_Object__get_name(gameObject, 0);
  v14 = (ClassBoardEffectPlayer_o *)sub_1C2D6DC(ClassBoardEffectPlayer_TypeInfo);
  ClassBoardEffectPlayer___ctor_47666036(v14, v13, 0);
  this->fields.skipMainEffectPlayer = v14;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.skipMainEffectPlayer, (int32_t)v14, v15, v16);
  skipMainEffectPlayer = this->fields.skipMainEffectPlayer;
  v18 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v18, (Il2CppObject *)this, Method_ClassBoardBackground_SkipStartMainEffectPlayer__, 0);
  if ( !skipMainEffectPlayer )
LABEL_8:
    sub_1C2D6EC(gameObject, v4);
  skipMainEffectPlayer->fields.playCallback = v18;
  sub_1C2D434((CGThumbnailListItem_o *)&skipMainEffectPlayer->fields.playCallback, (int32_t)v18, v19, v20);
}


void ClassBoardBackground__CallAnimationEventBoardParent(ClassBoardBackground_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *boardParentAnimation; // x20
  UnityEngine_Object_o *boardParentAnimationClip; // x20
  __int64 v5; // x1
  UnityEngine_Object_o *name; // x0
  SimpleAnimation_o *v7; // x19

  if ( (byte_4C2AC20 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2AC20 = 1;
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
        sub_1C2D6EC(name, v5);
      }
      SimpleAnimation__Play_66404364(v7, (System_String_o *)name, 0);
    }
  }
}


void ClassBoardBackground__CallAnimationEventShowBoard(ClassBoardBackground_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  ActionExtensions__Call(this->fields.showBoardCallback, 0);
  this->fields.showBoardCallback = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.showBoardCallback, 0, v3, v4);
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

  if ( (byte_4C2AC0D & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2AC0D = 1;
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
    sub_1C2D6EC(classBoardViewCamera, camera);
  }
  UnityEngine_GameObject__SetActive(v9, (unsigned __int8)classBoardViewCamera & 1, 0);
  this->fields.currentCamera = camera;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.currentCamera, (int32_t)camera, v10, v11);
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
  if ( (byte_4C2AC1E & 1) == 0 )
  {
    this = (ClassBoardBackground_o *)sub_1C2D490(&SimpleAnimation_State_TypeInfo);
    byte_4C2AC1E = 1;
  }
  if ( !anim )
    goto LABEL_14;
  SimpleAnimation__Rewind(anim, 0);
  SimpleAnimation__Play_66404364(anim, name, 0);
  this = (ClassBoardBackground_o *)SimpleAnimation__get_Item(anim, name, 0);
  v12 = this;
  LODWORD(v6) = 1.0;
  if ( isPlaySpecifiedPoint )
    *(float *)&v6 = v11->fields.directlyGrandAnimationStartPoint;
  if ( !this )
LABEL_14:
    sub_1C2D6EC(this, anim);
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
    v16 = sub_1C7DCA8(this, SimpleAnimation_State_TypeInfo, 6);
  }
  v17 = (ClassBoardBackground_o *)(*(__int64 (__fastcall **)(ClassBoardBackground_o *, _QWORD, long double))v16)(
                                    v12,
                                    *(_QWORD *)(v16 + 8),
                                    v6);
  v19 = ClassBoardBackground__WaitAnimationFinished(v17, anim, name, endCallback, v18);
  UnityEngine_MonoBehaviour__StartCoroutine_71149276((UnityEngine_MonoBehaviour_o *)v11, v19, 0);
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

  if ( (byte_4C2AC15 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&System_Comparison_ClassBoardClassEntity__TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_ClassBoardClassMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__bool__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_int__bool__TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ClassBoardClassEntity__Sort__);
    sub_1C2D490(&Method_ClassBoardBackground___c__GetIconIdList_b__82_0__);
    sub_1C2D490(&ClassBoardBackground___c_TypeInfo);
    byte_4C2AC15 = 1;
  }
  entitys = 0;
  memset(&v31, 0, sizeof(v31));
  entity = 0;
  v6 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v6,
    (const MethodInfo_33D2048 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
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
      v10 = (System_Comparison_T__o *)sub_1C2D6DC(System_Comparison_ClassBoardClassEntity__TypeInfo);
      System_Comparison_object____ctor(v10, v11, Method_ClassBoardBackground___c__GetIconIdList_b__82_0__, 0);
      static_fields = ClassBoardBackground___c_TypeInfo->static_fields;
      static_fields->__9__82_0 = (struct System_Comparison_ClassBoardClassEntity__o *)v10;
      sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__82_0, (int32_t)v10, v13, v14);
    }
    if ( v9 )
    {
      System_Collections_Generic_List_object___Sort_58242632(
        v9,
        v10,
        (const MethodInfo_378B648 *)Method_System_Collections_Generic_List_ClassBoardClassEntity__Sort__);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v15 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantClassMaster___);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantClassMaster___);
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
              (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__);
            v31 = v29;
            while ( 1 )
            {
              while ( 1 )
              {
                v18 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                        &v31,
                        (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__);
                if ( !v18 )
                {
                  System_Collections_Generic_List_Enumerator_object___Dispose(
                    &v31,
                    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__);
                  return v6;
                }
                current = (ClassBoardClassEntity_o *)v31.fields._current;
                if ( !isGrand )
                  break;
                if ( !v31.fields._current )
                  sub_1C2D6EC(v18, v19);
                if ( !System_Linq_Enumerable__Contains_int_(
                        v16,
                        HIDWORD(v31.fields._current[1].klass),
                        (const MethodInfo_30EB900 *)Method_System_Linq_Enumerable_Contains_int___)
                  || v17 == current->fields.classId )
                {
                  goto LABEL_33;
                }
              }
              v21 = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              if ( !current )
                sub_1C2D6EC(v21, v19);
              if ( System_Linq_Enumerable__Contains_int_(
                     (System_Collections_Generic_IEnumerable_TSource__o *)BalanceConfig_TypeInfo->static_fields->PlayableBeastClassIds,
                     current->fields.classId,
                     (const MethodInfo_30EB900 *)Method_System_Linq_Enumerable_Contains_int___) )
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
                      (const MethodInfo_3387DE4 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
              if ( v23 )
              {
                if ( !entity )
                  sub_1C2D6EC(v23, v24);
                monitor_high = HIDWORD(entity[2].monitor);
                IsOpen = ClassBoardClassEntity__IsOpen(current, 0);
                if ( !v6 )
                  sub_1C2D6EC(IsOpen, v27);
                System_Collections_Generic_Dictionary_int__bool___Add(
                  v6,
                  monitor_high,
                  IsOpen,
                  (const MethodInfo_33D2A20 *)Method_System_Collections_Generic_Dictionary_int__bool__Add__);
              }
            }
          }
        }
      }
    }
LABEL_43:
    sub_1C2D6EC(Master_object, v8);
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
    sub_1C2D6EC(0, method);
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
  if ( (byte_4C2AC16 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_ClassBoardBackground_ExClassIconSet__TypeInfo);
    sub_1C2D490(&Method_BasicHelper_ForEach_ClassBoardBackground_ExClassIconSet___);
    sub_1C2D490(&Method_ClassBoardBackground___c__InitGrandClassReleasedEffect_b__83_0__);
    this = (ClassBoardBackground_o *)sub_1C2D490(&ClassBoardBackground___c_TypeInfo);
    byte_4C2AC16 = 1;
  }
  grandExIconSet = (System_Collections_Generic_IEnumerable_T__o *)v2->fields.grandExIconSet;
  if ( !grandExIconSet )
    sub_1C2D6EC(this, method);
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
      _9__83_0 = (System_Action_object__o *)sub_1C2D6DC(System_Action_ClassBoardBackground_ExClassIconSet__TypeInfo);
      System_Action_object____ctor(
        _9__83_0,
        v6,
        Method_ClassBoardBackground___c__InitGrandClassReleasedEffect_b__83_0__,
        0);
      static_fields = ClassBoardBackground___c_TypeInfo->static_fields;
      static_fields->__9__83_0 = (struct System_Action_ClassBoardBackground_ExClassIconSet__o *)_9__83_0;
      sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__83_0, (int32_t)_9__83_0, v8, v9);
    }
    BasicHelper__ForEach_object_(
      grandExIconSet,
      (System_Action_T__o *)_9__83_0,
      (const MethodInfo_30BA910 *)Method_BasicHelper_ForEach_ClassBoardBackground_ExClassIconSet___);
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

  if ( (byte_4C2AC18 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_Renderer__TypeInfo);
    sub_1C2D490(&Method_BasicHelper_ForEach_Renderer___);
    sub_1C2D490(&Method_ClassBoardBackground___c__OnDestroy_b__85_0__);
    sub_1C2D490(&ClassBoardBackground___c_TypeInfo);
    byte_4C2AC18 = 1;
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
    _9__85_0 = (System_Action_object__o *)sub_1C2D6DC(System_Action_Renderer__TypeInfo);
    System_Action_object____ctor(_9__85_0, v6, Method_ClassBoardBackground___c__OnDestroy_b__85_0__, 0);
    static_fields = ClassBoardBackground___c_TypeInfo->static_fields;
    static_fields->__9__85_0 = (struct System_Action_Renderer__o *)_9__85_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__85_0, (int32_t)_9__85_0, v8, v9);
  }
  BasicHelper__ForEach_object_(
    iconRenderers,
    (System_Action_T__o *)_9__85_0,
    (const MethodInfo_30BA910 *)Method_BasicHelper_ForEach_Renderer___);
}


void ClassBoardBackground__PlayBoardParentBeforeAnimation(ClassBoardBackground_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *boardParentAnimation; // x20
  UnityEngine_Object_o *boardParentBeforeAnimationClip; // x20
  __int64 v5; // x1
  SimpleAnimation_o *v6; // x0

  if ( (byte_4C2AC17 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2AC17 = 1;
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
        sub_1C2D6EC(v6, v5);
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
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C2AC1B & 1) == 0 )
  {
    sub_1C2D490(&ClassBoardBackground__PlayExClassReleaseEffectPlayer_d__88_TypeInfo);
    byte_4C2AC1B = 1;
  }
  v3 = sub_1C2D6DC(ClassBoardBackground__PlayExClassReleaseEffectPlayer_d__88_TypeInfo);
  ClassBoardBackground__PlayExClassReleaseEffectPlayer_d__88___ctor(
    (ClassBoardBackground__PlayExClassReleaseEffectPlayer_d__88_o *)v3,
    0,
    0);
  if ( !v3 )
    sub_1C2D6EC(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v6, v7);
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

  if ( (byte_4C2AC11 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&SimpleAnimation_State_TypeInfo);
    sub_1C2D490(&StringLiteral_7148/*"GrandReturn"*/);
    byte_4C2AC11 = 1;
  }
  this->fields.boardRootAnimation = classBoardAnimation;
  sub_1C2D434(
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
    SimpleAnimation__Play_66404364(v21, (System_String_o *)name, 0);
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
      v27 = sub_1C7DCA8(name, SimpleAnimation_State_TypeInfo, 6);
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
      sub_1C2D6EC(name, v16);
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
      v33 = sub_1C7DCA8(name, SimpleAnimation_State_TypeInfo, 8);
    }
    (*(void (__fastcall **)(UnityEngine_Object_o *, _QWORD, float))v33)(v30, *(_QWORD *)(v33 + 8), 1.0);
  }
  this->fields.grandRootAnimation = grandBoardAnimation;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.grandRootAnimation, (int32_t)grandBoardAnimation, v13, v14);
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
  SimpleAnimation__Play_66404364(v40, (System_String_o *)name, 0);
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
    v46 = sub_1C7DCA8(name, SimpleAnimation_State_TypeInfo, 6);
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
    v52 = sub_1C7DCA8(name, SimpleAnimation_State_TypeInfo, 8);
  }
  (*(void (__fastcall **)(UnityEngine_Object_o *, _QWORD, float))v52)(v49, *(_QWORD *)(v52 + 8), 1.0);
LABEL_75:
  v53 = isQuick;
  ClassBoardBackground__PlaySimpleAnimation(
    this,
    this->fields.mainAnimation,
    (System_String_o *)StringLiteral_7148/*"GrandReturn"*/,
    endCallback,
    v53,
    0,
    v35);
  v55 = ClassBoardBackground__PlayGrandReturnTransitionAnimationFromTween(this, v53, v54);
  UnityEngine_MonoBehaviour__StartCoroutine_71149276((UnityEngine_MonoBehaviour_o *)this, v55, 0);
}


System_Collections_IEnumerator_o *ClassBoardBackground__PlayGrandReturnTransitionAnimationFromTween(
        ClassBoardBackground_o *this,
        bool isQuick,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C2AC12 & 1) == 0 )
  {
    sub_1C2D490(&ClassBoardBackground__PlayGrandReturnTransitionAnimationFromTween_d__79_TypeInfo);
    byte_4C2AC12 = 1;
  }
  v5 = sub_1C2D6DC(ClassBoardBackground__PlayGrandReturnTransitionAnimationFromTween_d__79_TypeInfo);
  ClassBoardBackground__PlayGrandReturnTransitionAnimationFromTween_d__79___ctor(
    (ClassBoardBackground__PlayGrandReturnTransitionAnimationFromTween_d__79_o *)v5,
    0,
    0);
  if ( !v5 )
    sub_1C2D6EC(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v8, v9);
  *(_BYTE *)(v5 + 40) = isQuick;
  return (System_Collections_IEnumerator_o *)v5;
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

  if ( (byte_4C2AC0F & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&SimpleAnimation_State_TypeInfo);
    sub_1C2D490(&StringLiteral_7160/*"GrandStart"*/);
    byte_4C2AC0F = 1;
  }
  this->fields.boardRootAnimation = classBoardAnimation;
  sub_1C2D434(
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
    SimpleAnimation__Play_66404364(v20, (System_String_o *)name, 0);
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
      v26 = sub_1C7DCA8(name, SimpleAnimation_State_TypeInfo, 6);
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
      sub_1C2D6EC(name, v15);
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
      v32 = sub_1C7DCA8(name, SimpleAnimation_State_TypeInfo, 8);
    }
    (*(void (__fastcall **)(UnityEngine_Object_o *, _QWORD, float))v32)(v29, *(_QWORD *)(v32 + 8), 1.0);
  }
  ClassBoardBackground__PlayGrandTransitionAnimationFromTween(this, isQuick, v13);
  this->fields.grandRootAnimation = grandBoardAnimation;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.grandRootAnimation, (int32_t)grandBoardAnimation, v33, v34);
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
  SimpleAnimation__Play_66404364(v41, (System_String_o *)name, 0);
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
    v47 = sub_1C7DCA8(name, SimpleAnimation_State_TypeInfo, 6);
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
    v53 = sub_1C7DCA8(name, SimpleAnimation_State_TypeInfo, 8);
  }
  (*(void (__fastcall **)(UnityEngine_Object_o *, _QWORD, float))v53)(v50, *(_QWORD *)(v53 + 8), 1.0);
LABEL_73:
  ClassBoardBackground__PlaySimpleAnimation(
    this,
    this->fields.mainAnimation,
    (System_String_o *)StringLiteral_7160/*"GrandStart"*/,
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

  if ( (byte_4C2AC10 & 1) == 0 )
  {
    sub_1C2D490(&EventDelegate_Callback_TypeInfo);
    sub_1C2D490(&Method_ClassBoardBackground___c__PlayGrandTransitionAnimationFromTween_b__77_0__);
    sub_1C2D490(&ClassBoardBackground___c_TypeInfo);
    byte_4C2AC10 = 1;
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
    sub_1C2D6EC(0, v13);
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
    _9__77_0 = (EventDelegate_Callback_o *)sub_1C2D6DC(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(
      _9__77_0,
      v17,
      Method_ClassBoardBackground___c__PlayGrandTransitionAnimationFromTween_b__77_0__,
      0);
    static_fields = ClassBoardBackground___c_TypeInfo->static_fields;
    static_fields->__9__77_0 = _9__77_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__77_0, (int32_t)_9__77_0, v19, v20);
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
      sub_1C2D6EC(this, 0);
    SimpleAnimation__Rewind(anim, 0);
    v11 = SimpleAnimation__Play_66404364(anim, name, 0);
    v13 = ClassBoardBackground__WaitAnimationFinished((ClassBoardBackground_o *)v11, anim, name, endCallback, v12);
    UnityEngine_MonoBehaviour__StartCoroutine_71149276((UnityEngine_MonoBehaviour_o *)this, v13, 0);
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

  if ( (byte_4C2AC1C & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_ClassBoardBackground__PlayStartExClassReleaseEffectPlayer_b__89_0__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_KeyValuePair_int__SimpleAnimation__get_Key__);
    sub_1C2D490(&Method_System_Collections_Generic_KeyValuePair_int__SimpleAnimation__get_Value__);
    sub_1C2D490(&Method_ClassBoardBackground___c__PlayStartExClassReleaseEffectPlayer_b__89_1__);
    sub_1C2D490(&ClassBoardBackground___c_TypeInfo);
    sub_1C2D490(&StringLiteral_10554/*"Particle_CrassIcon_Ex_Released"*/);
    byte_4C2AC1C = 1;
  }
  memset(&v18, 0, sizeof(v18));
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.exClassReleaseEffectAnimationDic, 0) )
  {
    exClassReleaseEffectAnimationDic = this->fields.exClassReleaseEffectAnimationDic;
    if ( !exClassReleaseEffectAnimationDic )
      sub_1C2D6EC(0, v3);
    System_Collections_Generic_Dictionary_int__object___GetEnumerator(
      &v17,
      (System_Collections_Generic_Dictionary_int__object__o *)exClassReleaseEffectAnimationDic,
      (const MethodInfo_33E16B4 *)Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__GetEnumerator__);
    v18 = v17;
    v5 = 1;
    while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
              &v18,
              (const MethodInfo_35380F0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__MoveNext__) )
    {
      value = v18.fields._current.fields.value;
      if ( (v5 & 1) != 0 )
      {
        v8 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
        System_Action___ctor(
          v8,
          (Il2CppObject *)this,
          Method_ClassBoardBackground__PlayStartExClassReleaseEffectPlayer_b__89_0__,
          0);
        ClassBoardBackground__PlaySimpleAnimation(
          this,
          (SimpleAnimation_o *)value,
          (System_String_o *)StringLiteral_10554/*"Particle_CrassIcon_Ex_Released"*/,
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
        v11 = (System_String_o *)StringLiteral_10554/*"Particle_CrassIcon_Ex_Released"*/;
        _9__89_1 = v10->static_fields->__9__89_1;
        if ( !_9__89_1 )
        {
          if ( !v10->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v10);
            v10 = ClassBoardBackground___c_TypeInfo;
          }
          v13 = (Il2CppObject *)v10->static_fields->__9;
          _9__89_1 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
          System_Action___ctor(
            _9__89_1,
            v13,
            Method_ClassBoardBackground___c__PlayStartExClassReleaseEffectPlayer_b__89_1__,
            0);
          static_fields = ClassBoardBackground___c_TypeInfo->static_fields;
          static_fields->__9__89_1 = _9__89_1;
          sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__89_1, (int32_t)_9__89_1, v15, v16);
        }
        ClassBoardBackground__PlaySimpleAnimation(this, (SimpleAnimation_o *)value, v11, _9__89_1, 0, 0, v6);
        v5 = 0;
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
      &v18,
      (const MethodInfo_3538214 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__Dispose__);
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

  if ( (byte_4C2AC1D & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_KeyValuePair_int__SimpleAnimation__get_Key__);
    sub_1C2D490(&Method_System_Collections_Generic_KeyValuePair_int__SimpleAnimation__get_Value__);
    sub_1C2D490(&ClassBoardBackground___c__DisplayClass90_0_TypeInfo);
    sub_1C2D490(&Method_ClassBoardBackground___c__DisplayClass90_1__PlayStartGrandExClassReleaseEffectPlayer_b__0__);
    sub_1C2D490(&Method_ClassBoardBackground___c__DisplayClass90_1__PlayStartGrandExClassReleaseEffectPlayer_b__1__);
    sub_1C2D490(&ClassBoardBackground___c__DisplayClass90_1_TypeInfo);
    sub_1C2D490(&StringLiteral_10555/*"Particle_GrandCrassIcon_Ex_Released"*/);
    sub_1C2D490(&StringLiteral_10554/*"Particle_CrassIcon_Ex_Released"*/);
    byte_4C2AC1D = 1;
  }
  memset(&v26, 0, sizeof(v26));
  v5 = sub_1C2D6DC(ClassBoardBackground___c__DisplayClass90_0_TypeInfo);
  ClassBoardBackground___c__DisplayClass90_0___ctor((ClassBoardBackground___c__DisplayClass90_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_16;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = callback;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 24), (int32_t)callback, v10, v11);
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
    sub_1C2D6EC(grandExClassReleaseEffectAnimationDic, v7);
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v25,
    (System_Collections_Generic_Dictionary_int__object__o *)grandExClassReleaseEffectAnimationDic,
    (const MethodInfo_33E16B4 *)Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__GetEnumerator__);
  v26 = v25;
  v12 = 1;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v26,
            (const MethodInfo_35380F0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__MoveNext__) )
  {
    value = v26.fields._current.fields.value;
    v14 = sub_1C2D6DC(ClassBoardBackground___c__DisplayClass90_1_TypeInfo);
    ClassBoardBackground___c__DisplayClass90_1___ctor((ClassBoardBackground___c__DisplayClass90_1_o *)v14, 0);
    if ( !v14 )
      sub_1C2D6EC(v15, v16);
    *(_QWORD *)(v14 + 24) = v5;
    sub_1C2D434((CGThumbnailListItem_o *)(v14 + 24), v5, v17, v18);
    *(_QWORD *)(v14 + 16) = value;
    sub_1C2D434((CGThumbnailListItem_o *)(v14 + 16), (int32_t)value, v19, v20);
    v21 = *(SimpleAnimation_o **)(v14 + 16);
    v22 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    if ( (v12 & 1) != 0 )
    {
      System_Action___ctor(
        v22,
        (Il2CppObject *)v14,
        Method_ClassBoardBackground___c__DisplayClass90_1__PlayStartGrandExClassReleaseEffectPlayer_b__0__,
        0);
      ClassBoardBackground__PlaySimpleAnimation(this, v21, (System_String_o *)StringLiteral_10555/*"Particle_GrandCrassIcon_Ex_Released"*/, v22, 0, 0, v23);
    }
    else
    {
      System_Action___ctor(
        v22,
        (Il2CppObject *)v14,
        Method_ClassBoardBackground___c__DisplayClass90_1__PlayStartGrandExClassReleaseEffectPlayer_b__1__,
        0);
      ClassBoardBackground__PlaySimpleAnimation(this, v21, (System_String_o *)StringLiteral_10554/*"Particle_CrassIcon_Ex_Released"*/, v22, 0, 0, v24);
    }
    v12 = 0;
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v26,
    (const MethodInfo_3538214 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__Dispose__);
}


void ClassBoardBackground__PlayStartMainEffectPlayer(ClassBoardBackground_o *this, const MethodInfo *method)
{
  ClassBoardEffectPlayer_o *startMainEffectPlayer; // x0
  int32_t Data_int; // w20
  __int64 v5; // x2
  __int64 v6; // x3
  __int64 v7; // x4
  Il2CppObject *v8; // x0
  System_String_o *v9; // x20
  Il2CppObject *v10; // x0
  const MethodInfo *v11; // x1
  System_Collections_IEnumerator_o *v12; // x0
  SimpleAnimation_o *mainAnimation; // x21
  System_Action_o *v14; // x22
  const MethodInfo *v15; // x6
  int32_t v16; // [xsp+8h] [xbp-38h] BYREF
  int32_t v17; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C2AC19 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_ClassBoardBackground__PlayStartMainEffectPlayer_b__86_0__);
    sub_1C2D490(&Method_ClassBoardEffectPlayer_GetData_int___);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&StringLiteral_8868/*"MainTransition{0}_Release"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    sub_1C2D490(&StringLiteral_8867/*"MainTransition{0}"*/);
    byte_4C2AC19 = 1;
  }
  startMainEffectPlayer = this->fields.startMainEffectPlayer;
  if ( !startMainEffectPlayer )
    sub_1C2D6EC(0, method);
  Data_int = ClassBoardEffectPlayer__GetData_int_(
               startMainEffectPlayer,
               (const MethodInfo_30C219C *)Method_ClassBoardEffectPlayer_GetData_int___);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.exClassReleaseEffectAnimationDic, 0) )
  {
    v16 = Data_int;
    v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16, v5, v6, v7);
    v9 = System_String__Format((System_String_o *)StringLiteral_8867/*"MainTransition{0}"*/, v8, 0);
  }
  else
  {
    v17 = Data_int;
    v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17, v5, v6, v7);
    v9 = System_String__Format((System_String_o *)StringLiteral_8868/*"MainTransition{0}_Release"*/, v10, 0);
    v12 = ClassBoardBackground__PlayExClassReleaseEffectPlayer(this, v11);
    UnityEngine_MonoBehaviour__StartCoroutine_71149276((UnityEngine_MonoBehaviour_o *)this, v12, 0);
  }
  mainAnimation = this->fields.mainAnimation;
  v14 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_ClassBoardBackground__PlayStartMainEffectPlayer_b__86_0__, 0);
  ClassBoardBackground__PlaySimpleAnimation(this, mainAnimation, v9, v14, 0, 0, v15);
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

  if ( (byte_4C2AC0E & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&SimpleAnimation_State_TypeInfo);
    byte_4C2AC0E = 1;
  }
  this->fields.boardParentAnimation = animation;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.boardParentAnimation, (int32_t)animation, isQuick, method);
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
  SimpleAnimation__Play_66404364(v18, (System_String_o *)name, 0);
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
    sub_1C2D6EC(name, v9);
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
    v24 = sub_1C7DCA8(name, SimpleAnimation_State_TypeInfo, 6);
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
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.boardRoot, (int32_t)boardRootObj, (int32_t)method, v3);
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
  __int64 v22; // x2
  const MethodInfo *v23; // x3
  struct ClassBoardBackground_ExClassIconSet_array *exIconSet; // x19
  Il2CppObject *key; // x22
  __int64 v26; // x21
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  Il2CppObject *v30; // x1
  System_String_o *v31; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  Il2CppObject *v37; // x1
  System_String_o *v38; // x0
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  Il2CppObject *v44; // x1
  System_String_o *v45; // x0
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  _BOOL8 v48; // x0
  __int64 v49; // x1
  __int64 v50; // x2
  struct ClassBoardBackground_ExClassIconSet_array *v51; // x8
  unsigned int v52; // w19
  System_Func_object__bool__o **v53; // x22
  System_Func_object__bool__o **v54; // x24
  System_Func_object__bool__o **v55; // x25
  unsigned int v56; // w9
  ClassBoardBackground_ExClassIconSet_o *v57; // x8
  System_Func_object__bool__o *v58; // x23
  System_Collections_Generic_IEnumerable_TSource__o *textures; // x27
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  Il2CppObject *v62; // x0
  System_Func_object__bool__o *v63; // x26
  UnityEngine_Object_o *v64; // x23
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  Il2CppObject *v67; // x0
  System_Func_object__bool__o *v68; // x28
  UnityEngine_Object_o *v69; // x26
  int32_t v70; // w2
  const MethodInfo *v71; // x3
  Il2CppObject *v72; // x27
  struct ClassBoardBackground_ExClassIconSet_array *v73; // x8
  ClassBoardBackground_ExClassIconSet_o *v74; // x8
  UnityEngine_Renderer_o *v75; // x0
  UnityEngine_Material_o *material; // x0
  __int64 v77; // x1
  __int64 v78; // x0
  __int64 v79; // x1
  __int64 v80; // x2
  struct ClassBoardBackground_ExClassIconSet_array *v81; // x8
  ClassBoardBackground_ExClassIconSet_o *v82; // x8
  UnityEngine_Renderer_o *effectRenderer; // x0
  UnityEngine_Material_o *v84; // x0
  __int64 v85; // x1
  __int64 v86; // x0
  __int64 v87; // x1
  __int64 v88; // x2
  struct ClassBoardBackground_ExClassIconSet_array *v89; // x8
  ClassBoardBackground_ExClassIconSet_o *v90; // x8
  UnityEngine_Renderer_o *onRenderer; // x0
  UnityEngine_Material_o *v92; // x0
  __int64 v93; // x1
  __int64 v94; // x0
  __int64 v95; // x1
  __int64 v96; // x2
  struct ClassBoardBackground_ExClassIconSet_array *v97; // x8
  ClassBoardBackground_ExClassIconSet_o *v98; // x8
  UnityEngine_Renderer_o *effectGlowRenderer; // x0
  UnityEngine_Material_o *v100; // x0
  __int64 v101; // x1
  __int64 v102; // x0
  __int64 v103; // x1
  __int64 v104; // x2
  struct ClassBoardBackground_ExClassIconSet_array *v105; // x8
  ClassBoardBackground_ExClassIconSet_o *v106; // x8
  UnityEngine_Component_o *v107; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v109; // x1
  __int64 v110; // x0
  __int64 v111; // x1
  __int64 v112; // x2
  struct ClassBoardBackground_ExClassIconSet_array *v113; // x8
  ClassBoardBackground_ExClassIconSet_o *v114; // x8
  UnityEngine_Component_o *v115; // x0
  UnityEngine_GameObject_o *v116; // x0
  __int64 v117; // x1
  __int64 v118; // x0
  __int64 v119; // x1
  __int64 v120; // x2
  struct ClassBoardBackground_ExClassIconSet_array *v121; // x8
  ClassBoardBackground_ExClassIconSet_o *v122; // x8
  UnityEngine_GameObject_o *releaseEffect; // x0
  UnityEngine_GameObject_o *v124; // x0
  __int64 v125; // x1
  _BOOL8 IsPlayed; // x0
  __int64 v127; // x1
  __int64 v128; // x2
  struct ClassBoardBackground_ExClassIconSet_array *v129; // x8
  ClassBoardBackground_ExClassIconSet_o *v130; // x8
  UnityEngine_Object_o *animation; // x21
  _BOOL8 v132; // x0
  __int64 v133; // x1
  __int64 v134; // x2
  struct ClassBoardBackground_ExClassIconSet_array *v135; // x8
  ClassBoardBackground_ExClassIconSet_o *v136; // x8
  UnityEngine_Component_o *v137; // x0
  UnityEngine_GameObject_o *v138; // x0
  __int64 v139; // x1
  __int64 v140; // x0
  __int64 v141; // x1
  __int64 v142; // x2
  struct ClassBoardBackground_ExClassIconSet_array *v143; // x8
  ClassBoardBackground_ExClassIconSet_o *v144; // x8
  UnityEngine_Component_o *v145; // x0
  UnityEngine_GameObject_o *v146; // x0
  __int64 v147; // x1
  __int64 v148; // x0
  __int64 v149; // x1
  __int64 v150; // x2
  struct ClassBoardBackground_ExClassIconSet_array *v151; // x8
  ClassBoardBackground_ExClassIconSet_o *v152; // x8
  struct System_Collections_Generic_Dictionary_int__SimpleAnimation__o *exClassReleaseEffectAnimationDic; // x0
  int max_length; // w8
  unsigned int v155; // w20
  ClassBoardBackground_ExClassIconSet_o *v156; // x21
  __int64 v157; // [xsp+0h] [xbp-C0h]
  int32_t classId[2]; // [xsp+8h] [xbp-B8h]
  int v160; // [xsp+18h] [xbp-A8h] BYREF
  int v161; // [xsp+1Ch] [xbp-A4h] BYREF
  _OWORD v162[2]; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v163; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4C2AC13 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_Renderer__TypeInfo);
    sub_1C2D490(&Method_BasicHelper_ForEach_Renderer___);
    sub_1C2D490(&ClassBoardUtility_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__SimpleAnimation___ctor__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_int__SimpleAnimation__TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__get_Current__);
    sub_1C2D490(&System_Func_Texture__bool__TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Key__);
    sub_1C2D490(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Value__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_ClassBoardBackground___c__DisplayClass80_0__SetClassIcon_b__0__);
    sub_1C2D490(&Method_ClassBoardBackground___c__DisplayClass80_0__SetClassIcon_b__1__);
    sub_1C2D490(&ClassBoardBackground___c__DisplayClass80_0_TypeInfo);
    sub_1C2D490(&Method_ClassBoardBackground___c__DisplayClass80_1__SetClassIcon_b__2__);
    sub_1C2D490(&Method_ClassBoardBackground___c__DisplayClass80_1__SetClassIcon_b__3__);
    sub_1C2D490(&Method_ClassBoardBackground___c__DisplayClass80_1__SetClassIcon_b__4__);
    sub_1C2D490(&ClassBoardBackground___c__DisplayClass80_1_TypeInfo);
    sub_1C2D490(&StringLiteral_4477/*"ClassIconEx_off_{0}"*/);
    sub_1C2D490(&StringLiteral_4478/*"ClassIconEx_on_{0}"*/);
    sub_1C2D490(&StringLiteral_4476/*"ClassIconEx_ef_glow_{0}"*/);
    byte_4C2AC13 = 1;
  }
  memset(&v163, 0, 32);
  v6 = sub_1C2D6DC(ClassBoardBackground___c__DisplayClass80_0_TypeInfo);
  ClassBoardBackground___c__DisplayClass80_0___ctor((ClassBoardBackground___c__DisplayClass80_0_o *)v6, 0);
  if ( !v6 )
    goto LABEL_162;
  *(_DWORD *)(v6 + 16) = iconId;
  *(_QWORD *)(v6 + 24) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v6 + 24), (int32_t)this, v9, v10);
  iconTextures = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.iconTextures;
  v12 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_Texture__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)v6,
    Method_ClassBoardBackground___c__DisplayClass80_0__SetClassIcon_b__0__,
    0);
  v13 = System_Linq_Enumerable__FirstOrDefault_object__51348472(
          iconTextures,
          (System_Func_TSource__bool__o *)v12,
          (const MethodInfo_30F83F8 *)Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
  *(_QWORD *)(v6 + 32) = v13;
  sub_1C2D434((CGThumbnailListItem_o *)(v6 + 32), (int32_t)v13, v14, v15);
  v16 = *(UnityEngine_Object_o **)(v6 + 32);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v16, 0, 0) )
    return;
  iconRenderers = (System_Collections_Generic_IEnumerable_T__o *)this->fields.iconRenderers;
  v18 = (System_Action_object__o *)sub_1C2D6DC(System_Action_Renderer__TypeInfo);
  System_Action_object____ctor(
    v18,
    (Il2CppObject *)v6,
    Method_ClassBoardBackground___c__DisplayClass80_0__SetClassIcon_b__1__,
    0);
  BasicHelper__ForEach_object_(
    iconRenderers,
    (System_Action_T__o *)v18,
    (const MethodInfo_30BA910 *)Method_BasicHelper_ForEach_Renderer___);
  v19 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_int__SimpleAnimation__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v19,
    (const MethodInfo_33E08A8 *)Method_System_Collections_Generic_Dictionary_int__SimpleAnimation___ctor__);
  this->fields.exClassReleaseEffectAnimationDic = (struct System_Collections_Generic_Dictionary_int__SimpleAnimation__o *)v19;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.exClassReleaseEffectAnimationDic, (int32_t)v19, v20, v21);
  exIconSet = this->fields.exIconSet;
  if ( !exIconSet )
LABEL_162:
    sub_1C2D6EC(offRenderer, v8);
  if ( !exIconSet->max_length )
    return;
  if ( (baseId & 0xFFFFFFFE) != 8 )
  {
    max_length = exIconSet->max_length;
    if ( max_length < 1 )
      return;
    v155 = 0;
    while ( 1 )
    {
      if ( v155 >= max_length )
        sub_1C2D6F4(offRenderer, v8, v22);
      v156 = exIconSet->m_Items[v155];
      if ( !v156 )
        break;
      offRenderer = (UnityEngine_Component_o *)v156->fields.offRenderer;
      if ( !offRenderer )
        break;
      offRenderer = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(offRenderer, 0);
      if ( !offRenderer )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)offRenderer, 0, 0);
      offRenderer = (UnityEngine_Component_o *)v156->fields.onRenderer;
      if ( !offRenderer )
        break;
      offRenderer = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(offRenderer, 0);
      if ( !offRenderer )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)offRenderer, 0, 0);
      offRenderer = (UnityEngine_Component_o *)v156->fields.releaseEffect;
      if ( !offRenderer )
        break;
      offRenderer = (UnityEngine_Component_o *)UnityEngine_GameObject__get_gameObject(
                                                 (UnityEngine_GameObject_o *)offRenderer,
                                                 0);
      if ( !offRenderer )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)offRenderer, 0, 0);
      max_length = exIconSet->max_length;
      if ( (int)++v155 >= max_length )
        return;
    }
    goto LABEL_162;
  }
  offRenderer = (UnityEngine_Component_o *)ClassBoardBackground__GetIconIdList(
                                             (ClassBoardBackground_o *)offRenderer,
                                             baseId,
                                             0,
                                             v23);
  if ( !offRenderer )
    goto LABEL_162;
  System_Collections_Generic_Dictionary_int__bool___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v162,
    (System_Collections_Generic_Dictionary_int__bool__o *)offRenderer,
    (const MethodInfo_33D2E0C *)Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
  *(_OWORD *)&v163.fields._dictionary = v162[0];
  v163.fields._current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v162[1];
LABEL_12:
  while ( System_Collections_Generic_Dictionary_Enumerator_int__bool___MoveNext(
            &v163,
            (const MethodInfo_35355E8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__) )
  {
    key = v163.fields._current.fields.key;
    v26 = sub_1C2D6DC(ClassBoardBackground___c__DisplayClass80_1_TypeInfo);
    ClassBoardBackground___c__DisplayClass80_1___ctor((ClassBoardBackground___c__DisplayClass80_1_o *)v26, 0);
    LODWORD(v162[0]) = (_DWORD)key;
    v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v162, v27, v28, v29);
    v31 = System_String__Format((System_String_o *)StringLiteral_4478/*"ClassIconEx_on_{0}"*/, v30, 0);
    if ( !v26 )
      sub_1C2D6EC(v31, v31);
    *(_QWORD *)(v26 + 24) = v31;
    sub_1C2D434((CGThumbnailListItem_o *)(v26 + 24), (int32_t)v31, v32, v33);
    v161 = (int)key;
    v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v161, v34, v35, v36);
    v38 = System_String__Format((System_String_o *)StringLiteral_4477/*"ClassIconEx_off_{0}"*/, v37, 0);
    *(_QWORD *)(v26 + 16) = v38;
    sub_1C2D434((CGThumbnailListItem_o *)(v26 + 16), (int32_t)v38, v39, v40);
    v160 = (int)key;
    v44 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v160, v41, v42, v43);
    *(_QWORD *)classId = key;
    v45 = System_String__Format((System_String_o *)StringLiteral_4476/*"ClassIconEx_ef_glow_{0}"*/, v44, 0);
    *(_QWORD *)(v26 + 32) = v45;
    sub_1C2D434((CGThumbnailListItem_o *)(v26 + 32), (int32_t)v45, v46, v47);
    v51 = this->fields.exIconSet;
    if ( !v51 )
LABEL_94:
      sub_1C2D6EC(v48, v49);
    v52 = 0;
    v53 = (System_Func_object__bool__o **)(v26 + 40);
    v54 = (System_Func_object__bool__o **)(v26 + 48);
    v55 = (System_Func_object__bool__o **)(v26 + 56);
    v157 = *(_QWORD *)classId & 0xFF00000000LL;
    while ( 1 )
    {
      v56 = v51->max_length;
      if ( (int)v52 >= (int)v56 )
        break;
      if ( v52 >= v56 )
        sub_1C2D6F4(v48, v49, v50);
      v57 = v51->m_Items[v52];
      if ( !v57 )
        sub_1C2D6EC(v48, v49);
      v58 = *v53;
      textures = (System_Collections_Generic_IEnumerable_TSource__o *)v57->fields.textures;
      if ( !*v53 )
      {
        v58 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_Texture__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v58,
          (Il2CppObject *)v26,
          Method_ClassBoardBackground___c__DisplayClass80_1__SetClassIcon_b__2__,
          0);
        *v53 = v58;
        sub_1C2D434((CGThumbnailListItem_o *)(v26 + 40), (int32_t)v58, v60, v61);
      }
      v62 = System_Linq_Enumerable__FirstOrDefault_object__51348472(
              textures,
              (System_Func_TSource__bool__o *)v58,
              (const MethodInfo_30F83F8 *)Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
      v63 = *v54;
      v64 = (UnityEngine_Object_o *)v62;
      if ( !*v54 )
      {
        v63 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_Texture__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v63,
          (Il2CppObject *)v26,
          Method_ClassBoardBackground___c__DisplayClass80_1__SetClassIcon_b__3__,
          0);
        *v54 = v63;
        sub_1C2D434((CGThumbnailListItem_o *)(v26 + 48), (int32_t)v63, v65, v66);
      }
      v67 = System_Linq_Enumerable__FirstOrDefault_object__51348472(
              textures,
              (System_Func_TSource__bool__o *)v63,
              (const MethodInfo_30F83F8 *)Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
      v68 = *v55;
      v69 = (UnityEngine_Object_o *)v67;
      if ( !*v55 )
      {
        v68 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_Texture__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v68,
          (Il2CppObject *)v26,
          Method_ClassBoardBackground___c__DisplayClass80_1__SetClassIcon_b__4__,
          0);
        *v55 = v68;
        sub_1C2D434((CGThumbnailListItem_o *)(v26 + 56), (int32_t)v68, v70, v71);
      }
      v72 = System_Linq_Enumerable__FirstOrDefault_object__51348472(
              textures,
              (System_Func_TSource__bool__o *)v68,
              (const MethodInfo_30F83F8 *)Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v48 = UnityEngine_Object__op_Inequality(v69, 0, 0);
      if ( v48 )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v48 = UnityEngine_Object__op_Inequality(v64, 0, 0);
        if ( v48 )
        {
          v73 = this->fields.exIconSet;
          if ( !v73 )
            sub_1C2D6EC(v48, v49);
          if ( v52 >= LODWORD(v73->max_length) )
            sub_1C2D6F4(v48, v49, v50);
          v74 = v73->m_Items[v52];
          if ( !v74 )
            sub_1C2D6EC(v48, v49);
          v75 = v74->fields.offRenderer;
          if ( !v75 )
            sub_1C2D6EC(0, v49);
          material = UnityEngine_Renderer__get_material(v75, 0);
          if ( !material )
            sub_1C2D6EC(0, v77);
          UnityEngine_Material__SetTexture(
            material,
            this->fields.iconMaterialPropertyName,
            (UnityEngine_Texture_o *)v64,
            0);
          v81 = this->fields.exIconSet;
          if ( !v81 )
            sub_1C2D6EC(v78, v79);
          if ( v52 >= LODWORD(v81->max_length) )
            sub_1C2D6F4(v78, v79, v80);
          v82 = v81->m_Items[v52];
          if ( !v82 )
            sub_1C2D6EC(v78, v79);
          effectRenderer = v82->fields.effectRenderer;
          if ( !effectRenderer )
            sub_1C2D6EC(0, v79);
          v84 = UnityEngine_Renderer__get_material(effectRenderer, 0);
          if ( !v84 )
            sub_1C2D6EC(0, v85);
          UnityEngine_Material__SetTexture(v84, this->fields.iconMaterialPropertyName, (UnityEngine_Texture_o *)v64, 0);
          v89 = this->fields.exIconSet;
          if ( !v89 )
            sub_1C2D6EC(v86, v87);
          if ( v52 >= LODWORD(v89->max_length) )
            sub_1C2D6F4(v86, v87, v88);
          v90 = v89->m_Items[v52];
          if ( !v90 )
            sub_1C2D6EC(v86, v87);
          onRenderer = v90->fields.onRenderer;
          if ( !onRenderer )
            sub_1C2D6EC(0, v87);
          v92 = UnityEngine_Renderer__get_material(onRenderer, 0);
          if ( !v92 )
            sub_1C2D6EC(0, v93);
          UnityEngine_Material__SetTexture(v92, this->fields.iconMaterialPropertyName, (UnityEngine_Texture_o *)v69, 0);
          v97 = this->fields.exIconSet;
          if ( !v97 )
            sub_1C2D6EC(v94, v95);
          if ( v52 >= LODWORD(v97->max_length) )
            sub_1C2D6F4(v94, v95, v96);
          v98 = v97->m_Items[v52];
          if ( !v98 )
            sub_1C2D6EC(v94, v95);
          effectGlowRenderer = v98->fields.effectGlowRenderer;
          if ( !effectGlowRenderer )
            sub_1C2D6EC(0, v95);
          v100 = UnityEngine_Renderer__get_material(effectGlowRenderer, 0);
          if ( !v100 )
            sub_1C2D6EC(0, v101);
          UnityEngine_Material__SetTexture(v100, this->fields.iconMaterialPropertyName, (UnityEngine_Texture_o *)v72, 0);
          v105 = this->fields.exIconSet;
          if ( !v105 )
            sub_1C2D6EC(v102, v103);
          if ( v52 >= LODWORD(v105->max_length) )
            sub_1C2D6F4(v102, v103, v104);
          v106 = v105->m_Items[v52];
          if ( !v106 )
            sub_1C2D6EC(v102, v103);
          v107 = (UnityEngine_Component_o *)v106->fields.offRenderer;
          if ( !v107 )
            sub_1C2D6EC(0, v103);
          gameObject = UnityEngine_Component__get_gameObject(v107, 0);
          if ( !gameObject )
            sub_1C2D6EC(0, v109);
          UnityEngine_GameObject__SetActive(gameObject, v157 == 0, 0);
          v113 = this->fields.exIconSet;
          if ( !v113 )
            sub_1C2D6EC(v110, v111);
          if ( v52 >= LODWORD(v113->max_length) )
            sub_1C2D6F4(v110, v111, v112);
          v114 = v113->m_Items[v52];
          if ( !v114 )
            sub_1C2D6EC(v110, v111);
          v115 = (UnityEngine_Component_o *)v114->fields.onRenderer;
          if ( !v115 )
            sub_1C2D6EC(0, v111);
          v116 = UnityEngine_Component__get_gameObject(v115, 0);
          if ( !v116 )
            sub_1C2D6EC(0, v117);
          UnityEngine_GameObject__SetActive(v116, v157 != 0, 0);
          v121 = this->fields.exIconSet;
          if ( !v121 )
            sub_1C2D6EC(v118, v119);
          if ( v52 >= LODWORD(v121->max_length) )
            sub_1C2D6F4(v118, v119, v120);
          v122 = v121->m_Items[v52];
          if ( !v122 )
            sub_1C2D6EC(v118, v119);
          releaseEffect = v122->fields.releaseEffect;
          if ( !releaseEffect )
            sub_1C2D6EC(0, v119);
          v124 = UnityEngine_GameObject__get_gameObject(releaseEffect, 0);
          if ( !v124 )
            sub_1C2D6EC(0, v125);
          UnityEngine_GameObject__SetActive(v124, 0, 0);
          if ( v157 )
          {
            if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
            IsPlayed = ClassBoardUtility__IsPlayedExClassReleaseEffect(classId[0], 0);
            if ( !IsPlayed )
            {
              v129 = this->fields.exIconSet;
              if ( !v129 )
                sub_1C2D6EC(IsPlayed, v127);
              if ( v52 >= LODWORD(v129->max_length) )
                sub_1C2D6F4(IsPlayed, v127, v128);
              v130 = v129->m_Items[v52];
              if ( !v130 )
                sub_1C2D6EC(IsPlayed, v127);
              animation = (UnityEngine_Object_o *)v130->fields.animation;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              v132 = UnityEngine_Object__op_Inequality(animation, 0, 0);
              if ( v132 )
              {
                v135 = this->fields.exIconSet;
                if ( !v135 )
                  sub_1C2D6EC(v132, v133);
                if ( v52 >= LODWORD(v135->max_length) )
                  sub_1C2D6F4(v132, v133, v134);
                v136 = v135->m_Items[v52];
                if ( !v136 )
                  sub_1C2D6EC(v132, v133);
                v137 = (UnityEngine_Component_o *)v136->fields.offRenderer;
                if ( !v137 )
                  sub_1C2D6EC(0, v133);
                v138 = UnityEngine_Component__get_gameObject(v137, 0);
                if ( !v138 )
                  sub_1C2D6EC(0, v139);
                UnityEngine_GameObject__SetActive(v138, 1, 0);
                v143 = this->fields.exIconSet;
                if ( !v143 )
                  sub_1C2D6EC(v140, v141);
                if ( v52 >= LODWORD(v143->max_length) )
                  sub_1C2D6F4(v140, v141, v142);
                v144 = v143->m_Items[v52];
                if ( !v144 )
                  sub_1C2D6EC(v140, v141);
                v145 = (UnityEngine_Component_o *)v144->fields.onRenderer;
                if ( !v145 )
                  sub_1C2D6EC(0, v141);
                v146 = UnityEngine_Component__get_gameObject(v145, 0);
                if ( !v146 )
                  sub_1C2D6EC(0, v147);
                UnityEngine_GameObject__SetActive(v146, 0, 0);
                v151 = this->fields.exIconSet;
                if ( !v151 )
                  sub_1C2D6EC(v148, v149);
                if ( v52 >= LODWORD(v151->max_length) )
                  sub_1C2D6F4(v148, v149, v150);
                v152 = v151->m_Items[v52];
                if ( !v152 )
                  sub_1C2D6EC(v148, v149);
                exClassReleaseEffectAnimationDic = this->fields.exClassReleaseEffectAnimationDic;
                if ( !exClassReleaseEffectAnimationDic )
                  sub_1C2D6EC(0, *(_QWORD *)classId);
                System_Collections_Generic_Dictionary_int__object___Add(
                  (System_Collections_Generic_Dictionary_int__object__o *)exClassReleaseEffectAnimationDic,
                  classId[0],
                  (Il2CppObject *)v152->fields.animation,
                  (const MethodInfo_33E127C *)Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__Add__);
              }
            }
          }
          goto LABEL_12;
        }
      }
      ++v52;
      v51 = this->fields.exIconSet;
      if ( !v51 )
        goto LABEL_94;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__bool___Dispose(
    &v163,
    (const MethodInfo_35356F0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
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
  Il2CppObject *v41; // x1
  System_String_o *v42; // x0
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  Il2CppObject *v48; // x1
  System_String_o *v49; // x0
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  __int64 v52; // x2
  __int64 v53; // x3
  __int64 v54; // x4
  Il2CppObject *v55; // x1
  System_String_o *v56; // x0
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  _BOOL8 v59; // x0
  __int64 v60; // x1
  __int64 v61; // x2
  struct ClassBoardBackground_ExClassIconSet_array *v62; // x8
  System_Func_object__bool__o **v63; // x24
  __int64 v64; // x20
  int max_length; // w9
  unsigned int v66; // w26
  __int64 v67; // x8
  System_Func_object__bool__o *v68; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v69; // x23
  int32_t v70; // w2
  const MethodInfo *v71; // x3
  Il2CppObject *v72; // x25
  struct ClassBoardBackground_ExClassIconSet_array *v73; // x8
  __int64 v74; // x8
  UnityEngine_Renderer_o *v75; // x0
  UnityEngine_Material_o *material; // x0
  __int64 v77; // x1
  System_Func_object__bool__o *v78; // x24
  int32_t v79; // w2
  const MethodInfo *v80; // x3
  Il2CppObject *v81; // x0
  __int64 v82; // x1
  __int64 v83; // x2
  struct ClassBoardBackground_ExClassIconSet_array *v84; // x8
  __int64 v85; // x8
  UnityEngine_Object_o *v86; // x24
  UnityEngine_Object_o *v87; // x25
  _BOOL8 v88; // x0
  __int64 v89; // x1
  __int64 v90; // x2
  struct ClassBoardBackground_ExClassIconSet_array *v91; // x8
  __int64 v92; // x8
  UnityEngine_Renderer_o *v93; // x0
  UnityEngine_Material_o *v94; // x0
  __int64 v95; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v96; // x8
  __int64 v97; // x8
  UnityEngine_Object_o *v98; // x25
  _BOOL8 v99; // x0
  __int64 v100; // x1
  __int64 v101; // x2
  struct ClassBoardBackground_ExClassIconSet_array *v102; // x8
  __int64 v103; // x8
  UnityEngine_GameObject_o *v104; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v106; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v107; // x8
  __int64 v108; // x8
  UnityEngine_Object_o *v109; // x25
  _BOOL8 v110; // x0
  __int64 v111; // x1
  __int64 v112; // x2
  struct ClassBoardBackground_ExClassIconSet_array *v113; // x8
  __int64 v114; // x8
  UnityEngine_Renderer_o *v115; // x0
  UnityEngine_Material_o *v116; // x0
  __int64 v117; // x1
  System_Func_object__bool__o *v118; // x24
  int32_t v119; // w2
  const MethodInfo *v120; // x3
  Il2CppObject *v121; // x0
  __int64 v122; // x1
  __int64 v123; // x2
  struct ClassBoardBackground_ExClassIconSet_array *v124; // x8
  __int64 v125; // x8
  UnityEngine_Texture_o *v126; // x22
  UnityEngine_Object_o *v127; // x23
  _BOOL8 v128; // x0
  __int64 v129; // x1
  __int64 v130; // x2
  struct ClassBoardBackground_ExClassIconSet_array *v131; // x8
  __int64 v132; // x8
  UnityEngine_Renderer_o *v133; // x0
  UnityEngine_Material_o *v134; // x0
  __int64 v135; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v136; // x8
  __int64 v137; // x8
  UnityEngine_Object_o *v138; // x22
  _BOOL8 v139; // x0
  __int64 v140; // x1
  __int64 v141; // x2
  struct ClassBoardBackground_ExClassIconSet_array *v142; // x8
  __int64 v143; // x8
  SimpleAnimation_o *v144; // x0
  __int64 v145; // x0
  __int64 v146; // x1
  __int64 v147; // x2
  struct ClassBoardBackground_ExClassIconSet_array *v148; // x8
  __int64 v149; // x8
  SimpleAnimation_o *v150; // x0
  _BOOL8 IsPlayedGrand; // x0
  __int64 v152; // x1
  __int64 v153; // x2
  struct ClassBoardBackground_ExClassIconSet_array *v154; // x8
  __int64 v155; // x8
  UnityEngine_Object_o *v156; // x22
  struct ClassBoardBackground_ExClassIconSet_array *v157; // x8
  __int64 v158; // x8
  UnityEngine_Component_o *v159; // x0
  UnityEngine_GameObject_o *v160; // x0
  __int64 v161; // x1
  __int64 v162; // x0
  __int64 v163; // x1
  __int64 v164; // x2
  struct ClassBoardBackground_ExClassIconSet_array *v165; // x8
  __int64 v166; // x8
  UnityEngine_Object_o *v167; // x22
  _BOOL8 v168; // x0
  __int64 v169; // x1
  __int64 v170; // x2
  struct ClassBoardBackground_ExClassIconSet_array *v171; // x8
  __int64 v172; // x8
  UnityEngine_Component_o *v173; // x0
  UnityEngine_GameObject_o *v174; // x0
  __int64 v175; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v176; // x8
  __int64 v177; // x8
  struct ClassBoardBackground_ExClassIconSet_array *v178; // x8
  __int64 v179; // x8
  UnityEngine_Component_o *v180; // x0
  UnityEngine_GameObject_o *v181; // x0
  __int64 v182; // x1
  __int64 v183; // x0
  __int64 v184; // x1
  __int64 v185; // x2
  struct ClassBoardBackground_ExClassIconSet_array *v186; // x8
  __int64 v187; // x8
  UnityEngine_Object_o *v188; // x21
  _BOOL8 v189; // x0
  __int64 v190; // x1
  __int64 v191; // x2
  struct ClassBoardBackground_ExClassIconSet_array *v192; // x8
  __int64 v193; // x8
  UnityEngine_Component_o *v194; // x0
  UnityEngine_GameObject_o *v195; // x0
  __int64 v196; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v197; // x8
  __int64 v198; // x8
  UnityEngine_Component_o *v199; // x0
  UnityEngine_GameObject_o *v200; // x0
  __int64 v201; // x1
  __int64 v202; // x0
  __int64 v203; // x1
  __int64 v204; // x2
  struct ClassBoardBackground_ExClassIconSet_array *v205; // x8
  __int64 v206; // x8
  UnityEngine_Object_o *v207; // x21
  _BOOL8 v208; // x0
  __int64 v209; // x1
  __int64 v210; // x2
  struct ClassBoardBackground_ExClassIconSet_array *v211; // x8
  __int64 v212; // x8
  UnityEngine_Component_o *v213; // x0
  UnityEngine_GameObject_o *v214; // x0
  __int64 v215; // x1
  ClassBoardBackground___c_c *v216; // x0
  System_Collections_Generic_IEnumerable_T__o *grandExIconObj; // x19
  System_Action_object__o *_9__81_2; // x20
  Il2CppObject *v219; // x21
  struct ClassBoardBackground___c_StaticFields *static_fields; // x0
  int32_t v221; // w2
  const MethodInfo *v222; // x3
  System_Collections_Generic_Dictionary_int__object__o **p_grandExClassReleaseEffectAnimationDic; // [xsp+8h] [xbp-B8h]
  int v225; // [xsp+18h] [xbp-A8h] BYREF
  int v226; // [xsp+1Ch] [xbp-A4h] BYREF
  _OWORD v227[2]; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v228; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4C2AC14 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_Renderer__TypeInfo);
    sub_1C2D490(&System_Action_GameObject__TypeInfo);
    sub_1C2D490(&Method_BasicHelper_ForEach_GameObject___);
    sub_1C2D490(&Method_BasicHelper_ForEach_Renderer___);
    sub_1C2D490(&ClassBoardUtility_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__SimpleAnimation___ctor__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_int__SimpleAnimation__TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__get_Current__);
    sub_1C2D490(&System_Func_Texture__bool__TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Key__);
    sub_1C2D490(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Value__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Material___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_Material__TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_ClassBoardBackground___c__SetGrandClassIcon_b__81_2__);
    sub_1C2D490(&Method_ClassBoardBackground___c__SetGrandClassIcon_b__81_3__);
    sub_1C2D490(&Method_ClassBoardBackground___c__DisplayClass81_0__SetGrandClassIcon_b__0__);
    sub_1C2D490(&Method_ClassBoardBackground___c__DisplayClass81_0__SetGrandClassIcon_b__1__);
    sub_1C2D490(&ClassBoardBackground___c__DisplayClass81_0_TypeInfo);
    sub_1C2D490(&Method_ClassBoardBackground___c__DisplayClass81_1__SetGrandClassIcon_b__4__);
    sub_1C2D490(&Method_ClassBoardBackground___c__DisplayClass81_1__SetGrandClassIcon_b__5__);
    sub_1C2D490(&Method_ClassBoardBackground___c__DisplayClass81_1__SetGrandClassIcon_b__6__);
    sub_1C2D490(&ClassBoardBackground___c__DisplayClass81_1_TypeInfo);
    sub_1C2D490(&ClassBoardBackground___c_TypeInfo);
    sub_1C2D490(&StringLiteral_7140/*"GrandClassIconEx_on_{0}"*/);
    sub_1C2D490(&StringLiteral_7139/*"GrandClassIconEx_off_{0}"*/);
    sub_1C2D490(&StringLiteral_7138/*"GrandClassIconEx_ef_glow_{0}"*/);
    byte_4C2AC14 = 1;
  }
  memset(&v228, 0, 32);
  v6 = sub_1C2D6DC(ClassBoardBackground___c__DisplayClass81_0_TypeInfo);
  ClassBoardBackground___c__DisplayClass81_0___ctor((ClassBoardBackground___c__DisplayClass81_0_o *)v6, 0);
  if ( !v6 )
    goto LABEL_198;
  *(_DWORD *)(v6 + 16) = iconId;
  *(_QWORD *)(v6 + 24) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v6 + 24), (int32_t)this, v9, v10);
  grandIconTextures = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.grandIconTextures;
  v12 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_Texture__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)v6,
    Method_ClassBoardBackground___c__DisplayClass81_0__SetGrandClassIcon_b__0__,
    0);
  v13 = System_Linq_Enumerable__FirstOrDefault_object__51348472(
          grandIconTextures,
          (System_Func_TSource__bool__o *)v12,
          (const MethodInfo_30F83F8 *)Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
  *(_QWORD *)(v6 + 32) = v13;
  sub_1C2D434((CGThumbnailListItem_o *)(v6 + 32), (int32_t)v13, v14, v15);
  v16 = *(UnityEngine_Object_o **)(v6 + 32);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v16, 0, 0) )
    return;
  grandIconRenderers = (System_Collections_Generic_IEnumerable_T__o *)this->fields.grandIconRenderers;
  v18 = (System_Action_object__o *)sub_1C2D6DC(System_Action_Renderer__TypeInfo);
  System_Action_object____ctor(
    v18,
    (Il2CppObject *)v6,
    Method_ClassBoardBackground___c__DisplayClass81_0__SetGrandClassIcon_b__1__,
    0);
  BasicHelper__ForEach_object_(
    grandIconRenderers,
    (System_Action_T__o *)v18,
    (const MethodInfo_30BA910 *)Method_BasicHelper_ForEach_Renderer___);
  v19 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_Material__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_Material___ctor__);
  this->fields.grandStartAnimActiveIconMaterials = (struct System_Collections_Generic_List_Material__o *)v19;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.grandStartAnimActiveIconMaterials, (int32_t)v19, v20, v21);
  v22 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_int__SimpleAnimation__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v22,
    (const MethodInfo_33E08A8 *)Method_System_Collections_Generic_Dictionary_int__SimpleAnimation___ctor__);
  this->fields.grandExClassReleaseEffectAnimationDic = (struct System_Collections_Generic_Dictionary_int__SimpleAnimation__o *)v22;
  p_grandExClassReleaseEffectAnimationDic = (System_Collections_Generic_Dictionary_int__object__o **)&this->fields.grandExClassReleaseEffectAnimationDic;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.grandExClassReleaseEffectAnimationDic, (int32_t)v22, v23, v24);
  p_grandExIconSet = &this->fields.grandExIconSet;
  grandExIconSet = this->fields.grandExIconSet;
  if ( !grandExIconSet )
    goto LABEL_198;
  if ( !grandExIconSet->max_length )
    return;
  if ( (unsigned int)baseId >> 1 != 5004 )
  {
    v216 = ClassBoardBackground___c_TypeInfo;
    grandExIconObj = (System_Collections_Generic_IEnumerable_T__o *)this->fields.grandExIconObj;
    if ( !ClassBoardBackground___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardBackground___c_TypeInfo);
      v216 = ClassBoardBackground___c_TypeInfo;
    }
    _9__81_2 = (System_Action_object__o *)v216->static_fields->__9__81_2;
    if ( !_9__81_2 )
    {
      if ( !v216->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v216);
        v216 = ClassBoardBackground___c_TypeInfo;
      }
      v219 = (Il2CppObject *)v216->static_fields->__9;
      _9__81_2 = (System_Action_object__o *)sub_1C2D6DC(System_Action_GameObject__TypeInfo);
      System_Action_object____ctor(_9__81_2, v219, Method_ClassBoardBackground___c__SetGrandClassIcon_b__81_2__, 0);
      static_fields = ClassBoardBackground___c_TypeInfo->static_fields;
      static_fields->__9__81_2 = (struct System_Action_GameObject__o *)_9__81_2;
      sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__81_2, (int32_t)_9__81_2, v221, v222);
    }
    BasicHelper__ForEach_object_(
      grandExIconObj,
      (System_Action_T__o *)_9__81_2,
      (const MethodInfo_30BA910 *)Method_BasicHelper_ForEach_GameObject___);
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
    _9__81_3 = (System_Action_object__o *)sub_1C2D6DC(System_Action_GameObject__TypeInfo);
    System_Action_object____ctor(_9__81_3, v30, Method_ClassBoardBackground___c__SetGrandClassIcon_b__81_3__, 0);
    v31 = ClassBoardBackground___c_TypeInfo->static_fields;
    v31->__9__81_3 = (struct System_Action_GameObject__o *)_9__81_3;
    sub_1C2D434((CGThumbnailListItem_o *)&v31->__9__81_3, (int32_t)_9__81_3, v32, v33);
  }
  BasicHelper__ForEach_object_(
    v28,
    (System_Action_T__o *)_9__81_3,
    (const MethodInfo_30BA910 *)Method_BasicHelper_ForEach_GameObject___);
  IconIdList = ClassBoardBackground__GetIconIdList(v34, baseId, 1, v35);
  if ( !IconIdList )
LABEL_198:
    sub_1C2D6EC(IconIdList, v8);
  System_Collections_Generic_Dictionary_int__bool___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v227,
    IconIdList,
    (const MethodInfo_33D2E0C *)Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
  *(_OWORD *)&v228.fields._dictionary = v227[0];
  v228.fields._current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v227[1];
LABEL_18:
  while ( System_Collections_Generic_Dictionary_Enumerator_int__bool___MoveNext(
            &v228,
            (const MethodInfo_35355E8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__) )
  {
    key = v228.fields._current.fields.key;
    v37 = sub_1C2D6DC(ClassBoardBackground___c__DisplayClass81_1_TypeInfo);
    ClassBoardBackground___c__DisplayClass81_1___ctor((ClassBoardBackground___c__DisplayClass81_1_o *)v37, 0);
    LODWORD(v227[0]) = (_DWORD)key;
    v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v227, v38, v39, v40);
    v42 = System_String__Format((System_String_o *)StringLiteral_7140/*"GrandClassIconEx_on_{0}"*/, v41, 0);
    if ( !v37 )
      sub_1C2D6EC(v42, v42);
    *(_QWORD *)(v37 + 16) = v42;
    sub_1C2D434((CGThumbnailListItem_o *)(v37 + 16), (int32_t)v42, v43, v44);
    v226 = (int)key;
    v48 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v226, v45, v46, v47);
    v49 = System_String__Format((System_String_o *)StringLiteral_7139/*"GrandClassIconEx_off_{0}"*/, v48, 0);
    *(_QWORD *)(v37 + 24) = v49;
    sub_1C2D434((CGThumbnailListItem_o *)(v37 + 24), (int32_t)v49, v50, v51);
    v225 = (int)key;
    v55 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v225, v52, v53, v54);
    v56 = System_String__Format((System_String_o *)StringLiteral_7138/*"GrandClassIconEx_ef_glow_{0}"*/, v55, 0);
    *(_QWORD *)(v37 + 32) = v56;
    sub_1C2D434((CGThumbnailListItem_o *)(v37 + 32), (int32_t)v56, v57, v58);
    v62 = *p_grandExIconSet;
    if ( !*p_grandExIconSet )
LABEL_174:
      sub_1C2D6EC(v59, v60);
    v63 = (System_Func_object__bool__o **)(v37 + 40);
    v64 = 4;
    while ( 1 )
    {
      max_length = v62->max_length;
      v66 = v64 - 4;
      if ( (int)v64 - 4 >= max_length )
        break;
      if ( v66 >= max_length )
        sub_1C2D6F4(v59, v60, v61);
      v67 = *((_QWORD *)&v62->obj.klass + v64);
      if ( !v67 )
        sub_1C2D6EC(v59, v60);
      v68 = *v63;
      v69 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v67 + 48);
      if ( !*v63 )
      {
        v68 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_Texture__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v68,
          (Il2CppObject *)v37,
          Method_ClassBoardBackground___c__DisplayClass81_1__SetGrandClassIcon_b__4__,
          0);
        *v63 = v68;
        sub_1C2D434((CGThumbnailListItem_o *)(v37 + 40), (int32_t)v68, v70, v71);
      }
      v72 = System_Linq_Enumerable__FirstOrDefault_object__51348472(
              v69,
              (System_Func_TSource__bool__o *)v68,
              (const MethodInfo_30F83F8 *)Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v59 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v72, 0, 0);
      if ( !v59 )
      {
        v73 = *p_grandExIconSet;
        if ( !*p_grandExIconSet )
          sub_1C2D6EC(v59, v60);
        if ( v66 >= LODWORD(v73->max_length) )
          sub_1C2D6F4(v59, v60, v61);
        v74 = *((_QWORD *)&v73->obj.klass + v64);
        if ( !v74 )
          sub_1C2D6EC(v59, v60);
        v75 = *(UnityEngine_Renderer_o **)(v74 + 16);
        if ( !v75 )
          sub_1C2D6EC(0, v60);
        material = UnityEngine_Renderer__get_material(v75, 0);
        if ( !material )
          sub_1C2D6EC(0, v77);
        UnityEngine_Material__SetTexture(
          material,
          this->fields.iconMaterialPropertyName,
          (UnityEngine_Texture_o *)v72,
          0);
        v78 = *(System_Func_object__bool__o **)(v37 + 48);
        if ( !v78 )
        {
          v78 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_Texture__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v78,
            (Il2CppObject *)v37,
            Method_ClassBoardBackground___c__DisplayClass81_1__SetGrandClassIcon_b__5__,
            0);
          *(_QWORD *)(v37 + 48) = v78;
          sub_1C2D434((CGThumbnailListItem_o *)(v37 + 48), (int32_t)v78, v79, v80);
        }
        v81 = System_Linq_Enumerable__FirstOrDefault_object__51348472(
                v69,
                (System_Func_TSource__bool__o *)v78,
                (const MethodInfo_30F83F8 *)Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
        v84 = *p_grandExIconSet;
        if ( !*p_grandExIconSet )
          sub_1C2D6EC(v81, v82);
        if ( v66 >= LODWORD(v84->max_length) )
          sub_1C2D6F4(v81, v82, v83);
        v85 = *((_QWORD *)&v84->obj.klass + v64);
        if ( !v85 )
          sub_1C2D6EC(v81, v82);
        v86 = (UnityEngine_Object_o *)v81;
        v87 = *(UnityEngine_Object_o **)(v85 + 24);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v88 = UnityEngine_Object__op_Inequality(v87, 0, 0);
        if ( v88 )
        {
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v88 = UnityEngine_Object__op_Inequality(v86, 0, 0);
          if ( v88 )
          {
            v91 = *p_grandExIconSet;
            if ( !*p_grandExIconSet )
              sub_1C2D6EC(v88, v89);
            if ( v66 >= LODWORD(v91->max_length) )
              sub_1C2D6F4(v88, v89, v90);
            v92 = *((_QWORD *)&v91->obj.klass + v64);
            if ( !v92 )
              sub_1C2D6EC(v88, v89);
            v93 = *(UnityEngine_Renderer_o **)(v92 + 24);
            if ( !v93 )
              sub_1C2D6EC(0, v89);
            v94 = UnityEngine_Renderer__get_material(v93, 0);
            if ( !v94 )
              sub_1C2D6EC(0, v95);
            UnityEngine_Material__SetTexture(
              v94,
              this->fields.iconMaterialPropertyName,
              (UnityEngine_Texture_o *)v86,
              0);
          }
        }
        v96 = *p_grandExIconSet;
        if ( !*p_grandExIconSet )
          sub_1C2D6EC(v88, v89);
        if ( v66 >= LODWORD(v96->max_length) )
          sub_1C2D6F4(v88, v89, v90);
        v97 = *((_QWORD *)&v96->obj.klass + v64);
        if ( !v97 )
          sub_1C2D6EC(v88, v89);
        v98 = *(UnityEngine_Object_o **)(v97 + 64);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v99 = UnityEngine_Object__op_Inequality(v98, 0, 0);
        if ( v99 )
        {
          v102 = *p_grandExIconSet;
          if ( !*p_grandExIconSet )
            sub_1C2D6EC(v99, v100);
          if ( v66 >= LODWORD(v102->max_length) )
            sub_1C2D6F4(v99, v100, v101);
          v103 = *((_QWORD *)&v102->obj.klass + v64);
          if ( !v103 )
            sub_1C2D6EC(v99, v100);
          v104 = *(UnityEngine_GameObject_o **)(v103 + 64);
          if ( !v104 )
            sub_1C2D6EC(0, v100);
          gameObject = UnityEngine_GameObject__get_gameObject(v104, 0);
          if ( !gameObject )
            sub_1C2D6EC(0, v106);
          UnityEngine_GameObject__SetActive(gameObject, 0, 0);
        }
        v107 = *p_grandExIconSet;
        if ( !*p_grandExIconSet )
          sub_1C2D6EC(v99, v100);
        if ( v66 >= LODWORD(v107->max_length) )
          sub_1C2D6F4(v99, v100, v101);
        v108 = *((_QWORD *)&v107->obj.klass + v64);
        if ( !v108 )
          sub_1C2D6EC(v99, v100);
        v109 = *(UnityEngine_Object_o **)(v108 + 32);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v110 = UnityEngine_Object__op_Inequality(v109, 0, 0);
        if ( v110 )
        {
          v113 = *p_grandExIconSet;
          if ( !*p_grandExIconSet )
            sub_1C2D6EC(v110, v111);
          if ( v66 >= LODWORD(v113->max_length) )
            sub_1C2D6F4(v110, v111, v112);
          v114 = *((_QWORD *)&v113->obj.klass + v64);
          if ( !v114 )
            sub_1C2D6EC(v110, v111);
          v115 = *(UnityEngine_Renderer_o **)(v114 + 32);
          if ( !v115 )
            sub_1C2D6EC(0, v111);
          v116 = UnityEngine_Renderer__get_material(v115, 0);
          if ( !v116 )
            sub_1C2D6EC(0, v117);
          UnityEngine_Material__SetTexture(v116, this->fields.iconMaterialPropertyName, (UnityEngine_Texture_o *)v86, 0);
        }
        v118 = *(System_Func_object__bool__o **)(v37 + 56);
        if ( !v118 )
        {
          v118 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_Texture__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v118,
            (Il2CppObject *)v37,
            Method_ClassBoardBackground___c__DisplayClass81_1__SetGrandClassIcon_b__6__,
            0);
          *(_QWORD *)(v37 + 56) = v118;
          sub_1C2D434((CGThumbnailListItem_o *)(v37 + 56), (int32_t)v118, v119, v120);
        }
        v121 = System_Linq_Enumerable__FirstOrDefault_object__51348472(
                 v69,
                 (System_Func_TSource__bool__o *)v118,
                 (const MethodInfo_30F83F8 *)Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
        v124 = *p_grandExIconSet;
        if ( !*p_grandExIconSet )
          sub_1C2D6EC(v121, v122);
        if ( v66 >= LODWORD(v124->max_length) )
          sub_1C2D6F4(v121, v122, v123);
        v125 = *((_QWORD *)&v124->obj.klass + v64);
        if ( !v125 )
          sub_1C2D6EC(v121, v122);
        v126 = (UnityEngine_Texture_o *)v121;
        v127 = *(UnityEngine_Object_o **)(v125 + 40);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v128 = UnityEngine_Object__op_Inequality(v127, 0, 0);
        if ( v128 )
        {
          v131 = *p_grandExIconSet;
          if ( !*p_grandExIconSet )
            sub_1C2D6EC(v128, v129);
          if ( v66 >= LODWORD(v131->max_length) )
            sub_1C2D6F4(v128, v129, v130);
          v132 = *((_QWORD *)&v131->obj.klass + v64);
          if ( !v132 )
            sub_1C2D6EC(v128, v129);
          v133 = *(UnityEngine_Renderer_o **)(v132 + 40);
          if ( !v133 )
            sub_1C2D6EC(0, v129);
          v134 = UnityEngine_Renderer__get_material(v133, 0);
          if ( !v134 )
            sub_1C2D6EC(0, v135);
          UnityEngine_Material__SetTexture(v134, this->fields.iconMaterialPropertyName, v126, 0);
        }
        v136 = *p_grandExIconSet;
        if ( !*p_grandExIconSet )
          sub_1C2D6EC(v128, v129);
        if ( v66 >= LODWORD(v136->max_length) )
          sub_1C2D6F4(v128, v129, v130);
        v137 = *((_QWORD *)&v136->obj.klass + v64);
        if ( !v137 )
          sub_1C2D6EC(v128, v129);
        v138 = *(UnityEngine_Object_o **)(v137 + 56);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v139 = UnityEngine_Object__op_Inequality(v138, 0, 0);
        if ( v139 )
        {
          v142 = *p_grandExIconSet;
          if ( !*p_grandExIconSet )
            sub_1C2D6EC(v139, v140);
          if ( v66 >= LODWORD(v142->max_length) )
            sub_1C2D6F4(v139, v140, v141);
          v143 = *((_QWORD *)&v142->obj.klass + v64);
          if ( !v143 )
            sub_1C2D6EC(v139, v140);
          v144 = *(SimpleAnimation_o **)(v143 + 56);
          if ( !v144 )
            sub_1C2D6EC(0, v140);
          SimpleAnimation__Rewind(v144, 0);
          v148 = *p_grandExIconSet;
          if ( !*p_grandExIconSet )
            sub_1C2D6EC(v145, v146);
          if ( v66 >= LODWORD(v148->max_length) )
            sub_1C2D6F4(v145, v146, v147);
          v149 = *((_QWORD *)&v148->obj.klass + v64);
          if ( !v149 )
            sub_1C2D6EC(v145, v146);
          v150 = *(SimpleAnimation_o **)(v149 + 56);
          if ( !v150 )
            sub_1C2D6EC(0, v146);
          SimpleAnimation__Stop(v150, 0);
        }
        if ( ((unsigned __int64)key & 0xFF00000000LL) != 0 )
        {
          if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
          IsPlayedGrand = ClassBoardUtility__IsPlayedGrandExClassReleaseEffect((int32_t)key, 0);
          if ( IsPlayedGrand )
            goto LABEL_139;
          v154 = *p_grandExIconSet;
          if ( !*p_grandExIconSet )
            sub_1C2D6EC(IsPlayedGrand, v152);
          if ( v66 >= LODWORD(v154->max_length) )
            sub_1C2D6F4(IsPlayedGrand, v152, v153);
          v155 = *((_QWORD *)&v154->obj.klass + v64);
          if ( !v155 )
            sub_1C2D6EC(IsPlayedGrand, v152);
          v156 = *(UnityEngine_Object_o **)(v155 + 56);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          IsPlayedGrand = UnityEngine_Object__op_Inequality(v156, 0, 0);
          if ( !IsPlayedGrand )
          {
LABEL_139:
            v178 = *p_grandExIconSet;
            if ( !*p_grandExIconSet )
              sub_1C2D6EC(IsPlayedGrand, v152);
            if ( v66 >= LODWORD(v178->max_length) )
              sub_1C2D6F4(IsPlayedGrand, v152, v153);
            v179 = *((_QWORD *)&v178->obj.klass + v64);
            if ( !v179 )
              sub_1C2D6EC(IsPlayedGrand, v152);
            v180 = *(UnityEngine_Component_o **)(v179 + 16);
            if ( !v180 )
              sub_1C2D6EC(0, v152);
            v181 = UnityEngine_Component__get_gameObject(v180, 0);
            if ( !v181 )
              sub_1C2D6EC(0, v182);
            UnityEngine_GameObject__SetActive(v181, 1, 0);
            v186 = *p_grandExIconSet;
            if ( !*p_grandExIconSet )
              sub_1C2D6EC(v183, v184);
            if ( v66 >= LODWORD(v186->max_length) )
              sub_1C2D6F4(v183, v184, v185);
            v187 = *((_QWORD *)&v186->obj.klass + v64);
            if ( !v187 )
              sub_1C2D6EC(v183, v184);
            v188 = *(UnityEngine_Object_o **)(v187 + 24);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            v189 = UnityEngine_Object__op_Inequality(v188, 0, 0);
            if ( v189 )
            {
              v192 = *p_grandExIconSet;
              if ( !*p_grandExIconSet )
                sub_1C2D6EC(v189, v190);
              if ( v66 >= LODWORD(v192->max_length) )
                sub_1C2D6F4(v189, v190, v191);
              v193 = *((_QWORD *)&v192->obj.klass + v64);
              if ( !v193 )
                sub_1C2D6EC(v189, v190);
              v194 = *(UnityEngine_Component_o **)(v193 + 24);
              if ( !v194 )
                sub_1C2D6EC(0, v190);
              v195 = UnityEngine_Component__get_gameObject(v194, 0);
              if ( !v195 )
                sub_1C2D6EC(0, v196);
              UnityEngine_GameObject__SetActive(v195, 0, 0);
            }
          }
          else
          {
            v157 = *p_grandExIconSet;
            if ( !*p_grandExIconSet )
              sub_1C2D6EC(IsPlayedGrand, v152);
            if ( v66 >= LODWORD(v157->max_length) )
              sub_1C2D6F4(IsPlayedGrand, v152, v153);
            v158 = *((_QWORD *)&v157->obj.klass + v64);
            if ( !v158 )
              sub_1C2D6EC(IsPlayedGrand, v152);
            v159 = *(UnityEngine_Component_o **)(v158 + 16);
            if ( !v159 )
              sub_1C2D6EC(0, v152);
            v160 = UnityEngine_Component__get_gameObject(v159, 0);
            if ( !v160 )
              sub_1C2D6EC(0, v161);
            UnityEngine_GameObject__SetActive(v160, 0, 0);
            v165 = *p_grandExIconSet;
            if ( !*p_grandExIconSet )
              sub_1C2D6EC(v162, v163);
            if ( v66 >= LODWORD(v165->max_length) )
              sub_1C2D6F4(v162, v163, v164);
            v166 = *((_QWORD *)&v165->obj.klass + v64);
            if ( !v166 )
              sub_1C2D6EC(v162, v163);
            v167 = *(UnityEngine_Object_o **)(v166 + 24);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            v168 = UnityEngine_Object__op_Inequality(v167, 0, 0);
            if ( v168 )
            {
              v171 = *p_grandExIconSet;
              if ( !*p_grandExIconSet )
                sub_1C2D6EC(v168, v169);
              if ( v66 >= LODWORD(v171->max_length) )
                sub_1C2D6F4(v168, v169, v170);
              v172 = *((_QWORD *)&v171->obj.klass + v64);
              if ( !v172 )
                sub_1C2D6EC(v168, v169);
              v173 = *(UnityEngine_Component_o **)(v172 + 24);
              if ( !v173 )
                sub_1C2D6EC(0, v169);
              v174 = UnityEngine_Component__get_gameObject(v173, 0);
              if ( !v174 )
                sub_1C2D6EC(0, v175);
              UnityEngine_GameObject__SetActive(v174, 1, 0);
            }
            v176 = *p_grandExIconSet;
            if ( !*p_grandExIconSet )
              sub_1C2D6EC(v168, v169);
            if ( v66 >= LODWORD(v176->max_length) )
              sub_1C2D6F4(v168, v169, v170);
            v177 = *((_QWORD *)&v176->obj.klass + v64);
            if ( !v177 )
              sub_1C2D6EC(v168, v169);
            if ( !*p_grandExClassReleaseEffectAnimationDic )
              sub_1C2D6EC(0, v169);
            System_Collections_Generic_Dictionary_int__object___Add(
              *p_grandExClassReleaseEffectAnimationDic,
              (int32_t)key,
              *(Il2CppObject **)(v177 + 56),
              (const MethodInfo_33E127C *)Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__Add__);
          }
        }
        else
        {
          v197 = *p_grandExIconSet;
          if ( !*p_grandExIconSet )
            sub_1C2D6EC(v139, v140);
          if ( v66 >= LODWORD(v197->max_length) )
            sub_1C2D6F4(v139, v140, v141);
          v198 = *((_QWORD *)&v197->obj.klass + v64);
          if ( !v198 )
            sub_1C2D6EC(v139, v140);
          v199 = *(UnityEngine_Component_o **)(v198 + 16);
          if ( !v199 )
            sub_1C2D6EC(0, v140);
          v200 = UnityEngine_Component__get_gameObject(v199, 0);
          if ( !v200 )
            sub_1C2D6EC(0, v201);
          UnityEngine_GameObject__SetActive(v200, 0, 0);
          v205 = *p_grandExIconSet;
          if ( !*p_grandExIconSet )
            sub_1C2D6EC(v202, v203);
          if ( v66 >= LODWORD(v205->max_length) )
            sub_1C2D6F4(v202, v203, v204);
          v206 = *((_QWORD *)&v205->obj.klass + v64);
          if ( !v206 )
            sub_1C2D6EC(v202, v203);
          v207 = *(UnityEngine_Object_o **)(v206 + 24);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v208 = UnityEngine_Object__op_Inequality(v207, 0, 0);
          if ( v208 )
          {
            v211 = *p_grandExIconSet;
            if ( !*p_grandExIconSet )
              sub_1C2D6EC(v208, v209);
            if ( v66 >= LODWORD(v211->max_length) )
              sub_1C2D6F4(v208, v209, v210);
            v212 = *((_QWORD *)&v211->obj.klass + v64);
            if ( !v212 )
              sub_1C2D6EC(v208, v209);
            v213 = *(UnityEngine_Component_o **)(v212 + 24);
            if ( !v213 )
              sub_1C2D6EC(0, v209);
            v214 = UnityEngine_Component__get_gameObject(v213, 0);
            if ( !v214 )
              sub_1C2D6EC(0, v215);
            UnityEngine_GameObject__SetActive(v214, 1, 0);
          }
        }
        goto LABEL_18;
      }
      v62 = *p_grandExIconSet;
      ++v64;
      if ( !*p_grandExIconSet )
        goto LABEL_174;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__bool___Dispose(
    &v228,
    (const MethodInfo_35356F0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
}


void ClassBoardBackground__SetShowBoardCallback(
        ClassBoardBackground_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.showBoardCallback = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.showBoardCallback, (int32_t)callback, (int32_t)method, v3);
}


void ClassBoardBackground__SkipStartMainEffectPlayer(ClassBoardBackground_o *this, const MethodInfo *method)
{
  ClassBoardEffectPlayer_o *skipMainEffectPlayer; // x0
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  Il2CppObject *v7; // x0
  System_String_o *v8; // x0
  SimpleAnimation_o *mainAnimation; // x20
  System_String_o *v10; // x21
  System_Action_o *v11; // x22
  const MethodInfo *v12; // x5
  int32_t Data_int; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C2AC1A & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_ClassBoardBackground__SkipStartMainEffectPlayer_b__87_0__);
    sub_1C2D490(&Method_ClassBoardEffectPlayer_GetData_int___);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&StringLiteral_8867/*"MainTransition{0}"*/);
    byte_4C2AC1A = 1;
  }
  skipMainEffectPlayer = this->fields.skipMainEffectPlayer;
  if ( !skipMainEffectPlayer )
    sub_1C2D6EC(0, method);
  Data_int = ClassBoardEffectPlayer__GetData_int_(
               skipMainEffectPlayer,
               (const MethodInfo_30C219C *)Method_ClassBoardEffectPlayer_GetData_int___);
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Data_int, v4, v5, v6);
  v8 = System_String__Format((System_String_o *)StringLiteral_8867/*"MainTransition{0}"*/, v7, 0);
  mainAnimation = this->fields.mainAnimation;
  v10 = v8;
  v11 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_ClassBoardBackground__SkipStartMainEffectPlayer_b__87_0__, 0);
  ClassBoardBackground__ForceSkipSimpleAnimation(this, mainAnimation, v10, v11, 0, v12);
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
  __int64 v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3

  if ( (byte_4C2AC1F & 1) == 0 )
  {
    sub_1C2D490(&ClassBoardBackground__WaitAnimationFinished_d__93_TypeInfo);
    byte_4C2AC1F = 1;
  }
  v8 = sub_1C2D6DC(ClassBoardBackground__WaitAnimationFinished_d__93_TypeInfo);
  ClassBoardBackground__WaitAnimationFinished_d__93___ctor(
    (ClassBoardBackground__WaitAnimationFinished_d__93_o *)v8,
    0,
    0);
  if ( !v8 )
    sub_1C2D6EC(v9, v10);
  *(_QWORD *)(v8 + 32) = anim;
  sub_1C2D434((CGThumbnailListItem_o *)(v8 + 32), (int32_t)anim, v11, v12);
  *(_QWORD *)(v8 + 40) = name;
  sub_1C2D434((CGThumbnailListItem_o *)(v8 + 40), (int32_t)name, v13, v14);
  *(_QWORD *)(v8 + 48) = endCallback;
  sub_1C2D434((CGThumbnailListItem_o *)(v8 + 48), (int32_t)endCallback, v15, v16);
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

  if ( (byte_4C2AC22 & 1) == 0 )
  {
    sub_1C2D490(&ClassBoardUtility_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__get_Keys__);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_int___);
    byte_4C2AC22 = 1;
  }
  exClassReleaseEffectAnimationDic = this->fields.exClassReleaseEffectAnimationDic;
  p_exClassReleaseEffectAnimationDic = (CGThumbnailListItem_o *)&this->fields.exClassReleaseEffectAnimationDic;
  v3 = (System_Collections_Generic_Dictionary_int__object__o *)exClassReleaseEffectAnimationDic;
  if ( !exClassReleaseEffectAnimationDic )
    sub_1C2D6EC(0, method);
  Keys = System_Collections_Generic_Dictionary_int__object___get_Keys(
           v3,
           (const MethodInfo_33E0F3C *)Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__get_Keys__);
  v7 = System_Linq_Enumerable__ToArray_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
         (const MethodInfo_310DE54 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
  ClassBoardUtility__SavePlayedExClassReleaseEffect(v7, 0);
  p_exClassReleaseEffectAnimationDic->klass = 0;
  sub_1C2D434(p_exClassReleaseEffectAnimationDic, 0, v8, v9);
}


void ClassBoardBackground___PlayStartMainEffectPlayer_b__86_0(ClassBoardBackground_o *this, const MethodInfo *method)
{
  ClassBoardEffectPlayer_o *startMainEffectPlayer; // x0

  startMainEffectPlayer = this->fields.startMainEffectPlayer;
  if ( !startMainEffectPlayer )
    sub_1C2D6EC(0, method);
  ClassBoardEffectPlayer__End(startMainEffectPlayer, 0);
}


void ClassBoardBackground___SkipStartMainEffectPlayer_b__87_0(ClassBoardBackground_o *this, const MethodInfo *method)
{
  ClassBoardEffectPlayer_o *skipMainEffectPlayer; // x0

  skipMainEffectPlayer = this->fields.skipMainEffectPlayer;
  if ( !skipMainEffectPlayer )
    sub_1C2D6EC(0, method);
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

  if ( (byte_4C2AC2B & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4C2AC2B = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_10;
    ClassBoardBackground__PlayStartExClassReleaseEffectPlayer(_4__this, 0);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    if ( _4__this )
    {
      exClassReleaseEffectStartSec = _4__this->fields.exClassReleaseEffectStartSec;
      v6 = (UnityEngine_WaitForSeconds_o *)sub_1C2D6DC(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v6, exClassReleaseEffectStartSec, 0);
      this->fields.__2__current = (Il2CppObject *)v6;
      p__2__current = &this->fields.__2__current;
      sub_1C2D434((CGThumbnailListItem_o *)p__2__current, (int32_t)v6, v8, v9);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
LABEL_10:
    sub_1C2D6EC(_4__this, method);
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

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_ClassBoardBackground__PlayExClassReleaseEffectPlayer_d__88_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
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
  if ( (byte_4C2AC2C & 1) == 0 )
  {
    sub_1C2D490(&EventDelegate_Callback_TypeInfo);
    sub_1C2D490(&Method_ClassBoardBackground___c__PlayGrandReturnTransitionAnimationFromTween_b__79_0__);
    sub_1C2D490(&ClassBoardBackground___c_TypeInfo);
    this = (ClassBoardBackground__PlayGrandReturnTransitionAnimationFromTween_d__79_o *)sub_1C2D490(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4C2AC2C = 1;
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
      _9__79_0 = (EventDelegate_Callback_o *)sub_1C2D6DC(EventDelegate_Callback_TypeInfo);
      EventDelegate_Callback___ctor(
        _9__79_0,
        v15,
        Method_ClassBoardBackground___c__PlayGrandReturnTransitionAnimationFromTween_b__79_0__,
        0);
      static_fields = ClassBoardBackground___c_TypeInfo->static_fields;
      static_fields->__9__79_0 = _9__79_0;
      sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__79_0, (int32_t)_9__79_0, v17, v18);
    }
    UITweener__SetOnFinished(v12, _9__79_0, 0);
  }
  else if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    if ( _4__this )
    {
      classScoreTweenStartDelay = _4__this->fields.classScoreTweenStartDelay;
      v6 = (UnityEngine_WaitForSeconds_o *)sub_1C2D6DC(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v6, classScoreTweenStartDelay, 0);
      v2->fields.__2__current = (Il2CppObject *)v6;
      p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
      sub_1C2D434(p__2__current, (int32_t)v6, v8, v9);
      result = 1;
      LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
      return result;
    }
LABEL_19:
    sub_1C2D6EC(this, method);
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

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_ClassBoardBackground__PlayGrandReturnTransitionAnimationFromTween_d__79_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
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

  if ( (byte_4C2AC2D & 1) == 0 )
  {
    sub_1C2D490(&SimpleAnimation_State_TypeInfo);
    byte_4C2AC2D = 1;
  }
  if ( this->fields.__1__state > 1u )
    return 0;
  anim = this->fields.anim;
  this->fields.__1__state = -1;
  if ( !anim )
    sub_1C2D6EC(0, method);
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
    v9 = sub_1C7DCA8(State, SimpleAnimation_State_TypeInfo, 5);
  }
  if ( (*(float (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v9)(v6, *(_QWORD *)(v9 + 8)) >= 1.0 )
  {
LABEL_13:
    ActionExtensions__Call(this->fields.endCallback, 0);
    return 0;
  }
  this->fields.__2__current = 0;
  p__2__current = &this->fields.__2__current;
  sub_1C2D434((CGThumbnailListItem_o *)p__2__current, 0, v10, v11);
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

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_ClassBoardBackground__WaitAnimationFinished_d__93_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
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

  if ( (byte_4C2AC25 & 1) == 0 )
  {
    sub_1C2D490(&ClassBoardBackground___c_TypeInfo);
    byte_4C2AC25 = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(ClassBoardBackground___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ClassBoardBackground___c_TypeInfo->static_fields->__9 = (struct ClassBoardBackground___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)ClassBoardBackground___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C2D6EC(this, a);
  return a->fields.classId - b->fields.classId;
}


void ClassBoardBackground___c___InitGrandClassReleasedEffect_b__83_0(
        ClassBoardBackground___c_o *this,
        ClassBoardBackground_ExClassIconSet_o *x,
        const MethodInfo *method)
{
  UnityEngine_Object_o *releaseEffect; // x20

  if ( (byte_4C2AC26 & 1) == 0 )
  {
    this = (ClassBoardBackground___c_o *)sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2AC26 = 1;
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
    sub_1C2D6EC(this, x);
  }
}


void ClassBoardBackground___c___OnDestroy_b__85_0(
        ClassBoardBackground___c_o *this,
        UnityEngine_Renderer_o *x,
        const MethodInfo *method)
{
  UnityEngine_Object_o *material; // x19

  if ( (byte_4C2AC27 & 1) == 0 )
  {
    this = (ClassBoardBackground___c_o *)sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2AC27 = 1;
  }
  if ( !x )
    sub_1C2D6EC(this, x);
  material = (UnityEngine_Object_o *)UnityEngine_Renderer__get_material(x, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71163704(material, 0);
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
    sub_1C2D6EC(this, 0);
  UnityEngine_GameObject__SetActive(x, 0, 0);
}


void ClassBoardBackground___c___SetGrandClassIcon_b__81_3(
        ClassBoardBackground___c_o *this,
        UnityEngine_GameObject_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
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
  Il2CppObject *v9; // x0
  System_String_o *v10; // x0
  int32_t iconId; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_4C2AC28 & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    this = (ClassBoardBackground___c__DisplayClass80_0_o *)sub_1C2D490(&StringLiteral_4480/*"ClassIcon{0}"*/);
    byte_4C2AC28 = 1;
  }
  if ( !x )
    sub_1C2D6EC(this, x);
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)x, 0);
  iconId = v4->fields.iconId;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId, v6, v7, v8);
  v10 = System_String__Format((System_String_o *)StringLiteral_4480/*"ClassIcon{0}"*/, v9, 0);
  return System_String__op_Equality(name, v10, 0);
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
    sub_1C2D6EC(this, x);
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
    sub_1C2D6EC(this, 0);
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
    sub_1C2D6EC(this, 0);
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
    sub_1C2D6EC(this, 0);
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
  Il2CppObject *v9; // x0
  System_String_o *v10; // x0
  int32_t iconId; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_4C2AC29 & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    this = (ClassBoardBackground___c__DisplayClass81_0_o *)sub_1C2D490(&StringLiteral_7141/*"GrandClassIcon{0}"*/);
    byte_4C2AC29 = 1;
  }
  if ( !x )
    sub_1C2D6EC(this, x);
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)x, 0);
  iconId = v4->fields.iconId;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId, v6, v7, v8);
  v10 = System_String__Format((System_String_o *)StringLiteral_7141/*"GrandClassIcon{0}"*/, v9, 0);
  return System_String__op_Equality(name, v10, 0);
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
    sub_1C2D6EC(this, x);
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
    sub_1C2D6EC(this, 0);
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
    sub_1C2D6EC(this, 0);
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
    sub_1C2D6EC(this, 0);
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

  if ( (byte_4C2AC2A & 1) == 0 )
  {
    sub_1C2D490(&ClassBoardUtility_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__get_Keys__);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_int___);
    byte_4C2AC2A = 1;
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
           (const MethodInfo_33E0F3C *)Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__get_Keys__);
  v7 = System_Linq_Enumerable__ToArray_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
         (const MethodInfo_310DE54 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
  ClassBoardUtility__SavePlayedGrandExClassReleaseEffect(v7, 0);
  v10 = this->fields.CS___8__locals1;
  if ( !v10
    || (anim = (struct SimpleAnimation_o *)v10->fields.__4__this) == 0
    || (*(_QWORD *)&anim[1].fields.m_Initialized = 0,
        sub_1C2D434((CGThumbnailListItem_o *)&anim[1].fields.m_Initialized, 0, v8, v9),
        (v11 = this->fields.CS___8__locals1) == 0) )
  {
LABEL_13:
    sub_1C2D6EC(anim, method);
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
    sub_1C2D6EC(0, method);
  SimpleAnimation__Stop(anim, 0);
}