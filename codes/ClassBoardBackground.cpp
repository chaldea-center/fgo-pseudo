void __fastcall ClassBoardBackground___ctor(ClassBoardBackground_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w1

  if ( (byte_49FF660 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_16193/*"_MainTex"*/, method);
    byte_49FF660 = 1;
  }
  v5 = StringLiteral_16193/*"_MainTex"*/;
  this->fields.iconMaterialPropertyName = (struct System_String_o *)StringLiteral_16193/*"_MainTex"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.iconMaterialPropertyName, v5, v2, v3);
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
    sub_1B64324(0LL);
  UnityEngine_GameObject__SetActive(earthAccessoriesObject, value, 0LL);
}


void __fastcall ClassBoardBackground__Awake(ClassBoardBackground_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *gameObject; // x0
  System_String_o *name; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  ClassBoardEffectPlayer_o *v9; // x21
  int32_t v10; // w2
  int32_t v11; // w3
  struct ClassBoardEffectPlayer_o *startMainEffectPlayer; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  System_Action_o *v15; // x21
  int32_t v16; // w2
  int32_t v17; // w3

  if ( (byte_49FF654 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_ClassBoardBackground_PlayStartMainEffectPlayer__, v3);
    sub_1B640C8(&ClassBoardEffectPlayer_TypeInfo, v4);
    byte_49FF654 = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_6;
  name = UnityEngine_Object__get_name(gameObject, 0LL);
  v9 = (ClassBoardEffectPlayer_o *)sub_1B64314(ClassBoardEffectPlayer_TypeInfo, v7, v8);
  ClassBoardEffectPlayer___ctor_44071908(v9, name, 0LL);
  this->fields.startMainEffectPlayer = v9;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.startMainEffectPlayer, (int32_t)v9, v10, v11);
  startMainEffectPlayer = this->fields.startMainEffectPlayer;
  v15 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_ClassBoardBackground_PlayStartMainEffectPlayer__, 0LL);
  if ( !startMainEffectPlayer )
LABEL_6:
    sub_1B64324(gameObject);
  startMainEffectPlayer->fields.playCallback = v15;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&startMainEffectPlayer->fields.playCallback, (int32_t)v15, v16, v17);
}


void __fastcall ClassBoardBackground__CallAnimationEventBoardParent(
        ClassBoardBackground_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *boardParentAnimation; // x20
  UnityEngine_Object_o *boardParentAnimationClip; // x20
  UnityEngine_Object_o *name; // x0
  SimpleAnimation_o *v6; // x19

  if ( (byte_49FF65F & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FF65F = 1;
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
        || (v6 = this->fields.boardParentAnimation,
            name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0LL),
            !v6) )
      {
        sub_1B64324(name);
      }
      SimpleAnimation__Play_63513060(v6, (System_String_o *)name, 0LL);
    }
  }
}


void __fastcall ClassBoardBackground__CallAnimationEventShowBoard(
        ClassBoardBackground_o *this,
        const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *p_showBoardCallback; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  p_showBoardCallback = (ServantStatusBattleListViewItem_o *)&this->fields.showBoardCallback;
  ActionExtensions__Call(this->fields.showBoardCallback, 0LL);
  p_showBoardCallback->klass = 0LL;
  sub_1B6406C(p_showBoardCallback, 0, v3, v4);
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
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_49FF655 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, camera);
    byte_49FF655 = 1;
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
    sub_1B64324(classBoardViewCamera);
  }
  UnityEngine_GameObject__SetActive(v9, (unsigned __int8)classBoardViewCamera & 1, 0LL);
  this->fields.currentCamera = camera;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.currentCamera, (int32_t)camera, v10, v11);
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
  __int64 v23; // x2
  System_Collections_Generic_List_object__o *v24; // x20
  System_Comparison_T__o *v25; // x21
  Il2CppObject *v26; // x22
  struct ClassBoardBackground___c_StaticFields *static_fields; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  DataMasterBase_TMaster__TEntity__PKType__o *v30; // x20
  BalanceConfig_c *v31; // x0
  ClassBoardClassEntity_o *current; // x21
  BalanceConfig_c *v33; // x0
  _BOOL8 v34; // x0
  int32_t monitor_high; // w22
  _BOOL8 IsOpen; // x0
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+0h] [xbp-90h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+20h] [xbp-70h] BYREF
  System_Collections_Generic_List_ClassBoardClassEntity__o *entitys; // [xsp+38h] [xbp-58h] BYREF

  if ( (byte_49FF658 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, *(_QWORD *)&baseId);
    sub_1B640C8(&System_Comparison_ClassBoardClassEntity__TypeInfo, v4);
    sub_1B640C8(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v5);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantClassMaster___, v6);
    sub_1B640C8(&DataManager_TypeInfo, v7);
    sub_1B640C8(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__bool__Add__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__, v10);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__bool__TypeInfo, v11);
    sub_1B640C8(&Method_System_Linq_Enumerable_Contains_int___, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__get_Current__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_ClassBoardClassEntity__Sort__, v17);
    sub_1B640C8(&Method_ClassBoardBackground___c__GetIconIdList_b__38_0__, v18);
    sub_1B640C8(&ClassBoardBackground___c_TypeInfo, v19);
    byte_49FF658 = 1;
  }
  entitys = 0LL;
  memset(&v40, 0, sizeof(v40));
  entity = 0LL;
  v20 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_1B64314(
                                                                System_Collections_Generic_Dictionary_int__bool__TypeInfo,
                                                                *(_QWORD *)&baseId,
                                                                method);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v20,
    (const MethodInfo_3114728 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
  if ( !Master_object )
    goto LABEL_37;
  if ( !ClassBoardClassMaster__TryGetEntityList((ClassBoardClassMaster_o *)Master_object, &entitys, baseId, 0LL) )
    return v20;
  v24 = (System_Collections_Generic_List_object__o *)entitys;
  Master_object = ClassBoardBackground___c_TypeInfo;
  if ( !ClassBoardBackground___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardBackground___c_TypeInfo);
    Master_object = ClassBoardBackground___c_TypeInfo;
  }
  v25 = *(System_Comparison_T__o **)(*((_QWORD *)Master_object + 23) + 8LL);
  if ( !v25 )
  {
    if ( !*((_DWORD *)Master_object + 56) )
    {
      j_il2cpp_runtime_class_init_0(Master_object);
      Master_object = ClassBoardBackground___c_TypeInfo;
    }
    v26 = (Il2CppObject *)**((_QWORD **)Master_object + 23);
    v25 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_ClassBoardClassEntity__TypeInfo, v22, v23);
    System_Comparison_object____ctor(v25, v26, Method_ClassBoardBackground___c__GetIconIdList_b__38_0__, 0LL);
    static_fields = ClassBoardBackground___c_TypeInfo->static_fields;
    static_fields->__9__38_0 = (struct System_Comparison_ClassBoardClassEntity__o *)v25;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__38_0, (int32_t)v25, v28, v29);
  }
  if ( !v24 )
    goto LABEL_37;
  System_Collections_Generic_List_object___Sort_55243320(
    v24,
    v25,
    (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_ClassBoardClassEntity__Sort__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantClassMaster___);
  if ( !entitys )
LABEL_37:
    sub_1B64324(Master_object);
  v30 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v38,
    (System_Collections_Generic_List_object__o *)entitys,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__);
  v40 = v38;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v40,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__) )
  {
    v31 = BalanceConfig_TypeInfo;
    current = (ClassBoardClassEntity_o *)v40.fields._current;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    if ( !current )
      sub_1B64324(v31);
    v33 = (BalanceConfig_c *)System_Linq_Enumerable__Contains_int_(
                               (System_Collections_Generic_IEnumerable_TSource__o *)BalanceConfig_TypeInfo->static_fields->AvailableValidIds,
                               current->fields.classId,
                               (const MethodInfo_2E52CA8 *)Method_System_Linq_Enumerable_Contains_int___);
    if ( ((unsigned __int8)v33 & 1) != 0 )
    {
      v33 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v33 = BalanceConfig_TypeInfo;
      }
      if ( v33->static_fields->AvailableValidBaseId != current->fields.classId )
        continue;
    }
    if ( !v30 )
      sub_1B64324(v33);
    v34 = DataMasterBase_object__object__int___TryGetEntity(
            v30,
            &entity,
            current->fields.classId,
            (const MethodInfo_30D3EF8 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    if ( v34 )
    {
      if ( !entity )
        sub_1B64324(v34);
      monitor_high = HIDWORD(entity[2].monitor);
      IsOpen = ClassBoardClassEntity__IsOpen(current, 0LL);
      if ( !v20 )
        sub_1B64324(IsOpen);
      System_Collections_Generic_Dictionary_int__bool___Add(
        v20,
        monitor_high,
        IsOpen,
        (const MethodInfo_3115100 *)Method_System_Collections_Generic_Dictionary_int__bool__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v40,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__);
  return v20;
}


UnityEngine_RenderTexture_o *__fastcall ClassBoardBackground__GetRenderTexture(
        ClassBoardBackground_o *this,
        const MethodInfo *method)
{
  UnityEngine_Camera_o *currentCamera; // x0

  currentCamera = this->fields.currentCamera;
  if ( !currentCamera )
    sub_1B64324(0LL);
  return UnityEngine_Camera__get_targetTexture(currentCamera, 0LL);
}


void __fastcall ClassBoardBackground__OnDestroy(ClassBoardBackground_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  ClassBoardBackground___c_c *v7; // x0
  System_Collections_Generic_IEnumerable_T__o *iconRenderers; // x19
  System_Action_object__o *_9__40_0; // x20
  Il2CppObject *v10; // x21
  struct ClassBoardBackground___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_49FF65A & 1) == 0 )
  {
    sub_1B640C8(&System_Action_Renderer__TypeInfo, method);
    sub_1B640C8(&Method_BasicHelper_ForEach_Renderer___, v4);
    sub_1B640C8(&Method_ClassBoardBackground___c__OnDestroy_b__40_0__, v5);
    sub_1B640C8(&ClassBoardBackground___c_TypeInfo, v6);
    byte_49FF65A = 1;
  }
  v7 = ClassBoardBackground___c_TypeInfo;
  iconRenderers = (System_Collections_Generic_IEnumerable_T__o *)this->fields.iconRenderers;
  if ( !ClassBoardBackground___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardBackground___c_TypeInfo);
    v7 = ClassBoardBackground___c_TypeInfo;
  }
  _9__40_0 = (System_Action_object__o *)v7->static_fields->__9__40_0;
  if ( !_9__40_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = ClassBoardBackground___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v7->static_fields->__9;
    _9__40_0 = (System_Action_object__o *)sub_1B64314(System_Action_Renderer__TypeInfo, method, v2);
    System_Action_object____ctor(_9__40_0, v10, Method_ClassBoardBackground___c__OnDestroy_b__40_0__, 0LL);
    static_fields = ClassBoardBackground___c_TypeInfo->static_fields;
    static_fields->__9__40_0 = (struct System_Action_Renderer__o *)_9__40_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__40_0, (int32_t)_9__40_0, v12, v13);
  }
  BasicHelper__ForEach_object_(
    iconRenderers,
    (System_Action_T__o *)_9__40_0,
    (const MethodInfo_2E26860 *)Method_BasicHelper_ForEach_Renderer___);
}


void __fastcall ClassBoardBackground__PlayBoardParentBeforeAnimation(
        ClassBoardBackground_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *boardParentAnimation; // x20
  UnityEngine_Object_o *boardParentBeforeAnimationClip; // x20
  SimpleAnimation_o *v5; // x0

  if ( (byte_49FF659 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FF659 = 1;
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
      v5 = this->fields.boardParentAnimation;
      if ( !v5
        || (SimpleAnimation__set_clip(v5, this->fields.boardParentBeforeAnimationClip, 0LL),
            (v5 = this->fields.boardParentAnimation) == 0LL) )
      {
        sub_1B64324(v5);
      }
      SimpleAnimation__Play(v5, 0LL);
    }
  }
}


System_Collections_IEnumerator_o *__fastcall ClassBoardBackground__PlayExClassReleaseEffectPlayer(
        ClassBoardBackground_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_49FF65C & 1) == 0 )
  {
    sub_1B640C8(&ClassBoardBackground__PlayExClassReleaseEffectPlayer_d__42_TypeInfo, method);
    byte_49FF65C = 1;
  }
  v4 = sub_1B64314(ClassBoardBackground__PlayExClassReleaseEffectPlayer_d__42_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  *(_DWORD *)(v4 + 16) = 0;
  *(_QWORD *)(v4 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v4 + 32), (int32_t)this, v5, v6);
  return (System_Collections_IEnumerator_o *)v4;
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
    sub_1B64324(this);
  SimpleAnimation__Rewind(anim, 0LL);
  v9 = SimpleAnimation__Play_63513060(anim, name, 0LL);
  v11 = ClassBoardBackground__WaitAnimationFinished((ClassBoardBackground_o *)v9, anim, name, endCallback, v10);
  UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)this, v11, 0LL);
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
  struct System_Collections_Generic_Dictionary_int__SimpleAnimation__o *exClassReleaseEffectAnimationDic; // x0
  char v14; // w21
  __int64 v15; // x1
  __int64 v16; // x2
  const MethodInfo *v17; // x4
  Il2CppObject *value; // x20
  System_Action_o *v19; // x21
  const MethodInfo *v20; // x4
  ClassBoardBackground___c_c *v21; // x0
  System_String_o *v22; // x21
  System_Action_o *_9__43_1; // x22
  Il2CppObject *v24; // x23
  struct ClassBoardBackground___c_StaticFields *static_fields; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v28; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v29; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_49FF65D & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_ClassBoardBackground__PlayStartExClassReleaseEffectPlayer_b__43_0__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__GetEnumerator__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__Dispose__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__MoveNext__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__get_Current__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_int__SimpleAnimation__get_Key__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_int__SimpleAnimation__get_Value__, v9);
    sub_1B640C8(&Method_ClassBoardBackground___c__PlayStartExClassReleaseEffectPlayer_b__43_1__, v10);
    sub_1B640C8(&ClassBoardBackground___c_TypeInfo, v11);
    sub_1B640C8(&StringLiteral_10508/*"Particle_CrassIcon_Ex_Released"*/, v12);
    byte_49FF65D = 1;
  }
  memset(&v29, 0, sizeof(v29));
  if ( !BasicHelper__IsNullOrEmpty(
          (System_Collections_ICollection_o *)this->fields.exClassReleaseEffectAnimationDic,
          0LL) )
  {
    exClassReleaseEffectAnimationDic = this->fields.exClassReleaseEffectAnimationDic;
    if ( !exClassReleaseEffectAnimationDic )
      sub_1B64324(0LL);
    System_Collections_Generic_Dictionary_int__object___GetEnumerator(
      &v28,
      (System_Collections_Generic_Dictionary_int__object__o *)exClassReleaseEffectAnimationDic,
      (const MethodInfo_3123DBC *)Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__GetEnumerator__);
    v29 = v28;
    v14 = 1;
    while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
              &v29,
              (const MethodInfo_3269C74 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__MoveNext__) )
    {
      value = v29.fields._current.fields.value;
      if ( (v14 & 1) != 0 )
      {
        v19 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v15, v16);
        System_Action___ctor(
          v19,
          (Il2CppObject *)this,
          Method_ClassBoardBackground__PlayStartExClassReleaseEffectPlayer_b__43_0__,
          0LL);
        ClassBoardBackground__PlaySimpleAnimation(
          this,
          (SimpleAnimation_o *)value,
          (System_String_o *)StringLiteral_10508/*"Particle_CrassIcon_Ex_Released"*/,
          v19,
          v20);
        v14 = 0;
      }
      else
      {
        v21 = ClassBoardBackground___c_TypeInfo;
        if ( !ClassBoardBackground___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ClassBoardBackground___c_TypeInfo);
          v21 = ClassBoardBackground___c_TypeInfo;
        }
        v22 = (System_String_o *)StringLiteral_10508/*"Particle_CrassIcon_Ex_Released"*/;
        _9__43_1 = v21->static_fields->__9__43_1;
        if ( !_9__43_1 )
        {
          if ( !v21->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v21);
            v21 = ClassBoardBackground___c_TypeInfo;
          }
          v24 = (Il2CppObject *)v21->static_fields->__9;
          _9__43_1 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v15, v16);
          System_Action___ctor(
            _9__43_1,
            v24,
            Method_ClassBoardBackground___c__PlayStartExClassReleaseEffectPlayer_b__43_1__,
            0LL);
          static_fields = ClassBoardBackground___c_TypeInfo->static_fields;
          static_fields->__9__43_1 = _9__43_1;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__43_1, (int32_t)_9__43_1, v26, v27);
        }
        ClassBoardBackground__PlaySimpleAnimation(this, (SimpleAnimation_o *)value, v22, _9__43_1, v17);
        v14 = 0;
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
      &v29,
      (const MethodInfo_3269D98 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__Dispose__);
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
  Il2CppObject *v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  System_String_o *v14; // x20
  Il2CppObject *v15; // x0
  const MethodInfo *v16; // x1
  System_Collections_IEnumerator_o *v17; // x0
  SimpleAnimation_o *mainAnimation; // x21
  System_Action_o *v19; // x22
  const MethodInfo *v20; // x4
  int32_t v21; // [xsp+8h] [xbp-38h] BYREF
  int32_t v22; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49FF65B & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_ClassBoardBackground__PlayStartMainEffectPlayer_b__41_0__, v3);
    sub_1B640C8(&Method_ClassBoardEffectPlayer_GetData_int___, v4);
    sub_1B640C8(&int_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_8787/*"MainTransition{0}_Release"*/, v6);
    sub_1B640C8(&StringLiteral_1/*""*/, v7);
    sub_1B640C8(&StringLiteral_8786/*"MainTransition{0}"*/, v8);
    byte_49FF65B = 1;
  }
  startMainEffectPlayer = this->fields.startMainEffectPlayer;
  if ( !startMainEffectPlayer )
    sub_1B64324(0LL);
  Data_int = ClassBoardEffectPlayer__GetData_int_(
               startMainEffectPlayer,
               (const MethodInfo_2E2D1B8 *)Method_ClassBoardEffectPlayer_GetData_int___);
  if ( BasicHelper__IsNullOrEmpty(
         (System_Collections_ICollection_o *)this->fields.exClassReleaseEffectAnimationDic,
         0LL) )
  {
    v21 = Data_int;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21);
    v14 = System_String__Format((System_String_o *)StringLiteral_8786/*"MainTransition{0}"*/, v11, 0LL);
  }
  else
  {
    v22 = Data_int;
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22);
    v14 = System_String__Format((System_String_o *)StringLiteral_8787/*"MainTransition{0}_Release"*/, v15, 0LL);
    v17 = ClassBoardBackground__PlayExClassReleaseEffectPlayer(this, v16);
    UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)this, v17, 0LL);
  }
  mainAnimation = this->fields.mainAnimation;
  v19 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v12, v13);
  System_Action___ctor(v19, (Il2CppObject *)this, Method_ClassBoardBackground__PlayStartMainEffectPlayer_b__41_0__, 0LL);
  ClassBoardBackground__PlaySimpleAnimation(this, mainAnimation, v14, v19, v20);
}


void __fastcall ClassBoardBackground__SetBoardParentAnimation(
        ClassBoardBackground_o *this,
        SimpleAnimation_o *animation,
        const MethodInfo *method)
{
  int32_t v3; // w3
  UnityEngine_Object_o *boardParentAnimation; // x20
  UnityEngine_Object_o *boardParentAnimationClip; // x20
  UnityEngine_Object_o *name; // x0
  SimpleAnimation_o *v9; // x20
  UnityEngine_AnimationClip_o *v10; // x20
  SimpleAnimation_o *v11; // x21
  UnityEngine_Object_o *boardParentBeforeAnimationClip; // x20
  SimpleAnimation_o *v13; // x20
  UnityEngine_AnimationClip_o *v14; // x20
  SimpleAnimation_o *v15; // x21
  SimpleAnimation_o *v16; // x19

  if ( (byte_49FF656 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, animation);
    byte_49FF656 = 1;
  }
  this->fields.boardParentAnimation = animation;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.boardParentAnimation,
    (int32_t)animation,
    (int32_t)method,
    v3);
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
      v9 = this->fields.boardParentAnimation;
      name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0LL);
      if ( !v9 )
        goto LABEL_28;
      name = (UnityEngine_Object_o *)SimpleAnimation__GetState(v9, (System_String_o *)name, 0LL);
      if ( !name )
      {
        v10 = this->fields.boardParentAnimationClip;
        if ( !v10 )
          goto LABEL_28;
        v11 = this->fields.boardParentAnimation;
        name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(
                                         (UnityEngine_Object_o *)this->fields.boardParentAnimationClip,
                                         0LL);
        if ( !v11 )
          goto LABEL_28;
        SimpleAnimation__AddClip(v11, v10, (System_String_o *)name, 0LL);
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
        v13 = this->fields.boardParentAnimation;
        name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0LL);
        if ( v13 )
        {
          name = (UnityEngine_Object_o *)SimpleAnimation__GetState(v13, (System_String_o *)name, 0LL);
          if ( !name )
          {
            v14 = this->fields.boardParentBeforeAnimationClip;
            if ( !v14 )
              goto LABEL_28;
            v15 = this->fields.boardParentAnimation;
            name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(
                                             (UnityEngine_Object_o *)this->fields.boardParentBeforeAnimationClip,
                                             0LL);
            if ( !v15 )
              goto LABEL_28;
            SimpleAnimation__AddClip(v15, v14, (System_String_o *)name, 0LL);
          }
          name = (UnityEngine_Object_o *)this->fields.boardParentBeforeAnimationClip;
          if ( name )
          {
            v16 = this->fields.boardParentAnimation;
            name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0LL);
            if ( v16 )
            {
              SimpleAnimation__Play_63513060(v16, (System_String_o *)name, 0LL);
              return;
            }
          }
        }
      }
LABEL_28:
      sub_1B64324(name);
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
  int32_t v33; // w2
  int32_t v34; // w3
  System_Collections_Generic_IEnumerable_TSource__o *iconTextures; // x21
  __int64 v36; // x1
  __int64 v37; // x2
  System_Func_object__bool__o *v38; // x23
  Il2CppObject *v39; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  UnityEngine_Object_o *v42; // x21
  __int64 v43; // x1
  __int64 v44; // x2
  System_Collections_Generic_IEnumerable_T__o *iconRenderers; // x21
  System_Action_object__o *v46; // x23
  __int64 v47; // x1
  __int64 v48; // x2
  System_Collections_Generic_Dictionary_int__object__o *v49; // x21
  int32_t v50; // w2
  int32_t v51; // w3
  __int64 v52; // x1
  const MethodInfo *v53; // x2
  struct ClassBoardBackground_ExClassIconSet_array *exIconSet; // x19
  __int64 v55; // x1
  __int64 v56; // x2
  Il2CppObject *key; // x22
  __int64 v58; // x21
  Il2CppObject *v59; // x1
  System_String_o *v60; // x0
  int32_t v61; // w2
  int32_t v62; // w3
  Il2CppObject *v63; // x1
  System_String_o *v64; // x0
  int32_t v65; // w2
  int32_t v66; // w3
  Il2CppObject *v67; // x1
  System_String_o *v68; // x0
  int32_t v69; // w2
  int32_t v70; // w3
  _BOOL8 v71; // x0
  __int64 v72; // x1
  __int64 v73; // x2
  struct ClassBoardBackground_ExClassIconSet_array *v74; // x8
  il2cpp_array_size_t v75; // w19
  System_Func_object__bool__o **v76; // x22
  System_Func_object__bool__o **v77; // x24
  System_Func_object__bool__o **v78; // x25
  il2cpp_array_size_t v79; // w9
  ClassBoardBackground_ExClassIconSet_o *v80; // x8
  System_Func_object__bool__o *v81; // x23
  System_Collections_Generic_IEnumerable_TSource__o *textures; // x27
  int32_t v83; // w2
  int32_t v84; // w3
  Il2CppObject *v85; // x0
  __int64 v86; // x1
  __int64 v87; // x2
  System_Func_object__bool__o *v88; // x26
  UnityEngine_Object_o *v89; // x23
  int32_t v90; // w2
  int32_t v91; // w3
  Il2CppObject *v92; // x0
  __int64 v93; // x1
  __int64 v94; // x2
  System_Func_object__bool__o *v95; // x28
  UnityEngine_Object_o *v96; // x26
  int32_t v97; // w2
  int32_t v98; // w3
  Il2CppObject *v99; // x27
  struct ClassBoardBackground_ExClassIconSet_array *v100; // x8
  ClassBoardBackground_ExClassIconSet_o *v101; // x8
  UnityEngine_Renderer_o *v102; // x0
  UnityEngine_Material_o *material; // x0
  __int64 v104; // x0
  __int64 v105; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v106; // x8
  ClassBoardBackground_ExClassIconSet_o *v107; // x8
  UnityEngine_Renderer_o *effectRenderer; // x0
  UnityEngine_Material_o *v109; // x0
  __int64 v110; // x0
  __int64 v111; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v112; // x8
  ClassBoardBackground_ExClassIconSet_o *v113; // x8
  UnityEngine_Renderer_o *onRenderer; // x0
  UnityEngine_Material_o *v115; // x0
  __int64 v116; // x0
  __int64 v117; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v118; // x8
  ClassBoardBackground_ExClassIconSet_o *v119; // x8
  UnityEngine_Renderer_o *effectGlowRenderer; // x0
  UnityEngine_Material_o *v121; // x0
  __int64 v122; // x0
  __int64 v123; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v124; // x8
  ClassBoardBackground_ExClassIconSet_o *v125; // x8
  UnityEngine_Component_o *v126; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v128; // x0
  __int64 v129; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v130; // x8
  ClassBoardBackground_ExClassIconSet_o *v131; // x8
  UnityEngine_Component_o *v132; // x0
  UnityEngine_GameObject_o *v133; // x0
  __int64 v134; // x0
  __int64 v135; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v136; // x8
  ClassBoardBackground_ExClassIconSet_o *v137; // x8
  UnityEngine_GameObject_o *releaseEffect; // x0
  UnityEngine_GameObject_o *v139; // x0
  _BOOL8 IsPlayed; // x0
  __int64 v141; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v142; // x8
  ClassBoardBackground_ExClassIconSet_o *v143; // x8
  UnityEngine_Object_o *animation; // x21
  _BOOL8 v145; // x0
  __int64 v146; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v147; // x8
  ClassBoardBackground_ExClassIconSet_o *v148; // x8
  UnityEngine_Component_o *v149; // x0
  UnityEngine_GameObject_o *v150; // x0
  __int64 v151; // x0
  __int64 v152; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v153; // x8
  ClassBoardBackground_ExClassIconSet_o *v154; // x8
  UnityEngine_Component_o *v155; // x0
  UnityEngine_GameObject_o *v156; // x0
  __int64 v157; // x0
  __int64 v158; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v159; // x8
  ClassBoardBackground_ExClassIconSet_o *v160; // x8
  struct System_Collections_Generic_Dictionary_int__SimpleAnimation__o *exClassReleaseEffectAnimationDic; // x0
  int max_length; // w8
  unsigned int v163; // w20
  ClassBoardBackground_ExClassIconSet_o *v164; // x21
  __int64 v165; // [xsp+0h] [xbp-C0h]
  Il2CppObject *classId; // [xsp+8h] [xbp-B8h]
  int v168; // [xsp+18h] [xbp-A8h] BYREF
  int v169; // [xsp+1Ch] [xbp-A4h] BYREF
  __int128 v170[2]; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v171; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_49FF657 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_Renderer__TypeInfo, *(_QWORD *)&baseId);
    sub_1B640C8(&Method_BasicHelper_ForEach_Renderer___, v6);
    sub_1B640C8(&ClassBoardUtility_TypeInfo, v7);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__Add__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__SimpleAnimation___ctor__, v10);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__SimpleAnimation__TypeInfo, v11);
    sub_1B640C8(&Method_System_Linq_Enumerable_FirstOrDefault_Texture___, v12);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__get_Current__, v15);
    sub_1B640C8(&System_Func_Texture__bool__TypeInfo, v16);
    sub_1B640C8(&int_TypeInfo, v17);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Key__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Value__, v19);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v20);
    sub_1B640C8(&Method_ClassBoardBackground___c__DisplayClass37_0__SetClassIcon_b__0__, v21);
    sub_1B640C8(&Method_ClassBoardBackground___c__DisplayClass37_0__SetClassIcon_b__1__, v22);
    sub_1B640C8(&ClassBoardBackground___c__DisplayClass37_0_TypeInfo, v23);
    sub_1B640C8(&Method_ClassBoardBackground___c__DisplayClass37_1__SetClassIcon_b__2__, v24);
    sub_1B640C8(&Method_ClassBoardBackground___c__DisplayClass37_1__SetClassIcon_b__3__, v25);
    sub_1B640C8(&Method_ClassBoardBackground___c__DisplayClass37_1__SetClassIcon_b__4__, v26);
    sub_1B640C8(&ClassBoardBackground___c__DisplayClass37_1_TypeInfo, v27);
    sub_1B640C8(&StringLiteral_4492/*"ClassIconEx_off_{0}"*/, v28);
    sub_1B640C8(&StringLiteral_4493/*"ClassIconEx_on_{0}"*/, v29);
    sub_1B640C8(&StringLiteral_4491/*"ClassIconEx_ef_glow_{0}"*/, v30);
    byte_49FF657 = 1;
  }
  memset(&v171, 0, 32);
  v31 = sub_1B64314(ClassBoardBackground___c__DisplayClass37_0_TypeInfo, *(_QWORD *)&baseId, *(_QWORD *)&iconId);
  System_Object___ctor((Il2CppObject *)v31, 0LL);
  if ( !v31 )
    goto LABEL_162;
  *(_DWORD *)(v31 + 16) = iconId;
  *(_QWORD *)(v31 + 24) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v31 + 24), (int32_t)this, v33, v34);
  iconTextures = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.iconTextures;
  v38 = (System_Func_object__bool__o *)sub_1B64314(System_Func_Texture__bool__TypeInfo, v36, v37);
  System_Func_object__bool____ctor(
    v38,
    (Il2CppObject *)v31,
    Method_ClassBoardBackground___c__DisplayClass37_0__SetClassIcon_b__0__,
    0LL);
  v39 = System_Linq_Enumerable__FirstOrDefault_object__48617700(
          iconTextures,
          (System_Func_TSource__bool__o *)v38,
          (const MethodInfo_2E5D8E4 *)Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
  *(_QWORD *)(v31 + 32) = v39;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v31 + 32), (int32_t)v39, v40, v41);
  v42 = *(UnityEngine_Object_o **)(v31 + 32);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v42, 0LL, 0LL) )
    return;
  iconRenderers = (System_Collections_Generic_IEnumerable_T__o *)this->fields.iconRenderers;
  v46 = (System_Action_object__o *)sub_1B64314(System_Action_Renderer__TypeInfo, v43, v44);
  System_Action_object____ctor(
    v46,
    (Il2CppObject *)v31,
    Method_ClassBoardBackground___c__DisplayClass37_0__SetClassIcon_b__1__,
    0LL);
  BasicHelper__ForEach_object_(
    iconRenderers,
    (System_Action_T__o *)v46,
    (const MethodInfo_2E26860 *)Method_BasicHelper_ForEach_Renderer___);
  v49 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B64314(
                                                                  System_Collections_Generic_Dictionary_int__SimpleAnimation__TypeInfo,
                                                                  v47,
                                                                  v48);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v49,
    (const MethodInfo_3122FB0 *)Method_System_Collections_Generic_Dictionary_int__SimpleAnimation___ctor__);
  this->fields.exClassReleaseEffectAnimationDic = (struct System_Collections_Generic_Dictionary_int__SimpleAnimation__o *)v49;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.exClassReleaseEffectAnimationDic,
    (int32_t)v49,
    v50,
    v51);
  exIconSet = this->fields.exIconSet;
  if ( !exIconSet )
LABEL_162:
    sub_1B64324(offRenderer);
  if ( !*(_QWORD *)&exIconSet->max_length )
    return;
  if ( (baseId & 0xFFFFFFFE) != 8 )
  {
    max_length = exIconSet->max_length;
    if ( max_length < 1 )
      return;
    v163 = 0;
    while ( 1 )
    {
      if ( v163 >= max_length )
        sub_1B6432C(offRenderer, v52);
      v164 = exIconSet->m_Items[v163];
      if ( !v164 )
        break;
      offRenderer = (UnityEngine_Component_o *)v164->fields.offRenderer;
      if ( !offRenderer )
        break;
      offRenderer = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(offRenderer, 0LL);
      if ( !offRenderer )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)offRenderer, 0, 0LL);
      offRenderer = (UnityEngine_Component_o *)v164->fields.onRenderer;
      if ( !offRenderer )
        break;
      offRenderer = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(offRenderer, 0LL);
      if ( !offRenderer )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)offRenderer, 0, 0LL);
      offRenderer = (UnityEngine_Component_o *)v164->fields.releaseEffect;
      if ( !offRenderer )
        break;
      offRenderer = (UnityEngine_Component_o *)UnityEngine_GameObject__get_gameObject(
                                                 (UnityEngine_GameObject_o *)offRenderer,
                                                 0LL);
      if ( !offRenderer )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)offRenderer, 0, 0LL);
      max_length = exIconSet->max_length;
      if ( (int)++v163 >= max_length )
        return;
    }
    goto LABEL_162;
  }
  offRenderer = (UnityEngine_Component_o *)ClassBoardBackground__GetIconIdList(
                                             (ClassBoardBackground_o *)offRenderer,
                                             baseId,
                                             v53);
  if ( !offRenderer )
    goto LABEL_162;
  System_Collections_Generic_Dictionary_int__bool___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v170,
    (System_Collections_Generic_Dictionary_int__bool__o *)offRenderer,
    (const MethodInfo_31154EC *)Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
  *(_OWORD *)&v171.fields._dictionary = v170[0];
  v171.fields._current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v170[1];
LABEL_12:
  while ( System_Collections_Generic_Dictionary_Enumerator_int__bool___MoveNext(
            &v171,
            (const MethodInfo_326716C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__) )
  {
    key = v171.fields._current.fields.key;
    v58 = sub_1B64314(ClassBoardBackground___c__DisplayClass37_1_TypeInfo, v55, v56);
    System_Object___ctor((Il2CppObject *)v58, 0LL);
    LODWORD(v170[0]) = (_DWORD)key;
    v59 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v170);
    v60 = System_String__Format((System_String_o *)StringLiteral_4493/*"ClassIconEx_on_{0}"*/, v59, 0LL);
    if ( !v58 )
      sub_1B64324(v60);
    *(_QWORD *)(v58 + 24) = v60;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v58 + 24), (int32_t)v60, v61, v62);
    v169 = (int)key;
    v63 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v169);
    v64 = System_String__Format((System_String_o *)StringLiteral_4492/*"ClassIconEx_off_{0}"*/, v63, 0LL);
    *(_QWORD *)(v58 + 16) = v64;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v58 + 16), (int32_t)v64, v65, v66);
    v168 = (int)key;
    v67 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v168);
    classId = key;
    v68 = System_String__Format((System_String_o *)StringLiteral_4491/*"ClassIconEx_ef_glow_{0}"*/, v67, 0LL);
    *(_QWORD *)(v58 + 32) = v68;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v58 + 32), (int32_t)v68, v69, v70);
    v74 = this->fields.exIconSet;
    if ( !v74 )
LABEL_94:
      sub_1B64324(v71);
    v75 = 0;
    v76 = (System_Func_object__bool__o **)(v58 + 40);
    v77 = (System_Func_object__bool__o **)(v58 + 48);
    v78 = (System_Func_object__bool__o **)(v58 + 56);
    v165 = (unsigned __int64)classId & 0xFF00000000LL;
    while ( 1 )
    {
      v79 = v74->max_length;
      if ( (int)v75 >= (int)v79 )
        break;
      if ( v75 >= v79 )
        sub_1B6432C(v71, v72);
      v80 = v74->m_Items[v75];
      if ( !v80 )
        sub_1B64324(v71);
      v81 = *v76;
      textures = (System_Collections_Generic_IEnumerable_TSource__o *)v80->fields.textures;
      if ( !*v76 )
      {
        v81 = (System_Func_object__bool__o *)sub_1B64314(System_Func_Texture__bool__TypeInfo, v72, v73);
        System_Func_object__bool____ctor(
          v81,
          (Il2CppObject *)v58,
          Method_ClassBoardBackground___c__DisplayClass37_1__SetClassIcon_b__2__,
          0LL);
        *v76 = v81;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v58 + 40), (int32_t)v81, v83, v84);
      }
      v85 = System_Linq_Enumerable__FirstOrDefault_object__48617700(
              textures,
              (System_Func_TSource__bool__o *)v81,
              (const MethodInfo_2E5D8E4 *)Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
      v88 = *v77;
      v89 = (UnityEngine_Object_o *)v85;
      if ( !*v77 )
      {
        v88 = (System_Func_object__bool__o *)sub_1B64314(System_Func_Texture__bool__TypeInfo, v86, v87);
        System_Func_object__bool____ctor(
          v88,
          (Il2CppObject *)v58,
          Method_ClassBoardBackground___c__DisplayClass37_1__SetClassIcon_b__3__,
          0LL);
        *v77 = v88;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v58 + 48), (int32_t)v88, v90, v91);
      }
      v92 = System_Linq_Enumerable__FirstOrDefault_object__48617700(
              textures,
              (System_Func_TSource__bool__o *)v88,
              (const MethodInfo_2E5D8E4 *)Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
      v95 = *v78;
      v96 = (UnityEngine_Object_o *)v92;
      if ( !*v78 )
      {
        v95 = (System_Func_object__bool__o *)sub_1B64314(System_Func_Texture__bool__TypeInfo, v93, v94);
        System_Func_object__bool____ctor(
          v95,
          (Il2CppObject *)v58,
          Method_ClassBoardBackground___c__DisplayClass37_1__SetClassIcon_b__4__,
          0LL);
        *v78 = v95;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v58 + 56), (int32_t)v95, v97, v98);
      }
      v99 = System_Linq_Enumerable__FirstOrDefault_object__48617700(
              textures,
              (System_Func_TSource__bool__o *)v95,
              (const MethodInfo_2E5D8E4 *)Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v71 = UnityEngine_Object__op_Inequality(v96, 0LL, 0LL);
      if ( v71 )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v71 = UnityEngine_Object__op_Inequality(v89, 0LL, 0LL);
        if ( v71 )
        {
          v100 = this->fields.exIconSet;
          if ( !v100 )
            sub_1B64324(v71);
          if ( v75 >= v100->max_length )
            sub_1B6432C(v71, v72);
          v101 = v100->m_Items[v75];
          if ( !v101 )
            sub_1B64324(v71);
          v102 = v101->fields.offRenderer;
          if ( !v102 )
            sub_1B64324(0LL);
          material = UnityEngine_Renderer__get_material(v102, 0LL);
          if ( !material )
            sub_1B64324(0LL);
          UnityEngine_Material__SetTexture(
            material,
            this->fields.iconMaterialPropertyName,
            (UnityEngine_Texture_o *)v89,
            0LL);
          v106 = this->fields.exIconSet;
          if ( !v106 )
            sub_1B64324(v104);
          if ( v75 >= v106->max_length )
            sub_1B6432C(v104, v105);
          v107 = v106->m_Items[v75];
          if ( !v107 )
            sub_1B64324(v104);
          effectRenderer = v107->fields.effectRenderer;
          if ( !effectRenderer )
            sub_1B64324(0LL);
          v109 = UnityEngine_Renderer__get_material(effectRenderer, 0LL);
          if ( !v109 )
            sub_1B64324(0LL);
          UnityEngine_Material__SetTexture(
            v109,
            this->fields.iconMaterialPropertyName,
            (UnityEngine_Texture_o *)v89,
            0LL);
          v112 = this->fields.exIconSet;
          if ( !v112 )
            sub_1B64324(v110);
          if ( v75 >= v112->max_length )
            sub_1B6432C(v110, v111);
          v113 = v112->m_Items[v75];
          if ( !v113 )
            sub_1B64324(v110);
          onRenderer = v113->fields.onRenderer;
          if ( !onRenderer )
            sub_1B64324(0LL);
          v115 = UnityEngine_Renderer__get_material(onRenderer, 0LL);
          if ( !v115 )
            sub_1B64324(0LL);
          UnityEngine_Material__SetTexture(
            v115,
            this->fields.iconMaterialPropertyName,
            (UnityEngine_Texture_o *)v96,
            0LL);
          v118 = this->fields.exIconSet;
          if ( !v118 )
            sub_1B64324(v116);
          if ( v75 >= v118->max_length )
            sub_1B6432C(v116, v117);
          v119 = v118->m_Items[v75];
          if ( !v119 )
            sub_1B64324(v116);
          effectGlowRenderer = v119->fields.effectGlowRenderer;
          if ( !effectGlowRenderer )
            sub_1B64324(0LL);
          v121 = UnityEngine_Renderer__get_material(effectGlowRenderer, 0LL);
          if ( !v121 )
            sub_1B64324(0LL);
          UnityEngine_Material__SetTexture(
            v121,
            this->fields.iconMaterialPropertyName,
            (UnityEngine_Texture_o *)v99,
            0LL);
          v124 = this->fields.exIconSet;
          if ( !v124 )
            sub_1B64324(v122);
          if ( v75 >= v124->max_length )
            sub_1B6432C(v122, v123);
          v125 = v124->m_Items[v75];
          if ( !v125 )
            sub_1B64324(v122);
          v126 = (UnityEngine_Component_o *)v125->fields.offRenderer;
          if ( !v126 )
            sub_1B64324(0LL);
          gameObject = UnityEngine_Component__get_gameObject(v126, 0LL);
          if ( !gameObject )
            sub_1B64324(0LL);
          UnityEngine_GameObject__SetActive(gameObject, v165 == 0, 0LL);
          v130 = this->fields.exIconSet;
          if ( !v130 )
            sub_1B64324(v128);
          if ( v75 >= v130->max_length )
            sub_1B6432C(v128, v129);
          v131 = v130->m_Items[v75];
          if ( !v131 )
            sub_1B64324(v128);
          v132 = (UnityEngine_Component_o *)v131->fields.onRenderer;
          if ( !v132 )
            sub_1B64324(0LL);
          v133 = UnityEngine_Component__get_gameObject(v132, 0LL);
          if ( !v133 )
            sub_1B64324(0LL);
          UnityEngine_GameObject__SetActive(v133, v165 != 0, 0LL);
          v136 = this->fields.exIconSet;
          if ( !v136 )
            sub_1B64324(v134);
          if ( v75 >= v136->max_length )
            sub_1B6432C(v134, v135);
          v137 = v136->m_Items[v75];
          if ( !v137 )
            sub_1B64324(v134);
          releaseEffect = v137->fields.releaseEffect;
          if ( !releaseEffect )
            sub_1B64324(0LL);
          v139 = UnityEngine_GameObject__get_gameObject(releaseEffect, 0LL);
          if ( !v139 )
            sub_1B64324(0LL);
          UnityEngine_GameObject__SetActive(v139, 0, 0LL);
          if ( v165 )
          {
            if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
            IsPlayed = ClassBoardUtility__IsPlayedExClassReleaseEffect((int32_t)classId, 0LL);
            if ( !IsPlayed )
            {
              v142 = this->fields.exIconSet;
              if ( !v142 )
                sub_1B64324(IsPlayed);
              if ( v75 >= v142->max_length )
                sub_1B6432C(IsPlayed, v141);
              v143 = v142->m_Items[v75];
              if ( !v143 )
                sub_1B64324(IsPlayed);
              animation = (UnityEngine_Object_o *)v143->fields.animation;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              v145 = UnityEngine_Object__op_Inequality(animation, 0LL, 0LL);
              if ( v145 )
              {
                v147 = this->fields.exIconSet;
                if ( !v147 )
                  sub_1B64324(v145);
                if ( v75 >= v147->max_length )
                  sub_1B6432C(v145, v146);
                v148 = v147->m_Items[v75];
                if ( !v148 )
                  sub_1B64324(v145);
                v149 = (UnityEngine_Component_o *)v148->fields.offRenderer;
                if ( !v149 )
                  sub_1B64324(0LL);
                v150 = UnityEngine_Component__get_gameObject(v149, 0LL);
                if ( !v150 )
                  sub_1B64324(0LL);
                UnityEngine_GameObject__SetActive(v150, 1, 0LL);
                v153 = this->fields.exIconSet;
                if ( !v153 )
                  sub_1B64324(v151);
                if ( v75 >= v153->max_length )
                  sub_1B6432C(v151, v152);
                v154 = v153->m_Items[v75];
                if ( !v154 )
                  sub_1B64324(v151);
                v155 = (UnityEngine_Component_o *)v154->fields.onRenderer;
                if ( !v155 )
                  sub_1B64324(0LL);
                v156 = UnityEngine_Component__get_gameObject(v155, 0LL);
                if ( !v156 )
                  sub_1B64324(0LL);
                UnityEngine_GameObject__SetActive(v156, 0, 0LL);
                v159 = this->fields.exIconSet;
                if ( !v159 )
                  sub_1B64324(v157);
                if ( v75 >= v159->max_length )
                  sub_1B6432C(v157, v158);
                v160 = v159->m_Items[v75];
                if ( !v160 )
                  sub_1B64324(v157);
                exClassReleaseEffectAnimationDic = this->fields.exClassReleaseEffectAnimationDic;
                if ( !exClassReleaseEffectAnimationDic )
                  sub_1B64324(0LL);
                System_Collections_Generic_Dictionary_int__object___Add(
                  (System_Collections_Generic_Dictionary_int__object__o *)exClassReleaseEffectAnimationDic,
                  (int32_t)classId,
                  (Il2CppObject *)v160->fields.animation,
                  (const MethodInfo_3123984 *)Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__Add__);
              }
            }
          }
          goto LABEL_12;
        }
      }
      ++v75;
      v74 = this->fields.exIconSet;
      if ( !v74 )
        goto LABEL_94;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__bool___Dispose(
    &v171,
    (const MethodInfo_3267274 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
}


void __fastcall ClassBoardBackground__SetShowBoardCallback(
        ClassBoardBackground_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.showBoardCallback = callback;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.showBoardCallback,
    (int32_t)callback,
    (int32_t)method,
    v3);
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
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_49FF65E & 1) == 0 )
  {
    sub_1B640C8(&ClassBoardBackground__WaitAnimationFinished_d__45_TypeInfo, anim);
    byte_49FF65E = 1;
  }
  v8 = sub_1B64314(ClassBoardBackground__WaitAnimationFinished_d__45_TypeInfo, anim, name);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  *(_DWORD *)(v8 + 16) = 0;
  *(_QWORD *)(v8 + 32) = anim;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v8 + 32), (int32_t)anim, v9, v10);
  *(_QWORD *)(v8 + 40) = name;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v8 + 40), (int32_t)name, v11, v12);
  *(_QWORD *)(v8 + 48) = endCallback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v8 + 48), (int32_t)endCallback, v13, v14);
  return (System_Collections_IEnumerator_o *)v8;
}


void __fastcall ClassBoardBackground___PlayStartExClassReleaseEffectPlayer_b__43_0(
        ClassBoardBackground_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_int__object__o *v5; // x0
  ServantStatusBattleListViewItem_o *p_exClassReleaseEffectAnimationDic; // x19
  struct System_Collections_Generic_Dictionary_int__SimpleAnimation__o *exClassReleaseEffectAnimationDic; // t1
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  System_Int32_array *v9; // x20
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_49FF661 & 1) == 0 )
  {
    sub_1B640C8(&ClassBoardUtility_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__get_Keys__, v3);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_int___, v4);
    byte_49FF661 = 1;
  }
  exClassReleaseEffectAnimationDic = this->fields.exClassReleaseEffectAnimationDic;
  p_exClassReleaseEffectAnimationDic = (ServantStatusBattleListViewItem_o *)&this->fields.exClassReleaseEffectAnimationDic;
  v5 = (System_Collections_Generic_Dictionary_int__object__o *)exClassReleaseEffectAnimationDic;
  if ( !exClassReleaseEffectAnimationDic )
    sub_1B64324(0LL);
  Keys = System_Collections_Generic_Dictionary_int__object___get_Keys(
           v5,
           (const MethodInfo_3123644 *)Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__get_Keys__);
  v9 = System_Linq_Enumerable__ToArray_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
         (const MethodInfo_2E7122C *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
  ClassBoardUtility__SavePlayedExClassReleaseEffect(v9, 0LL);
  p_exClassReleaseEffectAnimationDic->klass = 0LL;
  sub_1B6406C(p_exClassReleaseEffectAnimationDic, 0, v10, v11);
}


void __fastcall ClassBoardBackground___PlayStartMainEffectPlayer_b__41_0(
        ClassBoardBackground_o *this,
        const MethodInfo *method)
{
  ClassBoardEffectPlayer_o *startMainEffectPlayer; // x0

  startMainEffectPlayer = this->fields.startMainEffectPlayer;
  if ( !startMainEffectPlayer )
    sub_1B64324(0LL);
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
  int32_t _1__state; // w8
  struct ClassBoardBackground_o *_4__this; // x0
  float exClassReleaseEffectStartSec; // s8
  UnityEngine_WaitForSeconds_o *v7; // x20
  Il2CppObject **p__2__current; // x19
  int32_t v9; // w2
  int32_t v10; // w3
  bool result; // w0

  if ( (byte_49FF665 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_WaitForSeconds_TypeInfo, method);
    byte_49FF665 = 1;
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
      v7 = (UnityEngine_WaitForSeconds_o *)sub_1B64314(UnityEngine_WaitForSeconds_TypeInfo, method, v2);
      UnityEngine_WaitForSeconds___ctor(v7, exClassReleaseEffectStartSec, 0LL);
      this->fields.__2__current = (Il2CppObject *)v7;
      p__2__current = &this->fields.__2__current;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)p__2__current, (int32_t)v7, v9, v10);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
LABEL_10:
    sub_1B64324(_4__this);
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
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_ClassBoardBackground__PlayExClassReleaseEffectPlayer_d__42_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  int32_t v10; // w2
  int32_t v11; // w3
  bool result; // w0
  Il2CppObject **p__2__current; // x19

  if ( (byte_49FF666 & 1) == 0 )
  {
    sub_1B640C8(&SimpleAnimation_State_TypeInfo, method);
    byte_49FF666 = 1;
  }
  if ( this->fields.__1__state > 1u )
    return 0;
  anim = this->fields.anim;
  this->fields.__1__state = -1;
  if ( !anim )
    sub_1B64324(0LL);
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
    p_method = sub_1BB60A8(State, SimpleAnimation_State_TypeInfo, 5LL);
  }
  if ( (*(float (__fastcall **)(SimpleAnimation_State_o *, _QWORD))p_method)(v6, *(_QWORD *)(p_method + 8)) >= 1.0 )
  {
LABEL_13:
    ActionExtensions__Call(this->fields.endCallback, 0LL);
    return 0;
  }
  this->fields.__2__current = 0LL;
  p__2__current = &this->fields.__2__current;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p__2__current, 0, v10, v11);
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
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_ClassBoardBackground__WaitAnimationFinished_d__45_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FF662 & 1) == 0 )
  {
    sub_1B640C8(&ClassBoardBackground___c_TypeInfo, v1);
    byte_49FF662 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(ClassBoardBackground___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  ClassBoardBackground___c_TypeInfo->static_fields->__9 = (struct ClassBoardBackground___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)ClassBoardBackground___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
  return a->fields.classId - b->fields.classId;
}


void __fastcall ClassBoardBackground___c___OnDestroy_b__40_0(
        ClassBoardBackground___c_o *this,
        UnityEngine_Renderer_o *x,
        const MethodInfo *method)
{
  UnityEngine_Object_o *material; // x19

  if ( (byte_49FF663 & 1) == 0 )
  {
    this = (ClassBoardBackground___c_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, x);
    byte_49FF663 = 1;
  }
  if ( !x )
    sub_1B64324(this);
  material = (UnityEngine_Object_o *)UnityEngine_Renderer__get_material(x, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69127736(material, 0LL);
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
  Il2CppObject *v7; // x0
  System_String_o *v8; // x0
  int32_t iconId; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_49FF664 & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, x);
    this = (ClassBoardBackground___c__DisplayClass37_0_o *)sub_1B640C8(&StringLiteral_4495/*"ClassIcon{0}"*/, v5);
    byte_49FF664 = 1;
  }
  if ( !x )
    sub_1B64324(this);
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)x, 0LL);
  iconId = v4->fields.iconId;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId);
  v8 = System_String__Format((System_String_o *)StringLiteral_4495/*"ClassIcon{0}"*/, v7, 0LL);
  return System_String__op_Equality(name, v8, 0LL);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)x, 0LL);
  return System_String__op_Equality(name, this->fields.glowIconName, 0LL);
}