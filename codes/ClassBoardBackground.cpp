void __fastcall ClassBoardBackground___ctor(ClassBoardBackground_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v9; // x1

  if ( (byte_4B1964A & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_16431/*"_MainTex"*/, method, v2);
    byte_4B1964A = 1;
  }
  v9 = StringLiteral_16431/*"_MainTex"*/;
  this->fields.iconMaterialPropertyName = (struct System_String_o *)StringLiteral_16431/*"_MainTex"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.iconMaterialPropertyName, v9, v2, v3, v4, v5, v6, v7);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardBackground__ActivateEarthAccessories(
        ClassBoardBackground_o *this,
        bool value,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *earthAccessoriesObject; // x0

  earthAccessoriesObject = this->fields.earthAccessoriesObject;
  if ( !earthAccessoriesObject )
    sub_1BCAA3C(0LL, value);
  UnityEngine_GameObject__SetActive(earthAccessoriesObject, value, 0LL);
}


void __fastcall ClassBoardBackground__Awake(ClassBoardBackground_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *gameObject; // x0
  __int64 v9; // x1
  System_String_o *name; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  ClassBoardEffectPlayer_o *v14; // x21
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct ClassBoardEffectPlayer_o *startMainEffectPlayer; // x20
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  System_Action_o *v25; // x21
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7

  if ( (byte_4B1963E & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_ClassBoardBackground_PlayStartMainEffectPlayer__, v4, v5);
    sub_1BCA7E0(&ClassBoardEffectPlayer_TypeInfo, v6, v7);
    byte_4B1963E = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_6;
  name = UnityEngine_Object__get_name(gameObject, 0LL);
  v14 = (ClassBoardEffectPlayer_o *)sub_1BCAA2C(ClassBoardEffectPlayer_TypeInfo, v11, v12, v13);
  ClassBoardEffectPlayer___ctor_45241472(v14, name, 0LL);
  this->fields.startMainEffectPlayer = v14;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.startMainEffectPlayer,
    (int64_t)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  startMainEffectPlayer = this->fields.startMainEffectPlayer;
  v25 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v22, v23, v24);
  System_Action___ctor(v25, (Il2CppObject *)this, Method_ClassBoardBackground_PlayStartMainEffectPlayer__, 0LL);
  if ( !startMainEffectPlayer )
LABEL_6:
    sub_1BCAA3C(gameObject, v9);
  startMainEffectPlayer->fields.playCallback = v25;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&startMainEffectPlayer->fields.playCallback,
    (int64_t)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
}


void __fastcall ClassBoardBackground__CallAnimationEventBoardParent(
        ClassBoardBackground_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *boardParentAnimation; // x20
  __int64 v5; // x1
  UnityEngine_Object_o *boardParentAnimationClip; // x20
  __int64 v7; // x1
  UnityEngine_Object_o *name; // x0
  SimpleAnimation_o *v9; // x19

  if ( (byte_4B19649 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B19649 = 1;
  }
  boardParentAnimation = (UnityEngine_Object_o *)this->fields.boardParentAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(boardParentAnimation, 0LL, 0LL) )
  {
    boardParentAnimationClip = (UnityEngine_Object_o *)this->fields.boardParentAnimationClip;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
    if ( UnityEngine_Object__op_Inequality(boardParentAnimationClip, 0LL, 0LL) )
    {
      name = (UnityEngine_Object_o *)this->fields.boardParentAnimationClip;
      if ( !name
        || (v9 = this->fields.boardParentAnimation,
            name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0LL),
            !v9) )
      {
        sub_1BCAA3C(name, v7);
      }
      SimpleAnimation__Play_64539336(v9, (System_String_o *)name, 0LL);
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
  sub_1BCA784(p_showBoardCallback, 0LL, v3, v4, v5, v6, v7, v8);
}


void __fastcall ClassBoardBackground__ChangeCamera(
        ClassBoardBackground_o *this,
        UnityEngine_Camera_o *camera,
        const MethodInfo *method)
{
  struct UnityEngine_Camera_o *classBoardViewCamera; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1
  UnityEngine_Object_o *v8; // x22
  UnityEngine_GameObject_o *v9; // x21
  UnityEngine_GameObject_o *v10; // x21
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4B1963F & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, camera, method);
    byte_4B1963F = 1;
  }
  classBoardViewCamera = this->fields.classBoardViewCamera;
  if ( !classBoardViewCamera )
    goto LABEL_10;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)classBoardViewCamera, 0LL);
  v8 = (UnityEngine_Object_o *)this->fields.classBoardViewCamera;
  v9 = gameObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
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
LABEL_10:
    sub_1BCAA3C(classBoardViewCamera, camera);
  }
  UnityEngine_GameObject__SetActive(v10, (unsigned __int8)classBoardViewCamera & 1, 0LL);
  this->fields.currentCamera = camera;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.currentCamera, (int64_t)camera, v11, v12, v13, v14, v15, v16);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_Dictionary_int__bool__o *__fastcall ClassBoardBackground__GetIconIdList(
        ClassBoardBackground_o *this,
        int32_t baseId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  System_Collections_Generic_Dictionary_int__bool__o *v37; // x19
  __int64 v38; // x1
  void *Master_object; // x0
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  System_Collections_Generic_List_object__o *v43; // x20
  System_Comparison_T__o *v44; // x21
  Il2CppObject *v45; // x22
  struct ClassBoardBackground___c_StaticFields *static_fields; // x0
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  __int64 v53; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v54; // x20
  __int64 v55; // x1
  BalanceConfig_c *v56; // x0
  ClassBoardClassEntity_o *current; // x21
  BalanceConfig_c *v58; // x0
  __int64 v59; // x1
  _BOOL8 v60; // x0
  __int64 v61; // x1
  int32_t monitor_high; // w22
  _BOOL8 IsOpen; // x0
  __int64 v64; // x1
  System_Collections_Generic_List_Enumerator_object__o v66; // [xsp+0h] [xbp-90h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v68; // [xsp+20h] [xbp-70h] BYREF
  System_Collections_Generic_List_ClassBoardClassEntity__o *entitys; // [xsp+38h] [xbp-58h] BYREF

  if ( (byte_4B19642 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&baseId, method);
    sub_1BCA7E0(&System_Comparison_ClassBoardClassEntity__TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantClassMaster___, v9, v10);
    sub_1BCA7E0(&DataManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__bool__Add__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__bool__TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Contains_int___, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__get_Current__, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__, v29, v30);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ClassBoardClassEntity__Sort__, v31, v32);
    sub_1BCA7E0(&Method_ClassBoardBackground___c__GetIconIdList_b__38_0__, v33, v34);
    sub_1BCA7E0(&ClassBoardBackground___c_TypeInfo, v35, v36);
    byte_4B19642 = 1;
  }
  entitys = 0LL;
  memset(&v68, 0, sizeof(v68));
  entity = 0LL;
  v37 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_1BCAA2C(
                                                                System_Collections_Generic_Dictionary_int__bool__TypeInfo,
                                                                *(_QWORD *)&baseId,
                                                                method,
                                                                v3);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v37,
    (const MethodInfo_31F6AE8 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v38);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
  if ( !Master_object )
    goto LABEL_37;
  if ( !ClassBoardClassMaster__TryGetEntityList((ClassBoardClassMaster_o *)Master_object, &entitys, baseId, 0LL) )
    return v37;
  v43 = (System_Collections_Generic_List_object__o *)entitys;
  Master_object = ClassBoardBackground___c_TypeInfo;
  if ( !ClassBoardBackground___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardBackground___c_TypeInfo, v40);
    Master_object = ClassBoardBackground___c_TypeInfo;
  }
  v44 = *(System_Comparison_T__o **)(*((_QWORD *)Master_object + 23) + 8LL);
  if ( !v44 )
  {
    if ( !*((_DWORD *)Master_object + 56) )
    {
      j_il2cpp_runtime_class_init_0(Master_object, v40);
      Master_object = ClassBoardBackground___c_TypeInfo;
    }
    v45 = (Il2CppObject *)**((_QWORD **)Master_object + 23);
    v44 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_ClassBoardClassEntity__TypeInfo, v40, v41, v42);
    System_Comparison_object____ctor(v44, v45, Method_ClassBoardBackground___c__GetIconIdList_b__38_0__, 0LL);
    static_fields = ClassBoardBackground___c_TypeInfo->static_fields;
    static_fields->__9__38_0 = (struct System_Comparison_ClassBoardClassEntity__o *)v44;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__38_0, (int64_t)v44, v47, v48, v49, v50, v51, v52);
  }
  if ( !v43 )
    goto LABEL_37;
  System_Collections_Generic_List_object___Sort_56244000(
    v43,
    v44,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_ClassBoardClassEntity__Sort__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v53);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantClassMaster___);
  if ( !entitys )
LABEL_37:
    sub_1BCAA3C(Master_object, v40);
  v54 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v66,
    (System_Collections_Generic_List_object__o *)entitys,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__);
  v68 = v66;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v68,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__) )
  {
    v56 = BalanceConfig_TypeInfo;
    current = (ClassBoardClassEntity_o *)v68.fields._current;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v55);
    if ( !current )
      sub_1BCAA3C(v56, v55);
    v58 = (BalanceConfig_c *)System_Linq_Enumerable__Contains_int_(
                               (System_Collections_Generic_IEnumerable_TSource__o *)BalanceConfig_TypeInfo->static_fields->PlayableBeastClassIds,
                               current->fields.classId,
                               (const MethodInfo_2F2AF7C *)Method_System_Linq_Enumerable_Contains_int___);
    if ( ((unsigned __int8)v58 & 1) != 0 )
    {
      v58 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v59);
        v58 = BalanceConfig_TypeInfo;
      }
      if ( v58->static_fields->PlayableBeastBaseClassId != current->fields.classId )
        continue;
    }
    if ( !v54 )
      sub_1BCAA3C(v58, v59);
    v60 = DataMasterBase_object__object__int___TryGetEntity(
            v54,
            &entity,
            current->fields.classId,
            (const MethodInfo_31B2E94 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    if ( v60 )
    {
      if ( !entity )
        sub_1BCAA3C(v60, v61);
      monitor_high = HIDWORD(entity[2].monitor);
      IsOpen = ClassBoardClassEntity__IsOpen(current, 0LL);
      if ( !v37 )
        sub_1BCAA3C(IsOpen, v64);
      System_Collections_Generic_Dictionary_int__bool___Add(
        v37,
        monitor_high,
        IsOpen,
        (const MethodInfo_31F74C0 *)Method_System_Collections_Generic_Dictionary_int__bool__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v68,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__);
  return v37;
}


UnityEngine_RenderTexture_o *__fastcall ClassBoardBackground__GetRenderTexture(
        ClassBoardBackground_o *this,
        const MethodInfo *method)
{
  UnityEngine_Camera_o *currentCamera; // x0

  currentCamera = this->fields.currentCamera;
  if ( !currentCamera )
    sub_1BCAA3C(0LL, method);
  return UnityEngine_Camera__get_targetTexture(currentCamera, 0LL);
}


void __fastcall ClassBoardBackground__OnDestroy(ClassBoardBackground_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  ClassBoardBackground___c_c *v11; // x0
  System_Collections_Generic_IEnumerable_T__o *iconRenderers; // x19
  System_Action_object__o *_9__40_0; // x20
  Il2CppObject *v14; // x21
  struct ClassBoardBackground___c_StaticFields *static_fields; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  if ( (byte_4B19644 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_Renderer__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_BasicHelper_ForEach_Renderer___, v5, v6);
    sub_1BCA7E0(&Method_ClassBoardBackground___c__OnDestroy_b__40_0__, v7, v8);
    sub_1BCA7E0(&ClassBoardBackground___c_TypeInfo, v9, v10);
    byte_4B19644 = 1;
  }
  v11 = ClassBoardBackground___c_TypeInfo;
  iconRenderers = (System_Collections_Generic_IEnumerable_T__o *)this->fields.iconRenderers;
  if ( !ClassBoardBackground___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardBackground___c_TypeInfo, method);
    v11 = ClassBoardBackground___c_TypeInfo;
  }
  _9__40_0 = (System_Action_object__o *)v11->static_fields->__9__40_0;
  if ( !_9__40_0 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11, method);
      v11 = ClassBoardBackground___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v11->static_fields->__9;
    _9__40_0 = (System_Action_object__o *)sub_1BCAA2C(System_Action_Renderer__TypeInfo, method, v2, v3);
    System_Action_object____ctor(_9__40_0, v14, Method_ClassBoardBackground___c__OnDestroy_b__40_0__, 0LL);
    static_fields = ClassBoardBackground___c_TypeInfo->static_fields;
    static_fields->__9__40_0 = (struct System_Action_Renderer__o *)_9__40_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__40_0,
      (int64_t)_9__40_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  BasicHelper__ForEach_object_(
    iconRenderers,
    (System_Action_T__o *)_9__40_0,
    (const MethodInfo_2EFFC84 *)Method_BasicHelper_ForEach_Renderer___);
}


void __fastcall ClassBoardBackground__PlayBoardParentBeforeAnimation(
        ClassBoardBackground_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *boardParentAnimation; // x20
  __int64 v5; // x1
  UnityEngine_Object_o *boardParentBeforeAnimationClip; // x20
  __int64 v7; // x1
  SimpleAnimation_o *v8; // x0

  if ( (byte_4B19643 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B19643 = 1;
  }
  boardParentAnimation = (UnityEngine_Object_o *)this->fields.boardParentAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(boardParentAnimation, 0LL, 0LL) )
  {
    boardParentBeforeAnimationClip = (UnityEngine_Object_o *)this->fields.boardParentBeforeAnimationClip;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
    if ( UnityEngine_Object__op_Inequality(boardParentBeforeAnimationClip, 0LL, 0LL) )
    {
      v8 = this->fields.boardParentAnimation;
      if ( !v8
        || (SimpleAnimation__set_clip(v8, this->fields.boardParentBeforeAnimationClip, 0LL),
            (v8 = this->fields.boardParentAnimation) == 0LL) )
      {
        sub_1BCAA3C(v8, v7);
      }
      SimpleAnimation__Play(v8, 0LL);
    }
  }
}


System_Collections_IEnumerator_o *__fastcall ClassBoardBackground__PlayExClassReleaseEffectPlayer(
        ClassBoardBackground_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B19646 & 1) == 0 )
  {
    sub_1BCA7E0(&ClassBoardBackground__PlayExClassReleaseEffectPlayer_d__42_TypeInfo, method, v2);
    byte_4B19646 = 1;
  }
  v5 = sub_1BCAA2C(ClassBoardBackground__PlayExClassReleaseEffectPlayer_d__42_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
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
    sub_1BCAA3C(this, 0LL);
  SimpleAnimation__Rewind(anim, 0LL);
  v9 = SimpleAnimation__Play_64539336(anim, name, 0LL);
  v11 = ClassBoardBackground__WaitAnimationFinished((ClassBoardBackground_o *)v9, anim, name, endCallback, v10);
  UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v11, 0LL);
}


void __fastcall ClassBoardBackground__PlayStartExClassReleaseEffectPlayer(
        ClassBoardBackground_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  struct System_Collections_Generic_Dictionary_int__SimpleAnimation__o *exClassReleaseEffectAnimationDic; // x0
  char v26; // w21
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  const MethodInfo *v30; // x4
  Il2CppObject *value; // x20
  System_Action_o *v32; // x21
  const MethodInfo *v33; // x4
  ClassBoardBackground___c_c *v34; // x0
  System_String_o *v35; // x21
  System_Action_o *_9__43_1; // x22
  Il2CppObject *v37; // x23
  struct ClassBoardBackground___c_StaticFields *static_fields; // x0
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v45; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v46; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_4B19647 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_ClassBoardBackground__PlayStartExClassReleaseEffectPlayer_b__43_0__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__GetEnumerator__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__Dispose__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__MoveNext__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__get_Current__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_int__SimpleAnimation__get_Key__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_int__SimpleAnimation__get_Value__, v16, v17);
    sub_1BCA7E0(&Method_ClassBoardBackground___c__PlayStartExClassReleaseEffectPlayer_b__43_1__, v18, v19);
    sub_1BCA7E0(&ClassBoardBackground___c_TypeInfo, v20, v21);
    sub_1BCA7E0(&StringLiteral_10692/*"Particle_CrassIcon_Ex_Released"*/, v22, v23);
    byte_4B19647 = 1;
  }
  memset(&v46, 0, sizeof(v46));
  if ( !BasicHelper__IsNullOrEmpty(
          (System_Collections_ICollection_o *)this->fields.exClassReleaseEffectAnimationDic,
          0LL) )
  {
    exClassReleaseEffectAnimationDic = this->fields.exClassReleaseEffectAnimationDic;
    if ( !exClassReleaseEffectAnimationDic )
      sub_1BCAA3C(0LL, v24);
    System_Collections_Generic_Dictionary_int__object___GetEnumerator(
      &v45,
      (System_Collections_Generic_Dictionary_int__object__o *)exClassReleaseEffectAnimationDic,
      (const MethodInfo_320631C *)Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__GetEnumerator__);
    v46 = v45;
    v26 = 1;
    while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
              &v46,
              (const MethodInfo_335671C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__MoveNext__) )
    {
      value = v46.fields._current.fields.value;
      if ( (v26 & 1) != 0 )
      {
        v32 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v27, v28, v29);
        System_Action___ctor(
          v32,
          (Il2CppObject *)this,
          Method_ClassBoardBackground__PlayStartExClassReleaseEffectPlayer_b__43_0__,
          0LL);
        ClassBoardBackground__PlaySimpleAnimation(
          this,
          (SimpleAnimation_o *)value,
          (System_String_o *)StringLiteral_10692/*"Particle_CrassIcon_Ex_Released"*/,
          v32,
          v33);
        v26 = 0;
      }
      else
      {
        v34 = ClassBoardBackground___c_TypeInfo;
        if ( !ClassBoardBackground___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ClassBoardBackground___c_TypeInfo, v27);
          v34 = ClassBoardBackground___c_TypeInfo;
        }
        v35 = (System_String_o *)StringLiteral_10692/*"Particle_CrassIcon_Ex_Released"*/;
        _9__43_1 = v34->static_fields->__9__43_1;
        if ( !_9__43_1 )
        {
          if ( !v34->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v34, v27);
            v34 = ClassBoardBackground___c_TypeInfo;
          }
          v37 = (Il2CppObject *)v34->static_fields->__9;
          _9__43_1 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v27, v28, v29);
          System_Action___ctor(
            _9__43_1,
            v37,
            Method_ClassBoardBackground___c__PlayStartExClassReleaseEffectPlayer_b__43_1__,
            0LL);
          static_fields = ClassBoardBackground___c_TypeInfo->static_fields;
          static_fields->__9__43_1 = _9__43_1;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&static_fields->__9__43_1,
            (int64_t)_9__43_1,
            v39,
            v40,
            v41,
            v42,
            v43,
            v44);
        }
        ClassBoardBackground__PlaySimpleAnimation(this, (SimpleAnimation_o *)value, v35, _9__43_1, v30);
        v26 = 0;
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
      &v46,
      (const MethodInfo_3356840 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__Dispose__);
  }
}


void __fastcall ClassBoardBackground__PlayStartMainEffectPlayer(ClassBoardBackground_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  ClassBoardEffectPlayer_o *startMainEffectPlayer; // x0
  int32_t Data_int; // w20
  Il2CppObject *v18; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  System_String_o *v22; // x20
  Il2CppObject *v23; // x0
  const MethodInfo *v24; // x1
  System_Collections_IEnumerator_o *v25; // x0
  SimpleAnimation_o *mainAnimation; // x21
  System_Action_o *v27; // x22
  const MethodInfo *v28; // x4
  int32_t v29; // [xsp+8h] [xbp-38h] BYREF
  int32_t v30; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B19645 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_ClassBoardBackground__PlayStartMainEffectPlayer_b__41_0__, v4, v5);
    sub_1BCA7E0(&Method_ClassBoardEffectPlayer_GetData_int___, v6, v7);
    sub_1BCA7E0(&int_TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_8959/*"MainTransition{0}_Release"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_8958/*"MainTransition{0}"*/, v14, v15);
    byte_4B19645 = 1;
  }
  startMainEffectPlayer = this->fields.startMainEffectPlayer;
  if ( !startMainEffectPlayer )
    sub_1BCAA3C(0LL, method);
  Data_int = ClassBoardEffectPlayer__GetData_int_(
               startMainEffectPlayer,
               (const MethodInfo_2F067D8 *)Method_ClassBoardEffectPlayer_GetData_int___);
  if ( BasicHelper__IsNullOrEmpty(
         (System_Collections_ICollection_o *)this->fields.exClassReleaseEffectAnimationDic,
         0LL) )
  {
    v29 = Data_int;
    v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29);
    v22 = System_String__Format((System_String_o *)StringLiteral_8958/*"MainTransition{0}"*/, v18, 0LL);
  }
  else
  {
    v30 = Data_int;
    v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30);
    v22 = System_String__Format((System_String_o *)StringLiteral_8959/*"MainTransition{0}_Release"*/, v23, 0LL);
    v25 = ClassBoardBackground__PlayExClassReleaseEffectPlayer(this, v24);
    UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v25, 0LL);
  }
  mainAnimation = this->fields.mainAnimation;
  v27 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v19, v20, v21);
  System_Action___ctor(v27, (Il2CppObject *)this, Method_ClassBoardBackground__PlayStartMainEffectPlayer_b__41_0__, 0LL);
  ClassBoardBackground__PlaySimpleAnimation(this, mainAnimation, v22, v27, v28);
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
  __int64 v10; // x1
  UnityEngine_Object_o *boardParentAnimation; // x20
  __int64 v12; // x1
  UnityEngine_Object_o *boardParentAnimationClip; // x20
  __int64 v14; // x1
  UnityEngine_Object_o *name; // x0
  SimpleAnimation_o *v16; // x20
  UnityEngine_AnimationClip_o *v17; // x20
  SimpleAnimation_o *v18; // x21
  UnityEngine_Object_o *boardParentBeforeAnimationClip; // x20
  SimpleAnimation_o *v20; // x20
  UnityEngine_AnimationClip_o *v21; // x20
  SimpleAnimation_o *v22; // x21
  SimpleAnimation_o *v23; // x19

  if ( (byte_4B19640 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, animation, method);
    byte_4B19640 = 1;
  }
  this->fields.boardParentAnimation = animation;
  sub_1BCA784(
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  if ( !UnityEngine_Object__op_Equality(boardParentAnimation, 0LL, 0LL) )
  {
    boardParentAnimationClip = (UnityEngine_Object_o *)this->fields.boardParentAnimationClip;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
    if ( UnityEngine_Object__op_Inequality(boardParentAnimationClip, 0LL, 0LL) )
    {
      name = (UnityEngine_Object_o *)this->fields.boardParentAnimationClip;
      if ( !name )
        goto LABEL_28;
      v16 = this->fields.boardParentAnimation;
      name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0LL);
      if ( !v16 )
        goto LABEL_28;
      name = (UnityEngine_Object_o *)SimpleAnimation__GetState(v16, (System_String_o *)name, 0LL);
      if ( !name )
      {
        v17 = this->fields.boardParentAnimationClip;
        if ( !v17 )
          goto LABEL_28;
        v18 = this->fields.boardParentAnimation;
        name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(
                                         (UnityEngine_Object_o *)this->fields.boardParentAnimationClip,
                                         0LL);
        if ( !v18 )
          goto LABEL_28;
        SimpleAnimation__AddClip(v18, v17, (System_String_o *)name, 0LL);
      }
    }
    boardParentBeforeAnimationClip = (UnityEngine_Object_o *)this->fields.boardParentBeforeAnimationClip;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
    if ( UnityEngine_Object__op_Inequality(boardParentBeforeAnimationClip, 0LL, 0LL) )
    {
      name = (UnityEngine_Object_o *)this->fields.boardParentBeforeAnimationClip;
      if ( name )
      {
        v20 = this->fields.boardParentAnimation;
        name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0LL);
        if ( v20 )
        {
          name = (UnityEngine_Object_o *)SimpleAnimation__GetState(v20, (System_String_o *)name, 0LL);
          if ( !name )
          {
            v21 = this->fields.boardParentBeforeAnimationClip;
            if ( !v21 )
              goto LABEL_28;
            v22 = this->fields.boardParentAnimation;
            name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(
                                             (UnityEngine_Object_o *)this->fields.boardParentBeforeAnimationClip,
                                             0LL);
            if ( !v22 )
              goto LABEL_28;
            SimpleAnimation__AddClip(v22, v21, (System_String_o *)name, 0LL);
          }
          name = (UnityEngine_Object_o *)this->fields.boardParentBeforeAnimationClip;
          if ( name )
          {
            v23 = this->fields.boardParentAnimation;
            name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0LL);
            if ( v23 )
            {
              SimpleAnimation__Play_64539336(v23, (System_String_o *)name, 0LL);
              return;
            }
          }
        }
      }
LABEL_28:
      sub_1BCAA3C(name, v14);
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
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x22
  UnityEngine_Component_o *offRenderer; // x0
  __int64 v58; // x1
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  System_Collections_Generic_IEnumerable_TSource__o *iconTextures; // x21
  __int64 v66; // x1
  __int64 v67; // x2
  __int64 v68; // x3
  System_Func_object__bool__o *v69; // x23
  Il2CppObject *v70; // x0
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  __int64 v77; // x1
  UnityEngine_Object_o *v78; // x21
  __int64 v79; // x1
  __int64 v80; // x2
  __int64 v81; // x3
  System_Collections_Generic_IEnumerable_T__o *iconRenderers; // x21
  System_Action_object__o *v83; // x23
  __int64 v84; // x1
  __int64 v85; // x2
  __int64 v86; // x3
  System_Collections_Generic_Dictionary_int__object__o *v87; // x21
  int64_t v88; // x2
  int32_t v89; // w3
  System_String_o *v90; // x4
  BattleSetupInfo_o *v91; // x5
  FollowerInfo_o *v92; // x6
  PartyListViewItem_o *v93; // x7
  const MethodInfo *v94; // x2
  struct ClassBoardBackground_ExClassIconSet_array *exIconSet; // x19
  __int64 v96; // x1
  __int64 v97; // x2
  __int64 v98; // x3
  Il2CppObject *key; // x22
  __int64 v100; // x21
  Il2CppObject *v101; // x1
  System_String_o *v102; // x0
  int64_t v103; // x2
  int32_t v104; // w3
  System_String_o *v105; // x4
  BattleSetupInfo_o *v106; // x5
  FollowerInfo_o *v107; // x6
  PartyListViewItem_o *v108; // x7
  Il2CppObject *v109; // x1
  System_String_o *v110; // x0
  int64_t v111; // x2
  int32_t v112; // w3
  System_String_o *v113; // x4
  BattleSetupInfo_o *v114; // x5
  FollowerInfo_o *v115; // x6
  PartyListViewItem_o *v116; // x7
  Il2CppObject *v117; // x1
  System_String_o *v118; // x0
  int64_t v119; // x2
  int32_t v120; // w3
  System_String_o *v121; // x4
  BattleSetupInfo_o *v122; // x5
  FollowerInfo_o *v123; // x6
  PartyListViewItem_o *v124; // x7
  _BOOL8 v125; // x0
  __int64 v126; // x1
  __int64 v127; // x2
  __int64 v128; // x3
  struct ClassBoardBackground_ExClassIconSet_array *v129; // x8
  il2cpp_array_size_t v130; // w19
  System_Func_object__bool__o **v131; // x22
  System_Func_object__bool__o **v132; // x24
  System_Func_object__bool__o **v133; // x25
  il2cpp_array_size_t v134; // w9
  ClassBoardBackground_ExClassIconSet_o *v135; // x8
  System_Func_object__bool__o *v136; // x23
  System_Collections_Generic_IEnumerable_TSource__o *textures; // x27
  int64_t v138; // x2
  int32_t v139; // w3
  System_String_o *v140; // x4
  BattleSetupInfo_o *v141; // x5
  FollowerInfo_o *v142; // x6
  PartyListViewItem_o *v143; // x7
  Il2CppObject *v144; // x0
  __int64 v145; // x1
  __int64 v146; // x2
  __int64 v147; // x3
  System_Func_object__bool__o *v148; // x26
  UnityEngine_Object_o *v149; // x23
  int64_t v150; // x2
  int32_t v151; // w3
  System_String_o *v152; // x4
  BattleSetupInfo_o *v153; // x5
  FollowerInfo_o *v154; // x6
  PartyListViewItem_o *v155; // x7
  Il2CppObject *v156; // x0
  __int64 v157; // x1
  __int64 v158; // x2
  __int64 v159; // x3
  System_Func_object__bool__o *v160; // x28
  UnityEngine_Object_o *v161; // x26
  int64_t v162; // x2
  int32_t v163; // w3
  System_String_o *v164; // x4
  BattleSetupInfo_o *v165; // x5
  FollowerInfo_o *v166; // x6
  PartyListViewItem_o *v167; // x7
  __int64 v168; // x1
  Il2CppObject *v169; // x27
  struct ClassBoardBackground_ExClassIconSet_array *v170; // x8
  ClassBoardBackground_ExClassIconSet_o *v171; // x8
  UnityEngine_Renderer_o *v172; // x0
  UnityEngine_Material_o *material; // x0
  __int64 v174; // x1
  __int64 v175; // x0
  __int64 v176; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v177; // x8
  ClassBoardBackground_ExClassIconSet_o *v178; // x8
  UnityEngine_Renderer_o *effectRenderer; // x0
  UnityEngine_Material_o *v180; // x0
  __int64 v181; // x1
  __int64 v182; // x0
  __int64 v183; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v184; // x8
  ClassBoardBackground_ExClassIconSet_o *v185; // x8
  UnityEngine_Renderer_o *onRenderer; // x0
  UnityEngine_Material_o *v187; // x0
  __int64 v188; // x1
  __int64 v189; // x0
  __int64 v190; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v191; // x8
  ClassBoardBackground_ExClassIconSet_o *v192; // x8
  UnityEngine_Renderer_o *effectGlowRenderer; // x0
  UnityEngine_Material_o *v194; // x0
  __int64 v195; // x1
  __int64 v196; // x0
  __int64 v197; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v198; // x8
  ClassBoardBackground_ExClassIconSet_o *v199; // x8
  UnityEngine_Component_o *v200; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v202; // x1
  __int64 v203; // x0
  __int64 v204; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v205; // x8
  ClassBoardBackground_ExClassIconSet_o *v206; // x8
  UnityEngine_Component_o *v207; // x0
  UnityEngine_GameObject_o *v208; // x0
  __int64 v209; // x1
  __int64 v210; // x0
  __int64 v211; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v212; // x8
  ClassBoardBackground_ExClassIconSet_o *v213; // x8
  UnityEngine_GameObject_o *releaseEffect; // x0
  UnityEngine_GameObject_o *v215; // x0
  __int64 v216; // x1
  __int64 v217; // x1
  _BOOL8 IsPlayed; // x0
  __int64 v219; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v220; // x8
  ClassBoardBackground_ExClassIconSet_o *v221; // x8
  UnityEngine_Object_o *animation; // x21
  _BOOL8 v223; // x0
  __int64 v224; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v225; // x8
  ClassBoardBackground_ExClassIconSet_o *v226; // x8
  UnityEngine_Component_o *v227; // x0
  UnityEngine_GameObject_o *v228; // x0
  __int64 v229; // x1
  __int64 v230; // x0
  __int64 v231; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v232; // x8
  ClassBoardBackground_ExClassIconSet_o *v233; // x8
  UnityEngine_Component_o *v234; // x0
  UnityEngine_GameObject_o *v235; // x0
  __int64 v236; // x1
  __int64 v237; // x0
  __int64 v238; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v239; // x8
  ClassBoardBackground_ExClassIconSet_o *v240; // x8
  struct System_Collections_Generic_Dictionary_int__SimpleAnimation__o *exClassReleaseEffectAnimationDic; // x0
  int max_length; // w8
  unsigned int v243; // w20
  ClassBoardBackground_ExClassIconSet_o *v244; // x21
  __int64 v245; // [xsp+0h] [xbp-C0h]
  Il2CppObject *classId; // [xsp+8h] [xbp-B8h]
  int v248; // [xsp+18h] [xbp-A8h] BYREF
  int v249; // [xsp+1Ch] [xbp-A4h] BYREF
  __int128 v250[2]; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v251; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4B19641 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_Renderer__TypeInfo, *(_QWORD *)&baseId, *(_QWORD *)&iconId);
    sub_1BCA7E0(&Method_BasicHelper_ForEach_Renderer___, v6, v7);
    sub_1BCA7E0(&ClassBoardUtility_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__SimpleAnimation___ctor__, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__SimpleAnimation__TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_Texture___, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__get_Current__, v24, v25);
    sub_1BCA7E0(&System_Func_Texture__bool__TypeInfo, v26, v27);
    sub_1BCA7E0(&int_TypeInfo, v28, v29);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Key__, v30, v31);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Value__, v32, v33);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v34, v35);
    sub_1BCA7E0(&Method_ClassBoardBackground___c__DisplayClass37_0__SetClassIcon_b__0__, v36, v37);
    sub_1BCA7E0(&Method_ClassBoardBackground___c__DisplayClass37_0__SetClassIcon_b__1__, v38, v39);
    sub_1BCA7E0(&ClassBoardBackground___c__DisplayClass37_0_TypeInfo, v40, v41);
    sub_1BCA7E0(&Method_ClassBoardBackground___c__DisplayClass37_1__SetClassIcon_b__2__, v42, v43);
    sub_1BCA7E0(&Method_ClassBoardBackground___c__DisplayClass37_1__SetClassIcon_b__3__, v44, v45);
    sub_1BCA7E0(&Method_ClassBoardBackground___c__DisplayClass37_1__SetClassIcon_b__4__, v46, v47);
    sub_1BCA7E0(&ClassBoardBackground___c__DisplayClass37_1_TypeInfo, v48, v49);
    sub_1BCA7E0(&StringLiteral_4583/*"ClassIconEx_off_{0}"*/, v50, v51);
    sub_1BCA7E0(&StringLiteral_4584/*"ClassIconEx_on_{0}"*/, v52, v53);
    sub_1BCA7E0(&StringLiteral_4582/*"ClassIconEx_ef_glow_{0}"*/, v54, v55);
    byte_4B19641 = 1;
  }
  memset(&v251, 0, 32);
  v56 = sub_1BCAA2C(ClassBoardBackground___c__DisplayClass37_0_TypeInfo, *(_QWORD *)&baseId, *(_QWORD *)&iconId, method);
  System_Object___ctor((Il2CppObject *)v56, 0LL);
  if ( !v56 )
    goto LABEL_162;
  *(_DWORD *)(v56 + 16) = iconId;
  *(_QWORD *)(v56 + 24) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v56 + 24), (int64_t)this, v59, v60, v61, v62, v63, v64);
  iconTextures = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.iconTextures;
  v69 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_Texture__bool__TypeInfo, v66, v67, v68);
  System_Func_object__bool____ctor(
    v69,
    (Il2CppObject *)v56,
    Method_ClassBoardBackground___c__DisplayClass37_0__SetClassIcon_b__0__,
    0LL);
  v70 = System_Linq_Enumerable__FirstOrDefault_object__49503160(
          iconTextures,
          (System_Func_TSource__bool__o *)v69,
          (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
  *(_QWORD *)(v56 + 32) = v70;
  sub_1BCA784((PartyOrganizationUtility_o *)(v56 + 32), (int64_t)v70, v71, v72, v73, v74, v75, v76);
  v78 = *(UnityEngine_Object_o **)(v56 + 32);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v77);
  if ( UnityEngine_Object__op_Equality(v78, 0LL, 0LL) )
    return;
  iconRenderers = (System_Collections_Generic_IEnumerable_T__o *)this->fields.iconRenderers;
  v83 = (System_Action_object__o *)sub_1BCAA2C(System_Action_Renderer__TypeInfo, v79, v80, v81);
  System_Action_object____ctor(
    v83,
    (Il2CppObject *)v56,
    Method_ClassBoardBackground___c__DisplayClass37_0__SetClassIcon_b__1__,
    0LL);
  BasicHelper__ForEach_object_(
    iconRenderers,
    (System_Action_T__o *)v83,
    (const MethodInfo_2EFFC84 *)Method_BasicHelper_ForEach_Renderer___);
  v87 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                  System_Collections_Generic_Dictionary_int__SimpleAnimation__TypeInfo,
                                                                  v84,
                                                                  v85,
                                                                  v86);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v87,
    (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__SimpleAnimation___ctor__);
  this->fields.exClassReleaseEffectAnimationDic = (struct System_Collections_Generic_Dictionary_int__SimpleAnimation__o *)v87;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.exClassReleaseEffectAnimationDic,
    (int64_t)v87,
    v88,
    v89,
    v90,
    v91,
    v92,
    v93);
  exIconSet = this->fields.exIconSet;
  if ( !exIconSet )
LABEL_162:
    sub_1BCAA3C(offRenderer, v58);
  if ( !*(_QWORD *)&exIconSet->max_length )
    return;
  if ( (baseId & 0xFFFFFFFE) != 8 )
  {
    max_length = exIconSet->max_length;
    if ( max_length < 1 )
      return;
    v243 = 0;
    while ( 1 )
    {
      if ( v243 >= max_length )
        sub_1BCAA44(offRenderer, v58);
      v244 = exIconSet->m_Items[v243];
      if ( !v244 )
        break;
      offRenderer = (UnityEngine_Component_o *)v244->fields.offRenderer;
      if ( !offRenderer )
        break;
      offRenderer = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(offRenderer, 0LL);
      if ( !offRenderer )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)offRenderer, 0, 0LL);
      offRenderer = (UnityEngine_Component_o *)v244->fields.onRenderer;
      if ( !offRenderer )
        break;
      offRenderer = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(offRenderer, 0LL);
      if ( !offRenderer )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)offRenderer, 0, 0LL);
      offRenderer = (UnityEngine_Component_o *)v244->fields.releaseEffect;
      if ( !offRenderer )
        break;
      offRenderer = (UnityEngine_Component_o *)UnityEngine_GameObject__get_gameObject(
                                                 (UnityEngine_GameObject_o *)offRenderer,
                                                 0LL);
      if ( !offRenderer )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)offRenderer, 0, 0LL);
      max_length = exIconSet->max_length;
      if ( (int)++v243 >= max_length )
        return;
    }
    goto LABEL_162;
  }
  offRenderer = (UnityEngine_Component_o *)ClassBoardBackground__GetIconIdList(
                                             (ClassBoardBackground_o *)offRenderer,
                                             baseId,
                                             v94);
  if ( !offRenderer )
    goto LABEL_162;
  System_Collections_Generic_Dictionary_int__bool___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v250,
    (System_Collections_Generic_Dictionary_int__bool__o *)offRenderer,
    (const MethodInfo_31F78AC *)Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
  *(_OWORD *)&v251.fields._dictionary = v250[0];
  v251.fields._current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v250[1];
LABEL_12:
  while ( System_Collections_Generic_Dictionary_Enumerator_int__bool___MoveNext(
            &v251,
            (const MethodInfo_3353C14 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__) )
  {
    key = v251.fields._current.fields.key;
    v100 = sub_1BCAA2C(ClassBoardBackground___c__DisplayClass37_1_TypeInfo, v96, v97, v98);
    System_Object___ctor((Il2CppObject *)v100, 0LL);
    LODWORD(v250[0]) = (_DWORD)key;
    v101 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v250);
    v102 = System_String__Format((System_String_o *)StringLiteral_4584/*"ClassIconEx_on_{0}"*/, v101, 0LL);
    if ( !v100 )
      sub_1BCAA3C(v102, v102);
    *(_QWORD *)(v100 + 24) = v102;
    sub_1BCA784((PartyOrganizationUtility_o *)(v100 + 24), (int64_t)v102, v103, v104, v105, v106, v107, v108);
    v249 = (int)key;
    v109 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v249);
    v110 = System_String__Format((System_String_o *)StringLiteral_4583/*"ClassIconEx_off_{0}"*/, v109, 0LL);
    *(_QWORD *)(v100 + 16) = v110;
    sub_1BCA784((PartyOrganizationUtility_o *)(v100 + 16), (int64_t)v110, v111, v112, v113, v114, v115, v116);
    v248 = (int)key;
    v117 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v248);
    classId = key;
    v118 = System_String__Format((System_String_o *)StringLiteral_4582/*"ClassIconEx_ef_glow_{0}"*/, v117, 0LL);
    *(_QWORD *)(v100 + 32) = v118;
    sub_1BCA784((PartyOrganizationUtility_o *)(v100 + 32), (int64_t)v118, v119, v120, v121, v122, v123, v124);
    v129 = this->fields.exIconSet;
    if ( !v129 )
LABEL_94:
      sub_1BCAA3C(v125, v126);
    v130 = 0;
    v131 = (System_Func_object__bool__o **)(v100 + 40);
    v132 = (System_Func_object__bool__o **)(v100 + 48);
    v133 = (System_Func_object__bool__o **)(v100 + 56);
    v245 = (unsigned __int64)classId & 0xFF00000000LL;
    while ( 1 )
    {
      v134 = v129->max_length;
      if ( (int)v130 >= (int)v134 )
        break;
      if ( v130 >= v134 )
        sub_1BCAA44(v125, v126);
      v135 = v129->m_Items[v130];
      if ( !v135 )
        sub_1BCAA3C(v125, v126);
      v136 = *v131;
      textures = (System_Collections_Generic_IEnumerable_TSource__o *)v135->fields.textures;
      if ( !*v131 )
      {
        v136 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_Texture__bool__TypeInfo, v126, v127, v128);
        System_Func_object__bool____ctor(
          v136,
          (Il2CppObject *)v100,
          Method_ClassBoardBackground___c__DisplayClass37_1__SetClassIcon_b__2__,
          0LL);
        *v131 = v136;
        sub_1BCA784((PartyOrganizationUtility_o *)(v100 + 40), (int64_t)v136, v138, v139, v140, v141, v142, v143);
      }
      v144 = System_Linq_Enumerable__FirstOrDefault_object__49503160(
               textures,
               (System_Func_TSource__bool__o *)v136,
               (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
      v148 = *v132;
      v149 = (UnityEngine_Object_o *)v144;
      if ( !*v132 )
      {
        v148 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_Texture__bool__TypeInfo, v145, v146, v147);
        System_Func_object__bool____ctor(
          v148,
          (Il2CppObject *)v100,
          Method_ClassBoardBackground___c__DisplayClass37_1__SetClassIcon_b__3__,
          0LL);
        *v132 = v148;
        sub_1BCA784((PartyOrganizationUtility_o *)(v100 + 48), (int64_t)v148, v150, v151, v152, v153, v154, v155);
      }
      v156 = System_Linq_Enumerable__FirstOrDefault_object__49503160(
               textures,
               (System_Func_TSource__bool__o *)v148,
               (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
      v160 = *v133;
      v161 = (UnityEngine_Object_o *)v156;
      if ( !*v133 )
      {
        v160 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_Texture__bool__TypeInfo, v157, v158, v159);
        System_Func_object__bool____ctor(
          v160,
          (Il2CppObject *)v100,
          Method_ClassBoardBackground___c__DisplayClass37_1__SetClassIcon_b__4__,
          0LL);
        *v133 = v160;
        sub_1BCA784((PartyOrganizationUtility_o *)(v100 + 56), (int64_t)v160, v162, v163, v164, v165, v166, v167);
      }
      v169 = System_Linq_Enumerable__FirstOrDefault_object__49503160(
               textures,
               (System_Func_TSource__bool__o *)v160,
               (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v168);
      v125 = UnityEngine_Object__op_Inequality(v161, 0LL, 0LL);
      if ( v125 )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v126);
        v125 = UnityEngine_Object__op_Inequality(v149, 0LL, 0LL);
        if ( v125 )
        {
          v170 = this->fields.exIconSet;
          if ( !v170 )
            sub_1BCAA3C(v125, v126);
          if ( v130 >= v170->max_length )
            sub_1BCAA44(v125, v126);
          v171 = v170->m_Items[v130];
          if ( !v171 )
            sub_1BCAA3C(v125, v126);
          v172 = v171->fields.offRenderer;
          if ( !v172 )
            sub_1BCAA3C(0LL, v126);
          material = UnityEngine_Renderer__get_material(v172, 0LL);
          if ( !material )
            sub_1BCAA3C(0LL, v174);
          UnityEngine_Material__SetTexture(
            material,
            this->fields.iconMaterialPropertyName,
            (UnityEngine_Texture_o *)v149,
            0LL);
          v177 = this->fields.exIconSet;
          if ( !v177 )
            sub_1BCAA3C(v175, v176);
          if ( v130 >= v177->max_length )
            sub_1BCAA44(v175, v176);
          v178 = v177->m_Items[v130];
          if ( !v178 )
            sub_1BCAA3C(v175, v176);
          effectRenderer = v178->fields.effectRenderer;
          if ( !effectRenderer )
            sub_1BCAA3C(0LL, v176);
          v180 = UnityEngine_Renderer__get_material(effectRenderer, 0LL);
          if ( !v180 )
            sub_1BCAA3C(0LL, v181);
          UnityEngine_Material__SetTexture(
            v180,
            this->fields.iconMaterialPropertyName,
            (UnityEngine_Texture_o *)v149,
            0LL);
          v184 = this->fields.exIconSet;
          if ( !v184 )
            sub_1BCAA3C(v182, v183);
          if ( v130 >= v184->max_length )
            sub_1BCAA44(v182, v183);
          v185 = v184->m_Items[v130];
          if ( !v185 )
            sub_1BCAA3C(v182, v183);
          onRenderer = v185->fields.onRenderer;
          if ( !onRenderer )
            sub_1BCAA3C(0LL, v183);
          v187 = UnityEngine_Renderer__get_material(onRenderer, 0LL);
          if ( !v187 )
            sub_1BCAA3C(0LL, v188);
          UnityEngine_Material__SetTexture(
            v187,
            this->fields.iconMaterialPropertyName,
            (UnityEngine_Texture_o *)v161,
            0LL);
          v191 = this->fields.exIconSet;
          if ( !v191 )
            sub_1BCAA3C(v189, v190);
          if ( v130 >= v191->max_length )
            sub_1BCAA44(v189, v190);
          v192 = v191->m_Items[v130];
          if ( !v192 )
            sub_1BCAA3C(v189, v190);
          effectGlowRenderer = v192->fields.effectGlowRenderer;
          if ( !effectGlowRenderer )
            sub_1BCAA3C(0LL, v190);
          v194 = UnityEngine_Renderer__get_material(effectGlowRenderer, 0LL);
          if ( !v194 )
            sub_1BCAA3C(0LL, v195);
          UnityEngine_Material__SetTexture(
            v194,
            this->fields.iconMaterialPropertyName,
            (UnityEngine_Texture_o *)v169,
            0LL);
          v198 = this->fields.exIconSet;
          if ( !v198 )
            sub_1BCAA3C(v196, v197);
          if ( v130 >= v198->max_length )
            sub_1BCAA44(v196, v197);
          v199 = v198->m_Items[v130];
          if ( !v199 )
            sub_1BCAA3C(v196, v197);
          v200 = (UnityEngine_Component_o *)v199->fields.offRenderer;
          if ( !v200 )
            sub_1BCAA3C(0LL, v197);
          gameObject = UnityEngine_Component__get_gameObject(v200, 0LL);
          if ( !gameObject )
            sub_1BCAA3C(0LL, v202);
          UnityEngine_GameObject__SetActive(gameObject, v245 == 0, 0LL);
          v205 = this->fields.exIconSet;
          if ( !v205 )
            sub_1BCAA3C(v203, v204);
          if ( v130 >= v205->max_length )
            sub_1BCAA44(v203, v204);
          v206 = v205->m_Items[v130];
          if ( !v206 )
            sub_1BCAA3C(v203, v204);
          v207 = (UnityEngine_Component_o *)v206->fields.onRenderer;
          if ( !v207 )
            sub_1BCAA3C(0LL, v204);
          v208 = UnityEngine_Component__get_gameObject(v207, 0LL);
          if ( !v208 )
            sub_1BCAA3C(0LL, v209);
          UnityEngine_GameObject__SetActive(v208, v245 != 0, 0LL);
          v212 = this->fields.exIconSet;
          if ( !v212 )
            sub_1BCAA3C(v210, v211);
          if ( v130 >= v212->max_length )
            sub_1BCAA44(v210, v211);
          v213 = v212->m_Items[v130];
          if ( !v213 )
            sub_1BCAA3C(v210, v211);
          releaseEffect = v213->fields.releaseEffect;
          if ( !releaseEffect )
            sub_1BCAA3C(0LL, v211);
          v215 = UnityEngine_GameObject__get_gameObject(releaseEffect, 0LL);
          if ( !v215 )
            sub_1BCAA3C(0LL, v216);
          UnityEngine_GameObject__SetActive(v215, 0, 0LL);
          if ( v245 )
          {
            if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo, v217);
            IsPlayed = ClassBoardUtility__IsPlayedExClassReleaseEffect((int32_t)classId, 0LL);
            if ( !IsPlayed )
            {
              v220 = this->fields.exIconSet;
              if ( !v220 )
                sub_1BCAA3C(IsPlayed, v219);
              if ( v130 >= v220->max_length )
                sub_1BCAA44(IsPlayed, v219);
              v221 = v220->m_Items[v130];
              if ( !v221 )
                sub_1BCAA3C(IsPlayed, v219);
              animation = (UnityEngine_Object_o *)v221->fields.animation;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v219);
              v223 = UnityEngine_Object__op_Inequality(animation, 0LL, 0LL);
              if ( v223 )
              {
                v225 = this->fields.exIconSet;
                if ( !v225 )
                  sub_1BCAA3C(v223, v224);
                if ( v130 >= v225->max_length )
                  sub_1BCAA44(v223, v224);
                v226 = v225->m_Items[v130];
                if ( !v226 )
                  sub_1BCAA3C(v223, v224);
                v227 = (UnityEngine_Component_o *)v226->fields.offRenderer;
                if ( !v227 )
                  sub_1BCAA3C(0LL, v224);
                v228 = UnityEngine_Component__get_gameObject(v227, 0LL);
                if ( !v228 )
                  sub_1BCAA3C(0LL, v229);
                UnityEngine_GameObject__SetActive(v228, 1, 0LL);
                v232 = this->fields.exIconSet;
                if ( !v232 )
                  sub_1BCAA3C(v230, v231);
                if ( v130 >= v232->max_length )
                  sub_1BCAA44(v230, v231);
                v233 = v232->m_Items[v130];
                if ( !v233 )
                  sub_1BCAA3C(v230, v231);
                v234 = (UnityEngine_Component_o *)v233->fields.onRenderer;
                if ( !v234 )
                  sub_1BCAA3C(0LL, v231);
                v235 = UnityEngine_Component__get_gameObject(v234, 0LL);
                if ( !v235 )
                  sub_1BCAA3C(0LL, v236);
                UnityEngine_GameObject__SetActive(v235, 0, 0LL);
                v239 = this->fields.exIconSet;
                if ( !v239 )
                  sub_1BCAA3C(v237, v238);
                if ( v130 >= v239->max_length )
                  sub_1BCAA44(v237, v238);
                v240 = v239->m_Items[v130];
                if ( !v240 )
                  sub_1BCAA3C(v237, v238);
                exClassReleaseEffectAnimationDic = this->fields.exClassReleaseEffectAnimationDic;
                if ( !exClassReleaseEffectAnimationDic )
                  sub_1BCAA3C(0LL, classId);
                System_Collections_Generic_Dictionary_int__object___Add(
                  (System_Collections_Generic_Dictionary_int__object__o *)exClassReleaseEffectAnimationDic,
                  (int32_t)classId,
                  (Il2CppObject *)v240->fields.animation,
                  (const MethodInfo_3205EE4 *)Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__Add__);
              }
            }
          }
          goto LABEL_12;
        }
      }
      ++v130;
      v129 = this->fields.exIconSet;
      if ( !v129 )
        goto LABEL_94;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__bool___Dispose(
    &v251,
    (const MethodInfo_3353D1C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
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
  sub_1BCA784(
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

  if ( (byte_4B19648 & 1) == 0 )
  {
    sub_1BCA7E0(&ClassBoardBackground__WaitAnimationFinished_d__45_TypeInfo, anim, name);
    byte_4B19648 = 1;
  }
  v8 = sub_1BCAA2C(ClassBoardBackground__WaitAnimationFinished_d__45_TypeInfo, anim, name, endCallback);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  *(_DWORD *)(v8 + 16) = 0;
  *(_QWORD *)(v8 + 32) = anim;
  sub_1BCA784((PartyOrganizationUtility_o *)(v8 + 32), (int64_t)anim, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v8 + 40) = name;
  sub_1BCA784((PartyOrganizationUtility_o *)(v8 + 40), (int64_t)name, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v8 + 48) = endCallback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v8 + 48), (int64_t)endCallback, v21, v22, v23, v24, v25, v26);
  return (System_Collections_IEnumerator_o *)v8;
}


void __fastcall ClassBoardBackground___PlayStartExClassReleaseEffectPlayer_b__43_0(
        ClassBoardBackground_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  System_Collections_Generic_Dictionary_int__object__o *v8; // x0
  PartyOrganizationUtility_o *p_exClassReleaseEffectAnimationDic; // x19
  struct System_Collections_Generic_Dictionary_int__SimpleAnimation__o *exClassReleaseEffectAnimationDic; // t1
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  __int64 v12; // x1
  System_Int32_array *v13; // x20
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4B1964B & 1) == 0 )
  {
    sub_1BCA7E0(&ClassBoardUtility_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__get_Keys__, v4, v5);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v6, v7);
    byte_4B1964B = 1;
  }
  exClassReleaseEffectAnimationDic = this->fields.exClassReleaseEffectAnimationDic;
  p_exClassReleaseEffectAnimationDic = (PartyOrganizationUtility_o *)&this->fields.exClassReleaseEffectAnimationDic;
  v8 = (System_Collections_Generic_Dictionary_int__object__o *)exClassReleaseEffectAnimationDic;
  if ( !exClassReleaseEffectAnimationDic )
    sub_1BCAA3C(0LL, method);
  Keys = System_Collections_Generic_Dictionary_int__object___get_Keys(
           v8,
           (const MethodInfo_3205BA4 *)Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__get_Keys__);
  v13 = System_Linq_Enumerable__ToArray_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
          (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo, v12);
  ClassBoardUtility__SavePlayedExClassReleaseEffect(v13, 0LL);
  p_exClassReleaseEffectAnimationDic->klass = 0LL;
  sub_1BCA784(p_exClassReleaseEffectAnimationDic, 0LL, v14, v15, v16, v17, v18, v19);
}


void __fastcall ClassBoardBackground___PlayStartMainEffectPlayer_b__41_0(
        ClassBoardBackground_o *this,
        const MethodInfo *method)
{
  ClassBoardEffectPlayer_o *startMainEffectPlayer; // x0

  startMainEffectPlayer = this->fields.startMainEffectPlayer;
  if ( !startMainEffectPlayer )
    sub_1BCAA3C(0LL, method);
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
  __int64 v2; // x2
  __int64 v3; // x3
  int32_t _1__state; // w8
  struct ClassBoardBackground_o *_4__this; // x0
  float exClassReleaseEffectStartSec; // s8
  UnityEngine_WaitForSeconds_o *v8; // x20
  Il2CppObject **p__2__current; // x19
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  bool result; // w0

  if ( (byte_4B1964F & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_WaitForSeconds_TypeInfo, method, v2);
    byte_4B1964F = 1;
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
      v8 = (UnityEngine_WaitForSeconds_o *)sub_1BCAA2C(UnityEngine_WaitForSeconds_TypeInfo, method, v2, v3);
      UnityEngine_WaitForSeconds___ctor(v8, exClassReleaseEffectStartSec, 0LL);
      this->fields.__2__current = (Il2CppObject *)v8;
      p__2__current = &this->fields.__2__current;
      sub_1BCA784((PartyOrganizationUtility_o *)p__2__current, (int64_t)v8, v10, v11, v12, v13, v14, v15);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
LABEL_10:
    sub_1BCAA3C(_4__this, method);
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(
         &Method_ClassBoardBackground__PlayExClassReleaseEffectPlayer_d__42_System_Collections_IEnumerator_Reset__,
         v7);
  sub_1BCA908(v6, v8);
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
  __int64 v2; // x2
  SimpleAnimation_o *anim; // x0
  SimpleAnimation_State_o *State; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v7; // x20
  __int64 v8; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 p_method; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  bool result; // w0
  Il2CppObject **p__2__current; // x19

  if ( (byte_4B19650 & 1) == 0 )
  {
    sub_1BCA7E0(&SimpleAnimation_State_TypeInfo, method, v2);
    byte_4B19650 = 1;
  }
  if ( this->fields.__1__state > 1u )
    return 0;
  anim = this->fields.anim;
  this->fields.__1__state = -1;
  if ( !anim )
    sub_1BCAA3C(0LL, method);
  State = SimpleAnimation__GetState(anim, this->fields.name, 0LL);
  if ( !State )
    goto LABEL_13;
  klass = State->klass;
  v7 = State;
  v8 = *(unsigned __int16 *)(&State->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&State->klass->_2.bitflags2 + 3) )
  {
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v8;
      p_offset += 2;
      if ( !v8 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 5].method;
  }
  else
  {
LABEL_10:
    p_method = sub_1C1C7C0(State, SimpleAnimation_State_TypeInfo, 5LL);
  }
  if ( (*(float (__fastcall **)(SimpleAnimation_State_o *, _QWORD))p_method)(v7, *(_QWORD *)(p_method + 8)) >= 1.0 )
  {
LABEL_13:
    ActionExtensions__Call(this->fields.endCallback, 0LL);
    return 0;
  }
  this->fields.__2__current = 0LL;
  p__2__current = &this->fields.__2__current;
  sub_1BCA784((PartyOrganizationUtility_o *)p__2__current, 0LL, v11, v12, v13, v14, v15, v16);
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_ClassBoardBackground__WaitAnimationFinished_d__45_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B1964C & 1) == 0 )
  {
    sub_1BCA7E0(&ClassBoardBackground___c_TypeInfo, v1, v2);
    byte_4B1964C = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(ClassBoardBackground___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  ClassBoardBackground___c_TypeInfo->static_fields->__9 = (struct ClassBoardBackground___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)ClassBoardBackground___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, a);
  return a->fields.classId - b->fields.classId;
}


void __fastcall ClassBoardBackground___c___OnDestroy_b__40_0(
        ClassBoardBackground___c_o *this,
        UnityEngine_Renderer_o *x,
        const MethodInfo *method)
{
  __int64 v4; // x1
  UnityEngine_Object_o *material; // x19

  if ( (byte_4B1964D & 1) == 0 )
  {
    this = (ClassBoardBackground___c_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, x, method);
    byte_4B1964D = 1;
  }
  if ( !x )
    sub_1BCAA3C(this, x);
  material = (UnityEngine_Object_o *)UnityEngine_Renderer__get_material(x, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  UnityEngine_Object__Destroy_70154244(material, 0LL);
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
  __int64 v6; // x2
  System_String_o *name; // x20
  Il2CppObject *v8; // x0
  System_String_o *v9; // x0
  int32_t iconId; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_4B1964E & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, x, method);
    this = (ClassBoardBackground___c__DisplayClass37_0_o *)sub_1BCA7E0(&StringLiteral_4586/*"ClassIcon{0}"*/, v5, v6);
    byte_4B1964E = 1;
  }
  if ( !x )
    sub_1BCAA3C(this, x);
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)x, 0LL);
  iconId = v4->fields.iconId;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId);
  v9 = System_String__Format((System_String_o *)StringLiteral_4586/*"ClassIcon{0}"*/, v8, 0LL);
  return System_String__op_Equality(name, v9, 0LL);
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
    sub_1BCAA3C(this, x);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)x, 0LL);
  return System_String__op_Equality(name, this->fields.glowIconName, 0LL);
}