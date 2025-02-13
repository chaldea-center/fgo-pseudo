void __fastcall ClassBoardBackground___ctor(ClassBoardBackground_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v9; // x1

  if ( (byte_4BDFA9F & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_16540/*"_MainTex"*/);
    byte_4BDFA9F = 1;
  }
  v9 = StringLiteral_16540/*"_MainTex"*/;
  this->fields.iconMaterialPropertyName = (struct System_String_o *)StringLiteral_16540/*"_MainTex"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.iconMaterialPropertyName, v9, v2, v3, v4, v5, v6, v7);
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
    sub_1C22094(0LL, value);
  UnityEngine_GameObject__SetActive(earthAccessoriesObject, value, 0LL);
}


void __fastcall ClassBoardBackground__Awake(ClassBoardBackground_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x0
  __int64 v4; // x1
  System_String_o *name; // x20
  ClassBoardEffectPlayer_o *v6; // x21
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  struct ClassBoardEffectPlayer_o *startMainEffectPlayer; // x20
  System_Action_o *v14; // x21
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7

  if ( (byte_4BDFA93 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_ClassBoardBackground_PlayStartMainEffectPlayer__);
    sub_1C21E38(&ClassBoardEffectPlayer_TypeInfo);
    byte_4BDFA93 = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_6;
  name = UnityEngine_Object__get_name(gameObject, 0LL);
  v6 = (ClassBoardEffectPlayer_o *)sub_1C22084(ClassBoardEffectPlayer_TypeInfo);
  ClassBoardEffectPlayer___ctor_45839716(v6, name, 0LL);
  this->fields.startMainEffectPlayer = v6;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.startMainEffectPlayer, (int64_t)v6, v7, v8, v9, v10, v11, v12);
  startMainEffectPlayer = this->fields.startMainEffectPlayer;
  v14 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_ClassBoardBackground_PlayStartMainEffectPlayer__, 0LL);
  if ( !startMainEffectPlayer )
LABEL_6:
    sub_1C22094(gameObject, v4);
  startMainEffectPlayer->fields.playCallback = v14;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&startMainEffectPlayer->fields.playCallback,
    (int64_t)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
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

  if ( (byte_4BDFA9E & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDFA9E = 1;
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
        sub_1C22094(name, v5);
      }
      SimpleAnimation__Play_65253852(v7, (System_String_o *)name, 0LL);
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
  sub_1C21DDC(p_showBoardCallback, 0LL, v3, v4, v5, v6, v7, v8);
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

  if ( (byte_4BDFA94 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDFA94 = 1;
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
    sub_1C22094(classBoardViewCamera, camera);
  }
  UnityEngine_GameObject__SetActive(v9, (unsigned __int8)classBoardViewCamera & 1, 0LL);
  this->fields.currentCamera = camera;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.currentCamera, (int64_t)camera, v10, v11, v12, v13, v14, v15);
}


System_Collections_Generic_Dictionary_int__bool__o *__fastcall ClassBoardBackground__GetIconIdList(
        ClassBoardBackground_o *this,
        int32_t baseId,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__bool__o *v4; // x19
  void *Master_object; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *v7; // x20
  System_Comparison_T__o *v8; // x21
  Il2CppObject *v9; // x22
  struct ClassBoardBackground___c_StaticFields *static_fields; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  DataMasterBase_TMaster__TEntity__PKType__o *v17; // x20
  __int64 v18; // x1
  BalanceConfig_c *v19; // x0
  ClassBoardClassEntity_o *current; // x21
  BalanceConfig_c *v21; // x0
  __int64 v22; // x1
  _BOOL8 v23; // x0
  __int64 v24; // x1
  int32_t monitor_high; // w22
  _BOOL8 IsOpen; // x0
  __int64 v27; // x1
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+0h] [xbp-90h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+20h] [xbp-70h] BYREF
  System_Collections_Generic_List_ClassBoardClassEntity__o *entitys; // [xsp+38h] [xbp-58h] BYREF

  if ( (byte_4BDFA97 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&System_Comparison_ClassBoardClassEntity__TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_ClassBoardClassMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__bool__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_int__bool__TypeInfo);
    sub_1C21E38(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ClassBoardClassEntity__Sort__);
    sub_1C21E38(&Method_ClassBoardBackground___c__GetIconIdList_b__38_0__);
    sub_1C21E38(&ClassBoardBackground___c_TypeInfo);
    byte_4BDFA97 = 1;
  }
  entitys = 0LL;
  memset(&v31, 0, sizeof(v31));
  entity = 0LL;
  v4 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_1C22084(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v4,
    (const MethodInfo_32A64B0 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
  if ( !Master_object )
    goto LABEL_37;
  if ( !ClassBoardClassMaster__TryGetEntityList((ClassBoardClassMaster_o *)Master_object, &entitys, baseId, 0LL) )
    return v4;
  v7 = (System_Collections_Generic_List_object__o *)entitys;
  Master_object = ClassBoardBackground___c_TypeInfo;
  if ( !ClassBoardBackground___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardBackground___c_TypeInfo);
    Master_object = ClassBoardBackground___c_TypeInfo;
  }
  v8 = *(System_Comparison_T__o **)(*((_QWORD *)Master_object + 23) + 8LL);
  if ( !v8 )
  {
    if ( !*((_DWORD *)Master_object + 56) )
    {
      j_il2cpp_runtime_class_init_0(Master_object);
      Master_object = ClassBoardBackground___c_TypeInfo;
    }
    v9 = (Il2CppObject *)**((_QWORD **)Master_object + 23);
    v8 = (System_Comparison_T__o *)sub_1C22084(System_Comparison_ClassBoardClassEntity__TypeInfo);
    System_Comparison_object____ctor(v8, v9, Method_ClassBoardBackground___c__GetIconIdList_b__38_0__, 0LL);
    static_fields = ClassBoardBackground___c_TypeInfo->static_fields;
    static_fields->__9__38_0 = (struct System_Comparison_ClassBoardClassEntity__o *)v8;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__38_0, (int64_t)v8, v11, v12, v13, v14, v15, v16);
  }
  if ( !v7 )
    goto LABEL_37;
  System_Collections_Generic_List_object___Sort_56953720(
    v7,
    v8,
    (const MethodInfo_3650B78 *)Method_System_Collections_Generic_List_ClassBoardClassEntity__Sort__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantClassMaster___);
  if ( !entitys )
LABEL_37:
    sub_1C22094(Master_object, v6);
  v17 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v29,
    (System_Collections_Generic_List_object__o *)entitys,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__);
  v31 = v29;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v31,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__) )
  {
    v19 = BalanceConfig_TypeInfo;
    current = (ClassBoardClassEntity_o *)v31.fields._current;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    if ( !current )
      sub_1C22094(v19, v18);
    v21 = (BalanceConfig_c *)System_Linq_Enumerable__Contains_int_(
                               (System_Collections_Generic_IEnumerable_TSource__o *)BalanceConfig_TypeInfo->static_fields->PlayableBeastClassIds,
                               current->fields.classId,
                               (const MethodInfo_2FC7E00 *)Method_System_Linq_Enumerable_Contains_int___);
    if ( ((unsigned __int8)v21 & 1) != 0 )
    {
      v21 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v21 = BalanceConfig_TypeInfo;
      }
      if ( v21->static_fields->PlayableBeastBaseClassId != current->fields.classId )
        continue;
    }
    if ( !v17 )
      sub_1C22094(v21, v22);
    v23 = DataMasterBase_object__object__int___TryGetEntity(
            v17,
            &entity,
            current->fields.classId,
            (const MethodInfo_325BE14 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    if ( v23 )
    {
      if ( !entity )
        sub_1C22094(v23, v24);
      monitor_high = HIDWORD(entity[2].monitor);
      IsOpen = ClassBoardClassEntity__IsOpen(current, 0LL);
      if ( !v4 )
        sub_1C22094(IsOpen, v27);
      System_Collections_Generic_Dictionary_int__bool___Add(
        v4,
        monitor_high,
        IsOpen,
        (const MethodInfo_32A6E88 *)Method_System_Collections_Generic_Dictionary_int__bool__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v31,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__);
  return v4;
}


UnityEngine_RenderTexture_o *__fastcall ClassBoardBackground__GetRenderTexture(
        ClassBoardBackground_o *this,
        const MethodInfo *method)
{
  UnityEngine_Camera_o *currentCamera; // x0

  currentCamera = this->fields.currentCamera;
  if ( !currentCamera )
    sub_1C22094(0LL, method);
  return UnityEngine_Camera__get_targetTexture(currentCamera, 0LL);
}


void __fastcall ClassBoardBackground__OnDestroy(ClassBoardBackground_o *this, const MethodInfo *method)
{
  ClassBoardBackground___c_c *v3; // x0
  System_Collections_Generic_IEnumerable_T__o *iconRenderers; // x19
  System_Action_object__o *_9__40_0; // x20
  Il2CppObject *v6; // x21
  struct ClassBoardBackground___c_StaticFields *static_fields; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4BDFA99 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_Renderer__TypeInfo);
    sub_1C21E38(&Method_BasicHelper_ForEach_Renderer___);
    sub_1C21E38(&Method_ClassBoardBackground___c__OnDestroy_b__40_0__);
    sub_1C21E38(&ClassBoardBackground___c_TypeInfo);
    byte_4BDFA99 = 1;
  }
  v3 = ClassBoardBackground___c_TypeInfo;
  iconRenderers = (System_Collections_Generic_IEnumerable_T__o *)this->fields.iconRenderers;
  if ( !ClassBoardBackground___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardBackground___c_TypeInfo);
    v3 = ClassBoardBackground___c_TypeInfo;
  }
  _9__40_0 = (System_Action_object__o *)v3->static_fields->__9__40_0;
  if ( !_9__40_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = ClassBoardBackground___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__40_0 = (System_Action_object__o *)sub_1C22084(System_Action_Renderer__TypeInfo);
    System_Action_object____ctor(_9__40_0, v6, Method_ClassBoardBackground___c__OnDestroy_b__40_0__, 0LL);
    static_fields = ClassBoardBackground___c_TypeInfo->static_fields;
    static_fields->__9__40_0 = (struct System_Action_Renderer__o *)_9__40_0;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__40_0, (int64_t)_9__40_0, v8, v9, v10, v11, v12, v13);
  }
  BasicHelper__ForEach_object_(
    iconRenderers,
    (System_Action_T__o *)_9__40_0,
    (const MethodInfo_2F9CD60 *)Method_BasicHelper_ForEach_Renderer___);
}


void __fastcall ClassBoardBackground__PlayBoardParentBeforeAnimation(
        ClassBoardBackground_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *boardParentAnimation; // x20
  UnityEngine_Object_o *boardParentBeforeAnimationClip; // x20
  __int64 v5; // x1
  SimpleAnimation_o *v6; // x0

  if ( (byte_4BDFA98 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDFA98 = 1;
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
        sub_1C22094(v6, v5);
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

  if ( (byte_4BDFA9B & 1) == 0 )
  {
    sub_1C21E38(&ClassBoardBackground__PlayExClassReleaseEffectPlayer_d__42_TypeInfo);
    byte_4BDFA9B = 1;
  }
  v3 = sub_1C22084(ClassBoardBackground__PlayExClassReleaseEffectPlayer_d__42_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v4, v5, v6, v7, v8, v9);
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
    sub_1C22094(this, 0LL);
  SimpleAnimation__Rewind(anim, 0LL);
  v9 = SimpleAnimation__Play_65253852(anim, name, 0LL);
  v11 = ClassBoardBackground__WaitAnimationFinished((ClassBoardBackground_o *)v9, anim, name, endCallback, v10);
  UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)this, v11, 0LL);
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
  System_String_o *v11; // x21
  System_Action_o *_9__43_1; // x22
  Il2CppObject *v13; // x23
  struct ClassBoardBackground___c_StaticFields *static_fields; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v21; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v22; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_4BDFA9C & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_ClassBoardBackground__PlayStartExClassReleaseEffectPlayer_b__43_0__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_KeyValuePair_int__SimpleAnimation__get_Key__);
    sub_1C21E38(&Method_System_Collections_Generic_KeyValuePair_int__SimpleAnimation__get_Value__);
    sub_1C21E38(&Method_ClassBoardBackground___c__PlayStartExClassReleaseEffectPlayer_b__43_1__);
    sub_1C21E38(&ClassBoardBackground___c_TypeInfo);
    sub_1C21E38(&StringLiteral_10763/*"Particle_CrassIcon_Ex_Released"*/);
    byte_4BDFA9C = 1;
  }
  memset(&v22, 0, sizeof(v22));
  if ( !BasicHelper__IsNullOrEmpty(
          (System_Collections_ICollection_o *)this->fields.exClassReleaseEffectAnimationDic,
          0LL) )
  {
    exClassReleaseEffectAnimationDic = this->fields.exClassReleaseEffectAnimationDic;
    if ( !exClassReleaseEffectAnimationDic )
      sub_1C22094(0LL, v3);
    System_Collections_Generic_Dictionary_int__object___GetEnumerator(
      &v21,
      (System_Collections_Generic_Dictionary_int__object__o *)exClassReleaseEffectAnimationDic,
      (const MethodInfo_32B5E84 *)Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__GetEnumerator__);
    v22 = v21;
    v5 = 1;
    while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
              &v22,
              (const MethodInfo_3404840 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__MoveNext__) )
    {
      value = v22.fields._current.fields.value;
      if ( (v5 & 1) != 0 )
      {
        v8 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
        System_Action___ctor(
          v8,
          (Il2CppObject *)this,
          Method_ClassBoardBackground__PlayStartExClassReleaseEffectPlayer_b__43_0__,
          0LL);
        ClassBoardBackground__PlaySimpleAnimation(
          this,
          (SimpleAnimation_o *)value,
          (System_String_o *)StringLiteral_10763/*"Particle_CrassIcon_Ex_Released"*/,
          v8,
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
        v11 = (System_String_o *)StringLiteral_10763/*"Particle_CrassIcon_Ex_Released"*/;
        _9__43_1 = v10->static_fields->__9__43_1;
        if ( !_9__43_1 )
        {
          if ( !v10->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v10);
            v10 = ClassBoardBackground___c_TypeInfo;
          }
          v13 = (Il2CppObject *)v10->static_fields->__9;
          _9__43_1 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
          System_Action___ctor(
            _9__43_1,
            v13,
            Method_ClassBoardBackground___c__PlayStartExClassReleaseEffectPlayer_b__43_1__,
            0LL);
          static_fields = ClassBoardBackground___c_TypeInfo->static_fields;
          static_fields->__9__43_1 = _9__43_1;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&static_fields->__9__43_1,
            (int64_t)_9__43_1,
            v15,
            v16,
            v17,
            v18,
            v19,
            v20);
        }
        ClassBoardBackground__PlaySimpleAnimation(this, (SimpleAnimation_o *)value, v11, _9__43_1, v6);
        v5 = 0;
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
      &v22,
      (const MethodInfo_3404964 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__Dispose__);
  }
}


void __fastcall ClassBoardBackground__PlayStartMainEffectPlayer(ClassBoardBackground_o *this, const MethodInfo *method)
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
  const MethodInfo *v15; // x4
  int32_t v16; // [xsp+8h] [xbp-38h] BYREF
  int32_t v17; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4BDFA9A & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_ClassBoardBackground__PlayStartMainEffectPlayer_b__41_0__);
    sub_1C21E38(&Method_ClassBoardEffectPlayer_GetData_int___);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&StringLiteral_9020/*"MainTransition{0}_Release"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    sub_1C21E38(&StringLiteral_9019/*"MainTransition{0}"*/);
    byte_4BDFA9A = 1;
  }
  startMainEffectPlayer = this->fields.startMainEffectPlayer;
  if ( !startMainEffectPlayer )
    sub_1C22094(0LL, method);
  Data_int = ClassBoardEffectPlayer__GetData_int_(
               startMainEffectPlayer,
               (const MethodInfo_2FA394C *)Method_ClassBoardEffectPlayer_GetData_int___);
  if ( BasicHelper__IsNullOrEmpty(
         (System_Collections_ICollection_o *)this->fields.exClassReleaseEffectAnimationDic,
         0LL) )
  {
    v16 = Data_int;
    v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16, v5, v6, v7);
    v9 = System_String__Format((System_String_o *)StringLiteral_9019/*"MainTransition{0}"*/, v8, 0LL);
  }
  else
  {
    v17 = Data_int;
    v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17, v5, v6, v7);
    v9 = System_String__Format((System_String_o *)StringLiteral_9020/*"MainTransition{0}_Release"*/, v10, 0LL);
    v12 = ClassBoardBackground__PlayExClassReleaseEffectPlayer(this, v11);
    UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)this, v12, 0LL);
  }
  mainAnimation = this->fields.mainAnimation;
  v14 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_ClassBoardBackground__PlayStartMainEffectPlayer_b__41_0__, 0LL);
  ClassBoardBackground__PlaySimpleAnimation(this, mainAnimation, v9, v14, v15);
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

  if ( (byte_4BDFA95 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDFA95 = 1;
  }
  this->fields.boardParentAnimation = animation;
  sub_1C21DDC(
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
              SimpleAnimation__Play_65253852(v21, (System_String_o *)name, 0LL);
              return;
            }
          }
        }
      }
LABEL_28:
      sub_1C22094(name, v12);
    }
  }
}


void __fastcall ClassBoardBackground__SetClassIcon(
        ClassBoardBackground_o *this,
        int32_t baseId,
        int32_t iconId,
        const MethodInfo *method)
{
  __int64 v6; // x22
  UnityEngine_Component_o *offRenderer; // x0
  __int64 v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  System_Collections_Generic_IEnumerable_TSource__o *iconTextures; // x21
  System_Func_object__bool__o *v16; // x23
  Il2CppObject *v17; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  UnityEngine_Object_o *v24; // x21
  System_Collections_Generic_IEnumerable_T__o *iconRenderers; // x21
  System_Action_object__o *v26; // x23
  System_Collections_Generic_Dictionary_int__object__o *v27; // x21
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  const MethodInfo *v34; // x2
  struct ClassBoardBackground_ExClassIconSet_array *exIconSet; // x19
  Il2CppObject *key; // x22
  __int64 v37; // x21
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  Il2CppObject *v41; // x1
  System_String_o *v42; // x0
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  Il2CppObject *v52; // x1
  System_String_o *v53; // x0
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  __int64 v60; // x2
  __int64 v61; // x3
  __int64 v62; // x4
  Il2CppObject *v63; // x1
  System_String_o *v64; // x0
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  _BOOL8 v71; // x0
  __int64 v72; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v73; // x8
  il2cpp_array_size_t v74; // w19
  System_Func_object__bool__o **v75; // x22
  System_Func_object__bool__o **v76; // x24
  System_Func_object__bool__o **v77; // x25
  il2cpp_array_size_t v78; // w9
  ClassBoardBackground_ExClassIconSet_o *v79; // x8
  System_Func_object__bool__o *v80; // x23
  System_Collections_Generic_IEnumerable_TSource__o *textures; // x27
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  Il2CppObject *v88; // x0
  System_Func_object__bool__o *v89; // x26
  UnityEngine_Object_o *v90; // x23
  int64_t v91; // x2
  int32_t v92; // w3
  System_String_o *v93; // x4
  BattleSetupInfo_o *v94; // x5
  FollowerInfo_o *v95; // x6
  PartyListViewItem_o *v96; // x7
  Il2CppObject *v97; // x0
  System_Func_object__bool__o *v98; // x28
  UnityEngine_Object_o *v99; // x26
  int64_t v100; // x2
  int32_t v101; // w3
  System_String_o *v102; // x4
  BattleSetupInfo_o *v103; // x5
  FollowerInfo_o *v104; // x6
  PartyListViewItem_o *v105; // x7
  Il2CppObject *v106; // x27
  struct ClassBoardBackground_ExClassIconSet_array *v107; // x8
  ClassBoardBackground_ExClassIconSet_o *v108; // x8
  UnityEngine_Renderer_o *v109; // x0
  UnityEngine_Material_o *material; // x0
  __int64 v111; // x1
  __int64 v112; // x0
  __int64 v113; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v114; // x8
  ClassBoardBackground_ExClassIconSet_o *v115; // x8
  UnityEngine_Renderer_o *effectRenderer; // x0
  UnityEngine_Material_o *v117; // x0
  __int64 v118; // x1
  __int64 v119; // x0
  __int64 v120; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v121; // x8
  ClassBoardBackground_ExClassIconSet_o *v122; // x8
  UnityEngine_Renderer_o *onRenderer; // x0
  UnityEngine_Material_o *v124; // x0
  __int64 v125; // x1
  __int64 v126; // x0
  __int64 v127; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v128; // x8
  ClassBoardBackground_ExClassIconSet_o *v129; // x8
  UnityEngine_Renderer_o *effectGlowRenderer; // x0
  UnityEngine_Material_o *v131; // x0
  __int64 v132; // x1
  __int64 v133; // x0
  __int64 v134; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v135; // x8
  ClassBoardBackground_ExClassIconSet_o *v136; // x8
  UnityEngine_Component_o *v137; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v139; // x1
  __int64 v140; // x0
  __int64 v141; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v142; // x8
  ClassBoardBackground_ExClassIconSet_o *v143; // x8
  UnityEngine_Component_o *v144; // x0
  UnityEngine_GameObject_o *v145; // x0
  __int64 v146; // x1
  __int64 v147; // x0
  __int64 v148; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v149; // x8
  ClassBoardBackground_ExClassIconSet_o *v150; // x8
  UnityEngine_GameObject_o *releaseEffect; // x0
  UnityEngine_GameObject_o *v152; // x0
  __int64 v153; // x1
  _BOOL8 IsPlayed; // x0
  __int64 v155; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v156; // x8
  ClassBoardBackground_ExClassIconSet_o *v157; // x8
  UnityEngine_Object_o *animation; // x21
  _BOOL8 v159; // x0
  __int64 v160; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v161; // x8
  ClassBoardBackground_ExClassIconSet_o *v162; // x8
  UnityEngine_Component_o *v163; // x0
  UnityEngine_GameObject_o *v164; // x0
  __int64 v165; // x1
  __int64 v166; // x0
  __int64 v167; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v168; // x8
  ClassBoardBackground_ExClassIconSet_o *v169; // x8
  UnityEngine_Component_o *v170; // x0
  UnityEngine_GameObject_o *v171; // x0
  __int64 v172; // x1
  __int64 v173; // x0
  __int64 v174; // x1
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

  if ( (byte_4BDFA96 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_Renderer__TypeInfo);
    sub_1C21E38(&Method_BasicHelper_ForEach_Renderer___);
    sub_1C21E38(&ClassBoardUtility_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__SimpleAnimation___ctor__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_int__SimpleAnimation__TypeInfo);
    sub_1C21E38(&Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__get_Current__);
    sub_1C21E38(&System_Func_Texture__bool__TypeInfo);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Key__);
    sub_1C21E38(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Value__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_ClassBoardBackground___c__DisplayClass37_0__SetClassIcon_b__0__);
    sub_1C21E38(&Method_ClassBoardBackground___c__DisplayClass37_0__SetClassIcon_b__1__);
    sub_1C21E38(&ClassBoardBackground___c__DisplayClass37_0_TypeInfo);
    sub_1C21E38(&Method_ClassBoardBackground___c__DisplayClass37_1__SetClassIcon_b__2__);
    sub_1C21E38(&Method_ClassBoardBackground___c__DisplayClass37_1__SetClassIcon_b__3__);
    sub_1C21E38(&Method_ClassBoardBackground___c__DisplayClass37_1__SetClassIcon_b__4__);
    sub_1C21E38(&ClassBoardBackground___c__DisplayClass37_1_TypeInfo);
    sub_1C21E38(&StringLiteral_4609/*"ClassIconEx_off_{0}"*/);
    sub_1C21E38(&StringLiteral_4610/*"ClassIconEx_on_{0}"*/);
    sub_1C21E38(&StringLiteral_4608/*"ClassIconEx_ef_glow_{0}"*/);
    byte_4BDFA96 = 1;
  }
  memset(&v187, 0, 32);
  v6 = sub_1C22084(ClassBoardBackground___c__DisplayClass37_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  if ( !v6 )
    goto LABEL_162;
  *(_DWORD *)(v6 + 16) = iconId;
  *(_QWORD *)(v6 + 24) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v6 + 24), (int64_t)this, v9, v10, v11, v12, v13, v14);
  iconTextures = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.iconTextures;
  v16 = (System_Func_object__bool__o *)sub_1C22084(System_Func_Texture__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v16,
    (Il2CppObject *)v6,
    Method_ClassBoardBackground___c__DisplayClass37_0__SetClassIcon_b__0__,
    0LL);
  v17 = System_Linq_Enumerable__FirstOrDefault_object__50149120(
          iconTextures,
          (System_Func_TSource__bool__o *)v16,
          (const MethodInfo_2FD3700 *)Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
  *(_QWORD *)(v6 + 32) = v17;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v6 + 32), (int64_t)v17, v18, v19, v20, v21, v22, v23);
  v24 = *(UnityEngine_Object_o **)(v6 + 32);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v24, 0LL, 0LL) )
    return;
  iconRenderers = (System_Collections_Generic_IEnumerable_T__o *)this->fields.iconRenderers;
  v26 = (System_Action_object__o *)sub_1C22084(System_Action_Renderer__TypeInfo);
  System_Action_object____ctor(
    v26,
    (Il2CppObject *)v6,
    Method_ClassBoardBackground___c__DisplayClass37_0__SetClassIcon_b__1__,
    0LL);
  BasicHelper__ForEach_object_(
    iconRenderers,
    (System_Action_T__o *)v26,
    (const MethodInfo_2F9CD60 *)Method_BasicHelper_ForEach_Renderer___);
  v27 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C22084(System_Collections_Generic_Dictionary_int__SimpleAnimation__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v27,
    (const MethodInfo_32B5078 *)Method_System_Collections_Generic_Dictionary_int__SimpleAnimation___ctor__);
  this->fields.exClassReleaseEffectAnimationDic = (struct System_Collections_Generic_Dictionary_int__SimpleAnimation__o *)v27;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.exClassReleaseEffectAnimationDic,
    (int64_t)v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  exIconSet = this->fields.exIconSet;
  if ( !exIconSet )
LABEL_162:
    sub_1C22094(offRenderer, v8);
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
        sub_1C2209C(offRenderer, v8);
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
                                             v34);
  if ( !offRenderer )
    goto LABEL_162;
  System_Collections_Generic_Dictionary_int__bool___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v186,
    (System_Collections_Generic_Dictionary_int__bool__o *)offRenderer,
    (const MethodInfo_32A7274 *)Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
  *(_OWORD *)&v187.fields._dictionary = v186[0];
  v187.fields._current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v186[1];
LABEL_12:
  while ( System_Collections_Generic_Dictionary_Enumerator_int__bool___MoveNext(
            &v187,
            (const MethodInfo_3401D38 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__) )
  {
    key = v187.fields._current.fields.key;
    v37 = sub_1C22084(ClassBoardBackground___c__DisplayClass37_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v37, 0LL);
    LODWORD(v186[0]) = (_DWORD)key;
    v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v186, v38, v39, v40);
    v42 = System_String__Format((System_String_o *)StringLiteral_4610/*"ClassIconEx_on_{0}"*/, v41, 0LL);
    if ( !v37 )
      sub_1C22094(v42, v42);
    *(_QWORD *)(v37 + 24) = v42;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v37 + 24), (int64_t)v42, v43, v44, v45, v46, v47, v48);
    v185 = (int)key;
    v52 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v185, v49, v50, v51);
    v53 = System_String__Format((System_String_o *)StringLiteral_4609/*"ClassIconEx_off_{0}"*/, v52, 0LL);
    *(_QWORD *)(v37 + 16) = v53;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v37 + 16), (int64_t)v53, v54, v55, v56, v57, v58, v59);
    v184 = (int)key;
    v63 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v184, v60, v61, v62);
    classId = key;
    v64 = System_String__Format((System_String_o *)StringLiteral_4608/*"ClassIconEx_ef_glow_{0}"*/, v63, 0LL);
    *(_QWORD *)(v37 + 32) = v64;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v37 + 32), (int64_t)v64, v65, v66, v67, v68, v69, v70);
    v73 = this->fields.exIconSet;
    if ( !v73 )
LABEL_94:
      sub_1C22094(v71, v72);
    v74 = 0;
    v75 = (System_Func_object__bool__o **)(v37 + 40);
    v76 = (System_Func_object__bool__o **)(v37 + 48);
    v77 = (System_Func_object__bool__o **)(v37 + 56);
    v181 = (unsigned __int64)classId & 0xFF00000000LL;
    while ( 1 )
    {
      v78 = v73->max_length;
      if ( (int)v74 >= (int)v78 )
        break;
      if ( v74 >= v78 )
        sub_1C2209C(v71, v72);
      v79 = v73->m_Items[v74];
      if ( !v79 )
        sub_1C22094(v71, v72);
      v80 = *v75;
      textures = (System_Collections_Generic_IEnumerable_TSource__o *)v79->fields.textures;
      if ( !*v75 )
      {
        v80 = (System_Func_object__bool__o *)sub_1C22084(System_Func_Texture__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v80,
          (Il2CppObject *)v37,
          Method_ClassBoardBackground___c__DisplayClass37_1__SetClassIcon_b__2__,
          0LL);
        *v75 = v80;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v37 + 40), (int64_t)v80, v82, v83, v84, v85, v86, v87);
      }
      v88 = System_Linq_Enumerable__FirstOrDefault_object__50149120(
              textures,
              (System_Func_TSource__bool__o *)v80,
              (const MethodInfo_2FD3700 *)Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
      v89 = *v76;
      v90 = (UnityEngine_Object_o *)v88;
      if ( !*v76 )
      {
        v89 = (System_Func_object__bool__o *)sub_1C22084(System_Func_Texture__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v89,
          (Il2CppObject *)v37,
          Method_ClassBoardBackground___c__DisplayClass37_1__SetClassIcon_b__3__,
          0LL);
        *v76 = v89;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v37 + 48), (int64_t)v89, v91, v92, v93, v94, v95, v96);
      }
      v97 = System_Linq_Enumerable__FirstOrDefault_object__50149120(
              textures,
              (System_Func_TSource__bool__o *)v89,
              (const MethodInfo_2FD3700 *)Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
      v98 = *v77;
      v99 = (UnityEngine_Object_o *)v97;
      if ( !*v77 )
      {
        v98 = (System_Func_object__bool__o *)sub_1C22084(System_Func_Texture__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v98,
          (Il2CppObject *)v37,
          Method_ClassBoardBackground___c__DisplayClass37_1__SetClassIcon_b__4__,
          0LL);
        *v77 = v98;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v37 + 56), (int64_t)v98, v100, v101, v102, v103, v104, v105);
      }
      v106 = System_Linq_Enumerable__FirstOrDefault_object__50149120(
               textures,
               (System_Func_TSource__bool__o *)v98,
               (const MethodInfo_2FD3700 *)Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v71 = UnityEngine_Object__op_Inequality(v99, 0LL, 0LL);
      if ( v71 )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v71 = UnityEngine_Object__op_Inequality(v90, 0LL, 0LL);
        if ( v71 )
        {
          v107 = this->fields.exIconSet;
          if ( !v107 )
            sub_1C22094(v71, v72);
          if ( v74 >= v107->max_length )
            sub_1C2209C(v71, v72);
          v108 = v107->m_Items[v74];
          if ( !v108 )
            sub_1C22094(v71, v72);
          v109 = v108->fields.offRenderer;
          if ( !v109 )
            sub_1C22094(0LL, v72);
          material = UnityEngine_Renderer__get_material(v109, 0LL);
          if ( !material )
            sub_1C22094(0LL, v111);
          UnityEngine_Material__SetTexture(
            material,
            this->fields.iconMaterialPropertyName,
            (UnityEngine_Texture_o *)v90,
            0LL);
          v114 = this->fields.exIconSet;
          if ( !v114 )
            sub_1C22094(v112, v113);
          if ( v74 >= v114->max_length )
            sub_1C2209C(v112, v113);
          v115 = v114->m_Items[v74];
          if ( !v115 )
            sub_1C22094(v112, v113);
          effectRenderer = v115->fields.effectRenderer;
          if ( !effectRenderer )
            sub_1C22094(0LL, v113);
          v117 = UnityEngine_Renderer__get_material(effectRenderer, 0LL);
          if ( !v117 )
            sub_1C22094(0LL, v118);
          UnityEngine_Material__SetTexture(
            v117,
            this->fields.iconMaterialPropertyName,
            (UnityEngine_Texture_o *)v90,
            0LL);
          v121 = this->fields.exIconSet;
          if ( !v121 )
            sub_1C22094(v119, v120);
          if ( v74 >= v121->max_length )
            sub_1C2209C(v119, v120);
          v122 = v121->m_Items[v74];
          if ( !v122 )
            sub_1C22094(v119, v120);
          onRenderer = v122->fields.onRenderer;
          if ( !onRenderer )
            sub_1C22094(0LL, v120);
          v124 = UnityEngine_Renderer__get_material(onRenderer, 0LL);
          if ( !v124 )
            sub_1C22094(0LL, v125);
          UnityEngine_Material__SetTexture(
            v124,
            this->fields.iconMaterialPropertyName,
            (UnityEngine_Texture_o *)v99,
            0LL);
          v128 = this->fields.exIconSet;
          if ( !v128 )
            sub_1C22094(v126, v127);
          if ( v74 >= v128->max_length )
            sub_1C2209C(v126, v127);
          v129 = v128->m_Items[v74];
          if ( !v129 )
            sub_1C22094(v126, v127);
          effectGlowRenderer = v129->fields.effectGlowRenderer;
          if ( !effectGlowRenderer )
            sub_1C22094(0LL, v127);
          v131 = UnityEngine_Renderer__get_material(effectGlowRenderer, 0LL);
          if ( !v131 )
            sub_1C22094(0LL, v132);
          UnityEngine_Material__SetTexture(
            v131,
            this->fields.iconMaterialPropertyName,
            (UnityEngine_Texture_o *)v106,
            0LL);
          v135 = this->fields.exIconSet;
          if ( !v135 )
            sub_1C22094(v133, v134);
          if ( v74 >= v135->max_length )
            sub_1C2209C(v133, v134);
          v136 = v135->m_Items[v74];
          if ( !v136 )
            sub_1C22094(v133, v134);
          v137 = (UnityEngine_Component_o *)v136->fields.offRenderer;
          if ( !v137 )
            sub_1C22094(0LL, v134);
          gameObject = UnityEngine_Component__get_gameObject(v137, 0LL);
          if ( !gameObject )
            sub_1C22094(0LL, v139);
          UnityEngine_GameObject__SetActive(gameObject, v181 == 0, 0LL);
          v142 = this->fields.exIconSet;
          if ( !v142 )
            sub_1C22094(v140, v141);
          if ( v74 >= v142->max_length )
            sub_1C2209C(v140, v141);
          v143 = v142->m_Items[v74];
          if ( !v143 )
            sub_1C22094(v140, v141);
          v144 = (UnityEngine_Component_o *)v143->fields.onRenderer;
          if ( !v144 )
            sub_1C22094(0LL, v141);
          v145 = UnityEngine_Component__get_gameObject(v144, 0LL);
          if ( !v145 )
            sub_1C22094(0LL, v146);
          UnityEngine_GameObject__SetActive(v145, v181 != 0, 0LL);
          v149 = this->fields.exIconSet;
          if ( !v149 )
            sub_1C22094(v147, v148);
          if ( v74 >= v149->max_length )
            sub_1C2209C(v147, v148);
          v150 = v149->m_Items[v74];
          if ( !v150 )
            sub_1C22094(v147, v148);
          releaseEffect = v150->fields.releaseEffect;
          if ( !releaseEffect )
            sub_1C22094(0LL, v148);
          v152 = UnityEngine_GameObject__get_gameObject(releaseEffect, 0LL);
          if ( !v152 )
            sub_1C22094(0LL, v153);
          UnityEngine_GameObject__SetActive(v152, 0, 0LL);
          if ( v181 )
          {
            if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
            IsPlayed = ClassBoardUtility__IsPlayedExClassReleaseEffect((int32_t)classId, 0LL);
            if ( !IsPlayed )
            {
              v156 = this->fields.exIconSet;
              if ( !v156 )
                sub_1C22094(IsPlayed, v155);
              if ( v74 >= v156->max_length )
                sub_1C2209C(IsPlayed, v155);
              v157 = v156->m_Items[v74];
              if ( !v157 )
                sub_1C22094(IsPlayed, v155);
              animation = (UnityEngine_Object_o *)v157->fields.animation;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              v159 = UnityEngine_Object__op_Inequality(animation, 0LL, 0LL);
              if ( v159 )
              {
                v161 = this->fields.exIconSet;
                if ( !v161 )
                  sub_1C22094(v159, v160);
                if ( v74 >= v161->max_length )
                  sub_1C2209C(v159, v160);
                v162 = v161->m_Items[v74];
                if ( !v162 )
                  sub_1C22094(v159, v160);
                v163 = (UnityEngine_Component_o *)v162->fields.offRenderer;
                if ( !v163 )
                  sub_1C22094(0LL, v160);
                v164 = UnityEngine_Component__get_gameObject(v163, 0LL);
                if ( !v164 )
                  sub_1C22094(0LL, v165);
                UnityEngine_GameObject__SetActive(v164, 1, 0LL);
                v168 = this->fields.exIconSet;
                if ( !v168 )
                  sub_1C22094(v166, v167);
                if ( v74 >= v168->max_length )
                  sub_1C2209C(v166, v167);
                v169 = v168->m_Items[v74];
                if ( !v169 )
                  sub_1C22094(v166, v167);
                v170 = (UnityEngine_Component_o *)v169->fields.onRenderer;
                if ( !v170 )
                  sub_1C22094(0LL, v167);
                v171 = UnityEngine_Component__get_gameObject(v170, 0LL);
                if ( !v171 )
                  sub_1C22094(0LL, v172);
                UnityEngine_GameObject__SetActive(v171, 0, 0LL);
                v175 = this->fields.exIconSet;
                if ( !v175 )
                  sub_1C22094(v173, v174);
                if ( v74 >= v175->max_length )
                  sub_1C2209C(v173, v174);
                v176 = v175->m_Items[v74];
                if ( !v176 )
                  sub_1C22094(v173, v174);
                exClassReleaseEffectAnimationDic = this->fields.exClassReleaseEffectAnimationDic;
                if ( !exClassReleaseEffectAnimationDic )
                  sub_1C22094(0LL, classId);
                System_Collections_Generic_Dictionary_int__object___Add(
                  (System_Collections_Generic_Dictionary_int__object__o *)exClassReleaseEffectAnimationDic,
                  (int32_t)classId,
                  (Il2CppObject *)v176->fields.animation,
                  (const MethodInfo_32B5A4C *)Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__Add__);
              }
            }
          }
          goto LABEL_12;
        }
      }
      ++v74;
      v73 = this->fields.exIconSet;
      if ( !v73 )
        goto LABEL_94;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__bool___Dispose(
    &v187,
    (const MethodInfo_3401E40 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
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
  sub_1C21DDC(
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

  if ( (byte_4BDFA9D & 1) == 0 )
  {
    sub_1C21E38(&ClassBoardBackground__WaitAnimationFinished_d__45_TypeInfo);
    byte_4BDFA9D = 1;
  }
  v8 = sub_1C22084(ClassBoardBackground__WaitAnimationFinished_d__45_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  *(_DWORD *)(v8 + 16) = 0;
  *(_QWORD *)(v8 + 32) = anim;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v8 + 32), (int64_t)anim, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v8 + 40) = name;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v8 + 40), (int64_t)name, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v8 + 48) = endCallback;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v8 + 48), (int64_t)endCallback, v21, v22, v23, v24, v25, v26);
  return (System_Collections_IEnumerator_o *)v8;
}


void __fastcall ClassBoardBackground___PlayStartExClassReleaseEffectPlayer_b__43_0(
        ClassBoardBackground_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x0
  PartyOrganizationUtility_o *p_exClassReleaseEffectAnimationDic; // x19
  struct System_Collections_Generic_Dictionary_int__SimpleAnimation__o *exClassReleaseEffectAnimationDic; // t1
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  System_Int32_array *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4BDFAA0 & 1) == 0 )
  {
    sub_1C21E38(&ClassBoardUtility_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__get_Keys__);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToArray_int___);
    byte_4BDFAA0 = 1;
  }
  exClassReleaseEffectAnimationDic = this->fields.exClassReleaseEffectAnimationDic;
  p_exClassReleaseEffectAnimationDic = (PartyOrganizationUtility_o *)&this->fields.exClassReleaseEffectAnimationDic;
  v3 = (System_Collections_Generic_Dictionary_int__object__o *)exClassReleaseEffectAnimationDic;
  if ( !exClassReleaseEffectAnimationDic )
    sub_1C22094(0LL, method);
  Keys = System_Collections_Generic_Dictionary_int__object___get_Keys(
           v3,
           (const MethodInfo_32B570C *)Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__get_Keys__);
  v7 = System_Linq_Enumerable__ToArray_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
         (const MethodInfo_2FE964C *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
  ClassBoardUtility__SavePlayedExClassReleaseEffect(v7, 0LL);
  p_exClassReleaseEffectAnimationDic->klass = 0LL;
  sub_1C21DDC(p_exClassReleaseEffectAnimationDic, 0LL, v8, v9, v10, v11, v12, v13);
}


void __fastcall ClassBoardBackground___PlayStartMainEffectPlayer_b__41_0(
        ClassBoardBackground_o *this,
        const MethodInfo *method)
{
  ClassBoardEffectPlayer_o *startMainEffectPlayer; // x0

  startMainEffectPlayer = this->fields.startMainEffectPlayer;
  if ( !startMainEffectPlayer )
    sub_1C22094(0LL, method);
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

  if ( (byte_4BDFAA4 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4BDFAA4 = 1;
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
      v6 = (UnityEngine_WaitForSeconds_o *)sub_1C22084(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v6, exClassReleaseEffectStartSec, 0LL);
      this->fields.__2__current = (Il2CppObject *)v6;
      p__2__current = &this->fields.__2__current;
      sub_1C21DDC((PartyOrganizationUtility_o *)p__2__current, (int64_t)v6, v8, v9, v10, v11, v12, v13);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
LABEL_10:
    sub_1C22094(_4__this, method);
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

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_ClassBoardBackground__PlayExClassReleaseEffectPlayer_d__42_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
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

  if ( (byte_4BDFAA5 & 1) == 0 )
  {
    sub_1C21E38(&SimpleAnimation_State_TypeInfo);
    byte_4BDFAA5 = 1;
  }
  if ( this->fields.__1__state > 1u )
    return 0;
  anim = this->fields.anim;
  this->fields.__1__state = -1;
  if ( !anim )
    sub_1C22094(0LL, method);
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
    p_method = sub_1C73E18(State, SimpleAnimation_State_TypeInfo, 5LL);
  }
  if ( (*(float (__fastcall **)(SimpleAnimation_State_o *, _QWORD))p_method)(v6, *(_QWORD *)(p_method + 8)) >= 1.0 )
  {
LABEL_13:
    ActionExtensions__Call(this->fields.endCallback, 0LL);
    return 0;
  }
  this->fields.__2__current = 0LL;
  p__2__current = &this->fields.__2__current;
  sub_1C21DDC((PartyOrganizationUtility_o *)p__2__current, 0LL, v10, v11, v12, v13, v14, v15);
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

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_ClassBoardBackground__WaitAnimationFinished_d__45_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
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
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDFAA1 & 1) == 0 )
  {
    sub_1C21E38(&ClassBoardBackground___c_TypeInfo);
    byte_4BDFAA1 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(ClassBoardBackground___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  ClassBoardBackground___c_TypeInfo->static_fields->__9 = (struct ClassBoardBackground___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)ClassBoardBackground___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1C22094(this, a);
  return a->fields.classId - b->fields.classId;
}


void __fastcall ClassBoardBackground___c___OnDestroy_b__40_0(
        ClassBoardBackground___c_o *this,
        UnityEngine_Renderer_o *x,
        const MethodInfo *method)
{
  UnityEngine_Object_o *material; // x19

  if ( (byte_4BDFAA2 & 1) == 0 )
  {
    this = (ClassBoardBackground___c_o *)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDFAA2 = 1;
  }
  if ( !x )
    sub_1C22094(this, x);
  material = (UnityEngine_Object_o *)UnityEngine_Renderer__get_material(x, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_70869612(material, 0LL);
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
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  Il2CppObject *v9; // x0
  System_String_o *v10; // x0
  int32_t iconId; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_4BDFAA3 & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    this = (ClassBoardBackground___c__DisplayClass37_0_o *)sub_1C21E38(&StringLiteral_4612/*"ClassIcon{0}"*/);
    byte_4BDFAA3 = 1;
  }
  if ( !x )
    sub_1C22094(this, x);
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)x, 0LL);
  iconId = v4->fields.iconId;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId, v6, v7, v8);
  v10 = System_String__Format((System_String_o *)StringLiteral_4612/*"ClassIcon{0}"*/, v9, 0LL);
  return System_String__op_Equality(name, v10, 0LL);
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
    sub_1C22094(this, x);
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
    sub_1C22094(this, 0LL);
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
    sub_1C22094(this, 0LL);
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
    sub_1C22094(this, 0LL);
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)x, 0LL);
  return System_String__op_Equality(name, this->fields.glowIconName, 0LL);
}