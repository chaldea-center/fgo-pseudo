void ClassBoardBackground___ctor(ClassBoardBackground_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w1

  if ( (byte_4D30406 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_16321/*"_MainTex"*/);
    byte_4D30406 = 1;
  }
  v9 = StringLiteral_16321/*"_MainTex"*/;
  this->fields.iconMaterialPropertyName = (struct System_String_o *)StringLiteral_16321/*"_MainTex"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.iconMaterialPropertyName, v9, v2, v3, v4, v5, v6, v7);
  *(_OWORD *)&this->fields.classScorePosXMax = xmmword_CFFDF0;
  this->fields.classScoreTweenStartDelay = 1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ClassBoardBackground__ActivateEarthAccessories(ClassBoardBackground_o *this, bool value, const MethodInfo *method)
{
  UnityEngine_GameObject_o *earthAccessoriesObject; // x0

  earthAccessoriesObject = this->fields.earthAccessoriesObject;
  if ( !earthAccessoriesObject )
    sub_1C942F0(0, value);
  UnityEngine_GameObject__SetActive(earthAccessoriesObject, value, 0);
}


void ClassBoardBackground__Awake(ClassBoardBackground_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x0
  __int64 v4; // x1
  System_String_o *name; // x20
  ClassBoardEffectPlayer_o *v6; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  struct ClassBoardEffectPlayer_o *startMainEffectPlayer; // x20
  System_Action_o *v14; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  System_String_o *v21; // x20
  ClassBoardEffectPlayer_o *v22; // x21
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  struct ClassBoardEffectPlayer_o *skipMainEffectPlayer; // x20
  System_Action_o *v30; // x21
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7

  if ( (byte_4D303F1 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_ClassBoardBackground_PlayStartMainEffectPlayer__);
    sub_1C94098(&Method_ClassBoardBackground_SkipStartMainEffectPlayer__);
    sub_1C94098(&ClassBoardEffectPlayer_TypeInfo);
    byte_4D303F1 = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_8;
  name = UnityEngine_Object__get_name(gameObject, 0);
  v6 = (ClassBoardEffectPlayer_o *)sub_1C942E4(ClassBoardEffectPlayer_TypeInfo);
  ClassBoardEffectPlayer___ctor_48906144(v6, name, 0);
  this->fields.startMainEffectPlayer = v6;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.startMainEffectPlayer,
    (int32_t)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  startMainEffectPlayer = this->fields.startMainEffectPlayer;
  v14 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_ClassBoardBackground_PlayStartMainEffectPlayer__, 0);
  if ( !startMainEffectPlayer )
    goto LABEL_8;
  startMainEffectPlayer->fields.playCallback = v14;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&startMainEffectPlayer->fields.playCallback,
    (int32_t)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_8;
  v21 = UnityEngine_Object__get_name(gameObject, 0);
  v22 = (ClassBoardEffectPlayer_o *)sub_1C942E4(ClassBoardEffectPlayer_TypeInfo);
  ClassBoardEffectPlayer___ctor_48906144(v22, v21, 0);
  this->fields.skipMainEffectPlayer = v22;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.skipMainEffectPlayer,
    (int32_t)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  skipMainEffectPlayer = this->fields.skipMainEffectPlayer;
  v30 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v30, (Il2CppObject *)this, Method_ClassBoardBackground_SkipStartMainEffectPlayer__, 0);
  if ( !skipMainEffectPlayer )
LABEL_8:
    sub_1C942F0(gameObject, v4);
  skipMainEffectPlayer->fields.playCallback = v30;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&skipMainEffectPlayer->fields.playCallback,
    (int32_t)v30,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
}


void ClassBoardBackground__CallAnimationEventBoardParent(ClassBoardBackground_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *boardParentAnimation; // x20
  UnityEngine_Object_o *boardParentAnimationClip; // x20
  __int64 v5; // x1
  UnityEngine_Object_o *name; // x0
  SimpleAnimation_o *v7; // x19

  if ( (byte_4D30405 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D30405 = 1;
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
        sub_1C942F0(name, v5);
      }
      SimpleAnimation__Play_67362784(v7, (System_String_o *)name, 0);
    }
  }
}


void ClassBoardBackground__CallAnimationEventShowBoard(ClassBoardBackground_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7

  ActionExtensions__Call(this->fields.showBoardCallback, 0);
  this->fields.showBoardCallback = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.showBoardCallback, 0, v3, v4, v5, v6, v7, v8);
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
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7

  if ( (byte_4D303F2 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D303F2 = 1;
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
    sub_1C942F0(classBoardViewCamera, camera);
  }
  UnityEngine_GameObject__SetActive(v9, (unsigned __int8)classBoardViewCamera & 1, 0);
  this->fields.currentCamera = camera;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.currentCamera, (int32_t)camera, v10, v11, v12, v13, v14, v15);
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
  if ( (byte_4D30403 & 1) == 0 )
  {
    this = (ClassBoardBackground_o *)sub_1C94098(&SimpleAnimation_State_TypeInfo);
    byte_4D30403 = 1;
  }
  if ( !anim )
    goto LABEL_14;
  SimpleAnimation__Rewind(anim, 0);
  SimpleAnimation__Play_67362784(anim, name, 0);
  this = (ClassBoardBackground_o *)SimpleAnimation__get_Item(anim, name, 0);
  v12 = this;
  LODWORD(v6) = 1.0;
  if ( isPlaySpecifiedPoint )
    *(float *)&v6 = v11->fields.directlyGrandAnimationStartPoint;
  if ( !this )
LABEL_14:
    sub_1C942F0(this, anim);
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
    v16 = sub_1C6A420(this, SimpleAnimation_State_TypeInfo, 6);
  }
  v17 = (ClassBoardBackground_o *)(*(__int64 (__fastcall **)(ClassBoardBackground_o *, _QWORD, long double))v16)(
                                    v12,
                                    *(_QWORD *)(v16 + 8),
                                    v6);
  v19 = ClassBoardBackground__WaitAnimationFinished(v17, anim, name, endCallback, v18);
  UnityEngine_MonoBehaviour__StartCoroutine_72096164((UnityEngine_MonoBehaviour_o *)v11, v19, 0);
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
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  Il2CppObject *v19; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x22
  int v21; // w23
  _BOOL8 v22; // x0
  __int64 v23; // x1
  ClassBoardClassEntity_o *current; // x24
  BalanceConfig_c *v25; // x0
  BalanceConfig_c *v26; // x0
  _BOOL8 v27; // x0
  __int64 v28; // x1
  int32_t monitor_high; // w25
  _BOOL8 IsOpen; // x0
  __int64 v31; // x1
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+0h] [xbp-A0h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+20h] [xbp-80h] BYREF
  System_Collections_Generic_List_ClassBoardClassEntity__o *entitys; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4D303FA & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&System_Comparison_ClassBoardClassEntity__TypeInfo);
    sub_1C94098(&Method_DataManager_GetMaster_ClassBoardClassMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__bool__Add__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
    sub_1C94098(&System_Collections_Generic_Dictionary_int__bool__TypeInfo);
    sub_1C94098(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_ClassBoardClassEntity__Sort__);
    sub_1C94098(&Method_ClassBoardBackground___c__GetIconIdList_b__82_0__);
    sub_1C94098(&ClassBoardBackground___c_TypeInfo);
    byte_4D303FA = 1;
  }
  entitys = 0;
  memset(&v35, 0, sizeof(v35));
  entity = 0;
  v6 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_1C942E4(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v6,
    (const MethodInfo_34A56A0 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
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
      v10 = (System_Comparison_T__o *)sub_1C942E4(System_Comparison_ClassBoardClassEntity__TypeInfo);
      System_Comparison_object____ctor(v10, v11, Method_ClassBoardBackground___c__GetIconIdList_b__82_0__, 0);
      static_fields = ClassBoardBackground___c_TypeInfo->static_fields;
      static_fields->__9__82_0 = (struct System_Comparison_ClassBoardClassEntity__o *)v10;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&static_fields->__9__82_0, (int32_t)v10, v13, v14, v15, v16, v17, v18);
    }
    if ( v9 )
    {
      System_Collections_Generic_List_object___Sort_59164920(
        v9,
        v10,
        (const MethodInfo_386C8F8 *)Method_System_Collections_Generic_List_ClassBoardClassEntity__Sort__);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v19 = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantClassMaster___);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantClassMaster___);
      if ( Master_object )
      {
        Master_object = ServantClassMaster__GetPlayableGrandBeastClassIds((ServantClassMaster_o *)Master_object, 0);
        if ( v19 )
        {
          v20 = (System_Collections_Generic_IEnumerable_TSource__o *)Master_object;
          Master_object = (void *)ServantClassMaster__GetPlayableGrandBeastBaseClassId((ServantClassMaster_o *)v19, 0);
          if ( entitys )
          {
            v21 = (int)Master_object;
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v33,
              (System_Collections_Generic_List_object__o *)entitys,
              (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__);
            v35 = v33;
            while ( 1 )
            {
              while ( 1 )
              {
                v22 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                        &v35,
                        (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__);
                if ( !v22 )
                {
                  System_Collections_Generic_List_Enumerator_object___Dispose(
                    &v35,
                    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__);
                  return v6;
                }
                current = (ClassBoardClassEntity_o *)v35.fields._current;
                if ( !isGrand )
                  break;
                if ( !v35.fields._current )
                  sub_1C942F0(v22, v23);
                if ( !System_Linq_Enumerable__Contains_int_(
                        v20,
                        HIDWORD(v35.fields._current[1].klass),
                        (const MethodInfo_31B9458 *)Method_System_Linq_Enumerable_Contains_int___)
                  || v21 == current->fields.classId )
                {
                  goto LABEL_33;
                }
              }
              v25 = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              if ( !current )
                sub_1C942F0(v25, v23);
              if ( System_Linq_Enumerable__Contains_int_(
                     (System_Collections_Generic_IEnumerable_TSource__o *)BalanceConfig_TypeInfo->static_fields->PlayableBeastClassIds,
                     current->fields.classId,
                     (const MethodInfo_31B9458 *)Method_System_Linq_Enumerable_Contains_int___) )
              {
                v26 = BalanceConfig_TypeInfo;
                if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  v26 = BalanceConfig_TypeInfo;
                }
                if ( v26->static_fields->PlayableBeastBaseClassId != current->fields.classId )
                  continue;
              }
LABEL_33:
              v27 = DataMasterBase_object__object__int___TryGetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)v19,
                      &entity,
                      current->fields.classId,
                      (const MethodInfo_345B50C *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
              if ( v27 )
              {
                if ( !entity )
                  sub_1C942F0(v27, v28);
                monitor_high = HIDWORD(entity[2].monitor);
                IsOpen = ClassBoardClassEntity__IsOpen(current, 0);
                if ( !v6 )
                  sub_1C942F0(IsOpen, v31);
                System_Collections_Generic_Dictionary_int__bool___Add(
                  v6,
                  monitor_high,
                  IsOpen,
                  (const MethodInfo_34A6078 *)Method_System_Collections_Generic_Dictionary_int__bool__Add__);
              }
            }
          }
        }
      }
    }
LABEL_43:
    sub_1C942F0(Master_object, v8);
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
    sub_1C942F0(0, method);
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  v2 = this;
  if ( (byte_4D303FB & 1) == 0 )
  {
    sub_1C94098(&System_Action_ClassBoardBackground_ExClassIconSet__TypeInfo);
    sub_1C94098(&Method_BasicHelper_ForEach_ClassBoardBackground_ExClassIconSet___);
    sub_1C94098(&Method_ClassBoardBackground___c__InitGrandClassReleasedEffect_b__83_0__);
    this = (ClassBoardBackground_o *)sub_1C94098(&ClassBoardBackground___c_TypeInfo);
    byte_4D303FB = 1;
  }
  grandExIconSet = (System_Collections_Generic_IEnumerable_T__o *)v2->fields.grandExIconSet;
  if ( !grandExIconSet )
    sub_1C942F0(this, method);
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
      _9__83_0 = (System_Action_object__o *)sub_1C942E4(System_Action_ClassBoardBackground_ExClassIconSet__TypeInfo);
      System_Action_object____ctor(
        _9__83_0,
        v6,
        Method_ClassBoardBackground___c__InitGrandClassReleasedEffect_b__83_0__,
        0);
      static_fields = ClassBoardBackground___c_TypeInfo->static_fields;
      static_fields->__9__83_0 = (struct System_Action_ClassBoardBackground_ExClassIconSet__o *)_9__83_0;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__83_0,
        (int32_t)_9__83_0,
        v8,
        v9,
        v10,
        v11,
        v12,
        v13);
    }
    BasicHelper__ForEach_object_(
      grandExIconSet,
      (System_Action_T__o *)_9__83_0,
      (const MethodInfo_3188088 *)Method_BasicHelper_ForEach_ClassBoardBackground_ExClassIconSet___);
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4D303FD & 1) == 0 )
  {
    sub_1C94098(&System_Action_Renderer__TypeInfo);
    sub_1C94098(&Method_BasicHelper_ForEach_Renderer___);
    sub_1C94098(&Method_ClassBoardBackground___c__OnDestroy_b__85_0__);
    sub_1C94098(&ClassBoardBackground___c_TypeInfo);
    byte_4D303FD = 1;
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
    _9__85_0 = (System_Action_object__o *)sub_1C942E4(System_Action_Renderer__TypeInfo);
    System_Action_object____ctor(_9__85_0, v6, Method_ClassBoardBackground___c__OnDestroy_b__85_0__, 0);
    static_fields = ClassBoardBackground___c_TypeInfo->static_fields;
    static_fields->__9__85_0 = (struct System_Action_Renderer__o *)_9__85_0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&static_fields->__9__85_0, (int32_t)_9__85_0, v8, v9, v10, v11, v12, v13);
  }
  BasicHelper__ForEach_object_(
    iconRenderers,
    (System_Action_T__o *)_9__85_0,
    (const MethodInfo_3188088 *)Method_BasicHelper_ForEach_Renderer___);
}


void ClassBoardBackground__PlayBoardParentBeforeAnimation(ClassBoardBackground_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *boardParentAnimation; // x20
  UnityEngine_Object_o *boardParentBeforeAnimationClip; // x20
  __int64 v5; // x1
  SimpleAnimation_o *v6; // x0

  if ( (byte_4D303FC & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D303FC = 1;
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
        sub_1C942F0(v6, v5);
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
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4D30400 & 1) == 0 )
  {
    sub_1C94098(&ClassBoardBackground__PlayExClassReleaseEffectPlayer_d__88_TypeInfo);
    byte_4D30400 = 1;
  }
  v3 = sub_1C942E4(ClassBoardBackground__PlayExClassReleaseEffectPlayer_d__88_TypeInfo);
  ClassBoardBackground__PlayExClassReleaseEffectPlayer_d__88___ctor(
    (ClassBoardBackground__PlayExClassReleaseEffectPlayer_d__88_o *)v3,
    0,
    0);
  if ( !v3 )
    sub_1C942F0(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


// local variable allocation has failed, the output may be wrong!
void ClassBoardBackground__PlayGrandReturnTransitionAnimation(
        ClassBoardBackground_o *this,
        SimpleAnimation_o *classBoardAnimation,
        SimpleAnimation_o *grandBoardAnimation,
        System_Action_o *endCallback,
        bool isQuick,
        const MethodInfo *method)
{
  int64_t v6; // x6
  System_String_o *v7; // x7
  long double v8; // q8
  UnityEngine_Object_o *boardRootAnimation; // x23
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  UnityEngine_Object_o *boardRootReturnAnimationClip; // x23
  __int64 v22; // x1
  UnityEngine_Object_o *name; // x0
  SimpleAnimation_o *v24; // x23
  UnityEngine_AnimationClip_o *v25; // x23
  SimpleAnimation_o *v26; // x24
  SimpleAnimation_o *v27; // x23
  SimpleAnimation_o *v28; // x23
  UnityEngine_Object_c *klass; // x8
  UnityEngine_Object_o *v30; // x23
  __int64 v31; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v33; // x0
  SimpleAnimation_o *v34; // x23
  UnityEngine_Object_c *v35; // x8
  UnityEngine_Object_o *v36; // x23
  __int64 v37; // x9
  SimpleAnimation_State_c **v38; // x10
  __int64 v39; // x0
  UnityEngine_Object_o *grandRootAnimation; // x22
  const MethodInfo *v41; // x6
  UnityEngine_Object_o *v42; // x22
  SimpleAnimation_o *v43; // x22
  UnityEngine_AnimationClip_o *v44; // x22
  SimpleAnimation_o *v45; // x23
  SimpleAnimation_o *v46; // x22
  SimpleAnimation_o *v47; // x22
  UnityEngine_Object_c *v48; // x8
  UnityEngine_Object_o *v49; // x22
  __int64 v50; // x9
  SimpleAnimation_State_c **v51; // x10
  __int64 v52; // x0
  SimpleAnimation_o *v53; // x22
  UnityEngine_Object_c *v54; // x8
  UnityEngine_Object_o *v55; // x22
  __int64 v56; // x9
  SimpleAnimation_State_c **v57; // x10
  __int64 v58; // x0
  bool v59; // w21
  const MethodInfo *v60; // x2
  System_Collections_IEnumerator_o *v61; // x1

  if ( (byte_4D303F6 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&SimpleAnimation_State_TypeInfo);
    sub_1C94098(&StringLiteral_7166/*"GrandReturn"*/);
    byte_4D303F6 = 1;
  }
  this->fields.boardRootAnimation = classBoardAnimation;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.boardRootAnimation,
    (int32_t)classBoardAnimation,
    (int32_t)grandBoardAnimation,
    (int32_t)endCallback,
    (System_String_o *)isQuick,
    (int32_t)method,
    v6,
    v7);
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
      v24 = this->fields.boardRootAnimation;
      name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0);
      if ( !v24 )
        goto LABEL_76;
      name = (UnityEngine_Object_o *)SimpleAnimation__GetState(v24, (System_String_o *)name, 0);
      if ( !name )
      {
        v25 = this->fields.boardRootReturnAnimationClip;
        if ( !v25 )
          goto LABEL_76;
        v26 = this->fields.boardRootAnimation;
        name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(
                                         (UnityEngine_Object_o *)this->fields.boardRootReturnAnimationClip,
                                         0);
        if ( !v26 )
          goto LABEL_76;
        SimpleAnimation__AddClip(v26, v25, (System_String_o *)name, 0);
      }
    }
    name = (UnityEngine_Object_o *)this->fields.boardRootReturnAnimationClip;
    if ( !name )
      goto LABEL_76;
    v27 = this->fields.boardRootAnimation;
    name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0);
    if ( !v27 )
      goto LABEL_76;
    SimpleAnimation__Play_67362784(v27, (System_String_o *)name, 0);
    name = (UnityEngine_Object_o *)this->fields.boardRootReturnAnimationClip;
    if ( !name )
      goto LABEL_76;
    v28 = this->fields.boardRootAnimation;
    name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0);
    if ( !v28 )
      goto LABEL_76;
    name = (UnityEngine_Object_o *)SimpleAnimation__get_Item(v28, (System_String_o *)name, 0);
    *(float *)&v8 = isQuick ? 1.0 : 0.0;
    if ( !name )
      goto LABEL_76;
    klass = name->klass;
    v30 = name;
    v31 = *(unsigned __int16 *)&name->klass->_2.rank;
    if ( *(_WORD *)&name->klass->_2.rank )
    {
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v31;
        p_offset += 2;
        if ( !v31 )
          goto LABEL_27;
      }
      v33 = (__int64)(&klass[1]._1.byval_arg + *(_DWORD *)p_offset);
    }
    else
    {
LABEL_27:
      v33 = sub_1C6A420(name, SimpleAnimation_State_TypeInfo, 6);
    }
    (*(void (__fastcall **)(UnityEngine_Object_o *, _QWORD, long double))v33)(v30, *(_QWORD *)(v33 + 8), v8);
    name = (UnityEngine_Object_o *)this->fields.boardRootReturnAnimationClip;
    if ( !name
      || (v34 = this->fields.boardRootAnimation,
          name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0),
          !v34)
      || (name = (UnityEngine_Object_o *)SimpleAnimation__get_Item(v34, (System_String_o *)name, 0)) == 0 )
    {
LABEL_76:
      sub_1C942F0(name, v22);
    }
    v35 = name->klass;
    v36 = name;
    v37 = *(unsigned __int16 *)&name->klass->_2.rank;
    if ( *(_WORD *)&name->klass->_2.rank )
    {
      v38 = (SimpleAnimation_State_c **)&v35->_1.interfaceOffsets->offset;
      while ( *(v38 - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v37;
        v38 += 2;
        if ( !v37 )
          goto LABEL_36;
      }
      v39 = (__int64)(&v35[1]._1.element_class + 2 * *(_DWORD *)v38);
    }
    else
    {
LABEL_36:
      v39 = sub_1C6A420(name, SimpleAnimation_State_TypeInfo, 8);
    }
    (*(void (__fastcall **)(UnityEngine_Object_o *, _QWORD, float))v39)(v36, *(_QWORD *)(v39 + 8), 1.0);
  }
  this->fields.grandRootAnimation = grandBoardAnimation;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.grandRootAnimation,
    (int32_t)grandBoardAnimation,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  grandRootAnimation = (UnityEngine_Object_o *)this->fields.grandRootAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(grandRootAnimation, 0, 0) )
    goto LABEL_75;
  v42 = (UnityEngine_Object_o *)this->fields.boardRootReturnAnimationClip;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v42, 0, 0) )
  {
    name = (UnityEngine_Object_o *)this->fields.boardRootReturnAnimationClip;
    if ( !name )
      goto LABEL_76;
    v43 = this->fields.grandRootAnimation;
    name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0);
    if ( !v43 )
      goto LABEL_76;
    name = (UnityEngine_Object_o *)SimpleAnimation__GetState(v43, (System_String_o *)name, 0);
    if ( !name )
    {
      v44 = this->fields.boardRootReturnAnimationClip;
      if ( !v44 )
        goto LABEL_76;
      v45 = this->fields.grandRootAnimation;
      name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(
                                       (UnityEngine_Object_o *)this->fields.boardRootReturnAnimationClip,
                                       0);
      if ( !v45 )
        goto LABEL_76;
      SimpleAnimation__AddClip(v45, v44, (System_String_o *)name, 0);
    }
  }
  name = (UnityEngine_Object_o *)this->fields.boardRootReturnAnimationClip;
  if ( !name )
    goto LABEL_76;
  v46 = this->fields.grandRootAnimation;
  name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0);
  if ( !v46 )
    goto LABEL_76;
  SimpleAnimation__Play_67362784(v46, (System_String_o *)name, 0);
  name = (UnityEngine_Object_o *)this->fields.boardRootReturnAnimationClip;
  if ( !name )
    goto LABEL_76;
  v47 = this->fields.grandRootAnimation;
  name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0);
  if ( !v47 )
    goto LABEL_76;
  name = (UnityEngine_Object_o *)SimpleAnimation__get_Item(v47, (System_String_o *)name, 0);
  *(float *)&v8 = isQuick ? 1.0 : 0.0;
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
        goto LABEL_63;
    }
    v52 = (__int64)(&v48[1]._1.byval_arg + *(_DWORD *)v51);
  }
  else
  {
LABEL_63:
    v52 = sub_1C6A420(name, SimpleAnimation_State_TypeInfo, 6);
  }
  (*(void (__fastcall **)(UnityEngine_Object_o *, _QWORD, long double))v52)(v49, *(_QWORD *)(v52 + 8), v8);
  name = (UnityEngine_Object_o *)this->fields.boardRootReturnAnimationClip;
  if ( !name )
    goto LABEL_76;
  v53 = this->fields.grandRootAnimation;
  name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0);
  if ( !v53 )
    goto LABEL_76;
  name = (UnityEngine_Object_o *)SimpleAnimation__get_Item(v53, (System_String_o *)name, 0);
  if ( !name )
    goto LABEL_76;
  v54 = name->klass;
  v55 = name;
  v56 = *(unsigned __int16 *)&name->klass->_2.rank;
  if ( *(_WORD *)&name->klass->_2.rank )
  {
    v57 = (SimpleAnimation_State_c **)&v54->_1.interfaceOffsets->offset;
    while ( *(v57 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v56;
      v57 += 2;
      if ( !v56 )
        goto LABEL_72;
    }
    v58 = (__int64)(&v54[1]._1.element_class + 2 * *(_DWORD *)v57);
  }
  else
  {
LABEL_72:
    v58 = sub_1C6A420(name, SimpleAnimation_State_TypeInfo, 8);
  }
  (*(void (__fastcall **)(UnityEngine_Object_o *, _QWORD, float))v58)(v55, *(_QWORD *)(v58 + 8), 1.0);
LABEL_75:
  v59 = isQuick;
  ClassBoardBackground__PlaySimpleAnimation(
    this,
    this->fields.mainAnimation,
    (System_String_o *)StringLiteral_7166/*"GrandReturn"*/,
    endCallback,
    v59,
    0,
    v41);
  v61 = ClassBoardBackground__PlayGrandReturnTransitionAnimationFromTween(this, v59, v60);
  UnityEngine_MonoBehaviour__StartCoroutine_72096164((UnityEngine_MonoBehaviour_o *)this, v61, 0);
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4D303F7 & 1) == 0 )
  {
    sub_1C94098(&ClassBoardBackground__PlayGrandReturnTransitionAnimationFromTween_d__79_TypeInfo);
    byte_4D303F7 = 1;
  }
  v5 = sub_1C942E4(ClassBoardBackground__PlayGrandReturnTransitionAnimationFromTween_d__79_TypeInfo);
  ClassBoardBackground__PlayGrandReturnTransitionAnimationFromTween_d__79___ctor(
    (ClassBoardBackground__PlayGrandReturnTransitionAnimationFromTween_d__79_o *)v5,
    0,
    0);
  if ( !v5 )
    sub_1C942F0(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 32), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_BYTE *)(v5 + 40) = isQuick;
  return (System_Collections_IEnumerator_o *)v5;
}


// local variable allocation has failed, the output may be wrong!
void ClassBoardBackground__PlayGrandTransitionAnimation(
        ClassBoardBackground_o *this,
        SimpleAnimation_o *classBoardAnimation,
        SimpleAnimation_o *grandBoardAnimation,
        System_Action_o *endCallback,
        bool isQuick,
        const MethodInfo *method)
{
  int64_t v6; // x6
  System_String_o *v7; // x7
  long double v8; // q8
  UnityEngine_Object_o *boardRootAnimation; // x23
  const MethodInfo *v15; // x2
  UnityEngine_Object_o *boardRootAnimationClip; // x23
  __int64 v17; // x1
  UnityEngine_Object_o *name; // x0
  SimpleAnimation_o *v19; // x23
  UnityEngine_AnimationClip_o *v20; // x23
  SimpleAnimation_o *v21; // x24
  SimpleAnimation_o *v22; // x23
  SimpleAnimation_o *v23; // x23
  UnityEngine_Object_o *v24; // x23
  UnityEngine_Object_c *klass; // x8
  __int64 v26; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v28; // x0
  SimpleAnimation_o *v29; // x23
  UnityEngine_Object_c *v30; // x8
  UnityEngine_Object_o *v31; // x23
  __int64 v32; // x9
  SimpleAnimation_State_c **v33; // x10
  __int64 v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  UnityEngine_Object_o *grandRootAnimation; // x22
  const MethodInfo *v42; // x6
  UnityEngine_Object_o *v43; // x22
  SimpleAnimation_o *v44; // x22
  UnityEngine_AnimationClip_o *v45; // x22
  SimpleAnimation_o *v46; // x23
  SimpleAnimation_o *v47; // x22
  SimpleAnimation_o *v48; // x22
  UnityEngine_Object_o *v49; // x22
  UnityEngine_Object_c *v50; // x8
  __int64 v51; // x9
  SimpleAnimation_State_c **v52; // x10
  __int64 v53; // x0
  SimpleAnimation_o *v54; // x22
  UnityEngine_Object_c *v55; // x8
  UnityEngine_Object_o *v56; // x22
  __int64 v57; // x9
  SimpleAnimation_State_c **v58; // x10
  __int64 v59; // x0

  if ( (byte_4D303F4 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&SimpleAnimation_State_TypeInfo);
    sub_1C94098(&StringLiteral_7178/*"GrandStart"*/);
    byte_4D303F4 = 1;
  }
  this->fields.boardRootAnimation = classBoardAnimation;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.boardRootAnimation,
    (int32_t)classBoardAnimation,
    (int32_t)grandBoardAnimation,
    (int32_t)endCallback,
    (System_String_o *)isQuick,
    (int32_t)method,
    v6,
    v7);
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
      v19 = this->fields.boardRootAnimation;
      name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0);
      if ( !v19 )
        goto LABEL_74;
      name = (UnityEngine_Object_o *)SimpleAnimation__GetState(v19, (System_String_o *)name, 0);
      if ( !name )
      {
        v20 = this->fields.boardRootAnimationClip;
        if ( !v20 )
          goto LABEL_74;
        v21 = this->fields.boardRootAnimation;
        name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(
                                         (UnityEngine_Object_o *)this->fields.boardRootAnimationClip,
                                         0);
        if ( !v21 )
          goto LABEL_74;
        SimpleAnimation__AddClip(v21, v20, (System_String_o *)name, 0);
      }
    }
    name = (UnityEngine_Object_o *)this->fields.boardRootAnimationClip;
    if ( !name )
      goto LABEL_74;
    v22 = this->fields.boardRootAnimation;
    name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0);
    if ( !v22 )
      goto LABEL_74;
    SimpleAnimation__Play_67362784(v22, (System_String_o *)name, 0);
    name = (UnityEngine_Object_o *)this->fields.boardRootAnimationClip;
    if ( !name )
      goto LABEL_74;
    v23 = this->fields.boardRootAnimation;
    name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0);
    if ( !v23 )
      goto LABEL_74;
    name = (UnityEngine_Object_o *)SimpleAnimation__get_Item(v23, (System_String_o *)name, 0);
    v24 = name;
    LODWORD(v8) = 0;
    if ( isQuick )
      *(float *)&v8 = this->fields.directlyGrandAnimationStartPoint;
    if ( !name )
      goto LABEL_74;
    klass = name->klass;
    v26 = *(unsigned __int16 *)&name->klass->_2.rank;
    if ( *(_WORD *)&name->klass->_2.rank )
    {
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v26;
        p_offset += 2;
        if ( !v26 )
          goto LABEL_26;
      }
      v28 = (__int64)(&klass[1]._1.byval_arg + *(_DWORD *)p_offset);
    }
    else
    {
LABEL_26:
      v28 = sub_1C6A420(name, SimpleAnimation_State_TypeInfo, 6);
    }
    (*(void (__fastcall **)(UnityEngine_Object_o *, _QWORD, long double))v28)(v24, *(_QWORD *)(v28 + 8), v8);
    name = (UnityEngine_Object_o *)this->fields.boardRootAnimationClip;
    if ( !name
      || (v29 = this->fields.boardRootAnimation,
          name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0),
          !v29)
      || (name = (UnityEngine_Object_o *)SimpleAnimation__get_Item(v29, (System_String_o *)name, 0)) == 0 )
    {
LABEL_74:
      sub_1C942F0(name, v17);
    }
    v30 = name->klass;
    v31 = name;
    v32 = *(unsigned __int16 *)&name->klass->_2.rank;
    if ( *(_WORD *)&name->klass->_2.rank )
    {
      v33 = (SimpleAnimation_State_c **)&v30->_1.interfaceOffsets->offset;
      while ( *(v33 - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v32;
        v33 += 2;
        if ( !v32 )
          goto LABEL_35;
      }
      v34 = (__int64)(&v30[1]._1.element_class + 2 * *(_DWORD *)v33);
    }
    else
    {
LABEL_35:
      v34 = sub_1C6A420(name, SimpleAnimation_State_TypeInfo, 8);
    }
    (*(void (__fastcall **)(UnityEngine_Object_o *, _QWORD, float))v34)(v31, *(_QWORD *)(v34 + 8), 1.0);
  }
  ClassBoardBackground__PlayGrandTransitionAnimationFromTween(this, isQuick, v15);
  this->fields.grandRootAnimation = grandBoardAnimation;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.grandRootAnimation,
    (int32_t)grandBoardAnimation,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  grandRootAnimation = (UnityEngine_Object_o *)this->fields.grandRootAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(grandRootAnimation, 0, 0) )
    goto LABEL_73;
  v43 = (UnityEngine_Object_o *)this->fields.boardRootAnimationClip;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v43, 0, 0) )
  {
    name = (UnityEngine_Object_o *)this->fields.boardRootAnimationClip;
    if ( !name )
      goto LABEL_74;
    v44 = this->fields.grandRootAnimation;
    name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0);
    if ( !v44 )
      goto LABEL_74;
    name = (UnityEngine_Object_o *)SimpleAnimation__GetState(v44, (System_String_o *)name, 0);
    if ( !name )
    {
      v45 = this->fields.boardRootAnimationClip;
      if ( !v45 )
        goto LABEL_74;
      v46 = this->fields.grandRootAnimation;
      name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(
                                       (UnityEngine_Object_o *)this->fields.boardRootAnimationClip,
                                       0);
      if ( !v46 )
        goto LABEL_74;
      SimpleAnimation__AddClip(v46, v45, (System_String_o *)name, 0);
    }
  }
  name = (UnityEngine_Object_o *)this->fields.boardRootAnimationClip;
  if ( !name )
    goto LABEL_74;
  v47 = this->fields.grandRootAnimation;
  name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0);
  if ( !v47 )
    goto LABEL_74;
  SimpleAnimation__Play_67362784(v47, (System_String_o *)name, 0);
  name = (UnityEngine_Object_o *)this->fields.boardRootAnimationClip;
  if ( !name )
    goto LABEL_74;
  v48 = this->fields.grandRootAnimation;
  name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0);
  if ( !v48 )
    goto LABEL_74;
  name = (UnityEngine_Object_o *)SimpleAnimation__get_Item(v48, (System_String_o *)name, 0);
  v49 = name;
  LODWORD(v8) = 0;
  if ( isQuick )
    *(float *)&v8 = this->fields.directlyGrandAnimationStartPoint;
  if ( !name )
    goto LABEL_74;
  v50 = name->klass;
  v51 = *(unsigned __int16 *)&name->klass->_2.rank;
  if ( *(_WORD *)&name->klass->_2.rank )
  {
    v52 = (SimpleAnimation_State_c **)&v50->_1.interfaceOffsets->offset;
    while ( *(v52 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v51;
      v52 += 2;
      if ( !v51 )
        goto LABEL_61;
    }
    v53 = (__int64)(&v50[1]._1.byval_arg + *(_DWORD *)v52);
  }
  else
  {
LABEL_61:
    v53 = sub_1C6A420(name, SimpleAnimation_State_TypeInfo, 6);
  }
  (*(void (__fastcall **)(UnityEngine_Object_o *, _QWORD, long double))v53)(v49, *(_QWORD *)(v53 + 8), v8);
  name = (UnityEngine_Object_o *)this->fields.boardRootAnimationClip;
  if ( !name )
    goto LABEL_74;
  v54 = this->fields.grandRootAnimation;
  name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0);
  if ( !v54 )
    goto LABEL_74;
  name = (UnityEngine_Object_o *)SimpleAnimation__get_Item(v54, (System_String_o *)name, 0);
  if ( !name )
    goto LABEL_74;
  v55 = name->klass;
  v56 = name;
  v57 = *(unsigned __int16 *)&name->klass->_2.rank;
  if ( *(_WORD *)&name->klass->_2.rank )
  {
    v58 = (SimpleAnimation_State_c **)&v55->_1.interfaceOffsets->offset;
    while ( *(v58 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v57;
      v58 += 2;
      if ( !v57 )
        goto LABEL_70;
    }
    v59 = (__int64)(&v55[1]._1.element_class + 2 * *(_DWORD *)v58);
  }
  else
  {
LABEL_70:
    v59 = sub_1C6A420(name, SimpleAnimation_State_TypeInfo, 8);
  }
  (*(void (__fastcall **)(UnityEngine_Object_o *, _QWORD, float))v59)(v56, *(_QWORD *)(v59 + 8), 1.0);
LABEL_73:
  ClassBoardBackground__PlaySimpleAnimation(
    this,
    this->fields.mainAnimation,
    (System_String_o *)StringLiteral_7178/*"GrandStart"*/,
    endCallback,
    isQuick,
    isQuick,
    v42);
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
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  UnityEngine_Vector3_o v25; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4D303F5 & 1) == 0 )
  {
    sub_1C94098(&EventDelegate_Callback_TypeInfo);
    sub_1C94098(&Method_ClassBoardBackground___c__PlayGrandTransitionAnimationFromTween_b__77_0__);
    sub_1C94098(&ClassBoardBackground___c_TypeInfo);
    byte_4D303F5 = 1;
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
  v25.fields.x = this->fields.classScorePosXMin
               + (float)((float)(this->fields.classScorePosXMax - this->fields.classScorePosXMin) * v11);
  v25.fields.y = 0.0;
  v25.fields.z = 0.0;
  v12 = TweenPosition__Begin(this->fields.boardRoot, v5, v25, 0);
  if ( !v12 )
    sub_1C942F0(0, v13);
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
    _9__77_0 = (EventDelegate_Callback_o *)sub_1C942E4(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(
      _9__77_0,
      v17,
      Method_ClassBoardBackground___c__PlayGrandTransitionAnimationFromTween_b__77_0__,
      0);
    static_fields = ClassBoardBackground___c_TypeInfo->static_fields;
    static_fields->__9__77_0 = _9__77_0;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__77_0,
      (int32_t)_9__77_0,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
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
      sub_1C942F0(this, 0);
    SimpleAnimation__Rewind(anim, 0);
    v11 = SimpleAnimation__Play_67362784(anim, name, 0);
    v13 = ClassBoardBackground__WaitAnimationFinished((ClassBoardBackground_o *)v11, anim, name, endCallback, v12);
    UnityEngine_MonoBehaviour__StartCoroutine_72096164((UnityEngine_MonoBehaviour_o *)this, v13, 0);
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
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v21; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v22; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_4D30401 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_ClassBoardBackground__PlayStartExClassReleaseEffectPlayer_b__89_0__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_KeyValuePair_int__SimpleAnimation__get_Key__);
    sub_1C94098(&Method_System_Collections_Generic_KeyValuePair_int__SimpleAnimation__get_Value__);
    sub_1C94098(&Method_ClassBoardBackground___c__PlayStartExClassReleaseEffectPlayer_b__89_1__);
    sub_1C94098(&ClassBoardBackground___c_TypeInfo);
    sub_1C94098(&StringLiteral_10595/*"Particle_CrassIcon_Ex_Released"*/);
    byte_4D30401 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.exClassReleaseEffectAnimationDic, 0) )
  {
    exClassReleaseEffectAnimationDic = this->fields.exClassReleaseEffectAnimationDic;
    if ( !exClassReleaseEffectAnimationDic )
      sub_1C942F0(0, v3);
    System_Collections_Generic_Dictionary_int__object___GetEnumerator(
      &v21,
      (System_Collections_Generic_Dictionary_int__object__o *)exClassReleaseEffectAnimationDic,
      (const MethodInfo_34B4D0C *)Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__GetEnumerator__);
    v22 = v21;
    v5 = 1;
    while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
              &v22,
              (const MethodInfo_360FFAC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__MoveNext__) )
    {
      value = v22.fields._current.fields.value;
      if ( (v5 & 1) != 0 )
      {
        v8 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
        System_Action___ctor(
          v8,
          (Il2CppObject *)this,
          Method_ClassBoardBackground__PlayStartExClassReleaseEffectPlayer_b__89_0__,
          0);
        ClassBoardBackground__PlaySimpleAnimation(
          this,
          (SimpleAnimation_o *)value,
          (System_String_o *)StringLiteral_10595/*"Particle_CrassIcon_Ex_Released"*/,
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
        v11 = (System_String_o *)StringLiteral_10595/*"Particle_CrassIcon_Ex_Released"*/;
        _9__89_1 = v10->static_fields->__9__89_1;
        if ( !_9__89_1 )
        {
          if ( !v10->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v10);
            v10 = ClassBoardBackground___c_TypeInfo;
          }
          v13 = (Il2CppObject *)v10->static_fields->__9;
          _9__89_1 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
          System_Action___ctor(
            _9__89_1,
            v13,
            Method_ClassBoardBackground___c__PlayStartExClassReleaseEffectPlayer_b__89_1__,
            0);
          static_fields = ClassBoardBackground___c_TypeInfo->static_fields;
          static_fields->__9__89_1 = _9__89_1;
          sub_1C9403C(
            (GrandQuestFolderBoardItem_o *)&static_fields->__9__89_1,
            (int32_t)_9__89_1,
            v15,
            v16,
            v17,
            v18,
            v19,
            v20);
        }
        ClassBoardBackground__PlaySimpleAnimation(this, (SimpleAnimation_o *)value, v11, _9__89_1, 0, 0, v6);
        v5 = 0;
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
      &v22,
      (const MethodInfo_36100D0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__Dispose__);
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  char v20; // w28
  Il2CppObject *value; // x22
  __int64 v22; // x21
  __int64 v23; // x0
  __int64 v24; // x1
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  SimpleAnimation_o *v37; // x22
  System_Action_o *v38; // x23
  const MethodInfo *v39; // x6
  const MethodInfo *v40; // x6
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v41; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v42; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_4D30402 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_KeyValuePair_int__SimpleAnimation__get_Key__);
    sub_1C94098(&Method_System_Collections_Generic_KeyValuePair_int__SimpleAnimation__get_Value__);
    sub_1C94098(&ClassBoardBackground___c__DisplayClass90_0_TypeInfo);
    sub_1C94098(&Method_ClassBoardBackground___c__DisplayClass90_1__PlayStartGrandExClassReleaseEffectPlayer_b__0__);
    sub_1C94098(&Method_ClassBoardBackground___c__DisplayClass90_1__PlayStartGrandExClassReleaseEffectPlayer_b__1__);
    sub_1C94098(&ClassBoardBackground___c__DisplayClass90_1_TypeInfo);
    sub_1C94098(&StringLiteral_10596/*"Particle_GrandCrassIcon_Ex_Released"*/);
    sub_1C94098(&StringLiteral_10595/*"Particle_CrassIcon_Ex_Released"*/);
    byte_4D30402 = 1;
  }
  memset(&v42, 0, sizeof(v42));
  v5 = sub_1C942E4(ClassBoardBackground___c__DisplayClass90_0_TypeInfo);
  ClassBoardBackground___c__DisplayClass90_0___ctor((ClassBoardBackground___c__DisplayClass90_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_16;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = callback;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)callback, v14, v15, v16, v17, v18, v19);
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
    sub_1C942F0(grandExClassReleaseEffectAnimationDic, v7);
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v41,
    (System_Collections_Generic_Dictionary_int__object__o *)grandExClassReleaseEffectAnimationDic,
    (const MethodInfo_34B4D0C *)Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__GetEnumerator__);
  v42 = v41;
  v20 = 1;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v42,
            (const MethodInfo_360FFAC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__MoveNext__) )
  {
    value = v42.fields._current.fields.value;
    v22 = sub_1C942E4(ClassBoardBackground___c__DisplayClass90_1_TypeInfo);
    ClassBoardBackground___c__DisplayClass90_1___ctor((ClassBoardBackground___c__DisplayClass90_1_o *)v22, 0);
    if ( !v22 )
      sub_1C942F0(v23, v24);
    *(_QWORD *)(v22 + 24) = v5;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v22 + 24), v5, v25, v26, v27, v28, v29, v30);
    *(_QWORD *)(v22 + 16) = value;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v22 + 16), (int32_t)value, v31, v32, v33, v34, v35, v36);
    v37 = *(SimpleAnimation_o **)(v22 + 16);
    v38 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
    if ( (v20 & 1) != 0 )
    {
      System_Action___ctor(
        v38,
        (Il2CppObject *)v22,
        Method_ClassBoardBackground___c__DisplayClass90_1__PlayStartGrandExClassReleaseEffectPlayer_b__0__,
        0);
      ClassBoardBackground__PlaySimpleAnimation(this, v37, (System_String_o *)StringLiteral_10596/*"Particle_GrandCrassIcon_Ex_Released"*/, v38, 0, 0, v39);
    }
    else
    {
      System_Action___ctor(
        v38,
        (Il2CppObject *)v22,
        Method_ClassBoardBackground___c__DisplayClass90_1__PlayStartGrandExClassReleaseEffectPlayer_b__1__,
        0);
      ClassBoardBackground__PlaySimpleAnimation(this, v37, (System_String_o *)StringLiteral_10595/*"Particle_CrassIcon_Ex_Released"*/, v38, 0, 0, v40);
    }
    v20 = 0;
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v42,
    (const MethodInfo_36100D0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__Dispose__);
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

  if ( (byte_4D303FE & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_ClassBoardBackground__PlayStartMainEffectPlayer_b__86_0__);
    sub_1C94098(&Method_ClassBoardEffectPlayer_GetData_int___);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&StringLiteral_8895/*"MainTransition{0}_Release"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    sub_1C94098(&StringLiteral_8894/*"MainTransition{0}"*/);
    byte_4D303FE = 1;
  }
  startMainEffectPlayer = this->fields.startMainEffectPlayer;
  if ( !startMainEffectPlayer )
    sub_1C942F0(0, method);
  Data_int = ClassBoardEffectPlayer__GetData_int_(
               startMainEffectPlayer,
               (const MethodInfo_318F878 *)Method_ClassBoardEffectPlayer_GetData_int___);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.exClassReleaseEffectAnimationDic, 0) )
  {
    v13 = Data_int;
    v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13);
    v6 = System_String__Format((System_String_o *)StringLiteral_8894/*"MainTransition{0}"*/, v5, 0);
  }
  else
  {
    v14 = Data_int;
    v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14);
    v6 = System_String__Format((System_String_o *)StringLiteral_8895/*"MainTransition{0}_Release"*/, v7, 0);
    v9 = ClassBoardBackground__PlayExClassReleaseEffectPlayer(this, v8);
    UnityEngine_MonoBehaviour__StartCoroutine_72096164((UnityEngine_MonoBehaviour_o *)this, v9, 0);
  }
  mainAnimation = this->fields.mainAnimation;
  v11 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_ClassBoardBackground__PlayStartMainEffectPlayer_b__86_0__, 0);
  ClassBoardBackground__PlaySimpleAnimation(this, mainAnimation, v6, v11, 0, 0, v12);
}


void ClassBoardBackground__SetBoardParentAnimation(
        ClassBoardBackground_o *this,
        SimpleAnimation_o *animation,
        bool isQuick,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  UnityEngine_Object_o *boardParentAnimation; // x21
  UnityEngine_Object_o *boardParentAnimationClip; // x21
  __int64 v13; // x1
  UnityEngine_Object_o *name; // x0
  SimpleAnimation_o *v15; // x21
  UnityEngine_AnimationClip_o *v16; // x21
  SimpleAnimation_o *v17; // x22
  UnityEngine_Object_o *boardParentBeforeAnimationClip; // x21
  SimpleAnimation_o *v19; // x21
  UnityEngine_AnimationClip_o *v20; // x21
  SimpleAnimation_o *v21; // x22
  SimpleAnimation_o *v22; // x21
  SimpleAnimation_o *v23; // x19
  UnityEngine_Object_c *klass; // x8
  UnityEngine_Object_o *v25; // x19
  __int64 v26; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v28; // x0

  if ( (byte_4D303F3 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&SimpleAnimation_State_TypeInfo);
    byte_4D303F3 = 1;
  }
  this->fields.boardParentAnimation = animation;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.boardParentAnimation,
    (int32_t)animation,
    isQuick,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
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
    v15 = this->fields.boardParentAnimation;
    name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0);
    if ( !v15 )
      goto LABEL_38;
    name = (UnityEngine_Object_o *)SimpleAnimation__GetState(v15, (System_String_o *)name, 0);
    if ( !name )
    {
      v16 = this->fields.boardParentAnimationClip;
      if ( !v16 )
        goto LABEL_38;
      v17 = this->fields.boardParentAnimation;
      name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(
                                       (UnityEngine_Object_o *)this->fields.boardParentAnimationClip,
                                       0);
      if ( !v17 )
        goto LABEL_38;
      SimpleAnimation__AddClip(v17, v16, (System_String_o *)name, 0);
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
  v19 = this->fields.boardParentAnimation;
  name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0);
  if ( !v19 )
    goto LABEL_38;
  name = (UnityEngine_Object_o *)SimpleAnimation__GetState(v19, (System_String_o *)name, 0);
  if ( !name )
  {
    v20 = this->fields.boardParentBeforeAnimationClip;
    if ( !v20 )
      goto LABEL_38;
    v21 = this->fields.boardParentAnimation;
    name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(
                                     (UnityEngine_Object_o *)this->fields.boardParentBeforeAnimationClip,
                                     0);
    if ( !v21 )
      goto LABEL_38;
    SimpleAnimation__AddClip(v21, v20, (System_String_o *)name, 0);
  }
  name = (UnityEngine_Object_o *)this->fields.boardParentBeforeAnimationClip;
  if ( !name )
    goto LABEL_38;
  v22 = this->fields.boardParentAnimation;
  name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0);
  if ( !v22 )
    goto LABEL_38;
  SimpleAnimation__Play_67362784(v22, (System_String_o *)name, 0);
  if ( !isQuick )
    return;
  name = (UnityEngine_Object_o *)this->fields.boardParentBeforeAnimationClip;
  if ( !name
    || (v23 = this->fields.boardParentAnimation,
        name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0),
        !v23)
    || (name = (UnityEngine_Object_o *)SimpleAnimation__get_Item(v23, (System_String_o *)name, 0)) == 0 )
  {
LABEL_38:
    sub_1C942F0(name, v13);
  }
  klass = name->klass;
  v25 = name;
  v26 = *(unsigned __int16 *)&name->klass->_2.rank;
  if ( *(_WORD *)&name->klass->_2.rank )
  {
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v26;
      p_offset += 2;
      if ( !v26 )
        goto LABEL_34;
    }
    v28 = (__int64)(&klass[1]._1.byval_arg + *(_DWORD *)p_offset);
  }
  else
  {
LABEL_34:
    v28 = sub_1C6A420(name, SimpleAnimation_State_TypeInfo, 6);
  }
  (*(void (__fastcall **)(UnityEngine_Object_o *, _QWORD, float))v28)(v25, *(_QWORD *)(v28 + 8), 1.0);
}


void ClassBoardBackground__SetBoardRootObj(
        ClassBoardBackground_o *this,
        UnityEngine_GameObject_o *boardRootObj,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.boardRoot = boardRootObj;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.boardRoot,
    (int32_t)boardRootObj,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  System_Collections_Generic_IEnumerable_TSource__o *iconTextures; // x21
  System_Func_object__bool__o *v16; // x23
  Il2CppObject *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  UnityEngine_Object_o *v24; // x21
  System_Collections_Generic_IEnumerable_T__o *iconRenderers; // x21
  System_Action_object__o *v26; // x23
  System_Collections_Generic_Dictionary_int__object__o *v27; // x21
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  const MethodInfo *v34; // x3
  struct ClassBoardBackground_ExClassIconSet_array *exIconSet; // x19
  Il2CppObject *key; // x22
  __int64 v37; // x21
  Il2CppObject *v38; // x1
  System_String_o *v39; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  Il2CppObject *v46; // x1
  System_String_o *v47; // x0
  int32_t v48; // w2
  int32_t v49; // w3
  System_String_o *v50; // x4
  int32_t v51; // w5
  int64_t v52; // x6
  System_String_o *v53; // x7
  Il2CppObject *v54; // x1
  System_String_o *v55; // x0
  int32_t v56; // w2
  int32_t v57; // w3
  System_String_o *v58; // x4
  int32_t v59; // w5
  int64_t v60; // x6
  System_String_o *v61; // x7
  _BOOL8 v62; // x0
  __int64 v63; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v64; // x8
  unsigned int v65; // w19
  System_Func_object__bool__o **v66; // x22
  System_Func_object__bool__o **v67; // x24
  System_Func_object__bool__o **v68; // x25
  unsigned int v69; // w9
  ClassBoardBackground_ExClassIconSet_o *v70; // x8
  System_Func_object__bool__o *v71; // x23
  System_Collections_Generic_IEnumerable_TSource__o *textures; // x27
  int32_t v73; // w2
  int32_t v74; // w3
  System_String_o *v75; // x4
  int32_t v76; // w5
  int64_t v77; // x6
  System_String_o *v78; // x7
  Il2CppObject *v79; // x0
  System_Func_object__bool__o *v80; // x26
  UnityEngine_Object_o *v81; // x23
  int32_t v82; // w2
  int32_t v83; // w3
  System_String_o *v84; // x4
  int32_t v85; // w5
  int64_t v86; // x6
  System_String_o *v87; // x7
  Il2CppObject *v88; // x0
  System_Func_object__bool__o *v89; // x28
  UnityEngine_Object_o *v90; // x26
  int32_t v91; // w2
  int32_t v92; // w3
  System_String_o *v93; // x4
  int32_t v94; // w5
  int64_t v95; // x6
  System_String_o *v96; // x7
  Il2CppObject *v97; // x27
  struct ClassBoardBackground_ExClassIconSet_array *v98; // x8
  ClassBoardBackground_ExClassIconSet_o *v99; // x8
  UnityEngine_Renderer_o *v100; // x0
  UnityEngine_Material_o *material; // x0
  __int64 v102; // x1
  __int64 v103; // x0
  __int64 v104; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v105; // x8
  ClassBoardBackground_ExClassIconSet_o *v106; // x8
  UnityEngine_Renderer_o *effectRenderer; // x0
  UnityEngine_Material_o *v108; // x0
  __int64 v109; // x1
  __int64 v110; // x0
  __int64 v111; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v112; // x8
  ClassBoardBackground_ExClassIconSet_o *v113; // x8
  UnityEngine_Renderer_o *onRenderer; // x0
  UnityEngine_Material_o *v115; // x0
  __int64 v116; // x1
  __int64 v117; // x0
  __int64 v118; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v119; // x8
  ClassBoardBackground_ExClassIconSet_o *v120; // x8
  UnityEngine_Renderer_o *effectGlowRenderer; // x0
  UnityEngine_Material_o *v122; // x0
  __int64 v123; // x1
  __int64 v124; // x0
  __int64 v125; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v126; // x8
  ClassBoardBackground_ExClassIconSet_o *v127; // x8
  UnityEngine_Component_o *v128; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v130; // x1
  __int64 v131; // x0
  __int64 v132; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v133; // x8
  ClassBoardBackground_ExClassIconSet_o *v134; // x8
  UnityEngine_Component_o *v135; // x0
  UnityEngine_GameObject_o *v136; // x0
  __int64 v137; // x1
  __int64 v138; // x0
  __int64 v139; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v140; // x8
  ClassBoardBackground_ExClassIconSet_o *v141; // x8
  UnityEngine_GameObject_o *releaseEffect; // x0
  UnityEngine_GameObject_o *v143; // x0
  __int64 v144; // x1
  _BOOL8 IsPlayed; // x0
  __int64 v146; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v147; // x8
  ClassBoardBackground_ExClassIconSet_o *v148; // x8
  UnityEngine_Object_o *animation; // x21
  _BOOL8 v150; // x0
  __int64 v151; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v152; // x8
  ClassBoardBackground_ExClassIconSet_o *v153; // x8
  UnityEngine_Component_o *v154; // x0
  UnityEngine_GameObject_o *v155; // x0
  __int64 v156; // x1
  __int64 v157; // x0
  __int64 v158; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v159; // x8
  ClassBoardBackground_ExClassIconSet_o *v160; // x8
  UnityEngine_Component_o *v161; // x0
  UnityEngine_GameObject_o *v162; // x0
  __int64 v163; // x1
  __int64 v164; // x0
  __int64 v165; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v166; // x8
  ClassBoardBackground_ExClassIconSet_o *v167; // x8
  struct System_Collections_Generic_Dictionary_int__SimpleAnimation__o *exClassReleaseEffectAnimationDic; // x0
  int max_length; // w8
  unsigned int v170; // w20
  ClassBoardBackground_ExClassIconSet_o *v171; // x21
  __int64 v172; // [xsp+0h] [xbp-C0h]
  int32_t classId[2]; // [xsp+8h] [xbp-B8h]
  int v175; // [xsp+18h] [xbp-A8h] BYREF
  int v176; // [xsp+1Ch] [xbp-A4h] BYREF
  _OWORD v177[2]; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v178; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4D303F8 & 1) == 0 )
  {
    sub_1C94098(&System_Action_Renderer__TypeInfo);
    sub_1C94098(&Method_BasicHelper_ForEach_Renderer___);
    sub_1C94098(&ClassBoardUtility_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__Add__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__SimpleAnimation___ctor__);
    sub_1C94098(&System_Collections_Generic_Dictionary_int__SimpleAnimation__TypeInfo);
    sub_1C94098(&Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__get_Current__);
    sub_1C94098(&System_Func_Texture__bool__TypeInfo);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Key__);
    sub_1C94098(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Value__);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_ClassBoardBackground___c__DisplayClass80_0__SetClassIcon_b__0__);
    sub_1C94098(&Method_ClassBoardBackground___c__DisplayClass80_0__SetClassIcon_b__1__);
    sub_1C94098(&ClassBoardBackground___c__DisplayClass80_0_TypeInfo);
    sub_1C94098(&Method_ClassBoardBackground___c__DisplayClass80_1__SetClassIcon_b__2__);
    sub_1C94098(&Method_ClassBoardBackground___c__DisplayClass80_1__SetClassIcon_b__3__);
    sub_1C94098(&Method_ClassBoardBackground___c__DisplayClass80_1__SetClassIcon_b__4__);
    sub_1C94098(&ClassBoardBackground___c__DisplayClass80_1_TypeInfo);
    sub_1C94098(&StringLiteral_4488/*"ClassIconEx_off_{0}"*/);
    sub_1C94098(&StringLiteral_4489/*"ClassIconEx_on_{0}"*/);
    sub_1C94098(&StringLiteral_4487/*"ClassIconEx_ef_glow_{0}"*/);
    byte_4D303F8 = 1;
  }
  memset(&v178, 0, 32);
  v6 = sub_1C942E4(ClassBoardBackground___c__DisplayClass80_0_TypeInfo);
  ClassBoardBackground___c__DisplayClass80_0___ctor((ClassBoardBackground___c__DisplayClass80_0_o *)v6, 0);
  if ( !v6 )
    goto LABEL_162;
  *(_DWORD *)(v6 + 16) = iconId;
  *(_QWORD *)(v6 + 24) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v6 + 24), (int32_t)this, v9, v10, v11, v12, v13, v14);
  iconTextures = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.iconTextures;
  v16 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_Texture__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v16,
    (Il2CppObject *)v6,
    Method_ClassBoardBackground___c__DisplayClass80_0__SetClassIcon_b__0__,
    0);
  v17 = System_Linq_Enumerable__FirstOrDefault_object__52191056(
          iconTextures,
          (System_Func_TSource__bool__o *)v16,
          (const MethodInfo_31C5F50 *)Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
  *(_QWORD *)(v6 + 32) = v17;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v6 + 32), (int32_t)v17, v18, v19, v20, v21, v22, v23);
  v24 = *(UnityEngine_Object_o **)(v6 + 32);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v24, 0, 0) )
    return;
  iconRenderers = (System_Collections_Generic_IEnumerable_T__o *)this->fields.iconRenderers;
  v26 = (System_Action_object__o *)sub_1C942E4(System_Action_Renderer__TypeInfo);
  System_Action_object____ctor(
    v26,
    (Il2CppObject *)v6,
    Method_ClassBoardBackground___c__DisplayClass80_0__SetClassIcon_b__1__,
    0);
  BasicHelper__ForEach_object_(
    iconRenderers,
    (System_Action_T__o *)v26,
    (const MethodInfo_3188088 *)Method_BasicHelper_ForEach_Renderer___);
  v27 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C942E4(System_Collections_Generic_Dictionary_int__SimpleAnimation__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v27,
    (const MethodInfo_34B3F00 *)Method_System_Collections_Generic_Dictionary_int__SimpleAnimation___ctor__);
  this->fields.exClassReleaseEffectAnimationDic = (struct System_Collections_Generic_Dictionary_int__SimpleAnimation__o *)v27;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.exClassReleaseEffectAnimationDic,
    (int32_t)v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  exIconSet = this->fields.exIconSet;
  if ( !exIconSet )
LABEL_162:
    sub_1C942F0(offRenderer, v8);
  if ( !exIconSet->max_length )
    return;
  if ( (baseId & 0xFFFFFFFE) != 8 )
  {
    max_length = exIconSet->max_length;
    if ( max_length < 1 )
      return;
    v170 = 0;
    while ( 1 )
    {
      if ( v170 >= max_length )
        sub_1C942F8(offRenderer);
      v171 = exIconSet->m_Items[v170];
      if ( !v171 )
        break;
      offRenderer = (UnityEngine_Component_o *)v171->fields.offRenderer;
      if ( !offRenderer )
        break;
      offRenderer = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(offRenderer, 0);
      if ( !offRenderer )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)offRenderer, 0, 0);
      offRenderer = (UnityEngine_Component_o *)v171->fields.onRenderer;
      if ( !offRenderer )
        break;
      offRenderer = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(offRenderer, 0);
      if ( !offRenderer )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)offRenderer, 0, 0);
      offRenderer = (UnityEngine_Component_o *)v171->fields.releaseEffect;
      if ( !offRenderer )
        break;
      offRenderer = (UnityEngine_Component_o *)UnityEngine_GameObject__get_gameObject(
                                                 (UnityEngine_GameObject_o *)offRenderer,
                                                 0);
      if ( !offRenderer )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)offRenderer, 0, 0);
      max_length = exIconSet->max_length;
      if ( (int)++v170 >= max_length )
        return;
    }
    goto LABEL_162;
  }
  offRenderer = (UnityEngine_Component_o *)ClassBoardBackground__GetIconIdList(
                                             (ClassBoardBackground_o *)offRenderer,
                                             baseId,
                                             0,
                                             v34);
  if ( !offRenderer )
    goto LABEL_162;
  System_Collections_Generic_Dictionary_int__bool___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v177,
    (System_Collections_Generic_Dictionary_int__bool__o *)offRenderer,
    (const MethodInfo_34A6464 *)Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
  *(_OWORD *)&v178.fields._dictionary = v177[0];
  v178.fields._current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v177[1];
LABEL_12:
  while ( System_Collections_Generic_Dictionary_Enumerator_int__bool___MoveNext(
            &v178,
            (const MethodInfo_360D4A4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__) )
  {
    key = v178.fields._current.fields.key;
    v37 = sub_1C942E4(ClassBoardBackground___c__DisplayClass80_1_TypeInfo);
    ClassBoardBackground___c__DisplayClass80_1___ctor((ClassBoardBackground___c__DisplayClass80_1_o *)v37, 0);
    LODWORD(v177[0]) = (_DWORD)key;
    v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v177);
    v39 = System_String__Format((System_String_o *)StringLiteral_4489/*"ClassIconEx_on_{0}"*/, v38, 0);
    if ( !v37 )
      sub_1C942F0(v39, v39);
    *(_QWORD *)(v37 + 24) = v39;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v37 + 24), (int32_t)v39, v40, v41, v42, v43, v44, v45);
    v176 = (int)key;
    v46 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v176);
    v47 = System_String__Format((System_String_o *)StringLiteral_4488/*"ClassIconEx_off_{0}"*/, v46, 0);
    *(_QWORD *)(v37 + 16) = v47;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v37 + 16), (int32_t)v47, v48, v49, v50, v51, v52, v53);
    v175 = (int)key;
    v54 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v175);
    *(_QWORD *)classId = key;
    v55 = System_String__Format((System_String_o *)StringLiteral_4487/*"ClassIconEx_ef_glow_{0}"*/, v54, 0);
    *(_QWORD *)(v37 + 32) = v55;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v37 + 32), (int32_t)v55, v56, v57, v58, v59, v60, v61);
    v64 = this->fields.exIconSet;
    if ( !v64 )
LABEL_94:
      sub_1C942F0(v62, v63);
    v65 = 0;
    v66 = (System_Func_object__bool__o **)(v37 + 40);
    v67 = (System_Func_object__bool__o **)(v37 + 48);
    v68 = (System_Func_object__bool__o **)(v37 + 56);
    v172 = *(_QWORD *)classId & 0xFF00000000LL;
    while ( 1 )
    {
      v69 = v64->max_length;
      if ( (int)v65 >= (int)v69 )
        break;
      if ( v65 >= v69 )
        sub_1C942F8(v62);
      v70 = v64->m_Items[v65];
      if ( !v70 )
        sub_1C942F0(v62, v63);
      v71 = *v66;
      textures = (System_Collections_Generic_IEnumerable_TSource__o *)v70->fields.textures;
      if ( !*v66 )
      {
        v71 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_Texture__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v71,
          (Il2CppObject *)v37,
          Method_ClassBoardBackground___c__DisplayClass80_1__SetClassIcon_b__2__,
          0);
        *v66 = v71;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v37 + 40), (int32_t)v71, v73, v74, v75, v76, v77, v78);
      }
      v79 = System_Linq_Enumerable__FirstOrDefault_object__52191056(
              textures,
              (System_Func_TSource__bool__o *)v71,
              (const MethodInfo_31C5F50 *)Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
      v80 = *v67;
      v81 = (UnityEngine_Object_o *)v79;
      if ( !*v67 )
      {
        v80 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_Texture__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v80,
          (Il2CppObject *)v37,
          Method_ClassBoardBackground___c__DisplayClass80_1__SetClassIcon_b__3__,
          0);
        *v67 = v80;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v37 + 48), (int32_t)v80, v82, v83, v84, v85, v86, v87);
      }
      v88 = System_Linq_Enumerable__FirstOrDefault_object__52191056(
              textures,
              (System_Func_TSource__bool__o *)v80,
              (const MethodInfo_31C5F50 *)Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
      v89 = *v68;
      v90 = (UnityEngine_Object_o *)v88;
      if ( !*v68 )
      {
        v89 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_Texture__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v89,
          (Il2CppObject *)v37,
          Method_ClassBoardBackground___c__DisplayClass80_1__SetClassIcon_b__4__,
          0);
        *v68 = v89;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v37 + 56), (int32_t)v89, v91, v92, v93, v94, v95, v96);
      }
      v97 = System_Linq_Enumerable__FirstOrDefault_object__52191056(
              textures,
              (System_Func_TSource__bool__o *)v89,
              (const MethodInfo_31C5F50 *)Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v62 = UnityEngine_Object__op_Inequality(v90, 0, 0);
      if ( v62 )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v62 = UnityEngine_Object__op_Inequality(v81, 0, 0);
        if ( v62 )
        {
          v98 = this->fields.exIconSet;
          if ( !v98 )
            sub_1C942F0(v62, v63);
          if ( v65 >= LODWORD(v98->max_length) )
            sub_1C942F8(v62);
          v99 = v98->m_Items[v65];
          if ( !v99 )
            sub_1C942F0(v62, v63);
          v100 = v99->fields.offRenderer;
          if ( !v100 )
            sub_1C942F0(0, v63);
          material = UnityEngine_Renderer__get_material(v100, 0);
          if ( !material )
            sub_1C942F0(0, v102);
          UnityEngine_Material__SetTexture(
            material,
            this->fields.iconMaterialPropertyName,
            (UnityEngine_Texture_o *)v81,
            0);
          v105 = this->fields.exIconSet;
          if ( !v105 )
            sub_1C942F0(v103, v104);
          if ( v65 >= LODWORD(v105->max_length) )
            sub_1C942F8(v103);
          v106 = v105->m_Items[v65];
          if ( !v106 )
            sub_1C942F0(v103, v104);
          effectRenderer = v106->fields.effectRenderer;
          if ( !effectRenderer )
            sub_1C942F0(0, v104);
          v108 = UnityEngine_Renderer__get_material(effectRenderer, 0);
          if ( !v108 )
            sub_1C942F0(0, v109);
          UnityEngine_Material__SetTexture(v108, this->fields.iconMaterialPropertyName, (UnityEngine_Texture_o *)v81, 0);
          v112 = this->fields.exIconSet;
          if ( !v112 )
            sub_1C942F0(v110, v111);
          if ( v65 >= LODWORD(v112->max_length) )
            sub_1C942F8(v110);
          v113 = v112->m_Items[v65];
          if ( !v113 )
            sub_1C942F0(v110, v111);
          onRenderer = v113->fields.onRenderer;
          if ( !onRenderer )
            sub_1C942F0(0, v111);
          v115 = UnityEngine_Renderer__get_material(onRenderer, 0);
          if ( !v115 )
            sub_1C942F0(0, v116);
          UnityEngine_Material__SetTexture(v115, this->fields.iconMaterialPropertyName, (UnityEngine_Texture_o *)v90, 0);
          v119 = this->fields.exIconSet;
          if ( !v119 )
            sub_1C942F0(v117, v118);
          if ( v65 >= LODWORD(v119->max_length) )
            sub_1C942F8(v117);
          v120 = v119->m_Items[v65];
          if ( !v120 )
            sub_1C942F0(v117, v118);
          effectGlowRenderer = v120->fields.effectGlowRenderer;
          if ( !effectGlowRenderer )
            sub_1C942F0(0, v118);
          v122 = UnityEngine_Renderer__get_material(effectGlowRenderer, 0);
          if ( !v122 )
            sub_1C942F0(0, v123);
          UnityEngine_Material__SetTexture(v122, this->fields.iconMaterialPropertyName, (UnityEngine_Texture_o *)v97, 0);
          v126 = this->fields.exIconSet;
          if ( !v126 )
            sub_1C942F0(v124, v125);
          if ( v65 >= LODWORD(v126->max_length) )
            sub_1C942F8(v124);
          v127 = v126->m_Items[v65];
          if ( !v127 )
            sub_1C942F0(v124, v125);
          v128 = (UnityEngine_Component_o *)v127->fields.offRenderer;
          if ( !v128 )
            sub_1C942F0(0, v125);
          gameObject = UnityEngine_Component__get_gameObject(v128, 0);
          if ( !gameObject )
            sub_1C942F0(0, v130);
          UnityEngine_GameObject__SetActive(gameObject, v172 == 0, 0);
          v133 = this->fields.exIconSet;
          if ( !v133 )
            sub_1C942F0(v131, v132);
          if ( v65 >= LODWORD(v133->max_length) )
            sub_1C942F8(v131);
          v134 = v133->m_Items[v65];
          if ( !v134 )
            sub_1C942F0(v131, v132);
          v135 = (UnityEngine_Component_o *)v134->fields.onRenderer;
          if ( !v135 )
            sub_1C942F0(0, v132);
          v136 = UnityEngine_Component__get_gameObject(v135, 0);
          if ( !v136 )
            sub_1C942F0(0, v137);
          UnityEngine_GameObject__SetActive(v136, v172 != 0, 0);
          v140 = this->fields.exIconSet;
          if ( !v140 )
            sub_1C942F0(v138, v139);
          if ( v65 >= LODWORD(v140->max_length) )
            sub_1C942F8(v138);
          v141 = v140->m_Items[v65];
          if ( !v141 )
            sub_1C942F0(v138, v139);
          releaseEffect = v141->fields.releaseEffect;
          if ( !releaseEffect )
            sub_1C942F0(0, v139);
          v143 = UnityEngine_GameObject__get_gameObject(releaseEffect, 0);
          if ( !v143 )
            sub_1C942F0(0, v144);
          UnityEngine_GameObject__SetActive(v143, 0, 0);
          if ( v172 )
          {
            if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
            IsPlayed = ClassBoardUtility__IsPlayedExClassReleaseEffect(classId[0], 0);
            if ( !IsPlayed )
            {
              v147 = this->fields.exIconSet;
              if ( !v147 )
                sub_1C942F0(IsPlayed, v146);
              if ( v65 >= LODWORD(v147->max_length) )
                sub_1C942F8(IsPlayed);
              v148 = v147->m_Items[v65];
              if ( !v148 )
                sub_1C942F0(IsPlayed, v146);
              animation = (UnityEngine_Object_o *)v148->fields.animation;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              v150 = UnityEngine_Object__op_Inequality(animation, 0, 0);
              if ( v150 )
              {
                v152 = this->fields.exIconSet;
                if ( !v152 )
                  sub_1C942F0(v150, v151);
                if ( v65 >= LODWORD(v152->max_length) )
                  sub_1C942F8(v150);
                v153 = v152->m_Items[v65];
                if ( !v153 )
                  sub_1C942F0(v150, v151);
                v154 = (UnityEngine_Component_o *)v153->fields.offRenderer;
                if ( !v154 )
                  sub_1C942F0(0, v151);
                v155 = UnityEngine_Component__get_gameObject(v154, 0);
                if ( !v155 )
                  sub_1C942F0(0, v156);
                UnityEngine_GameObject__SetActive(v155, 1, 0);
                v159 = this->fields.exIconSet;
                if ( !v159 )
                  sub_1C942F0(v157, v158);
                if ( v65 >= LODWORD(v159->max_length) )
                  sub_1C942F8(v157);
                v160 = v159->m_Items[v65];
                if ( !v160 )
                  sub_1C942F0(v157, v158);
                v161 = (UnityEngine_Component_o *)v160->fields.onRenderer;
                if ( !v161 )
                  sub_1C942F0(0, v158);
                v162 = UnityEngine_Component__get_gameObject(v161, 0);
                if ( !v162 )
                  sub_1C942F0(0, v163);
                UnityEngine_GameObject__SetActive(v162, 0, 0);
                v166 = this->fields.exIconSet;
                if ( !v166 )
                  sub_1C942F0(v164, v165);
                if ( v65 >= LODWORD(v166->max_length) )
                  sub_1C942F8(v164);
                v167 = v166->m_Items[v65];
                if ( !v167 )
                  sub_1C942F0(v164, v165);
                exClassReleaseEffectAnimationDic = this->fields.exClassReleaseEffectAnimationDic;
                if ( !exClassReleaseEffectAnimationDic )
                  sub_1C942F0(0, *(_QWORD *)classId);
                System_Collections_Generic_Dictionary_int__object___Add(
                  (System_Collections_Generic_Dictionary_int__object__o *)exClassReleaseEffectAnimationDic,
                  classId[0],
                  (Il2CppObject *)v167->fields.animation,
                  (const MethodInfo_34B48D4 *)Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__Add__);
              }
            }
          }
          goto LABEL_12;
        }
      }
      ++v65;
      v64 = this->fields.exIconSet;
      if ( !v64 )
        goto LABEL_94;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__bool___Dispose(
    &v178,
    (const MethodInfo_360D5AC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
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
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  System_Collections_Generic_IEnumerable_TSource__o *grandIconTextures; // x20
  System_Func_object__bool__o *v16; // x23
  Il2CppObject *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  UnityEngine_Object_o *v24; // x20
  System_Collections_Generic_IEnumerable_T__o *grandIconRenderers; // x20
  System_Action_object__o *v26; // x23
  System_Collections_Generic_List_object__o *v27; // x20
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  System_Collections_Generic_Dictionary_int__object__o *v34; // x22
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  struct ClassBoardBackground_ExClassIconSet_array *grandExIconSet; // x8
  struct ClassBoardBackground_ExClassIconSet_array **p_grandExIconSet; // x29
  ClassBoardBackground___c_c *v43; // x0
  System_Collections_Generic_IEnumerable_T__o *v44; // x22
  System_Action_object__o *_9__81_3; // x23
  Il2CppObject *v46; // x24
  struct ClassBoardBackground___c_StaticFields *v47; // x0
  int32_t v48; // w2
  int32_t v49; // w3
  System_String_o *v50; // x4
  int32_t v51; // w5
  int64_t v52; // x6
  System_String_o *v53; // x7
  ClassBoardBackground_o *v54; // x0
  const MethodInfo *v55; // x3
  Il2CppObject *key; // x21
  __int64 v57; // x22
  Il2CppObject *v58; // x1
  System_String_o *v59; // x0
  int32_t v60; // w2
  int32_t v61; // w3
  System_String_o *v62; // x4
  int32_t v63; // w5
  int64_t v64; // x6
  System_String_o *v65; // x7
  Il2CppObject *v66; // x1
  System_String_o *v67; // x0
  int32_t v68; // w2
  int32_t v69; // w3
  System_String_o *v70; // x4
  int32_t v71; // w5
  int64_t v72; // x6
  System_String_o *v73; // x7
  Il2CppObject *v74; // x1
  System_String_o *v75; // x0
  int32_t v76; // w2
  int32_t v77; // w3
  System_String_o *v78; // x4
  int32_t v79; // w5
  int64_t v80; // x6
  System_String_o *v81; // x7
  _BOOL8 v82; // x0
  __int64 v83; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v84; // x8
  System_Func_object__bool__o **v85; // x24
  __int64 v86; // x20
  int max_length; // w9
  unsigned int v88; // w26
  __int64 v89; // x8
  System_Func_object__bool__o *v90; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v91; // x23
  int32_t v92; // w2
  int32_t v93; // w3
  System_String_o *v94; // x4
  int32_t v95; // w5
  int64_t v96; // x6
  System_String_o *v97; // x7
  Il2CppObject *v98; // x25
  struct ClassBoardBackground_ExClassIconSet_array *v99; // x8
  __int64 v100; // x8
  UnityEngine_Renderer_o *v101; // x0
  UnityEngine_Material_o *material; // x0
  __int64 v103; // x1
  System_Func_object__bool__o *v104; // x24
  int32_t v105; // w2
  int32_t v106; // w3
  System_String_o *v107; // x4
  int32_t v108; // w5
  int64_t v109; // x6
  System_String_o *v110; // x7
  Il2CppObject *v111; // x0
  __int64 v112; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v113; // x8
  __int64 v114; // x8
  UnityEngine_Object_o *v115; // x24
  UnityEngine_Object_o *v116; // x25
  _BOOL8 v117; // x0
  __int64 v118; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v119; // x8
  __int64 v120; // x8
  UnityEngine_Renderer_o *v121; // x0
  UnityEngine_Material_o *v122; // x0
  __int64 v123; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v124; // x8
  __int64 v125; // x8
  UnityEngine_Object_o *v126; // x25
  _BOOL8 v127; // x0
  __int64 v128; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v129; // x8
  __int64 v130; // x8
  UnityEngine_GameObject_o *v131; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v133; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v134; // x8
  __int64 v135; // x8
  UnityEngine_Object_o *v136; // x25
  _BOOL8 v137; // x0
  __int64 v138; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v139; // x8
  __int64 v140; // x8
  UnityEngine_Renderer_o *v141; // x0
  UnityEngine_Material_o *v142; // x0
  __int64 v143; // x1
  System_Func_object__bool__o *v144; // x24
  int32_t v145; // w2
  int32_t v146; // w3
  System_String_o *v147; // x4
  int32_t v148; // w5
  int64_t v149; // x6
  System_String_o *v150; // x7
  Il2CppObject *v151; // x0
  __int64 v152; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v153; // x8
  __int64 v154; // x8
  UnityEngine_Texture_o *v155; // x22
  UnityEngine_Object_o *v156; // x23
  _BOOL8 v157; // x0
  __int64 v158; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v159; // x8
  __int64 v160; // x8
  UnityEngine_Renderer_o *v161; // x0
  UnityEngine_Material_o *v162; // x0
  __int64 v163; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v164; // x8
  __int64 v165; // x8
  UnityEngine_Object_o *v166; // x22
  _BOOL8 v167; // x0
  __int64 v168; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v169; // x8
  __int64 v170; // x8
  SimpleAnimation_o *v171; // x0
  __int64 v172; // x0
  __int64 v173; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v174; // x8
  __int64 v175; // x8
  SimpleAnimation_o *v176; // x0
  _BOOL8 IsPlayedGrand; // x0
  __int64 v178; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v179; // x8
  __int64 v180; // x8
  UnityEngine_Object_o *v181; // x22
  struct ClassBoardBackground_ExClassIconSet_array *v182; // x8
  __int64 v183; // x8
  UnityEngine_Component_o *v184; // x0
  UnityEngine_GameObject_o *v185; // x0
  __int64 v186; // x1
  __int64 v187; // x0
  __int64 v188; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v189; // x8
  __int64 v190; // x8
  UnityEngine_Object_o *v191; // x22
  _BOOL8 v192; // x0
  __int64 v193; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v194; // x8
  __int64 v195; // x8
  UnityEngine_Component_o *v196; // x0
  UnityEngine_GameObject_o *v197; // x0
  __int64 v198; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v199; // x8
  __int64 v200; // x8
  struct ClassBoardBackground_ExClassIconSet_array *v201; // x8
  __int64 v202; // x8
  UnityEngine_Component_o *v203; // x0
  UnityEngine_GameObject_o *v204; // x0
  __int64 v205; // x1
  __int64 v206; // x0
  __int64 v207; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v208; // x8
  __int64 v209; // x8
  UnityEngine_Object_o *v210; // x21
  _BOOL8 v211; // x0
  __int64 v212; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v213; // x8
  __int64 v214; // x8
  UnityEngine_Component_o *v215; // x0
  UnityEngine_GameObject_o *v216; // x0
  __int64 v217; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v218; // x8
  __int64 v219; // x8
  UnityEngine_Component_o *v220; // x0
  UnityEngine_GameObject_o *v221; // x0
  __int64 v222; // x1
  __int64 v223; // x0
  __int64 v224; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v225; // x8
  __int64 v226; // x8
  UnityEngine_Object_o *v227; // x21
  _BOOL8 v228; // x0
  __int64 v229; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v230; // x8
  __int64 v231; // x8
  UnityEngine_Component_o *v232; // x0
  UnityEngine_GameObject_o *v233; // x0
  __int64 v234; // x1
  ClassBoardBackground___c_c *v235; // x0
  System_Collections_Generic_IEnumerable_T__o *grandExIconObj; // x19
  System_Action_object__o *_9__81_2; // x20
  Il2CppObject *v238; // x21
  struct ClassBoardBackground___c_StaticFields *static_fields; // x0
  int32_t v240; // w2
  int32_t v241; // w3
  System_String_o *v242; // x4
  int32_t v243; // w5
  int64_t v244; // x6
  System_String_o *v245; // x7
  System_Collections_Generic_Dictionary_int__object__o **p_grandExClassReleaseEffectAnimationDic; // [xsp+8h] [xbp-B8h]
  int v248; // [xsp+18h] [xbp-A8h] BYREF
  int v249; // [xsp+1Ch] [xbp-A4h] BYREF
  _OWORD v250[2]; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v251; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4D303F9 & 1) == 0 )
  {
    sub_1C94098(&System_Action_Renderer__TypeInfo);
    sub_1C94098(&System_Action_GameObject__TypeInfo);
    sub_1C94098(&Method_BasicHelper_ForEach_GameObject___);
    sub_1C94098(&Method_BasicHelper_ForEach_Renderer___);
    sub_1C94098(&ClassBoardUtility_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__Add__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__SimpleAnimation___ctor__);
    sub_1C94098(&System_Collections_Generic_Dictionary_int__SimpleAnimation__TypeInfo);
    sub_1C94098(&Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__get_Current__);
    sub_1C94098(&System_Func_Texture__bool__TypeInfo);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Key__);
    sub_1C94098(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Value__);
    sub_1C94098(&Method_System_Collections_Generic_List_Material___ctor__);
    sub_1C94098(&System_Collections_Generic_List_Material__TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_ClassBoardBackground___c__SetGrandClassIcon_b__81_2__);
    sub_1C94098(&Method_ClassBoardBackground___c__SetGrandClassIcon_b__81_3__);
    sub_1C94098(&Method_ClassBoardBackground___c__DisplayClass81_0__SetGrandClassIcon_b__0__);
    sub_1C94098(&Method_ClassBoardBackground___c__DisplayClass81_0__SetGrandClassIcon_b__1__);
    sub_1C94098(&ClassBoardBackground___c__DisplayClass81_0_TypeInfo);
    sub_1C94098(&Method_ClassBoardBackground___c__DisplayClass81_1__SetGrandClassIcon_b__4__);
    sub_1C94098(&Method_ClassBoardBackground___c__DisplayClass81_1__SetGrandClassIcon_b__5__);
    sub_1C94098(&Method_ClassBoardBackground___c__DisplayClass81_1__SetGrandClassIcon_b__6__);
    sub_1C94098(&ClassBoardBackground___c__DisplayClass81_1_TypeInfo);
    sub_1C94098(&ClassBoardBackground___c_TypeInfo);
    sub_1C94098(&StringLiteral_7158/*"GrandClassIconEx_on_{0}"*/);
    sub_1C94098(&StringLiteral_7157/*"GrandClassIconEx_off_{0}"*/);
    sub_1C94098(&StringLiteral_7156/*"GrandClassIconEx_ef_glow_{0}"*/);
    byte_4D303F9 = 1;
  }
  memset(&v251, 0, 32);
  v6 = sub_1C942E4(ClassBoardBackground___c__DisplayClass81_0_TypeInfo);
  ClassBoardBackground___c__DisplayClass81_0___ctor((ClassBoardBackground___c__DisplayClass81_0_o *)v6, 0);
  if ( !v6 )
    goto LABEL_198;
  *(_DWORD *)(v6 + 16) = iconId;
  *(_QWORD *)(v6 + 24) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v6 + 24), (int32_t)this, v9, v10, v11, v12, v13, v14);
  grandIconTextures = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.grandIconTextures;
  v16 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_Texture__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v16,
    (Il2CppObject *)v6,
    Method_ClassBoardBackground___c__DisplayClass81_0__SetGrandClassIcon_b__0__,
    0);
  v17 = System_Linq_Enumerable__FirstOrDefault_object__52191056(
          grandIconTextures,
          (System_Func_TSource__bool__o *)v16,
          (const MethodInfo_31C5F50 *)Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
  *(_QWORD *)(v6 + 32) = v17;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v6 + 32), (int32_t)v17, v18, v19, v20, v21, v22, v23);
  v24 = *(UnityEngine_Object_o **)(v6 + 32);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v24, 0, 0) )
    return;
  grandIconRenderers = (System_Collections_Generic_IEnumerable_T__o *)this->fields.grandIconRenderers;
  v26 = (System_Action_object__o *)sub_1C942E4(System_Action_Renderer__TypeInfo);
  System_Action_object____ctor(
    v26,
    (Il2CppObject *)v6,
    Method_ClassBoardBackground___c__DisplayClass81_0__SetGrandClassIcon_b__1__,
    0);
  BasicHelper__ForEach_object_(
    grandIconRenderers,
    (System_Action_T__o *)v26,
    (const MethodInfo_3188088 *)Method_BasicHelper_ForEach_Renderer___);
  v27 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_Material__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v27,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_Material___ctor__);
  this->fields.grandStartAnimActiveIconMaterials = (struct System_Collections_Generic_List_Material__o *)v27;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.grandStartAnimActiveIconMaterials,
    (int32_t)v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  v34 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C942E4(System_Collections_Generic_Dictionary_int__SimpleAnimation__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v34,
    (const MethodInfo_34B3F00 *)Method_System_Collections_Generic_Dictionary_int__SimpleAnimation___ctor__);
  this->fields.grandExClassReleaseEffectAnimationDic = (struct System_Collections_Generic_Dictionary_int__SimpleAnimation__o *)v34;
  p_grandExClassReleaseEffectAnimationDic = (System_Collections_Generic_Dictionary_int__object__o **)&this->fields.grandExClassReleaseEffectAnimationDic;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.grandExClassReleaseEffectAnimationDic,
    (int32_t)v34,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  p_grandExIconSet = &this->fields.grandExIconSet;
  grandExIconSet = this->fields.grandExIconSet;
  if ( !grandExIconSet )
    goto LABEL_198;
  if ( !grandExIconSet->max_length )
    return;
  if ( (unsigned int)baseId >> 1 != 5004 )
  {
    v235 = ClassBoardBackground___c_TypeInfo;
    grandExIconObj = (System_Collections_Generic_IEnumerable_T__o *)this->fields.grandExIconObj;
    if ( !ClassBoardBackground___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardBackground___c_TypeInfo);
      v235 = ClassBoardBackground___c_TypeInfo;
    }
    _9__81_2 = (System_Action_object__o *)v235->static_fields->__9__81_2;
    if ( !_9__81_2 )
    {
      if ( !v235->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v235);
        v235 = ClassBoardBackground___c_TypeInfo;
      }
      v238 = (Il2CppObject *)v235->static_fields->__9;
      _9__81_2 = (System_Action_object__o *)sub_1C942E4(System_Action_GameObject__TypeInfo);
      System_Action_object____ctor(_9__81_2, v238, Method_ClassBoardBackground___c__SetGrandClassIcon_b__81_2__, 0);
      static_fields = ClassBoardBackground___c_TypeInfo->static_fields;
      static_fields->__9__81_2 = (struct System_Action_GameObject__o *)_9__81_2;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__81_2,
        (int32_t)_9__81_2,
        v240,
        v241,
        v242,
        v243,
        v244,
        v245);
    }
    BasicHelper__ForEach_object_(
      grandExIconObj,
      (System_Action_T__o *)_9__81_2,
      (const MethodInfo_3188088 *)Method_BasicHelper_ForEach_GameObject___);
    return;
  }
  v43 = ClassBoardBackground___c_TypeInfo;
  v44 = (System_Collections_Generic_IEnumerable_T__o *)this->fields.grandExIconObj;
  if ( !ClassBoardBackground___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardBackground___c_TypeInfo);
    v43 = ClassBoardBackground___c_TypeInfo;
  }
  _9__81_3 = (System_Action_object__o *)v43->static_fields->__9__81_3;
  if ( !_9__81_3 )
  {
    if ( !v43->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v43);
      v43 = ClassBoardBackground___c_TypeInfo;
    }
    v46 = (Il2CppObject *)v43->static_fields->__9;
    _9__81_3 = (System_Action_object__o *)sub_1C942E4(System_Action_GameObject__TypeInfo);
    System_Action_object____ctor(_9__81_3, v46, Method_ClassBoardBackground___c__SetGrandClassIcon_b__81_3__, 0);
    v47 = ClassBoardBackground___c_TypeInfo->static_fields;
    v47->__9__81_3 = (struct System_Action_GameObject__o *)_9__81_3;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v47->__9__81_3, (int32_t)_9__81_3, v48, v49, v50, v51, v52, v53);
  }
  BasicHelper__ForEach_object_(
    v44,
    (System_Action_T__o *)_9__81_3,
    (const MethodInfo_3188088 *)Method_BasicHelper_ForEach_GameObject___);
  IconIdList = ClassBoardBackground__GetIconIdList(v54, baseId, 1, v55);
  if ( !IconIdList )
LABEL_198:
    sub_1C942F0(IconIdList, v8);
  System_Collections_Generic_Dictionary_int__bool___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v250,
    IconIdList,
    (const MethodInfo_34A6464 *)Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
  *(_OWORD *)&v251.fields._dictionary = v250[0];
  v251.fields._current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v250[1];
LABEL_18:
  while ( System_Collections_Generic_Dictionary_Enumerator_int__bool___MoveNext(
            &v251,
            (const MethodInfo_360D4A4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__) )
  {
    key = v251.fields._current.fields.key;
    v57 = sub_1C942E4(ClassBoardBackground___c__DisplayClass81_1_TypeInfo);
    ClassBoardBackground___c__DisplayClass81_1___ctor((ClassBoardBackground___c__DisplayClass81_1_o *)v57, 0);
    LODWORD(v250[0]) = (_DWORD)key;
    v58 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v250);
    v59 = System_String__Format((System_String_o *)StringLiteral_7158/*"GrandClassIconEx_on_{0}"*/, v58, 0);
    if ( !v57 )
      sub_1C942F0(v59, v59);
    *(_QWORD *)(v57 + 16) = v59;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v57 + 16), (int32_t)v59, v60, v61, v62, v63, v64, v65);
    v249 = (int)key;
    v66 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v249);
    v67 = System_String__Format((System_String_o *)StringLiteral_7157/*"GrandClassIconEx_off_{0}"*/, v66, 0);
    *(_QWORD *)(v57 + 24) = v67;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v57 + 24), (int32_t)v67, v68, v69, v70, v71, v72, v73);
    v248 = (int)key;
    v74 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v248);
    v75 = System_String__Format((System_String_o *)StringLiteral_7156/*"GrandClassIconEx_ef_glow_{0}"*/, v74, 0);
    *(_QWORD *)(v57 + 32) = v75;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v57 + 32), (int32_t)v75, v76, v77, v78, v79, v80, v81);
    v84 = *p_grandExIconSet;
    if ( !*p_grandExIconSet )
LABEL_174:
      sub_1C942F0(v82, v83);
    v85 = (System_Func_object__bool__o **)(v57 + 40);
    v86 = 4;
    while ( 1 )
    {
      max_length = v84->max_length;
      v88 = v86 - 4;
      if ( (int)v86 - 4 >= max_length )
        break;
      if ( v88 >= max_length )
        sub_1C942F8(v82);
      v89 = *((_QWORD *)&v84->obj.klass + v86);
      if ( !v89 )
        sub_1C942F0(v82, v83);
      v90 = *v85;
      v91 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v89 + 48);
      if ( !*v85 )
      {
        v90 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_Texture__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v90,
          (Il2CppObject *)v57,
          Method_ClassBoardBackground___c__DisplayClass81_1__SetGrandClassIcon_b__4__,
          0);
        *v85 = v90;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v57 + 40), (int32_t)v90, v92, v93, v94, v95, v96, v97);
      }
      v98 = System_Linq_Enumerable__FirstOrDefault_object__52191056(
              v91,
              (System_Func_TSource__bool__o *)v90,
              (const MethodInfo_31C5F50 *)Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v82 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v98, 0, 0);
      if ( !v82 )
      {
        v99 = *p_grandExIconSet;
        if ( !*p_grandExIconSet )
          sub_1C942F0(v82, v83);
        if ( v88 >= LODWORD(v99->max_length) )
          sub_1C942F8(v82);
        v100 = *((_QWORD *)&v99->obj.klass + v86);
        if ( !v100 )
          sub_1C942F0(v82, v83);
        v101 = *(UnityEngine_Renderer_o **)(v100 + 16);
        if ( !v101 )
          sub_1C942F0(0, v83);
        material = UnityEngine_Renderer__get_material(v101, 0);
        if ( !material )
          sub_1C942F0(0, v103);
        UnityEngine_Material__SetTexture(
          material,
          this->fields.iconMaterialPropertyName,
          (UnityEngine_Texture_o *)v98,
          0);
        v104 = *(System_Func_object__bool__o **)(v57 + 48);
        if ( !v104 )
        {
          v104 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_Texture__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v104,
            (Il2CppObject *)v57,
            Method_ClassBoardBackground___c__DisplayClass81_1__SetGrandClassIcon_b__5__,
            0);
          *(_QWORD *)(v57 + 48) = v104;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v57 + 48), (int32_t)v104, v105, v106, v107, v108, v109, v110);
        }
        v111 = System_Linq_Enumerable__FirstOrDefault_object__52191056(
                 v91,
                 (System_Func_TSource__bool__o *)v104,
                 (const MethodInfo_31C5F50 *)Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
        v113 = *p_grandExIconSet;
        if ( !*p_grandExIconSet )
          sub_1C942F0(v111, v112);
        if ( v88 >= LODWORD(v113->max_length) )
          sub_1C942F8(v111);
        v114 = *((_QWORD *)&v113->obj.klass + v86);
        if ( !v114 )
          sub_1C942F0(v111, v112);
        v115 = (UnityEngine_Object_o *)v111;
        v116 = *(UnityEngine_Object_o **)(v114 + 24);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v117 = UnityEngine_Object__op_Inequality(v116, 0, 0);
        if ( v117 )
        {
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v117 = UnityEngine_Object__op_Inequality(v115, 0, 0);
          if ( v117 )
          {
            v119 = *p_grandExIconSet;
            if ( !*p_grandExIconSet )
              sub_1C942F0(v117, v118);
            if ( v88 >= LODWORD(v119->max_length) )
              sub_1C942F8(v117);
            v120 = *((_QWORD *)&v119->obj.klass + v86);
            if ( !v120 )
              sub_1C942F0(v117, v118);
            v121 = *(UnityEngine_Renderer_o **)(v120 + 24);
            if ( !v121 )
              sub_1C942F0(0, v118);
            v122 = UnityEngine_Renderer__get_material(v121, 0);
            if ( !v122 )
              sub_1C942F0(0, v123);
            UnityEngine_Material__SetTexture(
              v122,
              this->fields.iconMaterialPropertyName,
              (UnityEngine_Texture_o *)v115,
              0);
          }
        }
        v124 = *p_grandExIconSet;
        if ( !*p_grandExIconSet )
          sub_1C942F0(v117, v118);
        if ( v88 >= LODWORD(v124->max_length) )
          sub_1C942F8(v117);
        v125 = *((_QWORD *)&v124->obj.klass + v86);
        if ( !v125 )
          sub_1C942F0(v117, v118);
        v126 = *(UnityEngine_Object_o **)(v125 + 64);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v127 = UnityEngine_Object__op_Inequality(v126, 0, 0);
        if ( v127 )
        {
          v129 = *p_grandExIconSet;
          if ( !*p_grandExIconSet )
            sub_1C942F0(v127, v128);
          if ( v88 >= LODWORD(v129->max_length) )
            sub_1C942F8(v127);
          v130 = *((_QWORD *)&v129->obj.klass + v86);
          if ( !v130 )
            sub_1C942F0(v127, v128);
          v131 = *(UnityEngine_GameObject_o **)(v130 + 64);
          if ( !v131 )
            sub_1C942F0(0, v128);
          gameObject = UnityEngine_GameObject__get_gameObject(v131, 0);
          if ( !gameObject )
            sub_1C942F0(0, v133);
          UnityEngine_GameObject__SetActive(gameObject, 0, 0);
        }
        v134 = *p_grandExIconSet;
        if ( !*p_grandExIconSet )
          sub_1C942F0(v127, v128);
        if ( v88 >= LODWORD(v134->max_length) )
          sub_1C942F8(v127);
        v135 = *((_QWORD *)&v134->obj.klass + v86);
        if ( !v135 )
          sub_1C942F0(v127, v128);
        v136 = *(UnityEngine_Object_o **)(v135 + 32);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v137 = UnityEngine_Object__op_Inequality(v136, 0, 0);
        if ( v137 )
        {
          v139 = *p_grandExIconSet;
          if ( !*p_grandExIconSet )
            sub_1C942F0(v137, v138);
          if ( v88 >= LODWORD(v139->max_length) )
            sub_1C942F8(v137);
          v140 = *((_QWORD *)&v139->obj.klass + v86);
          if ( !v140 )
            sub_1C942F0(v137, v138);
          v141 = *(UnityEngine_Renderer_o **)(v140 + 32);
          if ( !v141 )
            sub_1C942F0(0, v138);
          v142 = UnityEngine_Renderer__get_material(v141, 0);
          if ( !v142 )
            sub_1C942F0(0, v143);
          UnityEngine_Material__SetTexture(
            v142,
            this->fields.iconMaterialPropertyName,
            (UnityEngine_Texture_o *)v115,
            0);
        }
        v144 = *(System_Func_object__bool__o **)(v57 + 56);
        if ( !v144 )
        {
          v144 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_Texture__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v144,
            (Il2CppObject *)v57,
            Method_ClassBoardBackground___c__DisplayClass81_1__SetGrandClassIcon_b__6__,
            0);
          *(_QWORD *)(v57 + 56) = v144;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v57 + 56), (int32_t)v144, v145, v146, v147, v148, v149, v150);
        }
        v151 = System_Linq_Enumerable__FirstOrDefault_object__52191056(
                 v91,
                 (System_Func_TSource__bool__o *)v144,
                 (const MethodInfo_31C5F50 *)Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
        v153 = *p_grandExIconSet;
        if ( !*p_grandExIconSet )
          sub_1C942F0(v151, v152);
        if ( v88 >= LODWORD(v153->max_length) )
          sub_1C942F8(v151);
        v154 = *((_QWORD *)&v153->obj.klass + v86);
        if ( !v154 )
          sub_1C942F0(v151, v152);
        v155 = (UnityEngine_Texture_o *)v151;
        v156 = *(UnityEngine_Object_o **)(v154 + 40);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v157 = UnityEngine_Object__op_Inequality(v156, 0, 0);
        if ( v157 )
        {
          v159 = *p_grandExIconSet;
          if ( !*p_grandExIconSet )
            sub_1C942F0(v157, v158);
          if ( v88 >= LODWORD(v159->max_length) )
            sub_1C942F8(v157);
          v160 = *((_QWORD *)&v159->obj.klass + v86);
          if ( !v160 )
            sub_1C942F0(v157, v158);
          v161 = *(UnityEngine_Renderer_o **)(v160 + 40);
          if ( !v161 )
            sub_1C942F0(0, v158);
          v162 = UnityEngine_Renderer__get_material(v161, 0);
          if ( !v162 )
            sub_1C942F0(0, v163);
          UnityEngine_Material__SetTexture(v162, this->fields.iconMaterialPropertyName, v155, 0);
        }
        v164 = *p_grandExIconSet;
        if ( !*p_grandExIconSet )
          sub_1C942F0(v157, v158);
        if ( v88 >= LODWORD(v164->max_length) )
          sub_1C942F8(v157);
        v165 = *((_QWORD *)&v164->obj.klass + v86);
        if ( !v165 )
          sub_1C942F0(v157, v158);
        v166 = *(UnityEngine_Object_o **)(v165 + 56);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v167 = UnityEngine_Object__op_Inequality(v166, 0, 0);
        if ( v167 )
        {
          v169 = *p_grandExIconSet;
          if ( !*p_grandExIconSet )
            sub_1C942F0(v167, v168);
          if ( v88 >= LODWORD(v169->max_length) )
            sub_1C942F8(v167);
          v170 = *((_QWORD *)&v169->obj.klass + v86);
          if ( !v170 )
            sub_1C942F0(v167, v168);
          v171 = *(SimpleAnimation_o **)(v170 + 56);
          if ( !v171 )
            sub_1C942F0(0, v168);
          SimpleAnimation__Rewind(v171, 0);
          v174 = *p_grandExIconSet;
          if ( !*p_grandExIconSet )
            sub_1C942F0(v172, v173);
          if ( v88 >= LODWORD(v174->max_length) )
            sub_1C942F8(v172);
          v175 = *((_QWORD *)&v174->obj.klass + v86);
          if ( !v175 )
            sub_1C942F0(v172, v173);
          v176 = *(SimpleAnimation_o **)(v175 + 56);
          if ( !v176 )
            sub_1C942F0(0, v173);
          SimpleAnimation__Stop(v176, 0);
        }
        if ( ((unsigned __int64)key & 0xFF00000000LL) != 0 )
        {
          if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
          IsPlayedGrand = ClassBoardUtility__IsPlayedGrandExClassReleaseEffect((int32_t)key, 0);
          if ( IsPlayedGrand )
            goto LABEL_139;
          v179 = *p_grandExIconSet;
          if ( !*p_grandExIconSet )
            sub_1C942F0(IsPlayedGrand, v178);
          if ( v88 >= LODWORD(v179->max_length) )
            sub_1C942F8(IsPlayedGrand);
          v180 = *((_QWORD *)&v179->obj.klass + v86);
          if ( !v180 )
            sub_1C942F0(IsPlayedGrand, v178);
          v181 = *(UnityEngine_Object_o **)(v180 + 56);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          IsPlayedGrand = UnityEngine_Object__op_Inequality(v181, 0, 0);
          if ( !IsPlayedGrand )
          {
LABEL_139:
            v201 = *p_grandExIconSet;
            if ( !*p_grandExIconSet )
              sub_1C942F0(IsPlayedGrand, v178);
            if ( v88 >= LODWORD(v201->max_length) )
              sub_1C942F8(IsPlayedGrand);
            v202 = *((_QWORD *)&v201->obj.klass + v86);
            if ( !v202 )
              sub_1C942F0(IsPlayedGrand, v178);
            v203 = *(UnityEngine_Component_o **)(v202 + 16);
            if ( !v203 )
              sub_1C942F0(0, v178);
            v204 = UnityEngine_Component__get_gameObject(v203, 0);
            if ( !v204 )
              sub_1C942F0(0, v205);
            UnityEngine_GameObject__SetActive(v204, 1, 0);
            v208 = *p_grandExIconSet;
            if ( !*p_grandExIconSet )
              sub_1C942F0(v206, v207);
            if ( v88 >= LODWORD(v208->max_length) )
              sub_1C942F8(v206);
            v209 = *((_QWORD *)&v208->obj.klass + v86);
            if ( !v209 )
              sub_1C942F0(v206, v207);
            v210 = *(UnityEngine_Object_o **)(v209 + 24);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            v211 = UnityEngine_Object__op_Inequality(v210, 0, 0);
            if ( v211 )
            {
              v213 = *p_grandExIconSet;
              if ( !*p_grandExIconSet )
                sub_1C942F0(v211, v212);
              if ( v88 >= LODWORD(v213->max_length) )
                sub_1C942F8(v211);
              v214 = *((_QWORD *)&v213->obj.klass + v86);
              if ( !v214 )
                sub_1C942F0(v211, v212);
              v215 = *(UnityEngine_Component_o **)(v214 + 24);
              if ( !v215 )
                sub_1C942F0(0, v212);
              v216 = UnityEngine_Component__get_gameObject(v215, 0);
              if ( !v216 )
                sub_1C942F0(0, v217);
              UnityEngine_GameObject__SetActive(v216, 0, 0);
            }
          }
          else
          {
            v182 = *p_grandExIconSet;
            if ( !*p_grandExIconSet )
              sub_1C942F0(IsPlayedGrand, v178);
            if ( v88 >= LODWORD(v182->max_length) )
              sub_1C942F8(IsPlayedGrand);
            v183 = *((_QWORD *)&v182->obj.klass + v86);
            if ( !v183 )
              sub_1C942F0(IsPlayedGrand, v178);
            v184 = *(UnityEngine_Component_o **)(v183 + 16);
            if ( !v184 )
              sub_1C942F0(0, v178);
            v185 = UnityEngine_Component__get_gameObject(v184, 0);
            if ( !v185 )
              sub_1C942F0(0, v186);
            UnityEngine_GameObject__SetActive(v185, 0, 0);
            v189 = *p_grandExIconSet;
            if ( !*p_grandExIconSet )
              sub_1C942F0(v187, v188);
            if ( v88 >= LODWORD(v189->max_length) )
              sub_1C942F8(v187);
            v190 = *((_QWORD *)&v189->obj.klass + v86);
            if ( !v190 )
              sub_1C942F0(v187, v188);
            v191 = *(UnityEngine_Object_o **)(v190 + 24);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            v192 = UnityEngine_Object__op_Inequality(v191, 0, 0);
            if ( v192 )
            {
              v194 = *p_grandExIconSet;
              if ( !*p_grandExIconSet )
                sub_1C942F0(v192, v193);
              if ( v88 >= LODWORD(v194->max_length) )
                sub_1C942F8(v192);
              v195 = *((_QWORD *)&v194->obj.klass + v86);
              if ( !v195 )
                sub_1C942F0(v192, v193);
              v196 = *(UnityEngine_Component_o **)(v195 + 24);
              if ( !v196 )
                sub_1C942F0(0, v193);
              v197 = UnityEngine_Component__get_gameObject(v196, 0);
              if ( !v197 )
                sub_1C942F0(0, v198);
              UnityEngine_GameObject__SetActive(v197, 1, 0);
            }
            v199 = *p_grandExIconSet;
            if ( !*p_grandExIconSet )
              sub_1C942F0(v192, v193);
            if ( v88 >= LODWORD(v199->max_length) )
              sub_1C942F8(v192);
            v200 = *((_QWORD *)&v199->obj.klass + v86);
            if ( !v200 )
              sub_1C942F0(v192, v193);
            if ( !*p_grandExClassReleaseEffectAnimationDic )
              sub_1C942F0(0, v193);
            System_Collections_Generic_Dictionary_int__object___Add(
              *p_grandExClassReleaseEffectAnimationDic,
              (int32_t)key,
              *(Il2CppObject **)(v200 + 56),
              (const MethodInfo_34B48D4 *)Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__Add__);
          }
        }
        else
        {
          v218 = *p_grandExIconSet;
          if ( !*p_grandExIconSet )
            sub_1C942F0(v167, v168);
          if ( v88 >= LODWORD(v218->max_length) )
            sub_1C942F8(v167);
          v219 = *((_QWORD *)&v218->obj.klass + v86);
          if ( !v219 )
            sub_1C942F0(v167, v168);
          v220 = *(UnityEngine_Component_o **)(v219 + 16);
          if ( !v220 )
            sub_1C942F0(0, v168);
          v221 = UnityEngine_Component__get_gameObject(v220, 0);
          if ( !v221 )
            sub_1C942F0(0, v222);
          UnityEngine_GameObject__SetActive(v221, 0, 0);
          v225 = *p_grandExIconSet;
          if ( !*p_grandExIconSet )
            sub_1C942F0(v223, v224);
          if ( v88 >= LODWORD(v225->max_length) )
            sub_1C942F8(v223);
          v226 = *((_QWORD *)&v225->obj.klass + v86);
          if ( !v226 )
            sub_1C942F0(v223, v224);
          v227 = *(UnityEngine_Object_o **)(v226 + 24);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v228 = UnityEngine_Object__op_Inequality(v227, 0, 0);
          if ( v228 )
          {
            v230 = *p_grandExIconSet;
            if ( !*p_grandExIconSet )
              sub_1C942F0(v228, v229);
            if ( v88 >= LODWORD(v230->max_length) )
              sub_1C942F8(v228);
            v231 = *((_QWORD *)&v230->obj.klass + v86);
            if ( !v231 )
              sub_1C942F0(v228, v229);
            v232 = *(UnityEngine_Component_o **)(v231 + 24);
            if ( !v232 )
              sub_1C942F0(0, v229);
            v233 = UnityEngine_Component__get_gameObject(v232, 0);
            if ( !v233 )
              sub_1C942F0(0, v234);
            UnityEngine_GameObject__SetActive(v233, 1, 0);
          }
        }
        goto LABEL_18;
      }
      v84 = *p_grandExIconSet;
      ++v86;
      if ( !*p_grandExIconSet )
        goto LABEL_174;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__bool___Dispose(
    &v251,
    (const MethodInfo_360D5AC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
}


void ClassBoardBackground__SetShowBoardCallback(
        ClassBoardBackground_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.showBoardCallback = callback;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.showBoardCallback,
    (int32_t)callback,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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

  if ( (byte_4D303FF & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_ClassBoardBackground__SkipStartMainEffectPlayer_b__87_0__);
    sub_1C94098(&Method_ClassBoardEffectPlayer_GetData_int___);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&StringLiteral_8894/*"MainTransition{0}"*/);
    byte_4D303FF = 1;
  }
  skipMainEffectPlayer = this->fields.skipMainEffectPlayer;
  if ( !skipMainEffectPlayer )
    sub_1C942F0(0, method);
  Data_int = ClassBoardEffectPlayer__GetData_int_(
               skipMainEffectPlayer,
               (const MethodInfo_318F878 *)Method_ClassBoardEffectPlayer_GetData_int___);
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Data_int);
  v5 = System_String__Format((System_String_o *)StringLiteral_8894/*"MainTransition{0}"*/, v4, 0);
  mainAnimation = this->fields.mainAnimation;
  v7 = v5;
  v8 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
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
  __int64 v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7

  if ( (byte_4D30404 & 1) == 0 )
  {
    sub_1C94098(&ClassBoardBackground__WaitAnimationFinished_d__93_TypeInfo);
    byte_4D30404 = 1;
  }
  v8 = sub_1C942E4(ClassBoardBackground__WaitAnimationFinished_d__93_TypeInfo);
  ClassBoardBackground__WaitAnimationFinished_d__93___ctor(
    (ClassBoardBackground__WaitAnimationFinished_d__93_o *)v8,
    0,
    0);
  if ( !v8 )
    sub_1C942F0(v9, v10);
  *(_QWORD *)(v8 + 32) = anim;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v8 + 32), (int32_t)anim, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)(v8 + 40) = name;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v8 + 40), (int32_t)name, v17, v18, v19, v20, v21, v22);
  *(_QWORD *)(v8 + 48) = endCallback;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v8 + 48), (int32_t)endCallback, v23, v24, v25, v26, v27, v28);
  return (System_Collections_IEnumerator_o *)v8;
}


void ClassBoardBackground___PlayStartExClassReleaseEffectPlayer_b__89_0(
        ClassBoardBackground_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x0
  GrandQuestFolderBoardItem_o *p_exClassReleaseEffectAnimationDic; // x19
  struct System_Collections_Generic_Dictionary_int__SimpleAnimation__o *exClassReleaseEffectAnimationDic; // t1
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  System_Int32_array *v7; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4D30407 & 1) == 0 )
  {
    sub_1C94098(&ClassBoardUtility_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__get_Keys__);
    sub_1C94098(&Method_System_Linq_Enumerable_ToArray_int___);
    byte_4D30407 = 1;
  }
  exClassReleaseEffectAnimationDic = this->fields.exClassReleaseEffectAnimationDic;
  p_exClassReleaseEffectAnimationDic = (GrandQuestFolderBoardItem_o *)&this->fields.exClassReleaseEffectAnimationDic;
  v3 = (System_Collections_Generic_Dictionary_int__object__o *)exClassReleaseEffectAnimationDic;
  if ( !exClassReleaseEffectAnimationDic )
    sub_1C942F0(0, method);
  Keys = System_Collections_Generic_Dictionary_int__object___get_Keys(
           v3,
           (const MethodInfo_34B4594 *)Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__get_Keys__);
  v7 = System_Linq_Enumerable__ToArray_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
         (const MethodInfo_31DC714 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
  ClassBoardUtility__SavePlayedExClassReleaseEffect(v7, 0);
  p_exClassReleaseEffectAnimationDic->klass = 0;
  sub_1C9403C(p_exClassReleaseEffectAnimationDic, 0, v8, v9, v10, v11, v12, v13);
}


void ClassBoardBackground___PlayStartMainEffectPlayer_b__86_0(ClassBoardBackground_o *this, const MethodInfo *method)
{
  ClassBoardEffectPlayer_o *startMainEffectPlayer; // x0

  startMainEffectPlayer = this->fields.startMainEffectPlayer;
  if ( !startMainEffectPlayer )
    sub_1C942F0(0, method);
  ClassBoardEffectPlayer__End(startMainEffectPlayer, 0);
}


void ClassBoardBackground___SkipStartMainEffectPlayer_b__87_0(ClassBoardBackground_o *this, const MethodInfo *method)
{
  ClassBoardEffectPlayer_o *skipMainEffectPlayer; // x0

  skipMainEffectPlayer = this->fields.skipMainEffectPlayer;
  if ( !skipMainEffectPlayer )
    sub_1C942F0(0, method);
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  bool result; // w0

  if ( (byte_4D30411 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4D30411 = 1;
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
      v6 = (UnityEngine_WaitForSeconds_o *)sub_1C942E4(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v6, exClassReleaseEffectStartSec, 0);
      this->fields.__2__current = (Il2CppObject *)v6;
      p__2__current = &this->fields.__2__current;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)p__2__current, (int32_t)v6, v8, v9, v10, v11, v12, v13);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
LABEL_10:
    sub_1C942F0(_4__this, method);
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

  v2 = sub_1C940AC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C942E4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C940AC(&Method_ClassBoardBackground__PlayExClassReleaseEffectPlayer_d__88_System_Collections_IEnumerator_Reset__);
  sub_1C941C0(v3, v4);
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
  GrandQuestFolderBoardItem_o *p__2__current; // x19
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  bool result; // w0
  float v15; // s0
  UITweener_o *v16; // x19
  ClassBoardBackground___c_c *v17; // x0
  EventDelegate_Callback_o *_9__79_0; // x20
  Il2CppObject *v19; // x21
  struct ClassBoardBackground___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  UnityEngine_Vector3_o v27; // 0:s1.4,4:s2.4,8:s3.4

  v2 = this;
  if ( (byte_4D30412 & 1) == 0 )
  {
    sub_1C94098(&EventDelegate_Callback_TypeInfo);
    sub_1C94098(&Method_ClassBoardBackground___c__PlayGrandReturnTransitionAnimationFromTween_b__79_0__);
    sub_1C94098(&ClassBoardBackground___c_TypeInfo);
    this = (ClassBoardBackground__PlayGrandReturnTransitionAnimationFromTween_d__79_o *)sub_1C94098(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4D30412 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_19;
    v15 = 0.0;
    if ( !v2->fields.isQuick )
      v15 = 1.0;
    v27.fields.x = 0.0;
    v27.fields.y = 0.0;
    v27.fields.z = 0.0;
    this = (ClassBoardBackground__PlayGrandReturnTransitionAnimationFromTween_d__79_o *)TweenPosition__Begin(
                                                                                          _4__this->fields.boardRoot,
                                                                                          v15,
                                                                                          v27,
                                                                                          0);
    if ( !this )
      goto LABEL_19;
    LODWORD(this->fields.__4__this) = 21;
    v16 = (UITweener_o *)this;
    v17 = ClassBoardBackground___c_TypeInfo;
    if ( !ClassBoardBackground___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardBackground___c_TypeInfo);
      v17 = ClassBoardBackground___c_TypeInfo;
    }
    _9__79_0 = v17->static_fields->__9__79_0;
    if ( !_9__79_0 )
    {
      if ( !v17->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v17);
        v17 = ClassBoardBackground___c_TypeInfo;
      }
      v19 = (Il2CppObject *)v17->static_fields->__9;
      _9__79_0 = (EventDelegate_Callback_o *)sub_1C942E4(EventDelegate_Callback_TypeInfo);
      EventDelegate_Callback___ctor(
        _9__79_0,
        v19,
        Method_ClassBoardBackground___c__PlayGrandReturnTransitionAnimationFromTween_b__79_0__,
        0);
      static_fields = ClassBoardBackground___c_TypeInfo->static_fields;
      static_fields->__9__79_0 = _9__79_0;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__79_0,
        (int32_t)_9__79_0,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
    }
    UITweener__SetOnFinished(v16, _9__79_0, 0);
  }
  else if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    if ( _4__this )
    {
      classScoreTweenStartDelay = _4__this->fields.classScoreTweenStartDelay;
      v6 = (UnityEngine_WaitForSeconds_o *)sub_1C942E4(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v6, classScoreTweenStartDelay, 0);
      v2->fields.__2__current = (Il2CppObject *)v6;
      p__2__current = (GrandQuestFolderBoardItem_o *)&v2->fields.__2__current;
      sub_1C9403C(p__2__current, (int32_t)v6, v8, v9, v10, v11, v12, v13);
      result = 1;
      LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
      return result;
    }
LABEL_19:
    sub_1C942F0(this, method);
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

  v2 = sub_1C940AC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C942E4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C940AC(&Method_ClassBoardBackground__PlayGrandReturnTransitionAnimationFromTween_d__79_System_Collections_IEnumerator_Reset__);
  sub_1C941C0(v3, v4);
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
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  bool result; // w0
  Il2CppObject **p__2__current; // x19

  if ( (byte_4D30413 & 1) == 0 )
  {
    sub_1C94098(&SimpleAnimation_State_TypeInfo);
    byte_4D30413 = 1;
  }
  if ( this->fields.__1__state > 1u )
    return 0;
  anim = this->fields.anim;
  this->fields.__1__state = -1;
  if ( !anim )
    sub_1C942F0(0, method);
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
    v9 = sub_1C6A420(State, SimpleAnimation_State_TypeInfo, 5);
  }
  if ( (*(float (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v9)(v6, *(_QWORD *)(v9 + 8)) >= 1.0 )
  {
LABEL_13:
    ActionExtensions__Call(this->fields.endCallback, 0);
    return 0;
  }
  this->fields.__2__current = 0;
  p__2__current = &this->fields.__2__current;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)p__2__current, 0, v10, v11, v12, v13, v14, v15);
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

  v2 = sub_1C940AC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C942E4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C940AC(&Method_ClassBoardBackground__WaitAnimationFinished_d__93_System_Collections_IEnumerator_Reset__);
  sub_1C941C0(v3, v4);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D3040B & 1) == 0 )
  {
    sub_1C94098(&ClassBoardBackground___c_TypeInfo);
    byte_4D3040B = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(ClassBoardBackground___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ClassBoardBackground___c_TypeInfo->static_fields->__9 = (struct ClassBoardBackground___c_o *)v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)ClassBoardBackground___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1C942F0(this, a);
  return a->fields.classId - b->fields.classId;
}


void ClassBoardBackground___c___InitGrandClassReleasedEffect_b__83_0(
        ClassBoardBackground___c_o *this,
        ClassBoardBackground_ExClassIconSet_o *x,
        const MethodInfo *method)
{
  UnityEngine_Object_o *releaseEffect; // x20

  if ( (byte_4D3040C & 1) == 0 )
  {
    this = (ClassBoardBackground___c_o *)sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D3040C = 1;
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
    sub_1C942F0(this, x);
  }
}


void ClassBoardBackground___c___OnDestroy_b__85_0(
        ClassBoardBackground___c_o *this,
        UnityEngine_Renderer_o *x,
        const MethodInfo *method)
{
  UnityEngine_Object_o *material; // x19

  if ( (byte_4D3040D & 1) == 0 )
  {
    this = (ClassBoardBackground___c_o *)sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D3040D = 1;
  }
  if ( !x )
    sub_1C942F0(this, x);
  material = (UnityEngine_Object_o *)UnityEngine_Renderer__get_material(x, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_72110972(material, 0);
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
    sub_1C942F0(this, 0);
  UnityEngine_GameObject__SetActive(x, 0, 0);
}


void ClassBoardBackground___c___SetGrandClassIcon_b__81_3(
        ClassBoardBackground___c_o *this,
        UnityEngine_GameObject_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
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
  if ( (byte_4D3040E & 1) == 0 )
  {
    sub_1C94098(&int_TypeInfo);
    this = (ClassBoardBackground___c__DisplayClass80_0_o *)sub_1C94098(&StringLiteral_4491/*"ClassIcon{0}"*/);
    byte_4D3040E = 1;
  }
  if ( !x )
    sub_1C942F0(this, x);
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)x, 0);
  iconId = v4->fields.iconId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId);
  v7 = System_String__Format((System_String_o *)StringLiteral_4491/*"ClassIcon{0}"*/, v6, 0);
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
    sub_1C942F0(this, x);
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
    sub_1C942F0(this, 0);
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
    sub_1C942F0(this, 0);
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
    sub_1C942F0(this, 0);
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
  if ( (byte_4D3040F & 1) == 0 )
  {
    sub_1C94098(&int_TypeInfo);
    this = (ClassBoardBackground___c__DisplayClass81_0_o *)sub_1C94098(&StringLiteral_7159/*"GrandClassIcon{0}"*/);
    byte_4D3040F = 1;
  }
  if ( !x )
    sub_1C942F0(this, x);
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)x, 0);
  iconId = v4->fields.iconId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId);
  v7 = System_String__Format((System_String_o *)StringLiteral_7159/*"GrandClassIcon{0}"*/, v6, 0);
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
    sub_1C942F0(this, x);
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
    sub_1C942F0(this, 0);
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
    sub_1C942F0(this, 0);
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
    sub_1C942F0(this, 0);
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  struct ClassBoardBackground___c__DisplayClass90_0_o *v14; // x8
  struct ClassBoardBackground___c__DisplayClass90_0_o *v15; // x8

  if ( (byte_4D30410 & 1) == 0 )
  {
    sub_1C94098(&ClassBoardUtility_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__get_Keys__);
    sub_1C94098(&Method_System_Linq_Enumerable_ToArray_int___);
    byte_4D30410 = 1;
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
           (const MethodInfo_34B4594 *)Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__get_Keys__);
  v7 = System_Linq_Enumerable__ToArray_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
         (const MethodInfo_31DC714 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
  ClassBoardUtility__SavePlayedGrandExClassReleaseEffect(v7, 0);
  v14 = this->fields.CS___8__locals1;
  if ( !v14
    || (anim = (struct SimpleAnimation_o *)v14->fields.__4__this) == 0
    || (*(_QWORD *)&anim[1].fields.m_Initialized = 0,
        sub_1C9403C((GrandQuestFolderBoardItem_o *)&anim[1].fields.m_Initialized, 0, v8, v9, v10, v11, v12, v13),
        (v15 = this->fields.CS___8__locals1) == 0) )
  {
LABEL_13:
    sub_1C942F0(anim, method);
  }
  ActionExtensions__Call(v15->fields.callback, 0);
}


void ClassBoardBackground___c__DisplayClass90_1___PlayStartGrandExClassReleaseEffectPlayer_b__1(
        ClassBoardBackground___c__DisplayClass90_1_o *this,
        const MethodInfo *method)
{
  SimpleAnimation_o *anim; // x0

  anim = this->fields.anim;
  if ( !anim )
    sub_1C942F0(0, method);
  SimpleAnimation__Stop(anim, 0);
}