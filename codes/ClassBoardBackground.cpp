void __fastcall ClassBoardBackground___ctor(ClassBoardBackground_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1

  if ( (byte_42E9BCA & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_16205/*"_MainTex"*/, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E9BCA = 1;
  }
  v9 = (System_Int32_array **)StringLiteral_16205/*"_MainTex"*/;
  this->fields.iconMaterialPropertyName = (struct System_String_o *)StringLiteral_16205/*"_MainTex"*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.iconMaterialPropertyName, v9, v2, v3, v4, v5, v6, v7);
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
    sub_B5D69C(0LL, value);
  UnityEngine_GameObject__SetActive(earthAccessoriesObject, value, 0LL);
}


void __fastcall ClassBoardBackground__Awake(ClassBoardBackground_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_Object_o *gameObject; // x0
  __int64 v12; // x1
  System_String_o *name; // x20
  ClassBoardEffectPlayer_o *v14; // x21
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct ClassBoardEffectPlayer_o *startMainEffectPlayer; // x20
  System_Action_o *v22; // x21
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_42E9BBE & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_ClassBoardBackground_PlayStartMainEffectPlayer__, v5, v6, v7);
    sub_B5D5C4(&ClassBoardEffectPlayer_TypeInfo, v8, v9, v10);
    byte_42E9BBE = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_6;
  name = UnityEngine_Object__get_name(gameObject, 0LL);
  v14 = (ClassBoardEffectPlayer_o *)sub_B5D694(ClassBoardEffectPlayer_TypeInfo);
  ClassBoardEffectPlayer___ctor_28789460(v14, name, 0LL);
  this->fields.startMainEffectPlayer = v14;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.startMainEffectPlayer,
    (System_Int32_array **)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  startMainEffectPlayer = this->fields.startMainEffectPlayer;
  v22 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v22, (Il2CppObject *)this, Method_ClassBoardBackground_PlayStartMainEffectPlayer__, 0LL);
  if ( !startMainEffectPlayer )
LABEL_6:
    sub_B5D69C(gameObject, v12);
  startMainEffectPlayer->fields.playCallback = v22;
  sub_B5D560(
    (BattleServantConfConponent_o *)&startMainEffectPlayer->fields.playCallback,
    (System_Int32_array **)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
}


void __fastcall ClassBoardBackground__CallAnimationEventBoardParent(
        ClassBoardBackground_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *boardParentAnimation; // x20
  UnityEngine_Object_o *boardParentAnimationClip; // x20
  __int64 v7; // x1
  UnityEngine_Object_o *name; // x0
  SimpleAnimation_o *v9; // x19

  if ( (byte_42E9BC9 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9BC9 = 1;
  }
  boardParentAnimation = (UnityEngine_Object_o *)this->fields.boardParentAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(boardParentAnimation, 0LL, 0LL) )
  {
    boardParentAnimationClip = (UnityEngine_Object_o *)this->fields.boardParentAnimationClip;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(boardParentAnimationClip, 0LL, 0LL) )
    {
      name = (UnityEngine_Object_o *)this->fields.boardParentAnimationClip;
      if ( !name
        || (v9 = this->fields.boardParentAnimation,
            name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0LL),
            !v9) )
      {
        sub_B5D69C(name, v7);
      }
      SimpleAnimation__Play_16676044(v9, (System_String_o *)name, 0LL);
    }
  }
}


void __fastcall ClassBoardBackground__CallAnimationEventShowBoard(
        ClassBoardBackground_o *this,
        const MethodInfo *method)
{
  BattleServantConfConponent_o *p_showBoardCallback; // x19
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  p_showBoardCallback = (BattleServantConfConponent_o *)&this->fields.showBoardCallback;
  ActionExtensions__Call(this->fields.showBoardCallback, 0LL);
  p_showBoardCallback->klass = 0LL;
  sub_B5D560(p_showBoardCallback, 0LL, v3, v4, v5, v6, v7, v8);
}


void __fastcall ClassBoardBackground__ChangeCamera(
        ClassBoardBackground_o *this,
        UnityEngine_Camera_o *camera,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct UnityEngine_Camera_o *classBoardViewCamera; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *v8; // x22
  UnityEngine_GameObject_o *v9; // x21
  UnityEngine_GameObject_o *v10; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_42E9BBF & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)camera, (_DWORD)method, v3);
    byte_42E9BBF = 1;
  }
  classBoardViewCamera = this->fields.classBoardViewCamera;
  if ( !classBoardViewCamera )
    goto LABEL_11;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)classBoardViewCamera, 0LL);
  v8 = (UnityEngine_Object_o *)this->fields.classBoardViewCamera;
  v9 = gameObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  classBoardViewCamera = (struct UnityEngine_Camera_o *)UnityEngine_Object__op_Equality(
                                                          (UnityEngine_Object_o *)camera,
                                                          v8,
                                                          0LL);
  if ( !v9
    || (UnityEngine_GameObject__SetActive(v9, (unsigned __int8)classBoardViewCamera & 1, 0LL),
        (classBoardViewCamera = this->fields.classBoardSelectViewCamera) == 0LL)
    || (v10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)classBoardViewCamera, 0LL),
        classBoardViewCamera = (struct UnityEngine_Camera_o *)UnityEngine_Object__op_Equality(
                                                                (UnityEngine_Object_o *)camera,
                                                                (UnityEngine_Object_o *)this->fields.classBoardSelectViewCamera,
                                                                0LL),
        !v10) )
  {
LABEL_11:
    sub_B5D69C(classBoardViewCamera, camera);
  }
  UnityEngine_GameObject__SetActive(v10, (unsigned __int8)classBoardViewCamera & 1, 0LL);
  this->fields.currentCamera = camera;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.currentCamera,
    (System_Int32_array **)camera,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
}


System_Collections_Generic_Dictionary_int__bool__o *__fastcall ClassBoardBackground__GetIconIdList(
        ClassBoardBackground_o *this,
        int32_t baseId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  System_Collections_Generic_Dictionary_int__bool__o *v50; // x19
  void *Master_WarQuestSelectionMaster; // x0
  __int64 v52; // x1
  const MethodInfo *v53; // x3
  System_Collections_Generic_List_ClassBoardClassEntity__o *v54; // x20
  struct ClassBoardBackground___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__38_0; // x21
  Il2CppObject *v57; // x22
  struct ClassBoardBackground___c_StaticFields *v58; // x0
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  DataMasterBase_WarMaster__WarEntity__int__o *v65; // x20
  _BOOL8 v66; // x0
  __int64 v67; // x1
  Il2CppObject *current; // x21
  _BOOL8 v69; // x0
  const MethodInfo *v70; // x1
  int32_t longName_high; // w22
  _BOOL8 IsOpen; // x0
  __int64 v73; // x1
  System_Collections_Generic_List_Enumerator_T__o v75; // [xsp+0h] [xbp-80h] BYREF
  WarEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v77; // [xsp+20h] [xbp-60h] BYREF
  System_Collections_Generic_List_ClassBoardClassEntity__o *entitys; // [xsp+48h] [xbp-38h] BYREF

  if ( (byte_42E9BC2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Comparison_ClassBoardClassEntity___ctor__, baseId, (_DWORD)method, v3);
    sub_B5D5C4(&System_Comparison_ClassBoardClassEntity__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantClassMaster___, v11, v12, v13);
    sub_B5D5C4(&DataManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__bool__Add__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__, v23, v24, v25);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__bool__TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__, v32, v33, v34);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__get_Current__, v35, v36, v37);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__, v38, v39, v40);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ClassBoardClassEntity__Sort__, v41, v42, v43);
    sub_B5D5C4(&Method_ClassBoardBackground___c__GetIconIdList_b__38_0__, v44, v45, v46);
    sub_B5D5C4(&ClassBoardBackground___c_TypeInfo, v47, v48, v49);
    byte_42E9BC2 = 1;
  }
  entitys = 0LL;
  entity = 0LL;
  memset(&v77, 0, sizeof(v77));
  v50 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v50,
    (const MethodInfo_2F02974 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_35;
  if ( !ClassBoardClassMaster__TryGetEntityList(
          (ClassBoardClassMaster_o *)Master_WarQuestSelectionMaster,
          &entitys,
          baseId,
          v53) )
    return v50;
  v54 = entitys;
  Master_WarQuestSelectionMaster = ClassBoardBackground___c_TypeInfo;
  if ( (BYTE3(ClassBoardBackground___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardBackground___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardBackground___c_TypeInfo);
    Master_WarQuestSelectionMaster = ClassBoardBackground___c_TypeInfo;
  }
  static_fields = (struct ClassBoardBackground___c_StaticFields *)*((_QWORD *)Master_WarQuestSelectionMaster + 23);
  _9__38_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__38_0;
  if ( !_9__38_0 )
  {
    if ( (*((_BYTE *)Master_WarQuestSelectionMaster + 307) & 4) != 0
      && !*((_DWORD *)Master_WarQuestSelectionMaster + 56) )
    {
      j_il2cpp_runtime_class_init_0(Master_WarQuestSelectionMaster);
      static_fields = ClassBoardBackground___c_TypeInfo->static_fields;
    }
    v57 = (Il2CppObject *)static_fields->__9;
    _9__38_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_ClassBoardClassEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__38_0,
      v57,
      Method_ClassBoardBackground___c__GetIconIdList_b__38_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_ClassBoardClassEntity___ctor__);
    v58 = ClassBoardBackground___c_TypeInfo->static_fields;
    v58->__9__38_0 = (struct System_Comparison_ClassBoardClassEntity__o *)_9__38_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v58->__9__38_0,
      (System_Int32_array **)_9__38_0,
      v59,
      v60,
      v61,
      v62,
      v63,
      v64);
  }
  if ( !v54 )
    goto LABEL_35;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v54,
    (System_Comparison_T__o *)_9__38_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_ClassBoardClassEntity__Sort__);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantClassMaster___);
  if ( !entitys )
LABEL_35:
    sub_B5D69C(Master_WarQuestSelectionMaster, v52);
  v65 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v75,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)entitys,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__);
  v77 = v75;
  while ( 1 )
  {
    v66 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v77,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__);
    if ( !v66 )
      break;
    current = v77.fields.current;
    if ( !v77.fields.current )
      sub_B5D69C(v66, v67);
    if ( !v65 )
      sub_B5D69C(v66, v67);
    v69 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
            v65,
            &entity,
            HIDWORD(v77.fields.current[1].klass),
            (const MethodInfo_23FAE6C *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    if ( v69 )
    {
      if ( !entity )
        sub_B5D69C(v69, v70);
      longName_high = HIDWORD(entity->fields.longName);
      IsOpen = ClassBoardClassEntity__IsOpen((ClassBoardClassEntity_o *)current, v70);
      if ( !v50 )
        sub_B5D69C(IsOpen, v73);
      System_Collections_Generic_Dictionary_int__bool___Add(
        v50,
        longName_high,
        IsOpen,
        (const MethodInfo_2F03524 *)Method_System_Collections_Generic_Dictionary_int__bool__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v77,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__);
  return v50;
}


UnityEngine_RenderTexture_o *__fastcall ClassBoardBackground__GetRenderTexture(
        ClassBoardBackground_o *this,
        const MethodInfo *method)
{
  UnityEngine_Camera_o *currentCamera; // x0

  currentCamera = this->fields.currentCamera;
  if ( !currentCamera )
    sub_B5D69C(0LL, method);
  return UnityEngine_Camera__get_targetTexture(currentCamera, 0LL);
}


void __fastcall ClassBoardBackground__OnDestroy(ClassBoardBackground_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  System_Collections_Generic_IEnumerable_T__o *iconRenderers; // x19
  ClassBoardBackground___c_c *v18; // x0
  struct ClassBoardBackground___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__40_0; // x20
  Il2CppObject *v21; // x21
  struct ClassBoardBackground___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_42E9BC4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_Renderer___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_Renderer__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_BasicHelper_ForEach_Renderer___, v8, v9, v10);
    sub_B5D5C4(&Method_ClassBoardBackground___c__OnDestroy_b__40_0__, v11, v12, v13);
    sub_B5D5C4(&ClassBoardBackground___c_TypeInfo, v14, v15, v16);
    byte_42E9BC4 = 1;
  }
  iconRenderers = (System_Collections_Generic_IEnumerable_T__o *)this->fields.iconRenderers;
  v18 = ClassBoardBackground___c_TypeInfo;
  if ( (BYTE3(ClassBoardBackground___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardBackground___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardBackground___c_TypeInfo);
    v18 = ClassBoardBackground___c_TypeInfo;
  }
  static_fields = v18->static_fields;
  _9__40_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__40_0;
  if ( !_9__40_0 )
  {
    if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      static_fields = ClassBoardBackground___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)static_fields->__9;
    _9__40_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_Renderer__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__40_0,
      v21,
      Method_ClassBoardBackground___c__OnDestroy_b__40_0__,
      (const MethodInfo_258B320 *)Method_System_Action_Renderer___ctor__);
    v22 = ClassBoardBackground___c_TypeInfo->static_fields;
    v22->__9__40_0 = (struct System_Action_Renderer__o *)_9__40_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v22->__9__40_0,
      (System_Int32_array **)_9__40_0,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    iconRenderers,
    (System_Action_T__o *)_9__40_0,
    (const MethodInfo_1AD82D8 *)Method_BasicHelper_ForEach_Renderer___);
}


void __fastcall ClassBoardBackground__PlayBoardParentBeforeAnimation(
        ClassBoardBackground_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *boardParentAnimation; // x20
  UnityEngine_Object_o *boardParentBeforeAnimationClip; // x20
  __int64 v7; // x1
  SimpleAnimation_o *v8; // x0

  if ( (byte_42E9BC3 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9BC3 = 1;
  }
  boardParentAnimation = (UnityEngine_Object_o *)this->fields.boardParentAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(boardParentAnimation, 0LL, 0LL) )
  {
    boardParentBeforeAnimationClip = (UnityEngine_Object_o *)this->fields.boardParentBeforeAnimationClip;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(boardParentBeforeAnimationClip, 0LL, 0LL) )
    {
      v8 = this->fields.boardParentAnimation;
      if ( !v8
        || (SimpleAnimation__set_clip(v8, this->fields.boardParentBeforeAnimationClip, 0LL),
            (v8 = this->fields.boardParentAnimation) == 0LL) )
      {
        sub_B5D69C(v8, v7);
      }
      SimpleAnimation__Play(v8, 0LL);
    }
  }
}


System_Collections_IEnumerator_o *__fastcall ClassBoardBackground__PlayExClassReleaseEffectPlayer(
        ClassBoardBackground_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42E9BC6 & 1) == 0 )
  {
    sub_B5D5C4(&ClassBoardBackground__PlayExClassReleaseEffectPlayer_d__42_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9BC6 = 1;
  }
  v5 = sub_B5D694(ClassBoardBackground__PlayExClassReleaseEffectPlayer_d__42_TypeInfo);
  ClassBoardBackground__PlayExClassReleaseEffectPlayer_d__42___ctor(
    (ClassBoardBackground__PlayExClassReleaseEffectPlayer_d__42_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall ClassBoardBackground__PlaySimpleAnimation(
        ClassBoardBackground_o *this,
        SimpleAnimation_o *anim,
        System_String_o *name,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  _BOOL8 v9; // x0
  const MethodInfo *v10; // x4
  System_Collections_IEnumerator_o *v11; // x1

  if ( !anim )
    sub_B5D69C(this, 0LL);
  SimpleAnimation__Rewind(anim, 0LL);
  v9 = SimpleAnimation__Play_16676044(anim, name, 0LL);
  v11 = ClassBoardBackground__WaitAnimationFinished((ClassBoardBackground_o *)v9, anim, name, endCallback, v10);
  UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v11, 0LL);
}


void __fastcall ClassBoardBackground__PlayStartExClassReleaseEffectPlayer(
        ClassBoardBackground_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  __int64 v35; // x1
  struct System_Collections_Generic_Dictionary_int__SimpleAnimation__o *exClassReleaseEffectAnimationDic; // x0
  char v37; // w21
  const MethodInfo *v38; // x4
  Il2CppObject *value; // x20
  System_Action_o *v40; // x21
  const MethodInfo *v41; // x4
  ClassBoardBackground___c_c *v42; // x0
  struct ClassBoardBackground___c_StaticFields *static_fields; // x8
  System_String_o *v44; // x21
  System_Action_o *_9__43_1; // x22
  Il2CppObject *v46; // x23
  struct ClassBoardBackground___c_StaticFields *v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v54; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v55; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_42E9BC7 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_ClassBoardBackground__PlayStartExClassReleaseEffectPlayer_b__43_0__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__GetEnumerator__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__Dispose__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__MoveNext__, v14, v15, v16);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__get_Current__,
      v17,
      v18,
      v19);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_int__SimpleAnimation__get_Key__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_int__SimpleAnimation__get_Value__, v23, v24, v25);
    sub_B5D5C4(&Method_ClassBoardBackground___c__PlayStartExClassReleaseEffectPlayer_b__43_1__, v26, v27, v28);
    sub_B5D5C4(&ClassBoardBackground___c_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_10710/*"Particle_CrassIcon_Ex_Released"*/, v32, v33, v34);
    byte_42E9BC7 = 1;
  }
  memset(&v55, 0, sizeof(v55));
  if ( !BasicHelper__IsNullOrEmpty(
          (System_Collections_ICollection_o *)this->fields.exClassReleaseEffectAnimationDic,
          0LL) )
  {
    exClassReleaseEffectAnimationDic = this->fields.exClassReleaseEffectAnimationDic;
    if ( !exClassReleaseEffectAnimationDic )
      sub_B5D69C(0LL, v35);
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
      &v54,
      (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)exClassReleaseEffectAnimationDic,
      (const MethodInfo_2F326A8 *)Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__GetEnumerator__);
    v37 = 1;
    v55 = v54;
    while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
              &v55,
              (const MethodInfo_28A1C74 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__MoveNext__) )
    {
      value = v55.fields.current.fields.value;
      if ( (v37 & 1) != 0 )
      {
        v40 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        System_Action___ctor(
          v40,
          (Il2CppObject *)this,
          Method_ClassBoardBackground__PlayStartExClassReleaseEffectPlayer_b__43_0__,
          0LL);
        ClassBoardBackground__PlaySimpleAnimation(
          this,
          (SimpleAnimation_o *)value,
          (System_String_o *)StringLiteral_10710/*"Particle_CrassIcon_Ex_Released"*/,
          v40,
          v41);
        v37 = 0;
      }
      else
      {
        v42 = ClassBoardBackground___c_TypeInfo;
        if ( (BYTE3(ClassBoardBackground___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ClassBoardBackground___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ClassBoardBackground___c_TypeInfo);
          v42 = ClassBoardBackground___c_TypeInfo;
        }
        static_fields = v42->static_fields;
        v44 = (System_String_o *)StringLiteral_10710/*"Particle_CrassIcon_Ex_Released"*/;
        _9__43_1 = static_fields->__9__43_1;
        if ( !_9__43_1 )
        {
          if ( (BYTE3(v42->vtable._0_Equals.methodPtr) & 4) != 0 && !v42->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v42);
            static_fields = ClassBoardBackground___c_TypeInfo->static_fields;
          }
          v46 = (Il2CppObject *)static_fields->__9;
          _9__43_1 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
          System_Action___ctor(
            _9__43_1,
            v46,
            Method_ClassBoardBackground___c__PlayStartExClassReleaseEffectPlayer_b__43_1__,
            0LL);
          v47 = ClassBoardBackground___c_TypeInfo->static_fields;
          v47->__9__43_1 = _9__43_1;
          sub_B5D560(
            (BattleServantConfConponent_o *)&v47->__9__43_1,
            (System_Int32_array **)_9__43_1,
            v48,
            v49,
            v50,
            v51,
            v52,
            v53);
        }
        ClassBoardBackground__PlaySimpleAnimation(this, (SimpleAnimation_o *)value, v44, _9__43_1, v38);
        v37 = 0;
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
      &v55,
      (const MethodInfo_28A1DE0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__Dispose__);
  }
}


void __fastcall ClassBoardBackground__PlayStartMainEffectPlayer(ClassBoardBackground_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  ClassBoardEffectPlayer_o *startMainEffectPlayer; // x0
  int32_t Data_int; // w20
  Il2CppObject *v25; // x0
  System_String_o *v26; // x20
  Il2CppObject *v27; // x0
  const MethodInfo *v28; // x1
  System_Collections_IEnumerator_o *v29; // x0
  SimpleAnimation_o *mainAnimation; // x21
  System_Action_o *v31; // x22
  const MethodInfo *v32; // x4
  int32_t v33; // [xsp+8h] [xbp-28h] BYREF
  int32_t v34; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42E9BC5 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_ClassBoardBackground__PlayStartMainEffectPlayer_b__41_0__, v5, v6, v7);
    sub_B5D5C4(&Method_ClassBoardEffectPlayer_GetData_int___, v8, v9, v10);
    sub_B5D5C4(&int_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_8992/*"MainTransition{0}_Release"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_1/*""*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_8991/*"MainTransition{0}"*/, v20, v21, v22);
    byte_42E9BC5 = 1;
  }
  startMainEffectPlayer = this->fields.startMainEffectPlayer;
  if ( !startMainEffectPlayer )
    sub_B5D69C(0LL, method);
  Data_int = ClassBoardEffectPlayer__GetData_int_(
               startMainEffectPlayer,
               (const MethodInfo_1ADCE1C *)Method_ClassBoardEffectPlayer_GetData_int___);
  if ( BasicHelper__IsNullOrEmpty(
         (System_Collections_ICollection_o *)this->fields.exClassReleaseEffectAnimationDic,
         0LL) )
  {
    v33 = Data_int;
    v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33);
    v26 = System_String__Format((System_String_o *)StringLiteral_8991/*"MainTransition{0}"*/, v25, 0LL);
  }
  else
  {
    v34 = Data_int;
    v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v34);
    v26 = System_String__Format((System_String_o *)StringLiteral_8992/*"MainTransition{0}_Release"*/, v27, 0LL);
    v29 = ClassBoardBackground__PlayExClassReleaseEffectPlayer(this, v28);
    UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v29, 0LL);
  }
  mainAnimation = this->fields.mainAnimation;
  v31 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v31, (Il2CppObject *)this, Method_ClassBoardBackground__PlayStartMainEffectPlayer_b__41_0__, 0LL);
  ClassBoardBackground__PlaySimpleAnimation(this, mainAnimation, v26, v31, v32);
}


void __fastcall ClassBoardBackground__SetBoardParentAnimation(
        ClassBoardBackground_o *this,
        SimpleAnimation_o *animation,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  UnityEngine_Object_o *boardParentAnimation; // x20
  UnityEngine_Object_o *boardParentAnimationClip; // x20
  __int64 v12; // x1
  UnityEngine_Object_o *name; // x0
  SimpleAnimation_o *v14; // x20
  UnityEngine_AnimationClip_o *v15; // x20
  SimpleAnimation_o *v16; // x21
  UnityEngine_Object_o *boardParentBeforeAnimationClip; // x20
  SimpleAnimation_o *v18; // x20
  UnityEngine_AnimationClip_o *v19; // x20
  SimpleAnimation_o *v20; // x21
  SimpleAnimation_o *v21; // x19

  if ( (byte_42E9BC0 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)animation, (_DWORD)method, v3);
    byte_42E9BC0 = 1;
  }
  this->fields.boardParentAnimation = animation;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.boardParentAnimation,
    (System_Int32_array **)animation,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  boardParentAnimation = (UnityEngine_Object_o *)this->fields.boardParentAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(boardParentAnimation, 0LL, 0LL) )
  {
    boardParentAnimationClip = (UnityEngine_Object_o *)this->fields.boardParentAnimationClip;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(boardParentAnimationClip, 0LL, 0LL) )
    {
      name = (UnityEngine_Object_o *)this->fields.boardParentAnimationClip;
      if ( !name )
        goto LABEL_31;
      v14 = this->fields.boardParentAnimation;
      name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0LL);
      if ( !v14 )
        goto LABEL_31;
      name = (UnityEngine_Object_o *)SimpleAnimation__GetState(v14, (System_String_o *)name, 0LL);
      if ( !name )
      {
        v15 = this->fields.boardParentAnimationClip;
        if ( !v15 )
          goto LABEL_31;
        v16 = this->fields.boardParentAnimation;
        name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(
                                         (UnityEngine_Object_o *)this->fields.boardParentAnimationClip,
                                         0LL);
        if ( !v16 )
          goto LABEL_31;
        SimpleAnimation__AddClip(v16, v15, (System_String_o *)name, 0LL);
      }
    }
    boardParentBeforeAnimationClip = (UnityEngine_Object_o *)this->fields.boardParentBeforeAnimationClip;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(boardParentBeforeAnimationClip, 0LL, 0LL) )
    {
      name = (UnityEngine_Object_o *)this->fields.boardParentBeforeAnimationClip;
      if ( name )
      {
        v18 = this->fields.boardParentAnimation;
        name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0LL);
        if ( v18 )
        {
          name = (UnityEngine_Object_o *)SimpleAnimation__GetState(v18, (System_String_o *)name, 0LL);
          if ( !name )
          {
            v19 = this->fields.boardParentBeforeAnimationClip;
            if ( !v19 )
              goto LABEL_31;
            v20 = this->fields.boardParentAnimation;
            name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(
                                             (UnityEngine_Object_o *)this->fields.boardParentBeforeAnimationClip,
                                             0LL);
            if ( !v20 )
              goto LABEL_31;
            SimpleAnimation__AddClip(v20, v19, (System_String_o *)name, 0LL);
          }
          name = (UnityEngine_Object_o *)this->fields.boardParentBeforeAnimationClip;
          if ( name )
          {
            v21 = this->fields.boardParentAnimation;
            name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0LL);
            if ( v21 )
            {
              SimpleAnimation__Play_16676044(v21, (System_String_o *)name, 0LL);
              return;
            }
          }
        }
      }
LABEL_31:
      sub_B5D69C(name, v12);
    }
  }
}


void __fastcall ClassBoardBackground__SetClassIcon(
        ClassBoardBackground_o *this,
        int32_t baseId,
        int32_t iconId,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  int v55; // w1
  int v56; // w2
  __int64 v57; // x3
  int v58; // w1
  int v59; // w2
  __int64 v60; // x3
  int v61; // w1
  int v62; // w2
  __int64 v63; // x3
  int v64; // w1
  int v65; // w2
  __int64 v66; // x3
  int v67; // w1
  int v68; // w2
  __int64 v69; // x3
  int v70; // w1
  int v71; // w2
  __int64 v72; // x3
  int v73; // w1
  int v74; // w2
  __int64 v75; // x3
  int v76; // w1
  int v77; // w2
  __int64 v78; // x3
  int v79; // w1
  int v80; // w2
  __int64 v81; // x3
  int v82; // w1
  int v83; // w2
  __int64 v84; // x3
  int v85; // w1
  int v86; // w2
  __int64 v87; // x3
  __int64 v88; // x22
  UnityEngine_Component_o *offRenderer; // x0
  __int64 v90; // x1
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  System_Collections_Generic_IEnumerable_TSource__o *iconTextures; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v98; // x23
  System_Int32_array **v99; // x0
  System_String_array **v100; // x2
  System_String_array **v101; // x3
  System_Boolean_array **v102; // x4
  System_Int32_array **v103; // x5
  System_Int32_array *v104; // x6
  System_Int32_array *v105; // x7
  UnityEngine_Object_o *v106; // x21
  System_Collections_Generic_IEnumerable_T__o *iconRenderers; // x21
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v108; // x23
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v109; // x21
  System_String_array **v110; // x2
  System_String_array **v111; // x3
  System_Boolean_array **v112; // x4
  System_Int32_array **v113; // x5
  System_Int32_array *v114; // x6
  System_Int32_array *v115; // x7
  const MethodInfo *v116; // x2
  struct ClassBoardBackground_ExClassIconSet_array *exIconSet; // x8
  Il2CppObject *key; // x20
  __int64 v119; // x21
  Il2CppObject *v120; // x1
  System_Int32_array **v121; // x0
  System_String_array **v122; // x2
  System_String_array **v123; // x3
  System_Boolean_array **v124; // x4
  System_Int32_array **v125; // x5
  System_Int32_array *v126; // x6
  System_Int32_array *v127; // x7
  Il2CppObject *v128; // x1
  System_Int32_array **v129; // x0
  System_String_array **v130; // x2
  System_String_array **v131; // x3
  System_Boolean_array **v132; // x4
  System_Int32_array **v133; // x5
  System_Int32_array *v134; // x6
  System_Int32_array *v135; // x7
  Il2CppObject *v136; // x1
  System_Int32_array **v137; // x0
  System_String_array **v138; // x2
  System_String_array **v139; // x3
  System_Boolean_array **v140; // x4
  System_Int32_array **v141; // x5
  System_Int32_array *v142; // x6
  System_Int32_array *v143; // x7
  _BOOL8 v144; // x0
  __int64 v145; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v146; // x8
  il2cpp_array_size_t v147; // w19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o **v148; // x22
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o **v149; // x24
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o **v150; // x25
  il2cpp_array_size_t v151; // w9
  ClassBoardBackground_ExClassIconSet_o *v152; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v153; // x23
  System_Collections_Generic_IEnumerable_TSource__o *textures; // x27
  System_String_array **v155; // x2
  System_String_array **v156; // x3
  System_Boolean_array **v157; // x4
  System_Int32_array **v158; // x5
  System_Int32_array *v159; // x6
  System_Int32_array *v160; // x7
  WarBoardData_SquareRangeSearch_o *v161; // x0
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v162; // x26
  UnityEngine_Object_o *v163; // x23
  System_String_array **v164; // x2
  System_String_array **v165; // x3
  System_Boolean_array **v166; // x4
  System_Int32_array **v167; // x5
  System_Int32_array *v168; // x6
  System_Int32_array *v169; // x7
  WarBoardData_SquareRangeSearch_o *v170; // x0
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v171; // x28
  UnityEngine_Object_o *v172; // x26
  System_String_array **v173; // x2
  System_String_array **v174; // x3
  System_Boolean_array **v175; // x4
  System_Int32_array **v176; // x5
  System_Int32_array *v177; // x6
  System_Int32_array *v178; // x7
  UnityEngine_Texture_o *v179; // x27
  struct ClassBoardBackground_ExClassIconSet_array *v180; // x8
  ClassBoardBackground_ExClassIconSet_o *v181; // x8
  UnityEngine_Renderer_o *v182; // x0
  UnityEngine_Material_o *material; // x0
  __int64 v184; // x1
  __int64 v185; // x0
  __int64 v186; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v187; // x8
  ClassBoardBackground_ExClassIconSet_o *v188; // x8
  UnityEngine_Renderer_o *effectRenderer; // x0
  UnityEngine_Material_o *v190; // x0
  __int64 v191; // x1
  __int64 v192; // x0
  __int64 v193; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v194; // x8
  ClassBoardBackground_ExClassIconSet_o *v195; // x8
  UnityEngine_Renderer_o *onRenderer; // x0
  UnityEngine_Material_o *v197; // x0
  __int64 v198; // x1
  __int64 v199; // x0
  __int64 v200; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v201; // x8
  ClassBoardBackground_ExClassIconSet_o *v202; // x8
  UnityEngine_Renderer_o *effectGlowRenderer; // x0
  UnityEngine_Material_o *v204; // x0
  __int64 v205; // x1
  __int64 v206; // x0
  __int64 v207; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v208; // x8
  ClassBoardBackground_ExClassIconSet_o *v209; // x8
  UnityEngine_Component_o *v210; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v212; // x1
  __int64 v213; // x0
  __int64 v214; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v215; // x8
  ClassBoardBackground_ExClassIconSet_o *v216; // x8
  UnityEngine_Component_o *v217; // x0
  UnityEngine_GameObject_o *v218; // x0
  __int64 v219; // x1
  __int64 v220; // x0
  __int64 v221; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v222; // x8
  ClassBoardBackground_ExClassIconSet_o *v223; // x8
  UnityEngine_GameObject_o *releaseEffect; // x0
  UnityEngine_GameObject_o *v225; // x0
  __int64 v226; // x1
  _BOOL8 IsPlayed; // x0
  __int64 v228; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v229; // x8
  ClassBoardBackground_ExClassIconSet_o *v230; // x8
  UnityEngine_Object_o *animation; // x21
  _BOOL8 v232; // x0
  __int64 v233; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v234; // x8
  ClassBoardBackground_ExClassIconSet_o *v235; // x8
  UnityEngine_Component_o *v236; // x0
  UnityEngine_GameObject_o *v237; // x0
  __int64 v238; // x1
  __int64 v239; // x0
  __int64 v240; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v241; // x8
  ClassBoardBackground_ExClassIconSet_o *v242; // x8
  UnityEngine_Component_o *v243; // x0
  UnityEngine_GameObject_o *v244; // x0
  __int64 v245; // x1
  __int64 v246; // x0
  __int64 v247; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v248; // x8
  ClassBoardBackground_ExClassIconSet_o *v249; // x8
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *exClassReleaseEffectAnimationDic; // x0
  __int64 v251; // x0
  __int64 v252; // x0
  __int64 v253; // x0
  __int64 v254; // x0
  __int64 v255; // x0
  __int64 v256; // x0
  __int64 v257; // x0
  __int64 v258; // x0
  __int64 v259; // x0
  __int64 v260; // x0
  __int64 v261; // x0
  __int64 v262; // x0
  struct ClassBoardBackground_ExClassIconSet_array *v263; // x19
  int max_length; // w8
  unsigned int v265; // w20
  ClassBoardBackground_ExClassIconSet_o *v266; // x21
  __int64 v267; // x0
  __int64 v268; // [xsp+0h] [xbp-B0h]
  ClassBoardBackground_o *v269; // [xsp+10h] [xbp-A0h]
  int v270; // [xsp+18h] [xbp-98h] BYREF
  int v271; // [xsp+1Ch] [xbp-94h] BYREF
  __int128 v272[2]; // [xsp+20h] [xbp-90h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v273; // [xsp+40h] [xbp-70h] BYREF

  if ( (byte_42E9BC1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_Renderer___ctor__, baseId, iconId, method);
    sub_B5D5C4(&System_Action_Renderer__TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_BasicHelper_ForEach_Renderer___, v10, v11, v12);
    sub_B5D5C4(&ClassBoardUtility_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__Add__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__SimpleAnimation___ctor__, v22, v23, v24);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__SimpleAnimation__TypeInfo, v25, v26, v27);
    sub_B5D5C4(&Method_System_Linq_Enumerable_FirstOrDefault_Texture___, v28, v29, v30);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__, v31, v32, v33);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__, v34, v35, v36);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__get_Current__, v37, v38, v39);
    sub_B5D5C4(&Method_System_Func_Texture__bool___ctor__, v40, v41, v42);
    sub_B5D5C4(&System_Func_Texture__bool__TypeInfo, v43, v44, v45);
    sub_B5D5C4(&int_TypeInfo, v46, v47, v48);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Key__, v49, v50, v51);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Value__, v52, v53, v54);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v55, v56, v57);
    sub_B5D5C4(&Method_ClassBoardBackground___c__DisplayClass37_0__SetClassIcon_b__0__, v58, v59, v60);
    sub_B5D5C4(&Method_ClassBoardBackground___c__DisplayClass37_0__SetClassIcon_b__1__, v61, v62, v63);
    sub_B5D5C4(&ClassBoardBackground___c__DisplayClass37_0_TypeInfo, v64, v65, v66);
    sub_B5D5C4(&Method_ClassBoardBackground___c__DisplayClass37_1__SetClassIcon_b__2__, v67, v68, v69);
    sub_B5D5C4(&Method_ClassBoardBackground___c__DisplayClass37_1__SetClassIcon_b__3__, v70, v71, v72);
    sub_B5D5C4(&Method_ClassBoardBackground___c__DisplayClass37_1__SetClassIcon_b__4__, v73, v74, v75);
    sub_B5D5C4(&ClassBoardBackground___c__DisplayClass37_1_TypeInfo, v76, v77, v78);
    sub_B5D5C4(&StringLiteral_4083/*"ClassIconEx_off_{0}"*/, v79, v80, v81);
    sub_B5D5C4(&StringLiteral_4084/*"ClassIconEx_on_{0}"*/, v82, v83, v84);
    sub_B5D5C4(&StringLiteral_4082/*"ClassIconEx_ef_glow_{0}"*/, v85, v86, v87);
    byte_42E9BC1 = 1;
  }
  memset(&v273, 0, 32);
  v88 = sub_B5D694(ClassBoardBackground___c__DisplayClass37_0_TypeInfo);
  ClassBoardBackground___c__DisplayClass37_0___ctor((ClassBoardBackground___c__DisplayClass37_0_o *)v88, 0LL);
  if ( !v88 )
    goto LABEL_168;
  *(_DWORD *)(v88 + 16) = iconId;
  *(_QWORD *)(v88 + 24) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v88 + 24), (System_Int32_array **)this, v91, v92, v93, v94, v95, v96);
  iconTextures = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.iconTextures;
  v98 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_Texture__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v98,
    (Il2CppObject *)v88,
    Method_ClassBoardBackground___c__DisplayClass37_0__SetClassIcon_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_Texture__bool___ctor__);
  v99 = (System_Int32_array **)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                 iconTextures,
                                 (System_Func_TSource__bool__o *)v98,
                                 (const MethodInfo_1CAC850 *)Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
  *(_QWORD *)(v88 + 32) = v99;
  sub_B5D560((BattleServantConfConponent_o *)(v88 + 32), v99, v100, v101, v102, v103, v104, v105);
  v106 = *(UnityEngine_Object_o **)(v88 + 32);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(v106, 0LL, 0LL) )
    return;
  iconRenderers = (System_Collections_Generic_IEnumerable_T__o *)this->fields.iconRenderers;
  v108 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_Renderer__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v108,
    (Il2CppObject *)v88,
    Method_ClassBoardBackground___c__DisplayClass37_0__SetClassIcon_b__1__,
    (const MethodInfo_258B320 *)Method_System_Action_Renderer___ctor__);
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    iconRenderers,
    (System_Action_T__o *)v108,
    (const MethodInfo_1AD82D8 *)Method_BasicHelper_ForEach_Renderer___);
  v109 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__SimpleAnimation__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v109,
    (const MethodInfo_2F31510 *)Method_System_Collections_Generic_Dictionary_int__SimpleAnimation___ctor__);
  this->fields.exClassReleaseEffectAnimationDic = (struct System_Collections_Generic_Dictionary_int__SimpleAnimation__o *)v109;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.exClassReleaseEffectAnimationDic,
    (System_Int32_array **)v109,
    v110,
    v111,
    v112,
    v113,
    v114,
    v115);
  exIconSet = this->fields.exIconSet;
  if ( !exIconSet )
LABEL_168:
    sub_B5D69C(offRenderer, v90);
  if ( !*(_QWORD *)&exIconSet->max_length )
    return;
  if ( (baseId & 0xFFFFFFFE) != 8 )
  {
    v263 = this->fields.exIconSet;
    if ( v263 )
    {
      max_length = v263->max_length;
      if ( max_length < 1 )
        return;
      v265 = 0;
      while ( 1 )
      {
        if ( v265 >= max_length )
        {
          v267 = sub_B5D6C8(offRenderer);
          sub_B5D668(v267, 0LL);
        }
        v266 = v263->m_Items[v265];
        if ( !v266 )
          break;
        offRenderer = (UnityEngine_Component_o *)v266->fields.offRenderer;
        if ( !offRenderer )
          break;
        offRenderer = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(offRenderer, 0LL);
        if ( !offRenderer )
          break;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)offRenderer, 0, 0LL);
        offRenderer = (UnityEngine_Component_o *)v266->fields.onRenderer;
        if ( !offRenderer )
          break;
        offRenderer = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(offRenderer, 0LL);
        if ( !offRenderer )
          break;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)offRenderer, 0, 0LL);
        offRenderer = (UnityEngine_Component_o *)v266->fields.releaseEffect;
        if ( !offRenderer )
          break;
        offRenderer = (UnityEngine_Component_o *)UnityEngine_GameObject__get_gameObject(
                                                   (UnityEngine_GameObject_o *)offRenderer,
                                                   0LL);
        if ( !offRenderer )
          break;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)offRenderer, 0, 0LL);
        max_length = v263->max_length;
        if ( (int)++v265 >= max_length )
          return;
      }
    }
    goto LABEL_168;
  }
  offRenderer = (UnityEngine_Component_o *)ClassBoardBackground__GetIconIdList(
                                             (ClassBoardBackground_o *)offRenderer,
                                             baseId,
                                             v116);
  if ( !offRenderer )
    goto LABEL_168;
  System_Collections_Generic_Dictionary_int__bool___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v272,
    (System_Collections_Generic_Dictionary_int__bool__o *)offRenderer,
    (const MethodInfo_2F03AB0 *)Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
  v269 = this;
  *(_OWORD *)&v273.fields.dictionary = v272[0];
  v273.fields.current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v272[1];
LABEL_13:
  while ( System_Collections_Generic_Dictionary_Enumerator_int__bool___MoveNext(
            &v273,
            (const MethodInfo_289DCBC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__) )
  {
    key = v273.fields.current.fields.key;
    v119 = sub_B5D694(ClassBoardBackground___c__DisplayClass37_1_TypeInfo);
    ClassBoardBackground___c__DisplayClass37_1___ctor((ClassBoardBackground___c__DisplayClass37_1_o *)v119, 0LL);
    LODWORD(v272[0]) = (_DWORD)key;
    v120 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v272);
    v121 = (System_Int32_array **)System_String__Format((System_String_o *)StringLiteral_4084/*"ClassIconEx_on_{0}"*/, v120, 0LL);
    if ( !v119 )
      sub_B5D69C(v121, v121);
    *(_QWORD *)(v119 + 24) = v121;
    sub_B5D560((BattleServantConfConponent_o *)(v119 + 24), v121, v122, v123, v124, v125, v126, v127);
    v271 = (int)key;
    v128 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v271);
    v129 = (System_Int32_array **)System_String__Format((System_String_o *)StringLiteral_4083/*"ClassIconEx_off_{0}"*/, v128, 0LL);
    *(_QWORD *)(v119 + 16) = v129;
    sub_B5D560((BattleServantConfConponent_o *)(v119 + 16), v129, v130, v131, v132, v133, v134, v135);
    v270 = (int)key;
    v136 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v270);
    v137 = (System_Int32_array **)System_String__Format((System_String_o *)StringLiteral_4082/*"ClassIconEx_ef_glow_{0}"*/, v136, 0LL);
    *(_QWORD *)(v119 + 32) = v137;
    sub_B5D560((BattleServantConfConponent_o *)(v119 + 32), v137, v138, v139, v140, v141, v142, v143);
    v146 = this->fields.exIconSet;
    if ( !v146 )
LABEL_100:
      sub_B5D69C(v144, v145);
    v147 = 0;
    v148 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o **)(v119 + 40);
    v149 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o **)(v119 + 48);
    v150 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o **)(v119 + 56);
    v268 = (unsigned __int64)key & 0xFF00000000LL;
    while ( 1 )
    {
      v151 = v146->max_length;
      if ( (int)v147 >= (int)v151 )
        break;
      if ( v147 >= v151 )
      {
        v251 = sub_B5D6C8(v144);
        sub_B5D668(v251, 0LL);
      }
      v152 = v146->m_Items[v147];
      if ( !v152 )
        sub_B5D69C(v144, v145);
      v153 = *v148;
      textures = (System_Collections_Generic_IEnumerable_TSource__o *)v152->fields.textures;
      if ( !*v148 )
      {
        v153 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_Texture__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v153,
          (Il2CppObject *)v119,
          Method_ClassBoardBackground___c__DisplayClass37_1__SetClassIcon_b__2__,
          (const MethodInfo_2C2ECD0 *)Method_System_Func_Texture__bool___ctor__);
        *v148 = v153;
        sub_B5D560(
          (BattleServantConfConponent_o *)(v119 + 40),
          (System_Int32_array **)v153,
          v155,
          v156,
          v157,
          v158,
          v159,
          v160);
      }
      v161 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
               textures,
               (System_Func_TSource__bool__o *)v153,
               (const MethodInfo_1CAC850 *)Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
      v162 = *v149;
      v163 = (UnityEngine_Object_o *)v161;
      if ( !*v149 )
      {
        v162 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_Texture__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v162,
          (Il2CppObject *)v119,
          Method_ClassBoardBackground___c__DisplayClass37_1__SetClassIcon_b__3__,
          (const MethodInfo_2C2ECD0 *)Method_System_Func_Texture__bool___ctor__);
        *v149 = v162;
        sub_B5D560(
          (BattleServantConfConponent_o *)(v119 + 48),
          (System_Int32_array **)v162,
          v164,
          v165,
          v166,
          v167,
          v168,
          v169);
      }
      v170 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
               textures,
               (System_Func_TSource__bool__o *)v162,
               (const MethodInfo_1CAC850 *)Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
      v171 = *v150;
      v172 = (UnityEngine_Object_o *)v170;
      if ( !*v150 )
      {
        v171 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_Texture__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v171,
          (Il2CppObject *)v119,
          Method_ClassBoardBackground___c__DisplayClass37_1__SetClassIcon_b__4__,
          (const MethodInfo_2C2ECD0 *)Method_System_Func_Texture__bool___ctor__);
        *v150 = v171;
        sub_B5D560(
          (BattleServantConfConponent_o *)(v119 + 56),
          (System_Int32_array **)v171,
          v173,
          v174,
          v175,
          v176,
          v177,
          v178);
      }
      v179 = (UnityEngine_Texture_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                        textures,
                                        (System_Func_TSource__bool__o *)v171,
                                        (const MethodInfo_1CAC850 *)Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
      this = v269;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v144 = UnityEngine_Object__op_Inequality(v172, 0LL, 0LL);
      if ( v144 )
      {
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v144 = UnityEngine_Object__op_Inequality(v163, 0LL, 0LL);
        if ( v144 )
        {
          v180 = v269->fields.exIconSet;
          if ( !v180 )
            sub_B5D69C(v144, v145);
          if ( v147 >= v180->max_length )
          {
            v253 = sub_B5D6C8(v144);
            sub_B5D668(v253, 0LL);
          }
          v181 = v180->m_Items[v147];
          if ( !v181 )
            sub_B5D69C(v144, v145);
          v182 = v181->fields.offRenderer;
          if ( !v182 )
            sub_B5D69C(0LL, v145);
          material = UnityEngine_Renderer__get_material(v182, 0LL);
          if ( !material )
            sub_B5D69C(0LL, v184);
          UnityEngine_Material__SetTexture(
            material,
            v269->fields.iconMaterialPropertyName,
            (UnityEngine_Texture_o *)v163,
            0LL);
          v187 = v269->fields.exIconSet;
          if ( !v187 )
            sub_B5D69C(v185, v186);
          if ( v147 >= v187->max_length )
          {
            v256 = sub_B5D6C8(v185);
            sub_B5D668(v256, 0LL);
          }
          v188 = v187->m_Items[v147];
          if ( !v188 )
            sub_B5D69C(v185, v186);
          effectRenderer = v188->fields.effectRenderer;
          if ( !effectRenderer )
            sub_B5D69C(0LL, v186);
          v190 = UnityEngine_Renderer__get_material(effectRenderer, 0LL);
          if ( !v190 )
            sub_B5D69C(0LL, v191);
          UnityEngine_Material__SetTexture(
            v190,
            v269->fields.iconMaterialPropertyName,
            (UnityEngine_Texture_o *)v163,
            0LL);
          v194 = v269->fields.exIconSet;
          if ( !v194 )
            sub_B5D69C(v192, v193);
          if ( v147 >= v194->max_length )
          {
            v258 = sub_B5D6C8(v192);
            sub_B5D668(v258, 0LL);
          }
          v195 = v194->m_Items[v147];
          if ( !v195 )
            sub_B5D69C(v192, v193);
          onRenderer = v195->fields.onRenderer;
          if ( !onRenderer )
            sub_B5D69C(0LL, v193);
          v197 = UnityEngine_Renderer__get_material(onRenderer, 0LL);
          if ( !v197 )
            sub_B5D69C(0LL, v198);
          UnityEngine_Material__SetTexture(
            v197,
            v269->fields.iconMaterialPropertyName,
            (UnityEngine_Texture_o *)v172,
            0LL);
          v201 = v269->fields.exIconSet;
          if ( !v201 )
            sub_B5D69C(v199, v200);
          if ( v147 >= v201->max_length )
          {
            v252 = sub_B5D6C8(v199);
            sub_B5D668(v252, 0LL);
          }
          v202 = v201->m_Items[v147];
          if ( !v202 )
            sub_B5D69C(v199, v200);
          effectGlowRenderer = v202->fields.effectGlowRenderer;
          if ( !effectGlowRenderer )
            sub_B5D69C(0LL, v200);
          v204 = UnityEngine_Renderer__get_material(effectGlowRenderer, 0LL);
          if ( !v204 )
            sub_B5D69C(0LL, v205);
          UnityEngine_Material__SetTexture(v204, v269->fields.iconMaterialPropertyName, v179, 0LL);
          v208 = v269->fields.exIconSet;
          if ( !v208 )
            sub_B5D69C(v206, v207);
          if ( v147 >= v208->max_length )
          {
            v255 = sub_B5D6C8(v206);
            sub_B5D668(v255, 0LL);
          }
          v209 = v208->m_Items[v147];
          if ( !v209 )
            sub_B5D69C(v206, v207);
          v210 = (UnityEngine_Component_o *)v209->fields.offRenderer;
          if ( !v210 )
            sub_B5D69C(0LL, v207);
          gameObject = UnityEngine_Component__get_gameObject(v210, 0LL);
          if ( !gameObject )
            sub_B5D69C(0LL, v212);
          UnityEngine_GameObject__SetActive(gameObject, v268 == 0, 0LL);
          v215 = v269->fields.exIconSet;
          if ( !v215 )
            sub_B5D69C(v213, v214);
          if ( v147 >= v215->max_length )
          {
            v254 = sub_B5D6C8(v213);
            sub_B5D668(v254, 0LL);
          }
          v216 = v215->m_Items[v147];
          if ( !v216 )
            sub_B5D69C(v213, v214);
          v217 = (UnityEngine_Component_o *)v216->fields.onRenderer;
          if ( !v217 )
            sub_B5D69C(0LL, v214);
          v218 = UnityEngine_Component__get_gameObject(v217, 0LL);
          if ( !v218 )
            sub_B5D69C(0LL, v219);
          UnityEngine_GameObject__SetActive(v218, v268 != 0, 0LL);
          v222 = v269->fields.exIconSet;
          if ( !v222 )
            sub_B5D69C(v220, v221);
          if ( v147 >= v222->max_length )
          {
            v257 = sub_B5D6C8(v220);
            sub_B5D668(v257, 0LL);
          }
          v223 = v222->m_Items[v147];
          if ( !v223 )
            sub_B5D69C(v220, v221);
          releaseEffect = v223->fields.releaseEffect;
          if ( !releaseEffect )
            sub_B5D69C(0LL, v221);
          v225 = UnityEngine_GameObject__get_gameObject(releaseEffect, 0LL);
          if ( !v225 )
            sub_B5D69C(0LL, v226);
          UnityEngine_GameObject__SetActive(v225, 0, 0LL);
          if ( v268 )
          {
            if ( (BYTE3(ClassBoardUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !ClassBoardUtility_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
            }
            IsPlayed = ClassBoardUtility__IsPlayedExClassReleaseEffect((int32_t)key, 0LL);
            if ( !IsPlayed )
            {
              v229 = v269->fields.exIconSet;
              if ( !v229 )
                sub_B5D69C(IsPlayed, v228);
              if ( v147 >= v229->max_length )
              {
                v261 = sub_B5D6C8(IsPlayed);
                sub_B5D668(v261, 0LL);
              }
              v230 = v229->m_Items[v147];
              if ( !v230 )
                sub_B5D69C(IsPlayed, v228);
              animation = (UnityEngine_Object_o *)v230->fields.animation;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              v232 = UnityEngine_Object__op_Inequality(animation, 0LL, 0LL);
              if ( v232 )
              {
                v234 = v269->fields.exIconSet;
                if ( !v234 )
                  sub_B5D69C(v232, v233);
                if ( v147 >= v234->max_length )
                {
                  v259 = sub_B5D6C8(v232);
                  sub_B5D668(v259, 0LL);
                }
                v235 = v234->m_Items[v147];
                if ( !v235 )
                  sub_B5D69C(v232, v233);
                v236 = (UnityEngine_Component_o *)v235->fields.offRenderer;
                if ( !v236 )
                  sub_B5D69C(0LL, v233);
                v237 = UnityEngine_Component__get_gameObject(v236, 0LL);
                if ( !v237 )
                  sub_B5D69C(0LL, v238);
                UnityEngine_GameObject__SetActive(v237, 1, 0LL);
                v241 = v269->fields.exIconSet;
                if ( !v241 )
                  sub_B5D69C(v239, v240);
                if ( v147 >= v241->max_length )
                {
                  v262 = sub_B5D6C8(v239);
                  sub_B5D668(v262, 0LL);
                }
                v242 = v241->m_Items[v147];
                if ( !v242 )
                  sub_B5D69C(v239, v240);
                v243 = (UnityEngine_Component_o *)v242->fields.onRenderer;
                if ( !v243 )
                  sub_B5D69C(0LL, v240);
                v244 = UnityEngine_Component__get_gameObject(v243, 0LL);
                if ( !v244 )
                  sub_B5D69C(0LL, v245);
                UnityEngine_GameObject__SetActive(v244, 0, 0LL);
                v248 = v269->fields.exIconSet;
                if ( !v248 )
                  sub_B5D69C(v246, v247);
                if ( v147 >= v248->max_length )
                {
                  v260 = sub_B5D6C8(v246);
                  sub_B5D668(v260, 0LL);
                }
                v249 = v248->m_Items[v147];
                if ( !v249 )
                  sub_B5D69C(v246, v247);
                exClassReleaseEffectAnimationDic = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v269->fields.exClassReleaseEffectAnimationDic;
                if ( !exClassReleaseEffectAnimationDic )
                  sub_B5D69C(0LL, key);
                System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
                  exClassReleaseEffectAnimationDic,
                  (int32_t)key,
                  (WarBoardEvalValueSquare_EvalValueSquare_o *)v249->fields.animation,
                  (const MethodInfo_2F320C4 *)Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__Add__);
              }
            }
          }
          goto LABEL_13;
        }
      }
      v146 = v269->fields.exIconSet;
      ++v147;
      if ( !v146 )
        goto LABEL_100;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__bool___Dispose(
    &v273,
    (const MethodInfo_289DE0C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
}


void __fastcall ClassBoardBackground__SetShowBoardCallback(
        ClassBoardBackground_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.showBoardCallback = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.showBoardCallback,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  __int64 v9; // x0
  __int64 v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_42E9BC8 & 1) == 0 )
  {
    sub_B5D5C4(&ClassBoardBackground__WaitAnimationFinished_d__45_TypeInfo, (_DWORD)anim, (_DWORD)name, endCallback);
    byte_42E9BC8 = 1;
  }
  v8 = sub_B5D694(ClassBoardBackground__WaitAnimationFinished_d__45_TypeInfo);
  ClassBoardBackground__WaitAnimationFinished_d__45___ctor(
    (ClassBoardBackground__WaitAnimationFinished_d__45_o *)v8,
    0,
    0LL);
  if ( !v8 )
    sub_B5D69C(v9, v10);
  *(_QWORD *)(v8 + 32) = anim;
  sub_B5D560((BattleServantConfConponent_o *)(v8 + 32), (System_Int32_array **)anim, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)(v8 + 40) = name;
  sub_B5D560((BattleServantConfConponent_o *)(v8 + 40), (System_Int32_array **)name, v17, v18, v19, v20, v21, v22);
  *(_QWORD *)(v8 + 48) = endCallback;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v8 + 48),
    (System_Int32_array **)endCallback,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  return (System_Collections_IEnumerator_o *)v8;
}


void __fastcall ClassBoardBackground___PlayStartExClassReleaseEffectPlayer_b__43_0(
        ClassBoardBackground_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__o *v11; // x0
  BattleServantConfConponent_o *p_exClassReleaseEffectAnimationDic; // x19
  struct System_Collections_Generic_Dictionary_int__SimpleAnimation__o *exClassReleaseEffectAnimationDic; // t1
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  System_Int32_array *v15; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_42E9BCB & 1) == 0 )
  {
    sub_B5D5C4(&ClassBoardUtility_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__get_Keys__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_int___, v8, v9, v10);
    byte_42E9BCB = 1;
  }
  exClassReleaseEffectAnimationDic = this->fields.exClassReleaseEffectAnimationDic;
  p_exClassReleaseEffectAnimationDic = (BattleServantConfConponent_o *)&this->fields.exClassReleaseEffectAnimationDic;
  v11 = (System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__o *)exClassReleaseEffectAnimationDic;
  if ( !exClassReleaseEffectAnimationDic )
    sub_B5D69C(0LL, method);
  Keys = System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData___get_Keys(
           v11,
           (const MethodInfo_2F31CD0 *)Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__get_Keys__);
  v15 = System_Linq_Enumerable__ToArray_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
          (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( (BYTE3(ClassBoardUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
  }
  ClassBoardUtility__SavePlayedExClassReleaseEffect(v15, 0LL);
  p_exClassReleaseEffectAnimationDic->klass = 0LL;
  sub_B5D560(p_exClassReleaseEffectAnimationDic, 0LL, v16, v17, v18, v19, v20, v21);
}


void __fastcall ClassBoardBackground___PlayStartMainEffectPlayer_b__41_0(
        ClassBoardBackground_o *this,
        const MethodInfo *method)
{
  ClassBoardEffectPlayer_o *startMainEffectPlayer; // x0

  startMainEffectPlayer = this->fields.startMainEffectPlayer;
  if ( !startMainEffectPlayer )
    sub_B5D69C(0LL, method);
  ClassBoardEffectPlayer__End(startMainEffectPlayer, 0LL);
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


void __fastcall ClassBoardBackground__PlayExClassReleaseEffectPlayer_d__42___ctor(
        ClassBoardBackground__PlayExClassReleaseEffectPlayer_d__42_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall ClassBoardBackground__PlayExClassReleaseEffectPlayer_d__42__MoveNext(
        ClassBoardBackground__PlayExClassReleaseEffectPlayer_d__42_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t _1__state; // w8
  struct ClassBoardBackground_o *_4__this; // x0
  float exClassReleaseEffectStartSec; // s8
  UnityEngine_WaitForSeconds_o *v8; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0

  if ( (byte_42E5E68 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_WaitForSeconds_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5E68 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_10;
    ClassBoardBackground__PlayStartExClassReleaseEffectPlayer(_4__this, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    if ( _4__this )
    {
      exClassReleaseEffectStartSec = _4__this->fields.exClassReleaseEffectStartSec;
      v8 = (UnityEngine_WaitForSeconds_o *)sub_B5D694(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v8, exClassReleaseEffectStartSec, 0LL);
      this->fields.__2__current = (Il2CppObject *)v8;
      p__2__current = &this->fields.__2__current;
      sub_B5D560(p__2__current);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
LABEL_10:
    sub_B5D69C(_4__this, method);
  }
  return 0;
}


Il2CppObject *__fastcall ClassBoardBackground__PlayExClassReleaseEffectPlayer_d__42__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ClassBoardBackground__PlayExClassReleaseEffectPlayer_d__42_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn ClassBoardBackground__PlayExClassReleaseEffectPlayer_d__42__System_Collections_IEnumerator_Reset(
        ClassBoardBackground__PlayExClassReleaseEffectPlayer_d__42_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_ClassBoardBackground__PlayExClassReleaseEffectPlayer_d__42_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
}


Il2CppObject *__fastcall ClassBoardBackground__PlayExClassReleaseEffectPlayer_d__42__System_Collections_IEnumerator_get_Current(
        ClassBoardBackground__PlayExClassReleaseEffectPlayer_d__42_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall ClassBoardBackground__PlayExClassReleaseEffectPlayer_d__42__System_IDisposable_Dispose(
        ClassBoardBackground__PlayExClassReleaseEffectPlayer_d__42_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall ClassBoardBackground__WaitAnimationFinished_d__45___ctor(
        ClassBoardBackground__WaitAnimationFinished_d__45_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall ClassBoardBackground__WaitAnimationFinished_d__45__MoveNext(
        ClassBoardBackground__WaitAnimationFinished_d__45_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  SimpleAnimation_o *anim; // x0
  SimpleAnimation_State_o *State; // x0
  __int64 v7; // x3
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v9; // x20
  unsigned __int64 v10; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  Il2CppObject **p__2__current; // x19
  bool result; // w0

  if ( (byte_42E5E69 & 1) == 0 )
  {
    sub_B5D5C4(&SimpleAnimation_State_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5E69 = 1;
  }
  if ( this->fields.__1__state <= 1u )
  {
    anim = this->fields.anim;
    this->fields.__1__state = -1;
    if ( !anim )
      sub_B5D69C(0LL, method);
    State = SimpleAnimation__GetState(anim, this->fields.name, 0LL);
    if ( State )
    {
      klass = State->klass;
      v9 = State;
      if ( *(_WORD *)&State->klass->_2.bitflags1 )
      {
        v10 = 0LL;
        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
        {
          ++v10;
          p_offset += 2;
          if ( v10 >= *(unsigned __int16 *)&State->klass->_2.bitflags1 )
            goto LABEL_10;
        }
        p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 5].method;
      }
      else
      {
LABEL_10:
        p_method = sub_AF54C0(State, SimpleAnimation_State_TypeInfo, 5LL, v7);
      }
      if ( (*(float (__fastcall **)(SimpleAnimation_State_o *, _QWORD))p_method)(v9, *(_QWORD *)(p_method + 8)) < 1.0 )
      {
        this->fields.__2__current = 0LL;
        p__2__current = &this->fields.__2__current;
        sub_B5D560(p__2__current);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return result;
      }
    }
    ActionExtensions__Call(this->fields.endCallback, 0LL);
  }
  return 0;
}


Il2CppObject *__fastcall ClassBoardBackground__WaitAnimationFinished_d__45__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ClassBoardBackground__WaitAnimationFinished_d__45_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn ClassBoardBackground__WaitAnimationFinished_d__45__System_Collections_IEnumerator_Reset(
        ClassBoardBackground__WaitAnimationFinished_d__45_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_ClassBoardBackground__WaitAnimationFinished_d__45_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
}


Il2CppObject *__fastcall ClassBoardBackground__WaitAnimationFinished_d__45__System_Collections_IEnumerator_get_Current(
        ClassBoardBackground__WaitAnimationFinished_d__45_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall ClassBoardBackground__WaitAnimationFinished_d__45__System_IDisposable_Dispose(
        ClassBoardBackground__WaitAnimationFinished_d__45_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall ClassBoardBackground___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct ClassBoardBackground___c_StaticFields *static_fields; // x0

  if ( (byte_42E5E65 & 1) == 0 )
  {
    sub_B5D5C4(&ClassBoardBackground___c_TypeInfo, v1, v2, v3);
    byte_42E5E65 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(ClassBoardBackground___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = ClassBoardBackground___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ClassBoardBackground___c_o *)v4;
  sub_B5D560(static_fields);
}


void __fastcall ClassBoardBackground___c___ctor(ClassBoardBackground___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ClassBoardBackground___c___GetIconIdList_b__38_0(
        ClassBoardBackground___c_o *this,
        ClassBoardClassEntity_o *a,
        ClassBoardClassEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B5D69C(this, a);
  return a->fields.classId - b->fields.classId;
}


void __fastcall ClassBoardBackground___c___OnDestroy_b__40_0(
        ClassBoardBackground___c_o *this,
        UnityEngine_Renderer_o *x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *material; // x19

  if ( (byte_42E5E66 & 1) == 0 )
  {
    this = (ClassBoardBackground___c_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)x, (_DWORD)method, v3);
    byte_42E5E66 = 1;
  }
  if ( !x )
    sub_B5D69C(this, x);
  material = (UnityEngine_Object_o *)UnityEngine_Renderer__get_material(x, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35620236(material, 0LL);
}


void __fastcall ClassBoardBackground___c___PlayStartExClassReleaseEffectPlayer_b__43_1(
        ClassBoardBackground___c_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall ClassBoardBackground___c__DisplayClass37_0___ctor(
        ClassBoardBackground___c__DisplayClass37_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ClassBoardBackground___c__DisplayClass37_0___SetClassIcon_b__0(
        ClassBoardBackground___c__DisplayClass37_0_o *this,
        UnityEngine_Texture_o *x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ClassBoardBackground___c__DisplayClass37_0_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  System_String_o *name; // x20
  Il2CppObject *v10; // x0
  System_String_o *v11; // x0
  int32_t iconId; // [xsp+Ch] [xbp-14h] BYREF

  v5 = this;
  if ( (byte_42E5E67 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)x, (_DWORD)method, v3);
    this = (ClassBoardBackground___c__DisplayClass37_0_o *)sub_B5D5C4(&StringLiteral_4086/*"ClassIcon{0}"*/, v6, v7, v8);
    byte_42E5E67 = 1;
  }
  if ( !x )
    sub_B5D69C(this, x);
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)x, 0LL);
  iconId = v5->fields.iconId;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId);
  v11 = System_String__Format((System_String_o *)StringLiteral_4086/*"ClassIcon{0}"*/, v10, 0LL);
  return System_String__op_Equality(name, v11, 0LL);
}


void __fastcall ClassBoardBackground___c__DisplayClass37_0___SetClassIcon_b__1(
        ClassBoardBackground___c__DisplayClass37_0_o *this,
        UnityEngine_Renderer_o *x,
        const MethodInfo *method)
{
  ClassBoardBackground___c__DisplayClass37_0_o *v3; // x19
  struct ClassBoardBackground_o *_4__this; // x8

  if ( !x
    || (v3 = this,
        this = (ClassBoardBackground___c__DisplayClass37_0_o *)UnityEngine_Renderer__get_material(x, 0LL),
        (_4__this = v3->fields.__4__this) == 0LL)
    || !this )
  {
    sub_B5D69C(this, x);
  }
  UnityEngine_Material__SetTexture(
    (UnityEngine_Material_o *)this,
    _4__this->fields.iconMaterialPropertyName,
    v3->fields.iconTex,
    0LL);
}


void __fastcall ClassBoardBackground___c__DisplayClass37_1___ctor(
        ClassBoardBackground___c__DisplayClass37_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ClassBoardBackground___c__DisplayClass37_1___SetClassIcon_b__2(
        ClassBoardBackground___c__DisplayClass37_1_o *this,
        UnityEngine_Texture_o *x,
        const MethodInfo *method)
{
  System_String_o *name; // x0

  if ( !x )
    sub_B5D69C(this, 0LL);
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)x, 0LL);
  return System_String__op_Equality(name, this->fields.offIconName, 0LL);
}


bool __fastcall ClassBoardBackground___c__DisplayClass37_1___SetClassIcon_b__3(
        ClassBoardBackground___c__DisplayClass37_1_o *this,
        UnityEngine_Texture_o *x,
        const MethodInfo *method)
{
  System_String_o *name; // x0

  if ( !x )
    sub_B5D69C(this, 0LL);
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)x, 0LL);
  return System_String__op_Equality(name, this->fields.onIconName, 0LL);
}


bool __fastcall ClassBoardBackground___c__DisplayClass37_1___SetClassIcon_b__4(
        ClassBoardBackground___c__DisplayClass37_1_o *this,
        UnityEngine_Texture_o *x,
        const MethodInfo *method)
{
  System_String_o *name; // x0

  if ( !x )
    sub_B5D69C(this, 0LL);
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)x, 0LL);
  return System_String__op_Equality(name, this->fields.glowIconName, 0LL);
}