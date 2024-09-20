void __fastcall ClassBoardBackground___ctor(ClassBoardBackground_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w1

  if ( (byte_4A5E51C & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_16262/*"_MainTex"*/);
    byte_4A5E51C = 1;
  }
  v5 = StringLiteral_16262/*"_MainTex"*/;
  this->fields.iconMaterialPropertyName = (struct System_String_o *)StringLiteral_16262/*"_MainTex"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.iconMaterialPropertyName, v5, v2, v3);
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
    sub_1B8880C(0LL, value);
  UnityEngine_GameObject__SetActive(earthAccessoriesObject, value, 0LL);
}


void __fastcall ClassBoardBackground__Awake(ClassBoardBackground_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x0
  __int64 v4; // x1
  System_String_o *name; // x20
  ClassBoardEffectPlayer_o *v6; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  struct ClassBoardEffectPlayer_o *startMainEffectPlayer; // x20
  System_Action_o *v10; // x21
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_4A5E510 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_ClassBoardBackground_PlayStartMainEffectPlayer__);
    sub_1B885B0(&ClassBoardEffectPlayer_TypeInfo);
    byte_4A5E510 = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_6;
  name = UnityEngine_Object__get_name(gameObject, 0LL);
  v6 = (ClassBoardEffectPlayer_o *)sub_1B887FC(ClassBoardEffectPlayer_TypeInfo);
  ClassBoardEffectPlayer___ctor_44452376(v6, name, 0LL);
  this->fields.startMainEffectPlayer = v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.startMainEffectPlayer, (int32_t)v6, v7, v8);
  startMainEffectPlayer = this->fields.startMainEffectPlayer;
  v10 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_ClassBoardBackground_PlayStartMainEffectPlayer__, 0LL);
  if ( !startMainEffectPlayer )
LABEL_6:
    sub_1B8880C(gameObject, v4);
  startMainEffectPlayer->fields.playCallback = v10;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&startMainEffectPlayer->fields.playCallback, (int32_t)v10, v11, v12);
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

  if ( (byte_4A5E51B & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E51B = 1;
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
        sub_1B8880C(name, v5);
      }
      SimpleAnimation__Play_63844704(v7, (System_String_o *)name, 0LL);
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
  sub_1B88554(p_showBoardCallback, 0, v3, v4);
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

  if ( (byte_4A5E511 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E511 = 1;
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
    sub_1B8880C(classBoardViewCamera, camera);
  }
  UnityEngine_GameObject__SetActive(v9, (unsigned __int8)classBoardViewCamera & 1, 0LL);
  this->fields.currentCamera = camera;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.currentCamera, (int32_t)camera, v10, v11);
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
  int32_t v11; // w2
  int32_t v12; // w3
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x20
  __int64 v14; // x1
  BalanceConfig_c *v15; // x0
  ClassBoardClassEntity_o *current; // x21
  BalanceConfig_c *v17; // x0
  __int64 v18; // x1
  _BOOL8 v19; // x0
  __int64 v20; // x1
  int32_t monitor_high; // w22
  _BOOL8 IsOpen; // x0
  __int64 v23; // x1
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+0h] [xbp-90h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-70h] BYREF
  System_Collections_Generic_List_ClassBoardClassEntity__o *entitys; // [xsp+38h] [xbp-58h] BYREF

  if ( (byte_4A5E514 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&System_Comparison_ClassBoardClassEntity__TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_ClassBoardClassMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__bool__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__bool__TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ClassBoardClassEntity__Sort__);
    sub_1B885B0(&Method_ClassBoardBackground___c__GetIconIdList_b__38_0__);
    sub_1B885B0(&ClassBoardBackground___c_TypeInfo);
    byte_4A5E514 = 1;
  }
  entitys = 0LL;
  memset(&v27, 0, sizeof(v27));
  entity = 0LL;
  v4 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v4,
    (const MethodInfo_315E6FC *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
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
    v8 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_ClassBoardClassEntity__TypeInfo);
    System_Comparison_object____ctor(v8, v9, Method_ClassBoardBackground___c__GetIconIdList_b__38_0__, 0LL);
    static_fields = ClassBoardBackground___c_TypeInfo->static_fields;
    static_fields->__9__38_0 = (struct System_Comparison_ClassBoardClassEntity__o *)v8;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__38_0, (int32_t)v8, v11, v12);
  }
  if ( !v7 )
    goto LABEL_37;
  System_Collections_Generic_List_object___Sort_55571192(
    v7,
    v8,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_ClassBoardClassEntity__Sort__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantClassMaster___);
  if ( !entitys )
LABEL_37:
    sub_1B8880C(Master_object, v6);
  v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v25,
    (System_Collections_Generic_List_object__o *)entitys,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__);
  v27 = v25;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__) )
  {
    v15 = BalanceConfig_TypeInfo;
    current = (ClassBoardClassEntity_o *)v27.fields._current;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    if ( !current )
      sub_1B8880C(v15, v14);
    v17 = (BalanceConfig_c *)System_Linq_Enumerable__Contains_int_(
                               (System_Collections_Generic_IEnumerable_TSource__o *)BalanceConfig_TypeInfo->static_fields->PlayableBeastClassIds,
                               current->fields.classId,
                               (const MethodInfo_2E99A14 *)Method_System_Linq_Enumerable_Contains_int___);
    if ( ((unsigned __int8)v17 & 1) != 0 )
    {
      v17 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v17 = BalanceConfig_TypeInfo;
      }
      if ( v17->static_fields->PlayableBeastBaseClassId != current->fields.classId )
        continue;
    }
    if ( !v13 )
      sub_1B8880C(v17, v18);
    v19 = DataMasterBase_object__object__int___TryGetEntity(
            v13,
            &entity,
            current->fields.classId,
            (const MethodInfo_311D988 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    if ( v19 )
    {
      if ( !entity )
        sub_1B8880C(v19, v20);
      monitor_high = HIDWORD(entity[2].monitor);
      IsOpen = ClassBoardClassEntity__IsOpen(current, 0LL);
      if ( !v4 )
        sub_1B8880C(IsOpen, v23);
      System_Collections_Generic_Dictionary_int__bool___Add(
        v4,
        monitor_high,
        IsOpen,
        (const MethodInfo_315F0D4 *)Method_System_Collections_Generic_Dictionary_int__bool__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__);
  return v4;
}


UnityEngine_RenderTexture_o *__fastcall ClassBoardBackground__GetRenderTexture(
        ClassBoardBackground_o *this,
        const MethodInfo *method)
{
  UnityEngine_Camera_o *currentCamera; // x0

  currentCamera = this->fields.currentCamera;
  if ( !currentCamera )
    sub_1B8880C(0LL, method);
  return UnityEngine_Camera__get_targetTexture(currentCamera, 0LL);
}


void __fastcall ClassBoardBackground__OnDestroy(ClassBoardBackground_o *this, const MethodInfo *method)
{
  ClassBoardBackground___c_c *v3; // x0
  System_Collections_Generic_IEnumerable_T__o *iconRenderers; // x19
  System_Action_object__o *_9__40_0; // x20
  Il2CppObject *v6; // x21
  struct ClassBoardBackground___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A5E516 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_Renderer__TypeInfo);
    sub_1B885B0(&Method_BasicHelper_ForEach_Renderer___);
    sub_1B885B0(&Method_ClassBoardBackground___c__OnDestroy_b__40_0__);
    sub_1B885B0(&ClassBoardBackground___c_TypeInfo);
    byte_4A5E516 = 1;
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
    _9__40_0 = (System_Action_object__o *)sub_1B887FC(System_Action_Renderer__TypeInfo);
    System_Action_object____ctor(_9__40_0, v6, Method_ClassBoardBackground___c__OnDestroy_b__40_0__, 0LL);
    static_fields = ClassBoardBackground___c_TypeInfo->static_fields;
    static_fields->__9__40_0 = (struct System_Action_Renderer__o *)_9__40_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__40_0, (int32_t)_9__40_0, v8, v9);
  }
  BasicHelper__ForEach_object_(
    iconRenderers,
    (System_Action_T__o *)_9__40_0,
    (const MethodInfo_2E6CCC0 *)Method_BasicHelper_ForEach_Renderer___);
}


void __fastcall ClassBoardBackground__PlayBoardParentBeforeAnimation(
        ClassBoardBackground_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *boardParentAnimation; // x20
  UnityEngine_Object_o *boardParentBeforeAnimationClip; // x20
  __int64 v5; // x1
  SimpleAnimation_o *v6; // x0

  if ( (byte_4A5E515 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E515 = 1;
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
        sub_1B8880C(v6, v5);
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
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A5E518 & 1) == 0 )
  {
    sub_1B885B0(&ClassBoardBackground__PlayExClassReleaseEffectPlayer_d__42_TypeInfo);
    byte_4A5E518 = 1;
  }
  v3 = sub_1B887FC(ClassBoardBackground__PlayExClassReleaseEffectPlayer_d__42_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v4, v5);
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
    sub_1B8880C(this, 0LL);
  SimpleAnimation__Rewind(anim, 0LL);
  v9 = SimpleAnimation__Play_63844704(anim, name, 0LL);
  v11 = ClassBoardBackground__WaitAnimationFinished((ClassBoardBackground_o *)v9, anim, name, endCallback, v10);
  UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, v11, 0LL);
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
  int32_t v15; // w2
  int32_t v16; // w3
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v17; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v18; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_4A5E519 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_ClassBoardBackground__PlayStartExClassReleaseEffectPlayer_b__43_0__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_int__SimpleAnimation__get_Key__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_int__SimpleAnimation__get_Value__);
    sub_1B885B0(&Method_ClassBoardBackground___c__PlayStartExClassReleaseEffectPlayer_b__43_1__);
    sub_1B885B0(&ClassBoardBackground___c_TypeInfo);
    sub_1B885B0(&StringLiteral_10558/*"Particle_CrassIcon_Ex_Released"*/);
    byte_4A5E519 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  if ( !BasicHelper__IsNullOrEmpty(
          (System_Collections_ICollection_o *)this->fields.exClassReleaseEffectAnimationDic,
          0LL) )
  {
    exClassReleaseEffectAnimationDic = this->fields.exClassReleaseEffectAnimationDic;
    if ( !exClassReleaseEffectAnimationDic )
      sub_1B8880C(0LL, v3);
    System_Collections_Generic_Dictionary_int__object___GetEnumerator(
      &v17,
      (System_Collections_Generic_Dictionary_int__object__o *)exClassReleaseEffectAnimationDic,
      (const MethodInfo_316DD90 *)Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__GetEnumerator__);
    v18 = v17;
    v5 = 1;
    while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
              &v18,
              (const MethodInfo_32B7418 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__MoveNext__) )
    {
      value = v18.fields._current.fields.value;
      if ( (v5 & 1) != 0 )
      {
        v8 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
        System_Action___ctor(
          v8,
          (Il2CppObject *)this,
          Method_ClassBoardBackground__PlayStartExClassReleaseEffectPlayer_b__43_0__,
          0LL);
        ClassBoardBackground__PlaySimpleAnimation(
          this,
          (SimpleAnimation_o *)value,
          (System_String_o *)StringLiteral_10558/*"Particle_CrassIcon_Ex_Released"*/,
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
        v11 = (System_String_o *)StringLiteral_10558/*"Particle_CrassIcon_Ex_Released"*/;
        _9__43_1 = v10->static_fields->__9__43_1;
        if ( !_9__43_1 )
        {
          if ( !v10->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v10);
            v10 = ClassBoardBackground___c_TypeInfo;
          }
          v13 = (Il2CppObject *)v10->static_fields->__9;
          _9__43_1 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
          System_Action___ctor(
            _9__43_1,
            v13,
            Method_ClassBoardBackground___c__PlayStartExClassReleaseEffectPlayer_b__43_1__,
            0LL);
          static_fields = ClassBoardBackground___c_TypeInfo->static_fields;
          static_fields->__9__43_1 = _9__43_1;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__43_1, (int32_t)_9__43_1, v15, v16);
        }
        ClassBoardBackground__PlaySimpleAnimation(this, (SimpleAnimation_o *)value, v11, _9__43_1, v6);
        v5 = 0;
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
      &v18,
      (const MethodInfo_32B753C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__Dispose__);
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

  if ( (byte_4A5E517 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_ClassBoardBackground__PlayStartMainEffectPlayer_b__41_0__);
    sub_1B885B0(&Method_ClassBoardEffectPlayer_GetData_int___);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&StringLiteral_8829/*"MainTransition{0}_Release"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_8828/*"MainTransition{0}"*/);
    byte_4A5E517 = 1;
  }
  startMainEffectPlayer = this->fields.startMainEffectPlayer;
  if ( !startMainEffectPlayer )
    sub_1B8880C(0LL, method);
  Data_int = ClassBoardEffectPlayer__GetData_int_(
               startMainEffectPlayer,
               (const MethodInfo_2E736D4 *)Method_ClassBoardEffectPlayer_GetData_int___);
  if ( BasicHelper__IsNullOrEmpty(
         (System_Collections_ICollection_o *)this->fields.exClassReleaseEffectAnimationDic,
         0LL) )
  {
    v16 = Data_int;
    v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16, v5, v6, v7);
    v9 = System_String__Format((System_String_o *)StringLiteral_8828/*"MainTransition{0}"*/, v8, 0LL);
  }
  else
  {
    v17 = Data_int;
    v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17, v5, v6, v7);
    v9 = System_String__Format((System_String_o *)StringLiteral_8829/*"MainTransition{0}_Release"*/, v10, 0LL);
    v12 = ClassBoardBackground__PlayExClassReleaseEffectPlayer(this, v11);
    UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, v12, 0LL);
  }
  mainAnimation = this->fields.mainAnimation;
  v14 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_ClassBoardBackground__PlayStartMainEffectPlayer_b__41_0__, 0LL);
  ClassBoardBackground__PlaySimpleAnimation(this, mainAnimation, v9, v14, v15);
}


void __fastcall ClassBoardBackground__SetBoardParentAnimation(
        ClassBoardBackground_o *this,
        SimpleAnimation_o *animation,
        const MethodInfo *method)
{
  int32_t v3; // w3
  UnityEngine_Object_o *boardParentAnimation; // x20
  UnityEngine_Object_o *boardParentAnimationClip; // x20
  __int64 v8; // x1
  UnityEngine_Object_o *name; // x0
  SimpleAnimation_o *v10; // x20
  UnityEngine_AnimationClip_o *v11; // x20
  SimpleAnimation_o *v12; // x21
  UnityEngine_Object_o *boardParentBeforeAnimationClip; // x20
  SimpleAnimation_o *v14; // x20
  UnityEngine_AnimationClip_o *v15; // x20
  SimpleAnimation_o *v16; // x21
  SimpleAnimation_o *v17; // x19

  if ( (byte_4A5E512 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E512 = 1;
  }
  this->fields.boardParentAnimation = animation;
  sub_1B88554(
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
      v10 = this->fields.boardParentAnimation;
      name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0LL);
      if ( !v10 )
        goto LABEL_28;
      name = (UnityEngine_Object_o *)SimpleAnimation__GetState(v10, (System_String_o *)name, 0LL);
      if ( !name )
      {
        v11 = this->fields.boardParentAnimationClip;
        if ( !v11 )
          goto LABEL_28;
        v12 = this->fields.boardParentAnimation;
        name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(
                                         (UnityEngine_Object_o *)this->fields.boardParentAnimationClip,
                                         0LL);
        if ( !v12 )
          goto LABEL_28;
        SimpleAnimation__AddClip(v12, v11, (System_String_o *)name, 0LL);
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
        v14 = this->fields.boardParentAnimation;
        name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0LL);
        if ( v14 )
        {
          name = (UnityEngine_Object_o *)SimpleAnimation__GetState(v14, (System_String_o *)name, 0LL);
          if ( !name )
          {
            v15 = this->fields.boardParentBeforeAnimationClip;
            if ( !v15 )
              goto LABEL_28;
            v16 = this->fields.boardParentAnimation;
            name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(
                                             (UnityEngine_Object_o *)this->fields.boardParentBeforeAnimationClip,
                                             0LL);
            if ( !v16 )
              goto LABEL_28;
            SimpleAnimation__AddClip(v16, v15, (System_String_o *)name, 0LL);
          }
          name = (UnityEngine_Object_o *)this->fields.boardParentBeforeAnimationClip;
          if ( name )
          {
            v17 = this->fields.boardParentAnimation;
            name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0LL);
            if ( v17 )
            {
              SimpleAnimation__Play_63844704(v17, (System_String_o *)name, 0LL);
              return;
            }
          }
        }
      }
LABEL_28:
      sub_1B8880C(name, v8);
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
  int32_t v9; // w2
  int32_t v10; // w3
  System_Collections_Generic_IEnumerable_TSource__o *iconTextures; // x21
  System_Func_object__bool__o *v12; // x23
  Il2CppObject *v13; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  UnityEngine_Object_o *v16; // x21
  System_Collections_Generic_IEnumerable_T__o *iconRenderers; // x21
  System_Action_object__o *v18; // x23
  System_Collections_Generic_Dictionary_int__object__o *v19; // x21
  int32_t v20; // w2
  int32_t v21; // w3
  const MethodInfo *v22; // x2
  struct ClassBoardBackground_ExClassIconSet_array *exIconSet; // x19
  Il2CppObject *key; // x22
  __int64 v25; // x21
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  Il2CppObject *v29; // x1
  System_String_o *v30; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  Il2CppObject *v36; // x1
  System_String_o *v37; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  Il2CppObject *v43; // x1
  System_String_o *v44; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  _BOOL8 v47; // x0
  __int64 v48; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v49; // x8
  il2cpp_array_size_t v50; // w19
  System_Func_object__bool__o **v51; // x22
  System_Func_object__bool__o **v52; // x24
  System_Func_object__bool__o **v53; // x25
  il2cpp_array_size_t v54; // w9
  ClassBoardBackground_ExClassIconSet_o *v55; // x8
  System_Func_object__bool__o *v56; // x23
  System_Collections_Generic_IEnumerable_TSource__o *textures; // x27
  int32_t v58; // w2
  int32_t v59; // w3
  Il2CppObject *v60; // x0
  System_Func_object__bool__o *v61; // x26
  UnityEngine_Object_o *v62; // x23
  int32_t v63; // w2
  int32_t v64; // w3
  Il2CppObject *v65; // x0
  System_Func_object__bool__o *v66; // x28
  UnityEngine_Object_o *v67; // x26
  int32_t v68; // w2
  int32_t v69; // w3
  Il2CppObject *v70; // x27
  struct ClassBoardBackground_ExClassIconSet_array *v71; // x8
  ClassBoardBackground_ExClassIconSet_o *v72; // x8
  UnityEngine_Renderer_o *v73; // x0
  UnityEngine_Material_o *material; // x0
  __int64 v75; // x1
  __int64 v76; // x0
  __int64 v77; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v78; // x8
  ClassBoardBackground_ExClassIconSet_o *v79; // x8
  UnityEngine_Renderer_o *effectRenderer; // x0
  UnityEngine_Material_o *v81; // x0
  __int64 v82; // x1
  __int64 v83; // x0
  __int64 v84; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v85; // x8
  ClassBoardBackground_ExClassIconSet_o *v86; // x8
  UnityEngine_Renderer_o *onRenderer; // x0
  UnityEngine_Material_o *v88; // x0
  __int64 v89; // x1
  __int64 v90; // x0
  __int64 v91; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v92; // x8
  ClassBoardBackground_ExClassIconSet_o *v93; // x8
  UnityEngine_Renderer_o *effectGlowRenderer; // x0
  UnityEngine_Material_o *v95; // x0
  __int64 v96; // x1
  __int64 v97; // x0
  __int64 v98; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v99; // x8
  ClassBoardBackground_ExClassIconSet_o *v100; // x8
  UnityEngine_Component_o *v101; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v103; // x1
  __int64 v104; // x0
  __int64 v105; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v106; // x8
  ClassBoardBackground_ExClassIconSet_o *v107; // x8
  UnityEngine_Component_o *v108; // x0
  UnityEngine_GameObject_o *v109; // x0
  __int64 v110; // x1
  __int64 v111; // x0
  __int64 v112; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v113; // x8
  ClassBoardBackground_ExClassIconSet_o *v114; // x8
  UnityEngine_GameObject_o *releaseEffect; // x0
  UnityEngine_GameObject_o *v116; // x0
  __int64 v117; // x1
  _BOOL8 IsPlayed; // x0
  __int64 v119; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v120; // x8
  ClassBoardBackground_ExClassIconSet_o *v121; // x8
  UnityEngine_Object_o *animation; // x21
  _BOOL8 v123; // x0
  __int64 v124; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v125; // x8
  ClassBoardBackground_ExClassIconSet_o *v126; // x8
  UnityEngine_Component_o *v127; // x0
  UnityEngine_GameObject_o *v128; // x0
  __int64 v129; // x1
  __int64 v130; // x0
  __int64 v131; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v132; // x8
  ClassBoardBackground_ExClassIconSet_o *v133; // x8
  UnityEngine_Component_o *v134; // x0
  UnityEngine_GameObject_o *v135; // x0
  __int64 v136; // x1
  __int64 v137; // x0
  __int64 v138; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v139; // x8
  ClassBoardBackground_ExClassIconSet_o *v140; // x8
  struct System_Collections_Generic_Dictionary_int__SimpleAnimation__o *exClassReleaseEffectAnimationDic; // x0
  int max_length; // w8
  unsigned int v143; // w20
  ClassBoardBackground_ExClassIconSet_o *v144; // x21
  __int64 v145; // [xsp+0h] [xbp-C0h]
  Il2CppObject *classId; // [xsp+8h] [xbp-B8h]
  int v148; // [xsp+18h] [xbp-A8h] BYREF
  int v149; // [xsp+1Ch] [xbp-A4h] BYREF
  __int128 v150[2]; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v151; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4A5E513 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_Renderer__TypeInfo);
    sub_1B885B0(&Method_BasicHelper_ForEach_Renderer___);
    sub_1B885B0(&ClassBoardUtility_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__SimpleAnimation___ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__SimpleAnimation__TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__get_Current__);
    sub_1B885B0(&System_Func_Texture__bool__TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Key__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Value__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_ClassBoardBackground___c__DisplayClass37_0__SetClassIcon_b__0__);
    sub_1B885B0(&Method_ClassBoardBackground___c__DisplayClass37_0__SetClassIcon_b__1__);
    sub_1B885B0(&ClassBoardBackground___c__DisplayClass37_0_TypeInfo);
    sub_1B885B0(&Method_ClassBoardBackground___c__DisplayClass37_1__SetClassIcon_b__2__);
    sub_1B885B0(&Method_ClassBoardBackground___c__DisplayClass37_1__SetClassIcon_b__3__);
    sub_1B885B0(&Method_ClassBoardBackground___c__DisplayClass37_1__SetClassIcon_b__4__);
    sub_1B885B0(&ClassBoardBackground___c__DisplayClass37_1_TypeInfo);
    sub_1B885B0(&StringLiteral_4515/*"ClassIconEx_off_{0}"*/);
    sub_1B885B0(&StringLiteral_4516/*"ClassIconEx_on_{0}"*/);
    sub_1B885B0(&StringLiteral_4514/*"ClassIconEx_ef_glow_{0}"*/);
    byte_4A5E513 = 1;
  }
  memset(&v151, 0, 32);
  v6 = sub_1B887FC(ClassBoardBackground___c__DisplayClass37_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  if ( !v6 )
    goto LABEL_162;
  *(_DWORD *)(v6 + 16) = iconId;
  *(_QWORD *)(v6 + 24) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v6 + 24), (int32_t)this, v9, v10);
  iconTextures = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.iconTextures;
  v12 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_Texture__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)v6,
    Method_ClassBoardBackground___c__DisplayClass37_0__SetClassIcon_b__0__,
    0LL);
  v13 = System_Linq_Enumerable__FirstOrDefault_object__48907856(
          iconTextures,
          (System_Func_TSource__bool__o *)v12,
          (const MethodInfo_2EA4650 *)Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
  *(_QWORD *)(v6 + 32) = v13;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v6 + 32), (int32_t)v13, v14, v15);
  v16 = *(UnityEngine_Object_o **)(v6 + 32);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v16, 0LL, 0LL) )
    return;
  iconRenderers = (System_Collections_Generic_IEnumerable_T__o *)this->fields.iconRenderers;
  v18 = (System_Action_object__o *)sub_1B887FC(System_Action_Renderer__TypeInfo);
  System_Action_object____ctor(
    v18,
    (Il2CppObject *)v6,
    Method_ClassBoardBackground___c__DisplayClass37_0__SetClassIcon_b__1__,
    0LL);
  BasicHelper__ForEach_object_(
    iconRenderers,
    (System_Action_T__o *)v18,
    (const MethodInfo_2E6CCC0 *)Method_BasicHelper_ForEach_Renderer___);
  v19 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__SimpleAnimation__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v19,
    (const MethodInfo_316CF84 *)Method_System_Collections_Generic_Dictionary_int__SimpleAnimation___ctor__);
  this->fields.exClassReleaseEffectAnimationDic = (struct System_Collections_Generic_Dictionary_int__SimpleAnimation__o *)v19;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.exClassReleaseEffectAnimationDic,
    (int32_t)v19,
    v20,
    v21);
  exIconSet = this->fields.exIconSet;
  if ( !exIconSet )
LABEL_162:
    sub_1B8880C(offRenderer, v8);
  if ( !*(_QWORD *)&exIconSet->max_length )
    return;
  if ( (baseId & 0xFFFFFFFE) != 8 )
  {
    max_length = exIconSet->max_length;
    if ( max_length < 1 )
      return;
    v143 = 0;
    while ( 1 )
    {
      if ( v143 >= max_length )
        sub_1B88814(offRenderer, v8);
      v144 = exIconSet->m_Items[v143];
      if ( !v144 )
        break;
      offRenderer = (UnityEngine_Component_o *)v144->fields.offRenderer;
      if ( !offRenderer )
        break;
      offRenderer = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(offRenderer, 0LL);
      if ( !offRenderer )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)offRenderer, 0, 0LL);
      offRenderer = (UnityEngine_Component_o *)v144->fields.onRenderer;
      if ( !offRenderer )
        break;
      offRenderer = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(offRenderer, 0LL);
      if ( !offRenderer )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)offRenderer, 0, 0LL);
      offRenderer = (UnityEngine_Component_o *)v144->fields.releaseEffect;
      if ( !offRenderer )
        break;
      offRenderer = (UnityEngine_Component_o *)UnityEngine_GameObject__get_gameObject(
                                                 (UnityEngine_GameObject_o *)offRenderer,
                                                 0LL);
      if ( !offRenderer )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)offRenderer, 0, 0LL);
      max_length = exIconSet->max_length;
      if ( (int)++v143 >= max_length )
        return;
    }
    goto LABEL_162;
  }
  offRenderer = (UnityEngine_Component_o *)ClassBoardBackground__GetIconIdList(
                                             (ClassBoardBackground_o *)offRenderer,
                                             baseId,
                                             v22);
  if ( !offRenderer )
    goto LABEL_162;
  System_Collections_Generic_Dictionary_int__bool___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v150,
    (System_Collections_Generic_Dictionary_int__bool__o *)offRenderer,
    (const MethodInfo_315F4C0 *)Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
  *(_OWORD *)&v151.fields._dictionary = v150[0];
  v151.fields._current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v150[1];
LABEL_12:
  while ( System_Collections_Generic_Dictionary_Enumerator_int__bool___MoveNext(
            &v151,
            (const MethodInfo_32B4910 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__) )
  {
    key = v151.fields._current.fields.key;
    v25 = sub_1B887FC(ClassBoardBackground___c__DisplayClass37_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v25, 0LL);
    LODWORD(v150[0]) = (_DWORD)key;
    v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v150, v26, v27, v28);
    v30 = System_String__Format((System_String_o *)StringLiteral_4516/*"ClassIconEx_on_{0}"*/, v29, 0LL);
    if ( !v25 )
      sub_1B8880C(v30, v30);
    *(_QWORD *)(v25 + 24) = v30;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v25 + 24), (int32_t)v30, v31, v32);
    v149 = (int)key;
    v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v149, v33, v34, v35);
    v37 = System_String__Format((System_String_o *)StringLiteral_4515/*"ClassIconEx_off_{0}"*/, v36, 0LL);
    *(_QWORD *)(v25 + 16) = v37;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v25 + 16), (int32_t)v37, v38, v39);
    v148 = (int)key;
    v43 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v148, v40, v41, v42);
    classId = key;
    v44 = System_String__Format((System_String_o *)StringLiteral_4514/*"ClassIconEx_ef_glow_{0}"*/, v43, 0LL);
    *(_QWORD *)(v25 + 32) = v44;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v25 + 32), (int32_t)v44, v45, v46);
    v49 = this->fields.exIconSet;
    if ( !v49 )
LABEL_94:
      sub_1B8880C(v47, v48);
    v50 = 0;
    v51 = (System_Func_object__bool__o **)(v25 + 40);
    v52 = (System_Func_object__bool__o **)(v25 + 48);
    v53 = (System_Func_object__bool__o **)(v25 + 56);
    v145 = (unsigned __int64)classId & 0xFF00000000LL;
    while ( 1 )
    {
      v54 = v49->max_length;
      if ( (int)v50 >= (int)v54 )
        break;
      if ( v50 >= v54 )
        sub_1B88814(v47, v48);
      v55 = v49->m_Items[v50];
      if ( !v55 )
        sub_1B8880C(v47, v48);
      v56 = *v51;
      textures = (System_Collections_Generic_IEnumerable_TSource__o *)v55->fields.textures;
      if ( !*v51 )
      {
        v56 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_Texture__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v56,
          (Il2CppObject *)v25,
          Method_ClassBoardBackground___c__DisplayClass37_1__SetClassIcon_b__2__,
          0LL);
        *v51 = v56;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v25 + 40), (int32_t)v56, v58, v59);
      }
      v60 = System_Linq_Enumerable__FirstOrDefault_object__48907856(
              textures,
              (System_Func_TSource__bool__o *)v56,
              (const MethodInfo_2EA4650 *)Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
      v61 = *v52;
      v62 = (UnityEngine_Object_o *)v60;
      if ( !*v52 )
      {
        v61 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_Texture__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v61,
          (Il2CppObject *)v25,
          Method_ClassBoardBackground___c__DisplayClass37_1__SetClassIcon_b__3__,
          0LL);
        *v52 = v61;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v25 + 48), (int32_t)v61, v63, v64);
      }
      v65 = System_Linq_Enumerable__FirstOrDefault_object__48907856(
              textures,
              (System_Func_TSource__bool__o *)v61,
              (const MethodInfo_2EA4650 *)Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
      v66 = *v53;
      v67 = (UnityEngine_Object_o *)v65;
      if ( !*v53 )
      {
        v66 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_Texture__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v66,
          (Il2CppObject *)v25,
          Method_ClassBoardBackground___c__DisplayClass37_1__SetClassIcon_b__4__,
          0LL);
        *v53 = v66;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v25 + 56), (int32_t)v66, v68, v69);
      }
      v70 = System_Linq_Enumerable__FirstOrDefault_object__48907856(
              textures,
              (System_Func_TSource__bool__o *)v66,
              (const MethodInfo_2EA4650 *)Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v47 = UnityEngine_Object__op_Inequality(v67, 0LL, 0LL);
      if ( v47 )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v47 = UnityEngine_Object__op_Inequality(v62, 0LL, 0LL);
        if ( v47 )
        {
          v71 = this->fields.exIconSet;
          if ( !v71 )
            sub_1B8880C(v47, v48);
          if ( v50 >= v71->max_length )
            sub_1B88814(v47, v48);
          v72 = v71->m_Items[v50];
          if ( !v72 )
            sub_1B8880C(v47, v48);
          v73 = v72->fields.offRenderer;
          if ( !v73 )
            sub_1B8880C(0LL, v48);
          material = UnityEngine_Renderer__get_material(v73, 0LL);
          if ( !material )
            sub_1B8880C(0LL, v75);
          UnityEngine_Material__SetTexture(
            material,
            this->fields.iconMaterialPropertyName,
            (UnityEngine_Texture_o *)v62,
            0LL);
          v78 = this->fields.exIconSet;
          if ( !v78 )
            sub_1B8880C(v76, v77);
          if ( v50 >= v78->max_length )
            sub_1B88814(v76, v77);
          v79 = v78->m_Items[v50];
          if ( !v79 )
            sub_1B8880C(v76, v77);
          effectRenderer = v79->fields.effectRenderer;
          if ( !effectRenderer )
            sub_1B8880C(0LL, v77);
          v81 = UnityEngine_Renderer__get_material(effectRenderer, 0LL);
          if ( !v81 )
            sub_1B8880C(0LL, v82);
          UnityEngine_Material__SetTexture(
            v81,
            this->fields.iconMaterialPropertyName,
            (UnityEngine_Texture_o *)v62,
            0LL);
          v85 = this->fields.exIconSet;
          if ( !v85 )
            sub_1B8880C(v83, v84);
          if ( v50 >= v85->max_length )
            sub_1B88814(v83, v84);
          v86 = v85->m_Items[v50];
          if ( !v86 )
            sub_1B8880C(v83, v84);
          onRenderer = v86->fields.onRenderer;
          if ( !onRenderer )
            sub_1B8880C(0LL, v84);
          v88 = UnityEngine_Renderer__get_material(onRenderer, 0LL);
          if ( !v88 )
            sub_1B8880C(0LL, v89);
          UnityEngine_Material__SetTexture(
            v88,
            this->fields.iconMaterialPropertyName,
            (UnityEngine_Texture_o *)v67,
            0LL);
          v92 = this->fields.exIconSet;
          if ( !v92 )
            sub_1B8880C(v90, v91);
          if ( v50 >= v92->max_length )
            sub_1B88814(v90, v91);
          v93 = v92->m_Items[v50];
          if ( !v93 )
            sub_1B8880C(v90, v91);
          effectGlowRenderer = v93->fields.effectGlowRenderer;
          if ( !effectGlowRenderer )
            sub_1B8880C(0LL, v91);
          v95 = UnityEngine_Renderer__get_material(effectGlowRenderer, 0LL);
          if ( !v95 )
            sub_1B8880C(0LL, v96);
          UnityEngine_Material__SetTexture(
            v95,
            this->fields.iconMaterialPropertyName,
            (UnityEngine_Texture_o *)v70,
            0LL);
          v99 = this->fields.exIconSet;
          if ( !v99 )
            sub_1B8880C(v97, v98);
          if ( v50 >= v99->max_length )
            sub_1B88814(v97, v98);
          v100 = v99->m_Items[v50];
          if ( !v100 )
            sub_1B8880C(v97, v98);
          v101 = (UnityEngine_Component_o *)v100->fields.offRenderer;
          if ( !v101 )
            sub_1B8880C(0LL, v98);
          gameObject = UnityEngine_Component__get_gameObject(v101, 0LL);
          if ( !gameObject )
            sub_1B8880C(0LL, v103);
          UnityEngine_GameObject__SetActive(gameObject, v145 == 0, 0LL);
          v106 = this->fields.exIconSet;
          if ( !v106 )
            sub_1B8880C(v104, v105);
          if ( v50 >= v106->max_length )
            sub_1B88814(v104, v105);
          v107 = v106->m_Items[v50];
          if ( !v107 )
            sub_1B8880C(v104, v105);
          v108 = (UnityEngine_Component_o *)v107->fields.onRenderer;
          if ( !v108 )
            sub_1B8880C(0LL, v105);
          v109 = UnityEngine_Component__get_gameObject(v108, 0LL);
          if ( !v109 )
            sub_1B8880C(0LL, v110);
          UnityEngine_GameObject__SetActive(v109, v145 != 0, 0LL);
          v113 = this->fields.exIconSet;
          if ( !v113 )
            sub_1B8880C(v111, v112);
          if ( v50 >= v113->max_length )
            sub_1B88814(v111, v112);
          v114 = v113->m_Items[v50];
          if ( !v114 )
            sub_1B8880C(v111, v112);
          releaseEffect = v114->fields.releaseEffect;
          if ( !releaseEffect )
            sub_1B8880C(0LL, v112);
          v116 = UnityEngine_GameObject__get_gameObject(releaseEffect, 0LL);
          if ( !v116 )
            sub_1B8880C(0LL, v117);
          UnityEngine_GameObject__SetActive(v116, 0, 0LL);
          if ( v145 )
          {
            if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
            IsPlayed = ClassBoardUtility__IsPlayedExClassReleaseEffect((int32_t)classId, 0LL);
            if ( !IsPlayed )
            {
              v120 = this->fields.exIconSet;
              if ( !v120 )
                sub_1B8880C(IsPlayed, v119);
              if ( v50 >= v120->max_length )
                sub_1B88814(IsPlayed, v119);
              v121 = v120->m_Items[v50];
              if ( !v121 )
                sub_1B8880C(IsPlayed, v119);
              animation = (UnityEngine_Object_o *)v121->fields.animation;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              v123 = UnityEngine_Object__op_Inequality(animation, 0LL, 0LL);
              if ( v123 )
              {
                v125 = this->fields.exIconSet;
                if ( !v125 )
                  sub_1B8880C(v123, v124);
                if ( v50 >= v125->max_length )
                  sub_1B88814(v123, v124);
                v126 = v125->m_Items[v50];
                if ( !v126 )
                  sub_1B8880C(v123, v124);
                v127 = (UnityEngine_Component_o *)v126->fields.offRenderer;
                if ( !v127 )
                  sub_1B8880C(0LL, v124);
                v128 = UnityEngine_Component__get_gameObject(v127, 0LL);
                if ( !v128 )
                  sub_1B8880C(0LL, v129);
                UnityEngine_GameObject__SetActive(v128, 1, 0LL);
                v132 = this->fields.exIconSet;
                if ( !v132 )
                  sub_1B8880C(v130, v131);
                if ( v50 >= v132->max_length )
                  sub_1B88814(v130, v131);
                v133 = v132->m_Items[v50];
                if ( !v133 )
                  sub_1B8880C(v130, v131);
                v134 = (UnityEngine_Component_o *)v133->fields.onRenderer;
                if ( !v134 )
                  sub_1B8880C(0LL, v131);
                v135 = UnityEngine_Component__get_gameObject(v134, 0LL);
                if ( !v135 )
                  sub_1B8880C(0LL, v136);
                UnityEngine_GameObject__SetActive(v135, 0, 0LL);
                v139 = this->fields.exIconSet;
                if ( !v139 )
                  sub_1B8880C(v137, v138);
                if ( v50 >= v139->max_length )
                  sub_1B88814(v137, v138);
                v140 = v139->m_Items[v50];
                if ( !v140 )
                  sub_1B8880C(v137, v138);
                exClassReleaseEffectAnimationDic = this->fields.exClassReleaseEffectAnimationDic;
                if ( !exClassReleaseEffectAnimationDic )
                  sub_1B8880C(0LL, classId);
                System_Collections_Generic_Dictionary_int__object___Add(
                  (System_Collections_Generic_Dictionary_int__object__o *)exClassReleaseEffectAnimationDic,
                  (int32_t)classId,
                  (Il2CppObject *)v140->fields.animation,
                  (const MethodInfo_316D958 *)Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__Add__);
              }
            }
          }
          goto LABEL_12;
        }
      }
      ++v50;
      v49 = this->fields.exIconSet;
      if ( !v49 )
        goto LABEL_94;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__bool___Dispose(
    &v151,
    (const MethodInfo_32B4A18 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
}


void __fastcall ClassBoardBackground__SetShowBoardCallback(
        ClassBoardBackground_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.showBoardCallback = callback;
  sub_1B88554(
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

  if ( (byte_4A5E51A & 1) == 0 )
  {
    sub_1B885B0(&ClassBoardBackground__WaitAnimationFinished_d__45_TypeInfo);
    byte_4A5E51A = 1;
  }
  v8 = sub_1B887FC(ClassBoardBackground__WaitAnimationFinished_d__45_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  *(_DWORD *)(v8 + 16) = 0;
  *(_QWORD *)(v8 + 32) = anim;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v8 + 32), (int32_t)anim, v9, v10);
  *(_QWORD *)(v8 + 40) = name;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v8 + 40), (int32_t)name, v11, v12);
  *(_QWORD *)(v8 + 48) = endCallback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v8 + 48), (int32_t)endCallback, v13, v14);
  return (System_Collections_IEnumerator_o *)v8;
}


void __fastcall ClassBoardBackground___PlayStartExClassReleaseEffectPlayer_b__43_0(
        ClassBoardBackground_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x0
  ServantStatusBattleListViewItem_o *p_exClassReleaseEffectAnimationDic; // x19
  struct System_Collections_Generic_Dictionary_int__SimpleAnimation__o *exClassReleaseEffectAnimationDic; // t1
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  System_Int32_array *v7; // x20
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A5E51D & 1) == 0 )
  {
    sub_1B885B0(&ClassBoardUtility_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__get_Keys__);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_int___);
    byte_4A5E51D = 1;
  }
  exClassReleaseEffectAnimationDic = this->fields.exClassReleaseEffectAnimationDic;
  p_exClassReleaseEffectAnimationDic = (ServantStatusBattleListViewItem_o *)&this->fields.exClassReleaseEffectAnimationDic;
  v3 = (System_Collections_Generic_Dictionary_int__object__o *)exClassReleaseEffectAnimationDic;
  if ( !exClassReleaseEffectAnimationDic )
    sub_1B8880C(0LL, method);
  Keys = System_Collections_Generic_Dictionary_int__object___get_Keys(
           v3,
           (const MethodInfo_316D618 *)Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__get_Keys__);
  v7 = System_Linq_Enumerable__ToArray_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
         (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
  ClassBoardUtility__SavePlayedExClassReleaseEffect(v7, 0LL);
  p_exClassReleaseEffectAnimationDic->klass = 0LL;
  sub_1B88554(p_exClassReleaseEffectAnimationDic, 0, v8, v9);
}


void __fastcall ClassBoardBackground___PlayStartMainEffectPlayer_b__41_0(
        ClassBoardBackground_o *this,
        const MethodInfo *method)
{
  ClassBoardEffectPlayer_o *startMainEffectPlayer; // x0

  startMainEffectPlayer = this->fields.startMainEffectPlayer;
  if ( !startMainEffectPlayer )
    sub_1B8880C(0LL, method);
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
  int32_t v8; // w2
  int32_t v9; // w3
  bool result; // w0

  if ( (byte_4A5E521 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4A5E521 = 1;
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
      v6 = (UnityEngine_WaitForSeconds_o *)sub_1B887FC(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v6, exClassReleaseEffectStartSec, 0LL);
      this->fields.__2__current = (Il2CppObject *)v6;
      p__2__current = &this->fields.__2__current;
      sub_1B88554((ServantStatusBattleListViewItem_o *)p__2__current, (int32_t)v6, v8, v9);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
LABEL_10:
    sub_1B8880C(_4__this, method);
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

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_ClassBoardBackground__PlayExClassReleaseEffectPlayer_d__42_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
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

  if ( (byte_4A5E522 & 1) == 0 )
  {
    sub_1B885B0(&SimpleAnimation_State_TypeInfo);
    byte_4A5E522 = 1;
  }
  if ( this->fields.__1__state > 1u )
    return 0;
  anim = this->fields.anim;
  this->fields.__1__state = -1;
  if ( !anim )
    sub_1B8880C(0LL, method);
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
    p_method = sub_1BDA590(State, SimpleAnimation_State_TypeInfo, 5LL);
  }
  if ( (*(float (__fastcall **)(SimpleAnimation_State_o *, _QWORD))p_method)(v6, *(_QWORD *)(p_method + 8)) >= 1.0 )
  {
LABEL_13:
    ActionExtensions__Call(this->fields.endCallback, 0LL);
    return 0;
  }
  this->fields.__2__current = 0LL;
  p__2__current = &this->fields.__2__current;
  sub_1B88554((ServantStatusBattleListViewItem_o *)p__2__current, 0, v10, v11);
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

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_ClassBoardBackground__WaitAnimationFinished_d__45_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
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
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5E51E & 1) == 0 )
  {
    sub_1B885B0(&ClassBoardBackground___c_TypeInfo);
    byte_4A5E51E = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(ClassBoardBackground___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  ClassBoardBackground___c_TypeInfo->static_fields->__9 = (struct ClassBoardBackground___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)ClassBoardBackground___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1B8880C(this, a);
  return a->fields.classId - b->fields.classId;
}


void __fastcall ClassBoardBackground___c___OnDestroy_b__40_0(
        ClassBoardBackground___c_o *this,
        UnityEngine_Renderer_o *x,
        const MethodInfo *method)
{
  UnityEngine_Object_o *material; // x19

  if ( (byte_4A5E51F & 1) == 0 )
  {
    this = (ClassBoardBackground___c_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E51F = 1;
  }
  if ( !x )
    sub_1B8880C(this, x);
  material = (UnityEngine_Object_o *)UnityEngine_Renderer__get_material(x, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69459380(material, 0LL);
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
  if ( (byte_4A5E520 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    this = (ClassBoardBackground___c__DisplayClass37_0_o *)sub_1B885B0(&StringLiteral_4518/*"ClassIcon{0}"*/);
    byte_4A5E520 = 1;
  }
  if ( !x )
    sub_1B8880C(this, x);
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)x, 0LL);
  iconId = v4->fields.iconId;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId, v6, v7, v8);
  v10 = System_String__Format((System_String_o *)StringLiteral_4518/*"ClassIcon{0}"*/, v9, 0LL);
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
    sub_1B8880C(this, x);
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
    sub_1B8880C(this, 0LL);
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
    sub_1B8880C(this, 0LL);
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
    sub_1B8880C(this, 0LL);
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)x, 0LL);
  return System_String__op_Equality(name, this->fields.glowIconName, 0LL);
}