void __fastcall ClassBoardBackground___ctor(ClassBoardBackground_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1

  if ( (byte_42B37E8 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_16120/*"_MainTex"*/);
    byte_42B37E8 = 1;
  }
  v9 = (System_Int32_array **)StringLiteral_16120/*"_MainTex"*/;
  this->fields.iconMaterialPropertyName = (struct System_String_o *)StringLiteral_16120/*"_MainTex"*/;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.iconMaterialPropertyName, v9, v2, v3, v4, v5, v6, v7);
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
    sub_B52A5C(0LL, value);
  UnityEngine_GameObject__SetActive(earthAccessoriesObject, value, 0LL);
}


void __fastcall ClassBoardBackground__Awake(ClassBoardBackground_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x0
  __int64 v4; // x1
  System_Int32_array **name; // x20
  __int64 v6; // x21
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  struct ClassBoardEffectPlayer_o *startMainEffectPlayer; // x20
  System_Action_o *v20; // x21
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  if ( (byte_42B37DC & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_ClassBoardBackground_PlayStartMainEffectPlayer__);
    sub_B52984(&ClassBoardEffectPlayer_TypeInfo);
    byte_42B37DC = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_6;
  name = (System_Int32_array **)UnityEngine_Object__get_name(gameObject, 0LL);
  v6 = sub_B52A54(ClassBoardEffectPlayer_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_QWORD *)(v6 + 16) = name;
  sub_B52920((BattleServantConfConponent_o *)(v6 + 16), name, v7, v8, v9, v10, v11, v12);
  this->fields.startMainEffectPlayer = (struct ClassBoardEffectPlayer_o *)v6;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.startMainEffectPlayer,
    (System_Int32_array **)v6,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  startMainEffectPlayer = this->fields.startMainEffectPlayer;
  v20 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v20, (Il2CppObject *)this, Method_ClassBoardBackground_PlayStartMainEffectPlayer__, 0LL);
  if ( !startMainEffectPlayer )
LABEL_6:
    sub_B52A5C(gameObject, v4);
  startMainEffectPlayer->fields.playCallback = v20;
  sub_B52920(
    (BattleServantConfConponent_o *)&startMainEffectPlayer->fields.playCallback,
    (System_Int32_array **)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
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

  if ( (byte_42B37E7 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B37E7 = 1;
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
        || (v7 = this->fields.boardParentAnimation,
            name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0LL),
            !v7) )
      {
        sub_B52A5C(name, v5);
      }
      SimpleAnimation__Play_16625408(v7, (System_String_o *)name, 0LL);
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
  sub_B52920(p_showBoardCallback, 0LL, v3, v4, v5, v6, v7, v8);
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
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_42B37DD & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B37DD = 1;
  }
  classBoardViewCamera = this->fields.classBoardViewCamera;
  if ( !classBoardViewCamera )
    goto LABEL_11;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)classBoardViewCamera, 0LL);
  v7 = (UnityEngine_Object_o *)this->fields.classBoardViewCamera;
  v8 = gameObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
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
LABEL_11:
    sub_B52A5C(classBoardViewCamera, camera);
  }
  UnityEngine_GameObject__SetActive(v9, (unsigned __int8)classBoardViewCamera & 1, 0LL);
  this->fields.currentCamera = camera;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.currentCamera,
    (System_Int32_array **)camera,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
}


System_Collections_Generic_Dictionary_int__bool__o *__fastcall ClassBoardBackground__GetIconIdList(
        ClassBoardBackground_o *this,
        int32_t baseId,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__bool__o *v4; // x19
  void *Master_WarQuestSelectionMaster; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3
  System_Collections_Generic_List_ClassBoardClassEntity__o *v8; // x20
  struct ClassBoardBackground___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__38_0; // x21
  Il2CppObject *v11; // x22
  struct ClassBoardBackground___c_StaticFields *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  DataMasterBase_WarMaster__WarEntity__int__o *v19; // x20
  _BOOL8 v20; // x0
  __int64 v21; // x1
  Il2CppObject *current; // x21
  _BOOL8 v23; // x0
  const MethodInfo *v24; // x1
  int32_t longName_high; // w22
  _BOOL8 IsOpen; // x0
  __int64 v27; // x1
  System_Collections_Generic_List_Enumerator_T__o v29; // [xsp+0h] [xbp-80h] BYREF
  WarEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v31; // [xsp+20h] [xbp-60h] BYREF
  System_Collections_Generic_List_ClassBoardClassEntity__o *entitys; // [xsp+48h] [xbp-38h] BYREF

  if ( (byte_42B37E0 & 1) == 0 )
  {
    sub_B52984(&Method_System_Comparison_ClassBoardClassEntity___ctor__);
    sub_B52984(&System_Comparison_ClassBoardClassEntity__TypeInfo);
    sub_B52984(&Method_DataManager_GetMaster_ClassBoardClassMaster___);
    sub_B52984(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__bool__Add__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
    sub_B52984(&System_Collections_Generic_Dictionary_int__bool__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_ClassBoardClassEntity__Sort__);
    sub_B52984(&Method_ClassBoardBackground___c__GetIconIdList_b__38_0__);
    sub_B52984(&ClassBoardBackground___c_TypeInfo);
    byte_42B37E0 = 1;
  }
  entitys = 0LL;
  entity = 0LL;
  memset(&v31, 0, sizeof(v31));
  v4 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_B52A54(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v4,
    (const MethodInfo_2EF75B8 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_35;
  if ( !ClassBoardClassMaster__TryGetEntityList(
          (ClassBoardClassMaster_o *)Master_WarQuestSelectionMaster,
          &entitys,
          baseId,
          v7) )
    return v4;
  v8 = entitys;
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
    v11 = (Il2CppObject *)static_fields->__9;
    _9__38_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_ClassBoardClassEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__38_0,
      v11,
      Method_ClassBoardBackground___c__GetIconIdList_b__38_0__,
      (const MethodInfo_2483370 *)Method_System_Comparison_ClassBoardClassEntity___ctor__);
    v12 = ClassBoardBackground___c_TypeInfo->static_fields;
    v12->__9__38_0 = (struct System_Comparison_ClassBoardClassEntity__o *)_9__38_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v12->__9__38_0,
      (System_Int32_array **)_9__38_0,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  if ( !v8 )
    goto LABEL_35;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v8,
    (System_Comparison_T__o *)_9__38_0,
    (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_ClassBoardClassEntity__Sort__);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ServantClassMaster___);
  if ( !entitys )
LABEL_35:
    sub_B52A5C(Master_WarQuestSelectionMaster, v6);
  v19 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v29,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)entitys,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__);
  v31 = v29;
  while ( 1 )
  {
    v20 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v31,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__);
    if ( !v20 )
      break;
    current = v31.fields.current;
    if ( !v31.fields.current )
      sub_B52A5C(v20, v21);
    if ( !v19 )
      sub_B52A5C(v20, v21);
    v23 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
            v19,
            &entity,
            HIDWORD(v31.fields.current[1].klass),
            (const MethodInfo_23E2334 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    if ( v23 )
    {
      if ( !entity )
        sub_B52A5C(v23, v24);
      longName_high = HIDWORD(entity->fields.longName);
      IsOpen = ClassBoardClassEntity__IsOpen((ClassBoardClassEntity_o *)current, v24);
      if ( !v4 )
        sub_B52A5C(IsOpen, v27);
      System_Collections_Generic_Dictionary_int__bool___Add(
        v4,
        longName_high,
        IsOpen,
        (const MethodInfo_2EF8168 *)Method_System_Collections_Generic_Dictionary_int__bool__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v31,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__);
  return v4;
}


UnityEngine_RenderTexture_o *__fastcall ClassBoardBackground__GetRenderTexture(
        ClassBoardBackground_o *this,
        const MethodInfo *method)
{
  UnityEngine_Camera_o *currentCamera; // x0

  currentCamera = this->fields.currentCamera;
  if ( !currentCamera )
    sub_B52A5C(0LL, method);
  return UnityEngine_Camera__get_targetTexture(currentCamera, 0LL);
}


void __fastcall ClassBoardBackground__OnDestroy(ClassBoardBackground_o *this, const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_T__o *iconRenderers; // x19
  ClassBoardBackground___c_c *v4; // x0
  struct ClassBoardBackground___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__40_0; // x20
  Il2CppObject *v7; // x21
  struct ClassBoardBackground___c_StaticFields *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42B37E2 & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_Renderer___ctor__);
    sub_B52984(&System_Action_Renderer__TypeInfo);
    sub_B52984(&Method_BasicHelper_ForEach_Renderer___);
    sub_B52984(&Method_ClassBoardBackground___c__OnDestroy_b__40_0__);
    sub_B52984(&ClassBoardBackground___c_TypeInfo);
    byte_42B37E2 = 1;
  }
  iconRenderers = (System_Collections_Generic_IEnumerable_T__o *)this->fields.iconRenderers;
  v4 = ClassBoardBackground___c_TypeInfo;
  if ( (BYTE3(ClassBoardBackground___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardBackground___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardBackground___c_TypeInfo);
    v4 = ClassBoardBackground___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__40_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__40_0;
  if ( !_9__40_0 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = ClassBoardBackground___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__40_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_Renderer__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__40_0,
      v7,
      Method_ClassBoardBackground___c__OnDestroy_b__40_0__,
      (const MethodInfo_2627780 *)Method_System_Action_Renderer___ctor__);
    v8 = ClassBoardBackground___c_TypeInfo->static_fields;
    v8->__9__40_0 = (struct System_Action_Renderer__o *)_9__40_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v8->__9__40_0,
      (System_Int32_array **)_9__40_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    iconRenderers,
    (System_Action_T__o *)_9__40_0,
    (const MethodInfo_1A43210 *)Method_BasicHelper_ForEach_Renderer___);
}


void __fastcall ClassBoardBackground__PlayBoardParentBeforeAnimation(
        ClassBoardBackground_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *boardParentAnimation; // x20
  UnityEngine_Object_o *boardParentBeforeAnimationClip; // x20
  __int64 v5; // x1
  SimpleAnimation_o *v6; // x0

  if ( (byte_42B37E1 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B37E1 = 1;
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
      v6 = this->fields.boardParentAnimation;
      if ( !v6
        || (SimpleAnimation__set_clip(v6, this->fields.boardParentBeforeAnimationClip, 0LL),
            (v6 = this->fields.boardParentAnimation) == 0LL) )
      {
        sub_B52A5C(v6, v5);
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
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42B37E4 & 1) == 0 )
  {
    sub_B52984(&ClassBoardBackground__PlayExClassReleaseEffectPlayer_d__42_TypeInfo);
    byte_42B37E4 = 1;
  }
  v3 = sub_B52A54(ClassBoardBackground__PlayExClassReleaseEffectPlayer_d__42_TypeInfo);
  ClassBoardBackground__PlayExClassReleaseEffectPlayer_d__42___ctor(
    (ClassBoardBackground__PlayExClassReleaseEffectPlayer_d__42_o *)v3,
    0,
    0LL);
  if ( !v3 )
    sub_B52A5C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B52920((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
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
    sub_B52A5C(this, 0LL);
  SimpleAnimation__Rewind(anim, 0LL);
  v9 = SimpleAnimation__Play_16625408(anim, name, 0LL);
  v11 = ClassBoardBackground__WaitAnimationFinished((ClassBoardBackground_o *)v9, anim, name, endCallback, v10);
  UnityEngine_MonoBehaviour__StartCoroutine_35611808((UnityEngine_MonoBehaviour_o *)this, v11, 0LL);
}


void __fastcall ClassBoardBackground__PlayStartExClassReleaseEffectPlayer(
        ClassBoardBackground_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_int__SimpleAnimation__o *exClassReleaseEffectAnimationDic; // x0
  char v5; // w21
  const MethodInfo *v6; // x4
  Il2CppObject *value; // x20
  System_Action_o *v8; // x21
  const MethodInfo *v9; // x4
  ClassBoardBackground___c_c *v10; // x0
  struct ClassBoardBackground___c_StaticFields *static_fields; // x8
  System_String_o *v12; // x21
  System_Action_o *_9__43_1; // x22
  Il2CppObject *v14; // x23
  struct ClassBoardBackground___c_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v22; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v23; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_42B37E5 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_ClassBoardBackground__PlayStartExClassReleaseEffectPlayer_b__43_0__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_int__SimpleAnimation__get_Key__);
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_int__SimpleAnimation__get_Value__);
    sub_B52984(&Method_ClassBoardBackground___c__PlayStartExClassReleaseEffectPlayer_b__43_1__);
    sub_B52984(&ClassBoardBackground___c_TypeInfo);
    sub_B52984(&StringLiteral_10664/*"Particle_CrassIcon_Ex_Released"*/);
    byte_42B37E5 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  if ( !BasicHelper__IsNullOrEmpty(
          (System_Collections_ICollection_o *)this->fields.exClassReleaseEffectAnimationDic,
          0LL) )
  {
    exClassReleaseEffectAnimationDic = this->fields.exClassReleaseEffectAnimationDic;
    if ( !exClassReleaseEffectAnimationDic )
      sub_B52A5C(0LL, v3);
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
      &v22,
      (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)exClassReleaseEffectAnimationDic,
      (const MethodInfo_2F282EC *)Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__GetEnumerator__);
    v5 = 1;
    v23 = v22;
    while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
              &v23,
              (const MethodInfo_28895A0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__MoveNext__) )
    {
      value = v23.fields.current.fields.value;
      if ( (v5 & 1) != 0 )
      {
        v8 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
        System_Action___ctor(
          v8,
          (Il2CppObject *)this,
          Method_ClassBoardBackground__PlayStartExClassReleaseEffectPlayer_b__43_0__,
          0LL);
        ClassBoardBackground__PlaySimpleAnimation(
          this,
          (SimpleAnimation_o *)value,
          (System_String_o *)StringLiteral_10664/*"Particle_CrassIcon_Ex_Released"*/,
          v8,
          v9);
        v5 = 0;
      }
      else
      {
        v10 = ClassBoardBackground___c_TypeInfo;
        if ( (BYTE3(ClassBoardBackground___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ClassBoardBackground___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ClassBoardBackground___c_TypeInfo);
          v10 = ClassBoardBackground___c_TypeInfo;
        }
        static_fields = v10->static_fields;
        v12 = (System_String_o *)StringLiteral_10664/*"Particle_CrassIcon_Ex_Released"*/;
        _9__43_1 = static_fields->__9__43_1;
        if ( !_9__43_1 )
        {
          if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v10);
            static_fields = ClassBoardBackground___c_TypeInfo->static_fields;
          }
          v14 = (Il2CppObject *)static_fields->__9;
          _9__43_1 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
          System_Action___ctor(
            _9__43_1,
            v14,
            Method_ClassBoardBackground___c__PlayStartExClassReleaseEffectPlayer_b__43_1__,
            0LL);
          v15 = ClassBoardBackground___c_TypeInfo->static_fields;
          v15->__9__43_1 = _9__43_1;
          sub_B52920(
            (BattleServantConfConponent_o *)&v15->__9__43_1,
            (System_Int32_array **)_9__43_1,
            v16,
            v17,
            v18,
            v19,
            v20,
            v21);
        }
        ClassBoardBackground__PlaySimpleAnimation(this, (SimpleAnimation_o *)value, v12, _9__43_1, v6);
        v5 = 0;
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
      &v23,
      (const MethodInfo_288970C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__Dispose__);
  }
}


void __fastcall ClassBoardBackground__PlayStartMainEffectPlayer(ClassBoardBackground_o *this, const MethodInfo *method)
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
  const MethodInfo *v12; // x4
  int32_t v13; // [xsp+8h] [xbp-28h] BYREF
  int32_t v14; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42B37E3 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_ClassBoardBackground__PlayStartMainEffectPlayer_b__41_0__);
    sub_B52984(&Method_ClassBoardEffectPlayer_GetData_int___);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&StringLiteral_8954/*"MainTransition{0}_Release"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    sub_B52984(&StringLiteral_8953/*"MainTransition{0}"*/);
    byte_42B37E3 = 1;
  }
  startMainEffectPlayer = this->fields.startMainEffectPlayer;
  if ( !startMainEffectPlayer )
    sub_B52A5C(0LL, method);
  Data_int = ClassBoardEffectPlayer__GetData_int_(
               startMainEffectPlayer,
               (const MethodInfo_1A47D54 *)Method_ClassBoardEffectPlayer_GetData_int___);
  if ( BasicHelper__IsNullOrEmpty(
         (System_Collections_ICollection_o *)this->fields.exClassReleaseEffectAnimationDic,
         0LL) )
  {
    v13 = Data_int;
    v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13);
    v6 = System_String__Format((System_String_o *)StringLiteral_8953/*"MainTransition{0}"*/, v5, 0LL);
  }
  else
  {
    v14 = Data_int;
    v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14);
    v6 = System_String__Format((System_String_o *)StringLiteral_8954/*"MainTransition{0}_Release"*/, v7, 0LL);
    v9 = ClassBoardBackground__PlayExClassReleaseEffectPlayer(this, v8);
    UnityEngine_MonoBehaviour__StartCoroutine_35611808((UnityEngine_MonoBehaviour_o *)this, v9, 0LL);
  }
  mainAnimation = this->fields.mainAnimation;
  v11 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_ClassBoardBackground__PlayStartMainEffectPlayer_b__41_0__, 0LL);
  ClassBoardBackground__PlaySimpleAnimation(this, mainAnimation, v6, v11, v12);
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

  if ( (byte_42B37DE & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B37DE = 1;
  }
  this->fields.boardParentAnimation = animation;
  sub_B52920(
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
              SimpleAnimation__Play_16625408(v21, (System_String_o *)name, 0LL);
              return;
            }
          }
        }
      }
LABEL_31:
      sub_B52A5C(name, v12);
    }
  }
}


void __fastcall ClassBoardBackground__SetClassIcon(
        ClassBoardBackground_o *this,
        int32_t baseId,
        int32_t iconId,
        const MethodInfo *method)
{
  __int64 v7; // x22
  UnityEngine_Component_o *offRenderer; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Collections_Generic_IEnumerable_TSource__o *iconTextures; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v17; // x23
  System_Int32_array **v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  UnityEngine_Object_o *v25; // x21
  System_Collections_Generic_IEnumerable_T__o *iconRenderers; // x21
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v27; // x23
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v28; // x21
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  const MethodInfo *v35; // x2
  struct ClassBoardBackground_ExClassIconSet_array *exIconSet; // x8
  Il2CppObject *key; // x20
  __int64 v38; // x21
  Il2CppObject *v39; // x1
  System_Int32_array **v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  Il2CppObject *v47; // x1
  System_Int32_array **v48; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  Il2CppObject *v55; // x1
  System_Int32_array **v56; // x0
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  _BOOL8 v63; // x0
  __int64 v64; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v65; // x8
  il2cpp_array_size_t v66; // w19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o **v67; // x22
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o **v68; // x24
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o **v69; // x25
  il2cpp_array_size_t v70; // w9
  ClassBoardBackground_ExClassIconSet_o *v71; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v72; // x23
  System_Collections_Generic_IEnumerable_TSource__o *textures; // x27
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  WarBoardData_SquareRangeSearch_o *v80; // x0
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v81; // x26
  UnityEngine_Object_o *v82; // x23
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  WarBoardData_SquareRangeSearch_o *v89; // x0
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v90; // x28
  UnityEngine_Object_o *v91; // x26
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  UnityEngine_Texture_o *v98; // x27
  struct ClassBoardBackground_ExClassIconSet_array *v99; // x8
  ClassBoardBackground_ExClassIconSet_o *v100; // x8
  UnityEngine_Renderer_o *v101; // x0
  UnityEngine_Material_o *material; // x0
  __int64 v103; // x1
  __int64 v104; // x0
  __int64 v105; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v106; // x8
  ClassBoardBackground_ExClassIconSet_o *v107; // x8
  UnityEngine_Renderer_o *effectRenderer; // x0
  UnityEngine_Material_o *v109; // x0
  __int64 v110; // x1
  __int64 v111; // x0
  __int64 v112; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v113; // x8
  ClassBoardBackground_ExClassIconSet_o *v114; // x8
  UnityEngine_Renderer_o *onRenderer; // x0
  UnityEngine_Material_o *v116; // x0
  __int64 v117; // x1
  __int64 v118; // x0
  __int64 v119; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v120; // x8
  ClassBoardBackground_ExClassIconSet_o *v121; // x8
  UnityEngine_Renderer_o *effectGlowRenderer; // x0
  UnityEngine_Material_o *v123; // x0
  __int64 v124; // x1
  __int64 v125; // x0
  __int64 v126; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v127; // x8
  ClassBoardBackground_ExClassIconSet_o *v128; // x8
  UnityEngine_Component_o *v129; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v131; // x1
  __int64 v132; // x0
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
  UnityEngine_GameObject_o *releaseEffect; // x0
  UnityEngine_GameObject_o *v144; // x0
  __int64 v145; // x1
  _BOOL8 IsPlayed; // x0
  __int64 v147; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v148; // x8
  ClassBoardBackground_ExClassIconSet_o *v149; // x8
  UnityEngine_Object_o *animation; // x21
  _BOOL8 v151; // x0
  __int64 v152; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v153; // x8
  ClassBoardBackground_ExClassIconSet_o *v154; // x8
  UnityEngine_Component_o *v155; // x0
  UnityEngine_GameObject_o *v156; // x0
  __int64 v157; // x1
  __int64 v158; // x0
  __int64 v159; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v160; // x8
  ClassBoardBackground_ExClassIconSet_o *v161; // x8
  UnityEngine_Component_o *v162; // x0
  UnityEngine_GameObject_o *v163; // x0
  __int64 v164; // x1
  __int64 v165; // x0
  __int64 v166; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v167; // x8
  ClassBoardBackground_ExClassIconSet_o *v168; // x8
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *exClassReleaseEffectAnimationDic; // x0
  __int64 v170; // x0
  __int64 v171; // x0
  __int64 v172; // x0
  __int64 v173; // x0
  __int64 v174; // x0
  __int64 v175; // x0
  __int64 v176; // x0
  __int64 v177; // x0
  __int64 v178; // x0
  __int64 v179; // x0
  __int64 v180; // x0
  __int64 v181; // x0
  struct ClassBoardBackground_ExClassIconSet_array *v182; // x19
  int max_length; // w8
  unsigned int v184; // w20
  ClassBoardBackground_ExClassIconSet_o *v185; // x21
  __int64 v186; // x0
  __int64 v187; // [xsp+0h] [xbp-B0h]
  ClassBoardBackground_o *v188; // [xsp+10h] [xbp-A0h]
  int v189; // [xsp+18h] [xbp-98h] BYREF
  int v190; // [xsp+1Ch] [xbp-94h] BYREF
  __int128 v191[2]; // [xsp+20h] [xbp-90h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v192; // [xsp+40h] [xbp-70h] BYREF

  if ( (byte_42B37DF & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_Renderer___ctor__);
    sub_B52984(&System_Action_Renderer__TypeInfo);
    sub_B52984(&Method_BasicHelper_ForEach_Renderer___);
    sub_B52984(&ClassBoardUtility_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__Add__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__SimpleAnimation___ctor__);
    sub_B52984(&System_Collections_Generic_Dictionary_int__SimpleAnimation__TypeInfo);
    sub_B52984(&Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__get_Current__);
    sub_B52984(&Method_System_Func_Texture__bool___ctor__);
    sub_B52984(&System_Func_Texture__bool__TypeInfo);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Key__);
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Value__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_ClassBoardBackground___c__DisplayClass37_0__SetClassIcon_b__0__);
    sub_B52984(&Method_ClassBoardBackground___c__DisplayClass37_0__SetClassIcon_b__1__);
    sub_B52984(&ClassBoardBackground___c__DisplayClass37_0_TypeInfo);
    sub_B52984(&Method_ClassBoardBackground___c__DisplayClass37_1__SetClassIcon_b__2__);
    sub_B52984(&Method_ClassBoardBackground___c__DisplayClass37_1__SetClassIcon_b__3__);
    sub_B52984(&Method_ClassBoardBackground___c__DisplayClass37_1__SetClassIcon_b__4__);
    sub_B52984(&ClassBoardBackground___c__DisplayClass37_1_TypeInfo);
    sub_B52984(&StringLiteral_4050/*"ClassIconEx_off_{0}"*/);
    sub_B52984(&StringLiteral_4051/*"ClassIconEx_on_{0}"*/);
    sub_B52984(&StringLiteral_4049/*"ClassIconEx_ef_glow_{0}"*/);
    byte_42B37DF = 1;
  }
  memset(&v192, 0, 32);
  v7 = sub_B52A54(ClassBoardBackground___c__DisplayClass37_0_TypeInfo);
  ClassBoardBackground___c__DisplayClass37_0___ctor((ClassBoardBackground___c__DisplayClass37_0_o *)v7, 0LL);
  if ( !v7 )
    goto LABEL_168;
  *(_DWORD *)(v7 + 16) = iconId;
  *(_QWORD *)(v7 + 24) = this;
  sub_B52920((BattleServantConfConponent_o *)(v7 + 24), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  iconTextures = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.iconTextures;
  v17 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_Texture__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v17,
    (Il2CppObject *)v7,
    Method_ClassBoardBackground___c__DisplayClass37_0__SetClassIcon_b__0__,
    (const MethodInfo_2BC90BC *)Method_System_Func_Texture__bool___ctor__);
  v18 = (System_Int32_array **)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                 iconTextures,
                                 (System_Func_TSource__bool__o *)v17,
                                 (const MethodInfo_1B63978 *)Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
  *(_QWORD *)(v7 + 32) = v18;
  sub_B52920((BattleServantConfConponent_o *)(v7 + 32), v18, v19, v20, v21, v22, v23, v24);
  v25 = *(UnityEngine_Object_o **)(v7 + 32);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(v25, 0LL, 0LL) )
    return;
  iconRenderers = (System_Collections_Generic_IEnumerable_T__o *)this->fields.iconRenderers;
  v27 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_Renderer__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v27,
    (Il2CppObject *)v7,
    Method_ClassBoardBackground___c__DisplayClass37_0__SetClassIcon_b__1__,
    (const MethodInfo_2627780 *)Method_System_Action_Renderer___ctor__);
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    iconRenderers,
    (System_Action_T__o *)v27,
    (const MethodInfo_1A43210 *)Method_BasicHelper_ForEach_Renderer___);
  v28 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B52A54(System_Collections_Generic_Dictionary_int__SimpleAnimation__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v28,
    (const MethodInfo_2F27154 *)Method_System_Collections_Generic_Dictionary_int__SimpleAnimation___ctor__);
  this->fields.exClassReleaseEffectAnimationDic = (struct System_Collections_Generic_Dictionary_int__SimpleAnimation__o *)v28;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.exClassReleaseEffectAnimationDic,
    (System_Int32_array **)v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  exIconSet = this->fields.exIconSet;
  if ( !exIconSet )
LABEL_168:
    sub_B52A5C(offRenderer, v9);
  if ( !*(_QWORD *)&exIconSet->max_length )
    return;
  if ( (baseId & 0xFFFFFFFE) != 8 )
  {
    v182 = this->fields.exIconSet;
    if ( v182 )
    {
      max_length = v182->max_length;
      if ( max_length < 1 )
        return;
      v184 = 0;
      while ( 1 )
      {
        if ( v184 >= max_length )
        {
          v186 = sub_B52A88(offRenderer);
          sub_B52A28(v186, 0LL);
        }
        v185 = v182->m_Items[v184];
        if ( !v185 )
          break;
        offRenderer = (UnityEngine_Component_o *)v185->fields.offRenderer;
        if ( !offRenderer )
          break;
        offRenderer = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(offRenderer, 0LL);
        if ( !offRenderer )
          break;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)offRenderer, 0, 0LL);
        offRenderer = (UnityEngine_Component_o *)v185->fields.onRenderer;
        if ( !offRenderer )
          break;
        offRenderer = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(offRenderer, 0LL);
        if ( !offRenderer )
          break;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)offRenderer, 0, 0LL);
        offRenderer = (UnityEngine_Component_o *)v185->fields.releaseEffect;
        if ( !offRenderer )
          break;
        offRenderer = (UnityEngine_Component_o *)UnityEngine_GameObject__get_gameObject(
                                                   (UnityEngine_GameObject_o *)offRenderer,
                                                   0LL);
        if ( !offRenderer )
          break;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)offRenderer, 0, 0LL);
        max_length = v182->max_length;
        if ( (int)++v184 >= max_length )
          return;
      }
    }
    goto LABEL_168;
  }
  offRenderer = (UnityEngine_Component_o *)ClassBoardBackground__GetIconIdList(
                                             (ClassBoardBackground_o *)offRenderer,
                                             baseId,
                                             v35);
  if ( !offRenderer )
    goto LABEL_168;
  System_Collections_Generic_Dictionary_int__bool___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v191,
    (System_Collections_Generic_Dictionary_int__bool__o *)offRenderer,
    (const MethodInfo_2EF86F4 *)Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
  v188 = this;
  *(_OWORD *)&v192.fields.dictionary = v191[0];
  v192.fields.current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v191[1];
LABEL_13:
  while ( System_Collections_Generic_Dictionary_Enumerator_int__bool___MoveNext(
            &v192,
            (const MethodInfo_28855E8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__) )
  {
    key = v192.fields.current.fields.key;
    v38 = sub_B52A54(ClassBoardBackground___c__DisplayClass37_1_TypeInfo);
    ClassBoardBackground___c__DisplayClass37_1___ctor((ClassBoardBackground___c__DisplayClass37_1_o *)v38, 0LL);
    LODWORD(v191[0]) = (_DWORD)key;
    v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v191);
    v40 = (System_Int32_array **)System_String__Format((System_String_o *)StringLiteral_4051/*"ClassIconEx_on_{0}"*/, v39, 0LL);
    if ( !v38 )
      sub_B52A5C(v40, v40);
    *(_QWORD *)(v38 + 24) = v40;
    sub_B52920((BattleServantConfConponent_o *)(v38 + 24), v40, v41, v42, v43, v44, v45, v46);
    v190 = (int)key;
    v47 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v190);
    v48 = (System_Int32_array **)System_String__Format((System_String_o *)StringLiteral_4050/*"ClassIconEx_off_{0}"*/, v47, 0LL);
    *(_QWORD *)(v38 + 16) = v48;
    sub_B52920((BattleServantConfConponent_o *)(v38 + 16), v48, v49, v50, v51, v52, v53, v54);
    v189 = (int)key;
    v55 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v189);
    v56 = (System_Int32_array **)System_String__Format((System_String_o *)StringLiteral_4049/*"ClassIconEx_ef_glow_{0}"*/, v55, 0LL);
    *(_QWORD *)(v38 + 32) = v56;
    sub_B52920((BattleServantConfConponent_o *)(v38 + 32), v56, v57, v58, v59, v60, v61, v62);
    v65 = this->fields.exIconSet;
    if ( !v65 )
LABEL_100:
      sub_B52A5C(v63, v64);
    v66 = 0;
    v67 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o **)(v38 + 40);
    v68 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o **)(v38 + 48);
    v69 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o **)(v38 + 56);
    v187 = (unsigned __int64)key & 0xFF00000000LL;
    while ( 1 )
    {
      v70 = v65->max_length;
      if ( (int)v66 >= (int)v70 )
        break;
      if ( v66 >= v70 )
      {
        v170 = sub_B52A88(v63);
        sub_B52A28(v170, 0LL);
      }
      v71 = v65->m_Items[v66];
      if ( !v71 )
        sub_B52A5C(v63, v64);
      v72 = *v67;
      textures = (System_Collections_Generic_IEnumerable_TSource__o *)v71->fields.textures;
      if ( !*v67 )
      {
        v72 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_Texture__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v72,
          (Il2CppObject *)v38,
          Method_ClassBoardBackground___c__DisplayClass37_1__SetClassIcon_b__2__,
          (const MethodInfo_2BC90BC *)Method_System_Func_Texture__bool___ctor__);
        *v67 = v72;
        sub_B52920((BattleServantConfConponent_o *)(v38 + 40), (System_Int32_array **)v72, v74, v75, v76, v77, v78, v79);
      }
      v80 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
              textures,
              (System_Func_TSource__bool__o *)v72,
              (const MethodInfo_1B63978 *)Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
      v81 = *v68;
      v82 = (UnityEngine_Object_o *)v80;
      if ( !*v68 )
      {
        v81 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_Texture__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v81,
          (Il2CppObject *)v38,
          Method_ClassBoardBackground___c__DisplayClass37_1__SetClassIcon_b__3__,
          (const MethodInfo_2BC90BC *)Method_System_Func_Texture__bool___ctor__);
        *v68 = v81;
        sub_B52920((BattleServantConfConponent_o *)(v38 + 48), (System_Int32_array **)v81, v83, v84, v85, v86, v87, v88);
      }
      v89 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
              textures,
              (System_Func_TSource__bool__o *)v81,
              (const MethodInfo_1B63978 *)Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
      v90 = *v69;
      v91 = (UnityEngine_Object_o *)v89;
      if ( !*v69 )
      {
        v90 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_Texture__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v90,
          (Il2CppObject *)v38,
          Method_ClassBoardBackground___c__DisplayClass37_1__SetClassIcon_b__4__,
          (const MethodInfo_2BC90BC *)Method_System_Func_Texture__bool___ctor__);
        *v69 = v90;
        sub_B52920((BattleServantConfConponent_o *)(v38 + 56), (System_Int32_array **)v90, v92, v93, v94, v95, v96, v97);
      }
      v98 = (UnityEngine_Texture_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                       textures,
                                       (System_Func_TSource__bool__o *)v90,
                                       (const MethodInfo_1B63978 *)Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
      this = v188;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v63 = UnityEngine_Object__op_Inequality(v91, 0LL, 0LL);
      if ( v63 )
      {
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v63 = UnityEngine_Object__op_Inequality(v82, 0LL, 0LL);
        if ( v63 )
        {
          v99 = v188->fields.exIconSet;
          if ( !v99 )
            sub_B52A5C(v63, v64);
          if ( v66 >= v99->max_length )
          {
            v172 = sub_B52A88(v63);
            sub_B52A28(v172, 0LL);
          }
          v100 = v99->m_Items[v66];
          if ( !v100 )
            sub_B52A5C(v63, v64);
          v101 = v100->fields.offRenderer;
          if ( !v101 )
            sub_B52A5C(0LL, v64);
          material = UnityEngine_Renderer__get_material(v101, 0LL);
          if ( !material )
            sub_B52A5C(0LL, v103);
          UnityEngine_Material__SetTexture(
            material,
            v188->fields.iconMaterialPropertyName,
            (UnityEngine_Texture_o *)v82,
            0LL);
          v106 = v188->fields.exIconSet;
          if ( !v106 )
            sub_B52A5C(v104, v105);
          if ( v66 >= v106->max_length )
          {
            v175 = sub_B52A88(v104);
            sub_B52A28(v175, 0LL);
          }
          v107 = v106->m_Items[v66];
          if ( !v107 )
            sub_B52A5C(v104, v105);
          effectRenderer = v107->fields.effectRenderer;
          if ( !effectRenderer )
            sub_B52A5C(0LL, v105);
          v109 = UnityEngine_Renderer__get_material(effectRenderer, 0LL);
          if ( !v109 )
            sub_B52A5C(0LL, v110);
          UnityEngine_Material__SetTexture(
            v109,
            v188->fields.iconMaterialPropertyName,
            (UnityEngine_Texture_o *)v82,
            0LL);
          v113 = v188->fields.exIconSet;
          if ( !v113 )
            sub_B52A5C(v111, v112);
          if ( v66 >= v113->max_length )
          {
            v177 = sub_B52A88(v111);
            sub_B52A28(v177, 0LL);
          }
          v114 = v113->m_Items[v66];
          if ( !v114 )
            sub_B52A5C(v111, v112);
          onRenderer = v114->fields.onRenderer;
          if ( !onRenderer )
            sub_B52A5C(0LL, v112);
          v116 = UnityEngine_Renderer__get_material(onRenderer, 0LL);
          if ( !v116 )
            sub_B52A5C(0LL, v117);
          UnityEngine_Material__SetTexture(
            v116,
            v188->fields.iconMaterialPropertyName,
            (UnityEngine_Texture_o *)v91,
            0LL);
          v120 = v188->fields.exIconSet;
          if ( !v120 )
            sub_B52A5C(v118, v119);
          if ( v66 >= v120->max_length )
          {
            v171 = sub_B52A88(v118);
            sub_B52A28(v171, 0LL);
          }
          v121 = v120->m_Items[v66];
          if ( !v121 )
            sub_B52A5C(v118, v119);
          effectGlowRenderer = v121->fields.effectGlowRenderer;
          if ( !effectGlowRenderer )
            sub_B52A5C(0LL, v119);
          v123 = UnityEngine_Renderer__get_material(effectGlowRenderer, 0LL);
          if ( !v123 )
            sub_B52A5C(0LL, v124);
          UnityEngine_Material__SetTexture(v123, v188->fields.iconMaterialPropertyName, v98, 0LL);
          v127 = v188->fields.exIconSet;
          if ( !v127 )
            sub_B52A5C(v125, v126);
          if ( v66 >= v127->max_length )
          {
            v174 = sub_B52A88(v125);
            sub_B52A28(v174, 0LL);
          }
          v128 = v127->m_Items[v66];
          if ( !v128 )
            sub_B52A5C(v125, v126);
          v129 = (UnityEngine_Component_o *)v128->fields.offRenderer;
          if ( !v129 )
            sub_B52A5C(0LL, v126);
          gameObject = UnityEngine_Component__get_gameObject(v129, 0LL);
          if ( !gameObject )
            sub_B52A5C(0LL, v131);
          UnityEngine_GameObject__SetActive(gameObject, v187 == 0, 0LL);
          v134 = v188->fields.exIconSet;
          if ( !v134 )
            sub_B52A5C(v132, v133);
          if ( v66 >= v134->max_length )
          {
            v173 = sub_B52A88(v132);
            sub_B52A28(v173, 0LL);
          }
          v135 = v134->m_Items[v66];
          if ( !v135 )
            sub_B52A5C(v132, v133);
          v136 = (UnityEngine_Component_o *)v135->fields.onRenderer;
          if ( !v136 )
            sub_B52A5C(0LL, v133);
          v137 = UnityEngine_Component__get_gameObject(v136, 0LL);
          if ( !v137 )
            sub_B52A5C(0LL, v138);
          UnityEngine_GameObject__SetActive(v137, v187 != 0, 0LL);
          v141 = v188->fields.exIconSet;
          if ( !v141 )
            sub_B52A5C(v139, v140);
          if ( v66 >= v141->max_length )
          {
            v176 = sub_B52A88(v139);
            sub_B52A28(v176, 0LL);
          }
          v142 = v141->m_Items[v66];
          if ( !v142 )
            sub_B52A5C(v139, v140);
          releaseEffect = v142->fields.releaseEffect;
          if ( !releaseEffect )
            sub_B52A5C(0LL, v140);
          v144 = UnityEngine_GameObject__get_gameObject(releaseEffect, 0LL);
          if ( !v144 )
            sub_B52A5C(0LL, v145);
          UnityEngine_GameObject__SetActive(v144, 0, 0LL);
          if ( v187 )
          {
            if ( (BYTE3(ClassBoardUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !ClassBoardUtility_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
            }
            IsPlayed = ClassBoardUtility__IsPlayedExClassReleaseEffect((int32_t)key, 0LL);
            if ( !IsPlayed )
            {
              v148 = v188->fields.exIconSet;
              if ( !v148 )
                sub_B52A5C(IsPlayed, v147);
              if ( v66 >= v148->max_length )
              {
                v180 = sub_B52A88(IsPlayed);
                sub_B52A28(v180, 0LL);
              }
              v149 = v148->m_Items[v66];
              if ( !v149 )
                sub_B52A5C(IsPlayed, v147);
              animation = (UnityEngine_Object_o *)v149->fields.animation;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              v151 = UnityEngine_Object__op_Inequality(animation, 0LL, 0LL);
              if ( v151 )
              {
                v153 = v188->fields.exIconSet;
                if ( !v153 )
                  sub_B52A5C(v151, v152);
                if ( v66 >= v153->max_length )
                {
                  v178 = sub_B52A88(v151);
                  sub_B52A28(v178, 0LL);
                }
                v154 = v153->m_Items[v66];
                if ( !v154 )
                  sub_B52A5C(v151, v152);
                v155 = (UnityEngine_Component_o *)v154->fields.offRenderer;
                if ( !v155 )
                  sub_B52A5C(0LL, v152);
                v156 = UnityEngine_Component__get_gameObject(v155, 0LL);
                if ( !v156 )
                  sub_B52A5C(0LL, v157);
                UnityEngine_GameObject__SetActive(v156, 1, 0LL);
                v160 = v188->fields.exIconSet;
                if ( !v160 )
                  sub_B52A5C(v158, v159);
                if ( v66 >= v160->max_length )
                {
                  v181 = sub_B52A88(v158);
                  sub_B52A28(v181, 0LL);
                }
                v161 = v160->m_Items[v66];
                if ( !v161 )
                  sub_B52A5C(v158, v159);
                v162 = (UnityEngine_Component_o *)v161->fields.onRenderer;
                if ( !v162 )
                  sub_B52A5C(0LL, v159);
                v163 = UnityEngine_Component__get_gameObject(v162, 0LL);
                if ( !v163 )
                  sub_B52A5C(0LL, v164);
                UnityEngine_GameObject__SetActive(v163, 0, 0LL);
                v167 = v188->fields.exIconSet;
                if ( !v167 )
                  sub_B52A5C(v165, v166);
                if ( v66 >= v167->max_length )
                {
                  v179 = sub_B52A88(v165);
                  sub_B52A28(v179, 0LL);
                }
                v168 = v167->m_Items[v66];
                if ( !v168 )
                  sub_B52A5C(v165, v166);
                exClassReleaseEffectAnimationDic = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v188->fields.exClassReleaseEffectAnimationDic;
                if ( !exClassReleaseEffectAnimationDic )
                  sub_B52A5C(0LL, key);
                System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
                  exClassReleaseEffectAnimationDic,
                  (int32_t)key,
                  (WarBoardEvalValueSquare_EvalValueSquare_o *)v168->fields.animation,
                  (const MethodInfo_2F27D08 *)Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__Add__);
              }
            }
          }
          goto LABEL_13;
        }
      }
      v65 = v188->fields.exIconSet;
      ++v66;
      if ( !v65 )
        goto LABEL_100;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__bool___Dispose(
    &v192,
    (const MethodInfo_2885738 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
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
  sub_B52920(
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

  if ( (byte_42B37E6 & 1) == 0 )
  {
    sub_B52984(&ClassBoardBackground__WaitAnimationFinished_d__45_TypeInfo);
    byte_42B37E6 = 1;
  }
  v8 = sub_B52A54(ClassBoardBackground__WaitAnimationFinished_d__45_TypeInfo);
  ClassBoardBackground__WaitAnimationFinished_d__45___ctor(
    (ClassBoardBackground__WaitAnimationFinished_d__45_o *)v8,
    0,
    0LL);
  if ( !v8 )
    sub_B52A5C(v9, v10);
  *(_QWORD *)(v8 + 32) = anim;
  sub_B52920((BattleServantConfConponent_o *)(v8 + 32), (System_Int32_array **)anim, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)(v8 + 40) = name;
  sub_B52920((BattleServantConfConponent_o *)(v8 + 40), (System_Int32_array **)name, v17, v18, v19, v20, v21, v22);
  *(_QWORD *)(v8 + 48) = endCallback;
  sub_B52920(
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
  System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__o *v3; // x0
  BattleServantConfConponent_o *p_exClassReleaseEffectAnimationDic; // x19
  struct System_Collections_Generic_Dictionary_int__SimpleAnimation__o *exClassReleaseEffectAnimationDic; // t1
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  System_Int32_array *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42B37E9 & 1) == 0 )
  {
    sub_B52984(&ClassBoardUtility_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__get_Keys__);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_int___);
    byte_42B37E9 = 1;
  }
  exClassReleaseEffectAnimationDic = this->fields.exClassReleaseEffectAnimationDic;
  p_exClassReleaseEffectAnimationDic = (BattleServantConfConponent_o *)&this->fields.exClassReleaseEffectAnimationDic;
  v3 = (System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__o *)exClassReleaseEffectAnimationDic;
  if ( !exClassReleaseEffectAnimationDic )
    sub_B52A5C(0LL, method);
  Keys = System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData___get_Keys(
           v3,
           (const MethodInfo_2F27914 *)Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__get_Keys__);
  v7 = System_Linq_Enumerable__ToArray_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
         (const MethodInfo_1B6E46C *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( (BYTE3(ClassBoardUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
  }
  ClassBoardUtility__SavePlayedExClassReleaseEffect(v7, 0LL);
  p_exClassReleaseEffectAnimationDic->klass = 0LL;
  sub_B52920(p_exClassReleaseEffectAnimationDic, 0LL, v8, v9, v10, v11, v12, v13);
}


void __fastcall ClassBoardBackground___PlayStartMainEffectPlayer_b__41_0(
        ClassBoardBackground_o *this,
        const MethodInfo *method)
{
  ClassBoardEffectPlayer_o *startMainEffectPlayer; // x0

  startMainEffectPlayer = this->fields.startMainEffectPlayer;
  if ( !startMainEffectPlayer )
    sub_B52A5C(0LL, method);
  ClassBoardEffectPlayer__End(startMainEffectPlayer, method);
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
  int32_t _1__state; // w8
  struct ClassBoardBackground_o *_4__this; // x0
  float exClassReleaseEffectStartSec; // s8
  UnityEngine_WaitForSeconds_o *v6; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0

  if ( (byte_42AD6B1 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_42AD6B1 = 1;
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
      v6 = (UnityEngine_WaitForSeconds_o *)sub_B52A54(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v6, exClassReleaseEffectStartSec, 0LL);
      this->fields.__2__current = (Il2CppObject *)v6;
      p__2__current = &this->fields.__2__current;
      sub_B52920(p__2__current);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
LABEL_10:
    sub_B52A5C(_4__this, method);
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

  v2 = sub_B52988(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B52A54(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B52988(&Method_ClassBoardBackground__PlayExClassReleaseEffectPlayer_d__42_System_Collections_IEnumerator_Reset__);
  sub_B52A28(v3, v4);
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
  SimpleAnimation_o *anim; // x0
  SimpleAnimation_State_o *State; // x0
  __int64 v5; // x3
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v7; // x20
  unsigned __int64 v8; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  Il2CppObject **p__2__current; // x19
  bool result; // w0

  if ( (byte_42AD6B2 & 1) == 0 )
  {
    sub_B52984(&SimpleAnimation_State_TypeInfo);
    byte_42AD6B2 = 1;
  }
  if ( this->fields.__1__state <= 1u )
  {
    anim = this->fields.anim;
    this->fields.__1__state = -1;
    if ( !anim )
      sub_B52A5C(0LL, method);
    State = SimpleAnimation__GetState(anim, this->fields.name, 0LL);
    if ( State )
    {
      klass = State->klass;
      v7 = State;
      if ( *(_WORD *)&State->klass->_2.bitflags1 )
      {
        v8 = 0LL;
        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
        {
          ++v8;
          p_offset += 2;
          if ( v8 >= *(unsigned __int16 *)&State->klass->_2.bitflags1 )
            goto LABEL_10;
        }
        p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 5].method;
      }
      else
      {
LABEL_10:
        p_method = sub_AEB880(State, SimpleAnimation_State_TypeInfo, 5LL, v5);
      }
      if ( (*(float (__fastcall **)(SimpleAnimation_State_o *, _QWORD))p_method)(v7, *(_QWORD *)(p_method + 8)) < 1.0 )
      {
        this->fields.__2__current = 0LL;
        p__2__current = &this->fields.__2__current;
        sub_B52920(p__2__current);
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

  v2 = sub_B52988(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B52A54(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B52988(&Method_ClassBoardBackground__WaitAnimationFinished_d__45_System_Collections_IEnumerator_Reset__);
  sub_B52A28(v3, v4);
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
  Il2CppObject *v1; // x19
  struct ClassBoardBackground___c_StaticFields *static_fields; // x0

  if ( (byte_42AD6AE & 1) == 0 )
  {
    sub_B52984(&ClassBoardBackground___c_TypeInfo);
    byte_42AD6AE = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(ClassBoardBackground___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = ClassBoardBackground___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ClassBoardBackground___c_o *)v1;
  sub_B52920(static_fields);
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
    sub_B52A5C(this, a);
  return a->fields.classId - b->fields.classId;
}


void __fastcall ClassBoardBackground___c___OnDestroy_b__40_0(
        ClassBoardBackground___c_o *this,
        UnityEngine_Renderer_o *x,
        const MethodInfo *method)
{
  UnityEngine_Object_o *material; // x19

  if ( (byte_42AD6AF & 1) == 0 )
  {
    this = (ClassBoardBackground___c_o *)sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AD6AF = 1;
  }
  if ( !x )
    sub_B52A5C(this, x);
  material = (UnityEngine_Object_o *)UnityEngine_Renderer__get_material(x, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35616956(material, 0LL);
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
  ClassBoardBackground___c__DisplayClass37_0_o *v4; // x19
  System_String_o *name; // x20
  Il2CppObject *v6; // x0
  System_String_o *v7; // x0
  int32_t iconId; // [xsp+Ch] [xbp-14h] BYREF

  v4 = this;
  if ( (byte_42AD6B0 & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    this = (ClassBoardBackground___c__DisplayClass37_0_o *)sub_B52984(&StringLiteral_4053/*"ClassIcon{0}"*/);
    byte_42AD6B0 = 1;
  }
  if ( !x )
    sub_B52A5C(this, x);
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)x, 0LL);
  iconId = v4->fields.iconId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId);
  v7 = System_String__Format((System_String_o *)StringLiteral_4053/*"ClassIcon{0}"*/, v6, 0LL);
  return System_String__op_Equality(name, v7, 0LL);
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
    sub_B52A5C(this, x);
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
    sub_B52A5C(this, 0LL);
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
    sub_B52A5C(this, 0LL);
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
    sub_B52A5C(this, 0LL);
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)x, 0LL);
  return System_String__op_Equality(name, this->fields.glowIconName, 0LL);
}