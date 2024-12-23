void __fastcall ClassBoardBackground___ctor(ClassBoardBackground_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v9; // x1

  if ( (byte_4B6A0C7 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_16471/*"_MainTex"*/, method);
    byte_4B6A0C7 = 1;
  }
  v9 = StringLiteral_16471/*"_MainTex"*/;
  this->fields.iconMaterialPropertyName = (struct System_String_o *)StringLiteral_16471/*"_MainTex"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.iconMaterialPropertyName, v9, v2, v3, v4, v5, v6, v7);
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
    sub_1BE4D28(0LL, value);
  UnityEngine_GameObject__SetActive(earthAccessoriesObject, value, 0LL);
}


void __fastcall ClassBoardBackground__Awake(ClassBoardBackground_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *gameObject; // x0
  __int64 v6; // x1
  System_String_o *name; // x20
  ClassBoardEffectPlayer_o *v8; // x21
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  struct ClassBoardEffectPlayer_o *startMainEffectPlayer; // x20
  System_Action_o *v16; // x21
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7

  if ( (byte_4B6A0BB & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&Method_ClassBoardBackground_PlayStartMainEffectPlayer__, v3);
    sub_1BE4ACC(&ClassBoardEffectPlayer_TypeInfo, v4);
    byte_4B6A0BB = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_6;
  name = UnityEngine_Object__get_name(gameObject, 0LL);
  v8 = (ClassBoardEffectPlayer_o *)sub_1BE4D18(ClassBoardEffectPlayer_TypeInfo);
  ClassBoardEffectPlayer___ctor_45515548(v8, name, 0LL);
  this->fields.startMainEffectPlayer = v8;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.startMainEffectPlayer,
    (int64_t)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  startMainEffectPlayer = this->fields.startMainEffectPlayer;
  v16 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v16, (Il2CppObject *)this, Method_ClassBoardBackground_PlayStartMainEffectPlayer__, 0LL);
  if ( !startMainEffectPlayer )
LABEL_6:
    sub_1BE4D28(gameObject, v6);
  startMainEffectPlayer->fields.playCallback = v16;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&startMainEffectPlayer->fields.playCallback,
    (int64_t)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
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

  if ( (byte_4B6A0C6 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, method);
    byte_4B6A0C6 = 1;
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
        sub_1BE4D28(name, v5);
      }
      SimpleAnimation__Play_64837092(v7, (System_String_o *)name, 0LL);
    }
  }
}


void __fastcall ClassBoardBackground__CallAnimationEventShowBoard(
        ClassBoardBackground_o *this,
        const MethodInfo *method)
{
  PartyOrganizationUtility_o *p_showBoardCallback; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  p_showBoardCallback = (PartyOrganizationUtility_o *)&this->fields.showBoardCallback;
  ActionExtensions__Call(this->fields.showBoardCallback, 0LL);
  p_showBoardCallback->klass = 0LL;
  sub_1BE4A70(p_showBoardCallback, 0LL, v3, v4, v5, v6, v7, v8);
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4B6A0BC & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, camera);
    byte_4B6A0BC = 1;
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
    sub_1BE4D28(classBoardViewCamera, camera);
  }
  UnityEngine_GameObject__SetActive(v9, (unsigned __int8)classBoardViewCamera & 1, 0LL);
  this->fields.currentCamera = camera;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.currentCamera, (int64_t)camera, v10, v11, v12, v13, v14, v15);
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
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  DataMasterBase_TMaster__TEntity__PKType__o *v33; // x20
  __int64 v34; // x1
  BalanceConfig_c *v35; // x0
  ClassBoardClassEntity_o *current; // x21
  BalanceConfig_c *v37; // x0
  __int64 v38; // x1
  _BOOL8 v39; // x0
  __int64 v40; // x1
  int32_t monitor_high; // w22
  _BOOL8 IsOpen; // x0
  __int64 v43; // x1
  System_Collections_Generic_List_Enumerator_object__o v45; // [xsp+0h] [xbp-90h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+20h] [xbp-70h] BYREF
  System_Collections_Generic_List_ClassBoardClassEntity__o *entitys; // [xsp+38h] [xbp-58h] BYREF

  if ( (byte_4B6A0BF & 1) == 0 )
  {
    sub_1BE4ACC(&BalanceConfig_TypeInfo, *(_QWORD *)&baseId);
    sub_1BE4ACC(&System_Comparison_ClassBoardClassEntity__TypeInfo, v4);
    sub_1BE4ACC(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v5);
    sub_1BE4ACC(&Method_DataManager_GetMaster_ServantClassMaster___, v6);
    sub_1BE4ACC(&DataManager_TypeInfo, v7);
    sub_1BE4ACC(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__bool__Add__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__, v10);
    sub_1BE4ACC(&System_Collections_Generic_Dictionary_int__bool__TypeInfo, v11);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Contains_int___, v12);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__, v13);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__, v14);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__get_Current__, v15);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__, v16);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ClassBoardClassEntity__Sort__, v17);
    sub_1BE4ACC(&Method_ClassBoardBackground___c__GetIconIdList_b__38_0__, v18);
    sub_1BE4ACC(&ClassBoardBackground___c_TypeInfo, v19);
    byte_4B6A0BF = 1;
  }
  entitys = 0LL;
  memset(&v47, 0, sizeof(v47));
  entity = 0LL;
  v20 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_1BE4D18(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v20,
    (const MethodInfo_324146C *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
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
    v24 = (System_Comparison_T__o *)sub_1BE4D18(System_Comparison_ClassBoardClassEntity__TypeInfo);
    System_Comparison_object____ctor(v24, v25, Method_ClassBoardBackground___c__GetIconIdList_b__38_0__, 0LL);
    static_fields = ClassBoardBackground___c_TypeInfo->static_fields;
    static_fields->__9__38_0 = (struct System_Comparison_ClassBoardClassEntity__o *)v24;
    sub_1BE4A70((PartyOrganizationUtility_o *)&static_fields->__9__38_0, (int64_t)v24, v27, v28, v29, v30, v31, v32);
  }
  if ( !v23 )
    goto LABEL_37;
  System_Collections_Generic_List_object___Sort_56548584(
    v23,
    v24,
    (const MethodInfo_35EDCE8 *)Method_System_Collections_Generic_List_ClassBoardClassEntity__Sort__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_ServantClassMaster___);
  if ( !entitys )
LABEL_37:
    sub_1BE4D28(Master_object, v22);
  v33 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v45,
    (System_Collections_Generic_List_object__o *)entitys,
    (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__);
  v47 = v45;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v47,
            (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__) )
  {
    v35 = BalanceConfig_TypeInfo;
    current = (ClassBoardClassEntity_o *)v47.fields._current;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    if ( !current )
      sub_1BE4D28(v35, v34);
    v37 = (BalanceConfig_c *)System_Linq_Enumerable__Contains_int_(
                               (System_Collections_Generic_IEnumerable_TSource__o *)BalanceConfig_TypeInfo->static_fields->PlayableBeastClassIds,
                               current->fields.classId,
                               (const MethodInfo_2F713FC *)Method_System_Linq_Enumerable_Contains_int___);
    if ( ((unsigned __int8)v37 & 1) != 0 )
    {
      v37 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v37 = BalanceConfig_TypeInfo;
      }
      if ( v37->static_fields->PlayableBeastBaseClassId != current->fields.classId )
        continue;
    }
    if ( !v33 )
      sub_1BE4D28(v37, v38);
    v39 = DataMasterBase_object__object__int___TryGetEntity(
            v33,
            &entity,
            current->fields.classId,
            (const MethodInfo_31FD818 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    if ( v39 )
    {
      if ( !entity )
        sub_1BE4D28(v39, v40);
      monitor_high = HIDWORD(entity[2].monitor);
      IsOpen = ClassBoardClassEntity__IsOpen(current, 0LL);
      if ( !v20 )
        sub_1BE4D28(IsOpen, v43);
      System_Collections_Generic_Dictionary_int__bool___Add(
        v20,
        monitor_high,
        IsOpen,
        (const MethodInfo_3241E44 *)Method_System_Collections_Generic_Dictionary_int__bool__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v47,
    (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__);
  return v20;
}


UnityEngine_RenderTexture_o *__fastcall ClassBoardBackground__GetRenderTexture(
        ClassBoardBackground_o *this,
        const MethodInfo *method)
{
  UnityEngine_Camera_o *currentCamera; // x0

  currentCamera = this->fields.currentCamera;
  if ( !currentCamera )
    sub_1BE4D28(0LL, method);
  return UnityEngine_Camera__get_targetTexture(currentCamera, 0LL);
}


void __fastcall ClassBoardBackground__OnDestroy(ClassBoardBackground_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  ClassBoardBackground___c_c *v6; // x0
  System_Collections_Generic_IEnumerable_T__o *iconRenderers; // x19
  System_Action_object__o *_9__40_0; // x20
  Il2CppObject *v9; // x21
  struct ClassBoardBackground___c_StaticFields *static_fields; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4B6A0C1 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_Renderer__TypeInfo, method);
    sub_1BE4ACC(&Method_BasicHelper_ForEach_Renderer___, v3);
    sub_1BE4ACC(&Method_ClassBoardBackground___c__OnDestroy_b__40_0__, v4);
    sub_1BE4ACC(&ClassBoardBackground___c_TypeInfo, v5);
    byte_4B6A0C1 = 1;
  }
  v6 = ClassBoardBackground___c_TypeInfo;
  iconRenderers = (System_Collections_Generic_IEnumerable_T__o *)this->fields.iconRenderers;
  if ( !ClassBoardBackground___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardBackground___c_TypeInfo);
    v6 = ClassBoardBackground___c_TypeInfo;
  }
  _9__40_0 = (System_Action_object__o *)v6->static_fields->__9__40_0;
  if ( !_9__40_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = ClassBoardBackground___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__40_0 = (System_Action_object__o *)sub_1BE4D18(System_Action_Renderer__TypeInfo);
    System_Action_object____ctor(_9__40_0, v9, Method_ClassBoardBackground___c__OnDestroy_b__40_0__, 0LL);
    static_fields = ClassBoardBackground___c_TypeInfo->static_fields;
    static_fields->__9__40_0 = (struct System_Action_Renderer__o *)_9__40_0;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&static_fields->__9__40_0,
      (int64_t)_9__40_0,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  BasicHelper__ForEach_object_(
    iconRenderers,
    (System_Action_T__o *)_9__40_0,
    (const MethodInfo_2F4606C *)Method_BasicHelper_ForEach_Renderer___);
}


void __fastcall ClassBoardBackground__PlayBoardParentBeforeAnimation(
        ClassBoardBackground_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *boardParentAnimation; // x20
  UnityEngine_Object_o *boardParentBeforeAnimationClip; // x20
  __int64 v5; // x1
  SimpleAnimation_o *v6; // x0

  if ( (byte_4B6A0C0 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, method);
    byte_4B6A0C0 = 1;
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
        sub_1BE4D28(v6, v5);
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
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4B6A0C3 & 1) == 0 )
  {
    sub_1BE4ACC(&ClassBoardBackground__PlayExClassReleaseEffectPlayer_d__42_TypeInfo, method);
    byte_4B6A0C3 = 1;
  }
  v3 = sub_1BE4D18(ClassBoardBackground__PlayExClassReleaseEffectPlayer_d__42_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v4, v5, v6, v7, v8, v9);
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
    sub_1BE4D28(this, 0LL);
  SimpleAnimation__Rewind(anim, 0LL);
  v9 = SimpleAnimation__Play_64837092(anim, name, 0LL);
  v11 = ClassBoardBackground__WaitAnimationFinished((ClassBoardBackground_o *)v9, anim, name, endCallback, v10);
  UnityEngine_MonoBehaviour__StartCoroutine_70437272((UnityEngine_MonoBehaviour_o *)this, v11, 0LL);
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
  const MethodInfo *v16; // x4
  Il2CppObject *value; // x20
  System_Action_o *v18; // x21
  const MethodInfo *v19; // x4
  ClassBoardBackground___c_c *v20; // x0
  System_String_o *v21; // x21
  System_Action_o *_9__43_1; // x22
  Il2CppObject *v23; // x23
  struct ClassBoardBackground___c_StaticFields *static_fields; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v31; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v32; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_4B6A0C4 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&Method_ClassBoardBackground__PlayStartExClassReleaseEffectPlayer_b__43_0__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__GetEnumerator__, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__Dispose__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__MoveNext__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__get_Current__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_KeyValuePair_int__SimpleAnimation__get_Key__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_KeyValuePair_int__SimpleAnimation__get_Value__, v9);
    sub_1BE4ACC(&Method_ClassBoardBackground___c__PlayStartExClassReleaseEffectPlayer_b__43_1__, v10);
    sub_1BE4ACC(&ClassBoardBackground___c_TypeInfo, v11);
    sub_1BE4ACC(&StringLiteral_10719/*"Particle_CrassIcon_Ex_Released"*/, v12);
    byte_4B6A0C4 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  if ( !BasicHelper__IsNullOrEmpty(
          (System_Collections_ICollection_o *)this->fields.exClassReleaseEffectAnimationDic,
          0LL) )
  {
    exClassReleaseEffectAnimationDic = this->fields.exClassReleaseEffectAnimationDic;
    if ( !exClassReleaseEffectAnimationDic )
      sub_1BE4D28(0LL, v13);
    System_Collections_Generic_Dictionary_int__object___GetEnumerator(
      &v31,
      (System_Collections_Generic_Dictionary_int__object__o *)exClassReleaseEffectAnimationDic,
      (const MethodInfo_3250CA0 *)Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__GetEnumerator__);
    v32 = v31;
    v15 = 1;
    while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
              &v32,
              (const MethodInfo_33A0CDC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__MoveNext__) )
    {
      value = v32.fields._current.fields.value;
      if ( (v15 & 1) != 0 )
      {
        v18 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
        System_Action___ctor(
          v18,
          (Il2CppObject *)this,
          Method_ClassBoardBackground__PlayStartExClassReleaseEffectPlayer_b__43_0__,
          0LL);
        ClassBoardBackground__PlaySimpleAnimation(
          this,
          (SimpleAnimation_o *)value,
          (System_String_o *)StringLiteral_10719/*"Particle_CrassIcon_Ex_Released"*/,
          v18,
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
        v21 = (System_String_o *)StringLiteral_10719/*"Particle_CrassIcon_Ex_Released"*/;
        _9__43_1 = v20->static_fields->__9__43_1;
        if ( !_9__43_1 )
        {
          if ( !v20->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v20);
            v20 = ClassBoardBackground___c_TypeInfo;
          }
          v23 = (Il2CppObject *)v20->static_fields->__9;
          _9__43_1 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
          System_Action___ctor(
            _9__43_1,
            v23,
            Method_ClassBoardBackground___c__PlayStartExClassReleaseEffectPlayer_b__43_1__,
            0LL);
          static_fields = ClassBoardBackground___c_TypeInfo->static_fields;
          static_fields->__9__43_1 = _9__43_1;
          sub_1BE4A70(
            (PartyOrganizationUtility_o *)&static_fields->__9__43_1,
            (int64_t)_9__43_1,
            v25,
            v26,
            v27,
            v28,
            v29,
            v30);
        }
        ClassBoardBackground__PlaySimpleAnimation(this, (SimpleAnimation_o *)value, v21, _9__43_1, v16);
        v15 = 0;
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
      &v32,
      (const MethodInfo_33A0E00 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__Dispose__);
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
  const MethodInfo *v21; // x4
  int32_t v22; // [xsp+8h] [xbp-38h] BYREF
  int32_t v23; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B6A0C2 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&Method_ClassBoardBackground__PlayStartMainEffectPlayer_b__41_0__, v3);
    sub_1BE4ACC(&Method_ClassBoardEffectPlayer_GetData_int___, v4);
    sub_1BE4ACC(&int_TypeInfo, v5);
    sub_1BE4ACC(&StringLiteral_8980/*"MainTransition{0}_Release"*/, v6);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v7);
    sub_1BE4ACC(&StringLiteral_8979/*"MainTransition{0}"*/, v8);
    byte_4B6A0C2 = 1;
  }
  startMainEffectPlayer = this->fields.startMainEffectPlayer;
  if ( !startMainEffectPlayer )
    sub_1BE4D28(0LL, method);
  Data_int = ClassBoardEffectPlayer__GetData_int_(
               startMainEffectPlayer,
               (const MethodInfo_2F4CC58 *)Method_ClassBoardEffectPlayer_GetData_int___);
  if ( BasicHelper__IsNullOrEmpty(
         (System_Collections_ICollection_o *)this->fields.exClassReleaseEffectAnimationDic,
         0LL) )
  {
    v22 = Data_int;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22, v11, v12, v13);
    v15 = System_String__Format((System_String_o *)StringLiteral_8979/*"MainTransition{0}"*/, v14, 0LL);
  }
  else
  {
    v23 = Data_int;
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23, v11, v12, v13);
    v15 = System_String__Format((System_String_o *)StringLiteral_8980/*"MainTransition{0}_Release"*/, v16, 0LL);
    v18 = ClassBoardBackground__PlayExClassReleaseEffectPlayer(this, v17);
    UnityEngine_MonoBehaviour__StartCoroutine_70437272((UnityEngine_MonoBehaviour_o *)this, v18, 0LL);
  }
  mainAnimation = this->fields.mainAnimation;
  v20 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v20, (Il2CppObject *)this, Method_ClassBoardBackground__PlayStartMainEffectPlayer_b__41_0__, 0LL);
  ClassBoardBackground__PlaySimpleAnimation(this, mainAnimation, v15, v20, v21);
}


void __fastcall ClassBoardBackground__SetBoardParentAnimation(
        ClassBoardBackground_o *this,
        SimpleAnimation_o *animation,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
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

  if ( (byte_4B6A0BD & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, animation);
    byte_4B6A0BD = 1;
  }
  this->fields.boardParentAnimation = animation;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.boardParentAnimation,
    (int64_t)animation,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  boardParentAnimation = (UnityEngine_Object_o *)this->fields.boardParentAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(boardParentAnimation, 0LL, 0LL) )
  {
    boardParentAnimationClip = (UnityEngine_Object_o *)this->fields.boardParentAnimationClip;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(boardParentAnimationClip, 0LL, 0LL) )
    {
      name = (UnityEngine_Object_o *)this->fields.boardParentAnimationClip;
      if ( !name )
        goto LABEL_28;
      v14 = this->fields.boardParentAnimation;
      name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0LL);
      if ( !v14 )
        goto LABEL_28;
      name = (UnityEngine_Object_o *)SimpleAnimation__GetState(v14, (System_String_o *)name, 0LL);
      if ( !name )
      {
        v15 = this->fields.boardParentAnimationClip;
        if ( !v15 )
          goto LABEL_28;
        v16 = this->fields.boardParentAnimation;
        name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(
                                         (UnityEngine_Object_o *)this->fields.boardParentAnimationClip,
                                         0LL);
        if ( !v16 )
          goto LABEL_28;
        SimpleAnimation__AddClip(v16, v15, (System_String_o *)name, 0LL);
      }
    }
    boardParentBeforeAnimationClip = (UnityEngine_Object_o *)this->fields.boardParentBeforeAnimationClip;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
              goto LABEL_28;
            v20 = this->fields.boardParentAnimation;
            name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(
                                             (UnityEngine_Object_o *)this->fields.boardParentBeforeAnimationClip,
                                             0LL);
            if ( !v20 )
              goto LABEL_28;
            SimpleAnimation__AddClip(v20, v19, (System_String_o *)name, 0LL);
          }
          name = (UnityEngine_Object_o *)this->fields.boardParentBeforeAnimationClip;
          if ( name )
          {
            v21 = this->fields.boardParentAnimation;
            name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0LL);
            if ( v21 )
            {
              SimpleAnimation__Play_64837092(v21, (System_String_o *)name, 0LL);
              return;
            }
          }
        }
      }
LABEL_28:
      sub_1BE4D28(name, v12);
    }
  }
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
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  System_Collections_Generic_IEnumerable_TSource__o *iconTextures; // x21
  System_Func_object__bool__o *v41; // x23
  Il2CppObject *v42; // x0
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  UnityEngine_Object_o *v49; // x21
  System_Collections_Generic_IEnumerable_T__o *iconRenderers; // x21
  System_Action_object__o *v51; // x23
  System_Collections_Generic_Dictionary_int__object__o *v52; // x21
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  const MethodInfo *v59; // x2
  struct ClassBoardBackground_ExClassIconSet_array *exIconSet; // x19
  Il2CppObject *key; // x22
  __int64 v62; // x21
  __int64 v63; // x2
  __int64 v64; // x3
  __int64 v65; // x4
  Il2CppObject *v66; // x1
  System_String_o *v67; // x0
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  __int64 v74; // x2
  __int64 v75; // x3
  __int64 v76; // x4
  Il2CppObject *v77; // x1
  System_String_o *v78; // x0
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  __int64 v85; // x2
  __int64 v86; // x3
  __int64 v87; // x4
  Il2CppObject *v88; // x1
  System_String_o *v89; // x0
  int64_t v90; // x2
  int32_t v91; // w3
  System_String_o *v92; // x4
  BattleSetupInfo_o *v93; // x5
  FollowerInfo_o *v94; // x6
  PartyListViewItem_o *v95; // x7
  _BOOL8 v96; // x0
  __int64 v97; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v98; // x8
  il2cpp_array_size_t v99; // w19
  System_Func_object__bool__o **v100; // x22
  System_Func_object__bool__o **v101; // x24
  System_Func_object__bool__o **v102; // x25
  il2cpp_array_size_t v103; // w9
  ClassBoardBackground_ExClassIconSet_o *v104; // x8
  System_Func_object__bool__o *v105; // x23
  System_Collections_Generic_IEnumerable_TSource__o *textures; // x27
  int64_t v107; // x2
  int32_t v108; // w3
  System_String_o *v109; // x4
  BattleSetupInfo_o *v110; // x5
  FollowerInfo_o *v111; // x6
  PartyListViewItem_o *v112; // x7
  Il2CppObject *v113; // x0
  System_Func_object__bool__o *v114; // x26
  UnityEngine_Object_o *v115; // x23
  int64_t v116; // x2
  int32_t v117; // w3
  System_String_o *v118; // x4
  BattleSetupInfo_o *v119; // x5
  FollowerInfo_o *v120; // x6
  PartyListViewItem_o *v121; // x7
  Il2CppObject *v122; // x0
  System_Func_object__bool__o *v123; // x28
  UnityEngine_Object_o *v124; // x26
  int64_t v125; // x2
  int32_t v126; // w3
  System_String_o *v127; // x4
  BattleSetupInfo_o *v128; // x5
  FollowerInfo_o *v129; // x6
  PartyListViewItem_o *v130; // x7
  Il2CppObject *v131; // x27
  struct ClassBoardBackground_ExClassIconSet_array *v132; // x8
  ClassBoardBackground_ExClassIconSet_o *v133; // x8
  UnityEngine_Renderer_o *v134; // x0
  UnityEngine_Material_o *material; // x0
  __int64 v136; // x1
  __int64 v137; // x0
  __int64 v138; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v139; // x8
  ClassBoardBackground_ExClassIconSet_o *v140; // x8
  UnityEngine_Renderer_o *effectRenderer; // x0
  UnityEngine_Material_o *v142; // x0
  __int64 v143; // x1
  __int64 v144; // x0
  __int64 v145; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v146; // x8
  ClassBoardBackground_ExClassIconSet_o *v147; // x8
  UnityEngine_Renderer_o *onRenderer; // x0
  UnityEngine_Material_o *v149; // x0
  __int64 v150; // x1
  __int64 v151; // x0
  __int64 v152; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v153; // x8
  ClassBoardBackground_ExClassIconSet_o *v154; // x8
  UnityEngine_Renderer_o *effectGlowRenderer; // x0
  UnityEngine_Material_o *v156; // x0
  __int64 v157; // x1
  __int64 v158; // x0
  __int64 v159; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v160; // x8
  ClassBoardBackground_ExClassIconSet_o *v161; // x8
  UnityEngine_Component_o *v162; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v164; // x1
  __int64 v165; // x0
  __int64 v166; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v167; // x8
  ClassBoardBackground_ExClassIconSet_o *v168; // x8
  UnityEngine_Component_o *v169; // x0
  UnityEngine_GameObject_o *v170; // x0
  __int64 v171; // x1
  __int64 v172; // x0
  __int64 v173; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v174; // x8
  ClassBoardBackground_ExClassIconSet_o *v175; // x8
  UnityEngine_GameObject_o *releaseEffect; // x0
  UnityEngine_GameObject_o *v177; // x0
  __int64 v178; // x1
  _BOOL8 IsPlayed; // x0
  __int64 v180; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v181; // x8
  ClassBoardBackground_ExClassIconSet_o *v182; // x8
  UnityEngine_Object_o *animation; // x21
  _BOOL8 v184; // x0
  __int64 v185; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v186; // x8
  ClassBoardBackground_ExClassIconSet_o *v187; // x8
  UnityEngine_Component_o *v188; // x0
  UnityEngine_GameObject_o *v189; // x0
  __int64 v190; // x1
  __int64 v191; // x0
  __int64 v192; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v193; // x8
  ClassBoardBackground_ExClassIconSet_o *v194; // x8
  UnityEngine_Component_o *v195; // x0
  UnityEngine_GameObject_o *v196; // x0
  __int64 v197; // x1
  __int64 v198; // x0
  __int64 v199; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v200; // x8
  ClassBoardBackground_ExClassIconSet_o *v201; // x8
  struct System_Collections_Generic_Dictionary_int__SimpleAnimation__o *exClassReleaseEffectAnimationDic; // x0
  int max_length; // w8
  unsigned int v204; // w20
  ClassBoardBackground_ExClassIconSet_o *v205; // x21
  __int64 v206; // [xsp+0h] [xbp-C0h]
  Il2CppObject *classId; // [xsp+8h] [xbp-B8h]
  int v209; // [xsp+18h] [xbp-A8h] BYREF
  int v210; // [xsp+1Ch] [xbp-A4h] BYREF
  __int128 v211[2]; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v212; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4B6A0BE & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_Renderer__TypeInfo, *(_QWORD *)&baseId);
    sub_1BE4ACC(&Method_BasicHelper_ForEach_Renderer___, v6);
    sub_1BE4ACC(&ClassBoardUtility_TypeInfo, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__Add__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__SimpleAnimation___ctor__, v10);
    sub_1BE4ACC(&System_Collections_Generic_Dictionary_int__SimpleAnimation__TypeInfo, v11);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_FirstOrDefault_Texture___, v12);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__, v13);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__, v14);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__get_Current__, v15);
    sub_1BE4ACC(&System_Func_Texture__bool__TypeInfo, v16);
    sub_1BE4ACC(&int_TypeInfo, v17);
    sub_1BE4ACC(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Key__, v18);
    sub_1BE4ACC(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Value__, v19);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v20);
    sub_1BE4ACC(&Method_ClassBoardBackground___c__DisplayClass37_0__SetClassIcon_b__0__, v21);
    sub_1BE4ACC(&Method_ClassBoardBackground___c__DisplayClass37_0__SetClassIcon_b__1__, v22);
    sub_1BE4ACC(&ClassBoardBackground___c__DisplayClass37_0_TypeInfo, v23);
    sub_1BE4ACC(&Method_ClassBoardBackground___c__DisplayClass37_1__SetClassIcon_b__2__, v24);
    sub_1BE4ACC(&Method_ClassBoardBackground___c__DisplayClass37_1__SetClassIcon_b__3__, v25);
    sub_1BE4ACC(&Method_ClassBoardBackground___c__DisplayClass37_1__SetClassIcon_b__4__, v26);
    sub_1BE4ACC(&ClassBoardBackground___c__DisplayClass37_1_TypeInfo, v27);
    sub_1BE4ACC(&StringLiteral_4594/*"ClassIconEx_off_{0}"*/, v28);
    sub_1BE4ACC(&StringLiteral_4595/*"ClassIconEx_on_{0}"*/, v29);
    sub_1BE4ACC(&StringLiteral_4593/*"ClassIconEx_ef_glow_{0}"*/, v30);
    byte_4B6A0BE = 1;
  }
  memset(&v212, 0, 32);
  v31 = sub_1BE4D18(ClassBoardBackground___c__DisplayClass37_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v31, 0LL);
  if ( !v31 )
    goto LABEL_162;
  *(_DWORD *)(v31 + 16) = iconId;
  *(_QWORD *)(v31 + 24) = this;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v31 + 24), (int64_t)this, v34, v35, v36, v37, v38, v39);
  iconTextures = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.iconTextures;
  v41 = (System_Func_object__bool__o *)sub_1BE4D18(System_Func_Texture__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v41,
    (Il2CppObject *)v31,
    Method_ClassBoardBackground___c__DisplayClass37_0__SetClassIcon_b__0__,
    0LL);
  v42 = System_Linq_Enumerable__FirstOrDefault_object__49793520(
          iconTextures,
          (System_Func_TSource__bool__o *)v41,
          (const MethodInfo_2F7C9F0 *)Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
  *(_QWORD *)(v31 + 32) = v42;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v31 + 32), (int64_t)v42, v43, v44, v45, v46, v47, v48);
  v49 = *(UnityEngine_Object_o **)(v31 + 32);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v49, 0LL, 0LL) )
    return;
  iconRenderers = (System_Collections_Generic_IEnumerable_T__o *)this->fields.iconRenderers;
  v51 = (System_Action_object__o *)sub_1BE4D18(System_Action_Renderer__TypeInfo);
  System_Action_object____ctor(
    v51,
    (Il2CppObject *)v31,
    Method_ClassBoardBackground___c__DisplayClass37_0__SetClassIcon_b__1__,
    0LL);
  BasicHelper__ForEach_object_(
    iconRenderers,
    (System_Action_T__o *)v51,
    (const MethodInfo_2F4606C *)Method_BasicHelper_ForEach_Renderer___);
  v52 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BE4D18(System_Collections_Generic_Dictionary_int__SimpleAnimation__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v52,
    (const MethodInfo_324FE94 *)Method_System_Collections_Generic_Dictionary_int__SimpleAnimation___ctor__);
  this->fields.exClassReleaseEffectAnimationDic = (struct System_Collections_Generic_Dictionary_int__SimpleAnimation__o *)v52;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.exClassReleaseEffectAnimationDic,
    (int64_t)v52,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  exIconSet = this->fields.exIconSet;
  if ( !exIconSet )
LABEL_162:
    sub_1BE4D28(offRenderer, v33);
  if ( !*(_QWORD *)&exIconSet->max_length )
    return;
  if ( (baseId & 0xFFFFFFFE) != 8 )
  {
    max_length = exIconSet->max_length;
    if ( max_length < 1 )
      return;
    v204 = 0;
    while ( 1 )
    {
      if ( v204 >= max_length )
        sub_1BE4D30(offRenderer, v33);
      v205 = exIconSet->m_Items[v204];
      if ( !v205 )
        break;
      offRenderer = (UnityEngine_Component_o *)v205->fields.offRenderer;
      if ( !offRenderer )
        break;
      offRenderer = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(offRenderer, 0LL);
      if ( !offRenderer )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)offRenderer, 0, 0LL);
      offRenderer = (UnityEngine_Component_o *)v205->fields.onRenderer;
      if ( !offRenderer )
        break;
      offRenderer = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(offRenderer, 0LL);
      if ( !offRenderer )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)offRenderer, 0, 0LL);
      offRenderer = (UnityEngine_Component_o *)v205->fields.releaseEffect;
      if ( !offRenderer )
        break;
      offRenderer = (UnityEngine_Component_o *)UnityEngine_GameObject__get_gameObject(
                                                 (UnityEngine_GameObject_o *)offRenderer,
                                                 0LL);
      if ( !offRenderer )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)offRenderer, 0, 0LL);
      max_length = exIconSet->max_length;
      if ( (int)++v204 >= max_length )
        return;
    }
    goto LABEL_162;
  }
  offRenderer = (UnityEngine_Component_o *)ClassBoardBackground__GetIconIdList(
                                             (ClassBoardBackground_o *)offRenderer,
                                             baseId,
                                             v59);
  if ( !offRenderer )
    goto LABEL_162;
  System_Collections_Generic_Dictionary_int__bool___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v211,
    (System_Collections_Generic_Dictionary_int__bool__o *)offRenderer,
    (const MethodInfo_3242230 *)Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
  *(_OWORD *)&v212.fields._dictionary = v211[0];
  v212.fields._current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v211[1];
LABEL_12:
  while ( System_Collections_Generic_Dictionary_Enumerator_int__bool___MoveNext(
            &v212,
            (const MethodInfo_339E1D4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__) )
  {
    key = v212.fields._current.fields.key;
    v62 = sub_1BE4D18(ClassBoardBackground___c__DisplayClass37_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v62, 0LL);
    LODWORD(v211[0]) = (_DWORD)key;
    v66 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v211, v63, v64, v65);
    v67 = System_String__Format((System_String_o *)StringLiteral_4595/*"ClassIconEx_on_{0}"*/, v66, 0LL);
    if ( !v62 )
      sub_1BE4D28(v67, v67);
    *(_QWORD *)(v62 + 24) = v67;
    sub_1BE4A70((PartyOrganizationUtility_o *)(v62 + 24), (int64_t)v67, v68, v69, v70, v71, v72, v73);
    v210 = (int)key;
    v77 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v210, v74, v75, v76);
    v78 = System_String__Format((System_String_o *)StringLiteral_4594/*"ClassIconEx_off_{0}"*/, v77, 0LL);
    *(_QWORD *)(v62 + 16) = v78;
    sub_1BE4A70((PartyOrganizationUtility_o *)(v62 + 16), (int64_t)v78, v79, v80, v81, v82, v83, v84);
    v209 = (int)key;
    v88 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v209, v85, v86, v87);
    classId = key;
    v89 = System_String__Format((System_String_o *)StringLiteral_4593/*"ClassIconEx_ef_glow_{0}"*/, v88, 0LL);
    *(_QWORD *)(v62 + 32) = v89;
    sub_1BE4A70((PartyOrganizationUtility_o *)(v62 + 32), (int64_t)v89, v90, v91, v92, v93, v94, v95);
    v98 = this->fields.exIconSet;
    if ( !v98 )
LABEL_94:
      sub_1BE4D28(v96, v97);
    v99 = 0;
    v100 = (System_Func_object__bool__o **)(v62 + 40);
    v101 = (System_Func_object__bool__o **)(v62 + 48);
    v102 = (System_Func_object__bool__o **)(v62 + 56);
    v206 = (unsigned __int64)classId & 0xFF00000000LL;
    while ( 1 )
    {
      v103 = v98->max_length;
      if ( (int)v99 >= (int)v103 )
        break;
      if ( v99 >= v103 )
        sub_1BE4D30(v96, v97);
      v104 = v98->m_Items[v99];
      if ( !v104 )
        sub_1BE4D28(v96, v97);
      v105 = *v100;
      textures = (System_Collections_Generic_IEnumerable_TSource__o *)v104->fields.textures;
      if ( !*v100 )
      {
        v105 = (System_Func_object__bool__o *)sub_1BE4D18(System_Func_Texture__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v105,
          (Il2CppObject *)v62,
          Method_ClassBoardBackground___c__DisplayClass37_1__SetClassIcon_b__2__,
          0LL);
        *v100 = v105;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v62 + 40), (int64_t)v105, v107, v108, v109, v110, v111, v112);
      }
      v113 = System_Linq_Enumerable__FirstOrDefault_object__49793520(
               textures,
               (System_Func_TSource__bool__o *)v105,
               (const MethodInfo_2F7C9F0 *)Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
      v114 = *v101;
      v115 = (UnityEngine_Object_o *)v113;
      if ( !*v101 )
      {
        v114 = (System_Func_object__bool__o *)sub_1BE4D18(System_Func_Texture__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v114,
          (Il2CppObject *)v62,
          Method_ClassBoardBackground___c__DisplayClass37_1__SetClassIcon_b__3__,
          0LL);
        *v101 = v114;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v62 + 48), (int64_t)v114, v116, v117, v118, v119, v120, v121);
      }
      v122 = System_Linq_Enumerable__FirstOrDefault_object__49793520(
               textures,
               (System_Func_TSource__bool__o *)v114,
               (const MethodInfo_2F7C9F0 *)Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
      v123 = *v102;
      v124 = (UnityEngine_Object_o *)v122;
      if ( !*v102 )
      {
        v123 = (System_Func_object__bool__o *)sub_1BE4D18(System_Func_Texture__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v123,
          (Il2CppObject *)v62,
          Method_ClassBoardBackground___c__DisplayClass37_1__SetClassIcon_b__4__,
          0LL);
        *v102 = v123;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v62 + 56), (int64_t)v123, v125, v126, v127, v128, v129, v130);
      }
      v131 = System_Linq_Enumerable__FirstOrDefault_object__49793520(
               textures,
               (System_Func_TSource__bool__o *)v123,
               (const MethodInfo_2F7C9F0 *)Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v96 = UnityEngine_Object__op_Inequality(v124, 0LL, 0LL);
      if ( v96 )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v96 = UnityEngine_Object__op_Inequality(v115, 0LL, 0LL);
        if ( v96 )
        {
          v132 = this->fields.exIconSet;
          if ( !v132 )
            sub_1BE4D28(v96, v97);
          if ( v99 >= v132->max_length )
            sub_1BE4D30(v96, v97);
          v133 = v132->m_Items[v99];
          if ( !v133 )
            sub_1BE4D28(v96, v97);
          v134 = v133->fields.offRenderer;
          if ( !v134 )
            sub_1BE4D28(0LL, v97);
          material = UnityEngine_Renderer__get_material(v134, 0LL);
          if ( !material )
            sub_1BE4D28(0LL, v136);
          UnityEngine_Material__SetTexture(
            material,
            this->fields.iconMaterialPropertyName,
            (UnityEngine_Texture_o *)v115,
            0LL);
          v139 = this->fields.exIconSet;
          if ( !v139 )
            sub_1BE4D28(v137, v138);
          if ( v99 >= v139->max_length )
            sub_1BE4D30(v137, v138);
          v140 = v139->m_Items[v99];
          if ( !v140 )
            sub_1BE4D28(v137, v138);
          effectRenderer = v140->fields.effectRenderer;
          if ( !effectRenderer )
            sub_1BE4D28(0LL, v138);
          v142 = UnityEngine_Renderer__get_material(effectRenderer, 0LL);
          if ( !v142 )
            sub_1BE4D28(0LL, v143);
          UnityEngine_Material__SetTexture(
            v142,
            this->fields.iconMaterialPropertyName,
            (UnityEngine_Texture_o *)v115,
            0LL);
          v146 = this->fields.exIconSet;
          if ( !v146 )
            sub_1BE4D28(v144, v145);
          if ( v99 >= v146->max_length )
            sub_1BE4D30(v144, v145);
          v147 = v146->m_Items[v99];
          if ( !v147 )
            sub_1BE4D28(v144, v145);
          onRenderer = v147->fields.onRenderer;
          if ( !onRenderer )
            sub_1BE4D28(0LL, v145);
          v149 = UnityEngine_Renderer__get_material(onRenderer, 0LL);
          if ( !v149 )
            sub_1BE4D28(0LL, v150);
          UnityEngine_Material__SetTexture(
            v149,
            this->fields.iconMaterialPropertyName,
            (UnityEngine_Texture_o *)v124,
            0LL);
          v153 = this->fields.exIconSet;
          if ( !v153 )
            sub_1BE4D28(v151, v152);
          if ( v99 >= v153->max_length )
            sub_1BE4D30(v151, v152);
          v154 = v153->m_Items[v99];
          if ( !v154 )
            sub_1BE4D28(v151, v152);
          effectGlowRenderer = v154->fields.effectGlowRenderer;
          if ( !effectGlowRenderer )
            sub_1BE4D28(0LL, v152);
          v156 = UnityEngine_Renderer__get_material(effectGlowRenderer, 0LL);
          if ( !v156 )
            sub_1BE4D28(0LL, v157);
          UnityEngine_Material__SetTexture(
            v156,
            this->fields.iconMaterialPropertyName,
            (UnityEngine_Texture_o *)v131,
            0LL);
          v160 = this->fields.exIconSet;
          if ( !v160 )
            sub_1BE4D28(v158, v159);
          if ( v99 >= v160->max_length )
            sub_1BE4D30(v158, v159);
          v161 = v160->m_Items[v99];
          if ( !v161 )
            sub_1BE4D28(v158, v159);
          v162 = (UnityEngine_Component_o *)v161->fields.offRenderer;
          if ( !v162 )
            sub_1BE4D28(0LL, v159);
          gameObject = UnityEngine_Component__get_gameObject(v162, 0LL);
          if ( !gameObject )
            sub_1BE4D28(0LL, v164);
          UnityEngine_GameObject__SetActive(gameObject, v206 == 0, 0LL);
          v167 = this->fields.exIconSet;
          if ( !v167 )
            sub_1BE4D28(v165, v166);
          if ( v99 >= v167->max_length )
            sub_1BE4D30(v165, v166);
          v168 = v167->m_Items[v99];
          if ( !v168 )
            sub_1BE4D28(v165, v166);
          v169 = (UnityEngine_Component_o *)v168->fields.onRenderer;
          if ( !v169 )
            sub_1BE4D28(0LL, v166);
          v170 = UnityEngine_Component__get_gameObject(v169, 0LL);
          if ( !v170 )
            sub_1BE4D28(0LL, v171);
          UnityEngine_GameObject__SetActive(v170, v206 != 0, 0LL);
          v174 = this->fields.exIconSet;
          if ( !v174 )
            sub_1BE4D28(v172, v173);
          if ( v99 >= v174->max_length )
            sub_1BE4D30(v172, v173);
          v175 = v174->m_Items[v99];
          if ( !v175 )
            sub_1BE4D28(v172, v173);
          releaseEffect = v175->fields.releaseEffect;
          if ( !releaseEffect )
            sub_1BE4D28(0LL, v173);
          v177 = UnityEngine_GameObject__get_gameObject(releaseEffect, 0LL);
          if ( !v177 )
            sub_1BE4D28(0LL, v178);
          UnityEngine_GameObject__SetActive(v177, 0, 0LL);
          if ( v206 )
          {
            if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
            IsPlayed = ClassBoardUtility__IsPlayedExClassReleaseEffect((int32_t)classId, 0LL);
            if ( !IsPlayed )
            {
              v181 = this->fields.exIconSet;
              if ( !v181 )
                sub_1BE4D28(IsPlayed, v180);
              if ( v99 >= v181->max_length )
                sub_1BE4D30(IsPlayed, v180);
              v182 = v181->m_Items[v99];
              if ( !v182 )
                sub_1BE4D28(IsPlayed, v180);
              animation = (UnityEngine_Object_o *)v182->fields.animation;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              v184 = UnityEngine_Object__op_Inequality(animation, 0LL, 0LL);
              if ( v184 )
              {
                v186 = this->fields.exIconSet;
                if ( !v186 )
                  sub_1BE4D28(v184, v185);
                if ( v99 >= v186->max_length )
                  sub_1BE4D30(v184, v185);
                v187 = v186->m_Items[v99];
                if ( !v187 )
                  sub_1BE4D28(v184, v185);
                v188 = (UnityEngine_Component_o *)v187->fields.offRenderer;
                if ( !v188 )
                  sub_1BE4D28(0LL, v185);
                v189 = UnityEngine_Component__get_gameObject(v188, 0LL);
                if ( !v189 )
                  sub_1BE4D28(0LL, v190);
                UnityEngine_GameObject__SetActive(v189, 1, 0LL);
                v193 = this->fields.exIconSet;
                if ( !v193 )
                  sub_1BE4D28(v191, v192);
                if ( v99 >= v193->max_length )
                  sub_1BE4D30(v191, v192);
                v194 = v193->m_Items[v99];
                if ( !v194 )
                  sub_1BE4D28(v191, v192);
                v195 = (UnityEngine_Component_o *)v194->fields.onRenderer;
                if ( !v195 )
                  sub_1BE4D28(0LL, v192);
                v196 = UnityEngine_Component__get_gameObject(v195, 0LL);
                if ( !v196 )
                  sub_1BE4D28(0LL, v197);
                UnityEngine_GameObject__SetActive(v196, 0, 0LL);
                v200 = this->fields.exIconSet;
                if ( !v200 )
                  sub_1BE4D28(v198, v199);
                if ( v99 >= v200->max_length )
                  sub_1BE4D30(v198, v199);
                v201 = v200->m_Items[v99];
                if ( !v201 )
                  sub_1BE4D28(v198, v199);
                exClassReleaseEffectAnimationDic = this->fields.exClassReleaseEffectAnimationDic;
                if ( !exClassReleaseEffectAnimationDic )
                  sub_1BE4D28(0LL, classId);
                System_Collections_Generic_Dictionary_int__object___Add(
                  (System_Collections_Generic_Dictionary_int__object__o *)exClassReleaseEffectAnimationDic,
                  (int32_t)classId,
                  (Il2CppObject *)v201->fields.animation,
                  (const MethodInfo_3250868 *)Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__Add__);
              }
            }
          }
          goto LABEL_12;
        }
      }
      ++v99;
      v98 = this->fields.exIconSet;
      if ( !v98 )
        goto LABEL_94;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__bool___Dispose(
    &v212,
    (const MethodInfo_339E2DC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
}


void __fastcall ClassBoardBackground__SetShowBoardCallback(
        ClassBoardBackground_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.showBoardCallback = callback;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.showBoardCallback,
    (int64_t)callback,
    (int64_t)method,
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
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7

  if ( (byte_4B6A0C5 & 1) == 0 )
  {
    sub_1BE4ACC(&ClassBoardBackground__WaitAnimationFinished_d__45_TypeInfo, anim);
    byte_4B6A0C5 = 1;
  }
  v8 = sub_1BE4D18(ClassBoardBackground__WaitAnimationFinished_d__45_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  *(_DWORD *)(v8 + 16) = 0;
  *(_QWORD *)(v8 + 32) = anim;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v8 + 32), (int64_t)anim, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v8 + 40) = name;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v8 + 40), (int64_t)name, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v8 + 48) = endCallback;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v8 + 48), (int64_t)endCallback, v21, v22, v23, v24, v25, v26);
  return (System_Collections_IEnumerator_o *)v8;
}


void __fastcall ClassBoardBackground___PlayStartExClassReleaseEffectPlayer_b__43_0(
        ClassBoardBackground_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_int__object__o *v5; // x0
  PartyOrganizationUtility_o *p_exClassReleaseEffectAnimationDic; // x19
  struct System_Collections_Generic_Dictionary_int__SimpleAnimation__o *exClassReleaseEffectAnimationDic; // t1
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  System_Int32_array *v9; // x20
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4B6A0C8 & 1) == 0 )
  {
    sub_1BE4ACC(&ClassBoardUtility_TypeInfo, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__get_Keys__, v3);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_ToArray_int___, v4);
    byte_4B6A0C8 = 1;
  }
  exClassReleaseEffectAnimationDic = this->fields.exClassReleaseEffectAnimationDic;
  p_exClassReleaseEffectAnimationDic = (PartyOrganizationUtility_o *)&this->fields.exClassReleaseEffectAnimationDic;
  v5 = (System_Collections_Generic_Dictionary_int__object__o *)exClassReleaseEffectAnimationDic;
  if ( !exClassReleaseEffectAnimationDic )
    sub_1BE4D28(0LL, method);
  Keys = System_Collections_Generic_Dictionary_int__object___get_Keys(
           v5,
           (const MethodInfo_3250528 *)Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__get_Keys__);
  v9 = System_Linq_Enumerable__ToArray_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
         (const MethodInfo_2F9293C *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
  ClassBoardUtility__SavePlayedExClassReleaseEffect(v9, 0LL);
  p_exClassReleaseEffectAnimationDic->klass = 0LL;
  sub_1BE4A70(p_exClassReleaseEffectAnimationDic, 0LL, v10, v11, v12, v13, v14, v15);
}


void __fastcall ClassBoardBackground___PlayStartMainEffectPlayer_b__41_0(
        ClassBoardBackground_o *this,
        const MethodInfo *method)
{
  ClassBoardEffectPlayer_o *startMainEffectPlayer; // x0

  startMainEffectPlayer = this->fields.startMainEffectPlayer;
  if ( !startMainEffectPlayer )
    sub_1BE4D28(0LL, method);
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
  int32_t _1__state; // w8
  struct ClassBoardBackground_o *_4__this; // x0
  float exClassReleaseEffectStartSec; // s8
  UnityEngine_WaitForSeconds_o *v6; // x20
  Il2CppObject **p__2__current; // x19
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  bool result; // w0

  if ( (byte_4B6A0CC & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_WaitForSeconds_TypeInfo, method);
    byte_4B6A0CC = 1;
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
      v6 = (UnityEngine_WaitForSeconds_o *)sub_1BE4D18(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v6, exClassReleaseEffectStartSec, 0LL);
      this->fields.__2__current = (Il2CppObject *)v6;
      p__2__current = &this->fields.__2__current;
      sub_1BE4A70((PartyOrganizationUtility_o *)p__2__current, (int64_t)v6, v8, v9, v10, v11, v12, v13);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
LABEL_10:
    sub_1BE4D28(_4__this, method);
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

  v2 = sub_1BE4AE0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BE4D18(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BE4AE0(&Method_ClassBoardBackground__PlayExClassReleaseEffectPlayer_d__42_System_Collections_IEnumerator_Reset__);
  sub_1BE4BF4(v3, v4);
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
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v6; // x20
  __int64 v7; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 p_method; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  bool result; // w0
  Il2CppObject **p__2__current; // x19

  if ( (byte_4B6A0CD & 1) == 0 )
  {
    sub_1BE4ACC(&SimpleAnimation_State_TypeInfo, method);
    byte_4B6A0CD = 1;
  }
  if ( this->fields.__1__state > 1u )
    return 0;
  anim = this->fields.anim;
  this->fields.__1__state = -1;
  if ( !anim )
    sub_1BE4D28(0LL, method);
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
    p_method = sub_1C36AAC(State, SimpleAnimation_State_TypeInfo, 5LL);
  }
  if ( (*(float (__fastcall **)(SimpleAnimation_State_o *, _QWORD))p_method)(v6, *(_QWORD *)(p_method + 8)) >= 1.0 )
  {
LABEL_13:
    ActionExtensions__Call(this->fields.endCallback, 0LL);
    return 0;
  }
  this->fields.__2__current = 0LL;
  p__2__current = &this->fields.__2__current;
  sub_1BE4A70((PartyOrganizationUtility_o *)p__2__current, 0LL, v10, v11, v12, v13, v14, v15);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
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

  v2 = sub_1BE4AE0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BE4D18(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BE4AE0(&Method_ClassBoardBackground__WaitAnimationFinished_d__45_System_Collections_IEnumerator_Reset__);
  sub_1BE4BF4(v3, v4);
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
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B6A0C9 & 1) == 0 )
  {
    sub_1BE4ACC(&ClassBoardBackground___c_TypeInfo, v1);
    byte_4B6A0C9 = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(ClassBoardBackground___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ClassBoardBackground___c_TypeInfo->static_fields->__9 = (struct ClassBoardBackground___c_o *)v2;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)ClassBoardBackground___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1BE4D28(this, a);
  return a->fields.classId - b->fields.classId;
}


void __fastcall ClassBoardBackground___c___OnDestroy_b__40_0(
        ClassBoardBackground___c_o *this,
        UnityEngine_Renderer_o *x,
        const MethodInfo *method)
{
  UnityEngine_Object_o *material; // x19

  if ( (byte_4B6A0CA & 1) == 0 )
  {
    this = (ClassBoardBackground___c_o *)sub_1BE4ACC(&UnityEngine_Object_TypeInfo, x);
    byte_4B6A0CA = 1;
  }
  if ( !x )
    sub_1BE4D28(this, x);
  material = (UnityEngine_Object_o *)UnityEngine_Renderer__get_material(x, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_70452000(material, 0LL);
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
  __int64 v5; // x1
  System_String_o *name; // x20
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  Il2CppObject *v10; // x0
  System_String_o *v11; // x0
  int32_t iconId; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_4B6A0CB & 1) == 0 )
  {
    sub_1BE4ACC(&int_TypeInfo, x);
    this = (ClassBoardBackground___c__DisplayClass37_0_o *)sub_1BE4ACC(&StringLiteral_4597/*"ClassIcon{0}"*/, v5);
    byte_4B6A0CB = 1;
  }
  if ( !x )
    sub_1BE4D28(this, x);
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)x, 0LL);
  iconId = v4->fields.iconId;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId, v7, v8, v9);
  v11 = System_String__Format((System_String_o *)StringLiteral_4597/*"ClassIcon{0}"*/, v10, 0LL);
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
    sub_1BE4D28(this, x);
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
    sub_1BE4D28(this, 0LL);
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
    sub_1BE4D28(this, 0LL);
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
    sub_1BE4D28(this, 0LL);
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)x, 0LL);
  return System_String__op_Equality(name, this->fields.glowIconName, 0LL);
}