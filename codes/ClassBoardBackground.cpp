void __fastcall ClassBoardBackground___ctor(ClassBoardBackground_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w1

  if ( (byte_4AB9158 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_16293/*"_MainTex"*/, method);
    byte_4AB9158 = 1;
  }
  v5 = StringLiteral_16293/*"_MainTex"*/;
  this->fields.iconMaterialPropertyName = (struct System_String_o *)StringLiteral_16293/*"_MainTex"*/;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.iconMaterialPropertyName, v5, v2, v3);
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
    sub_1BAB678(0LL, value);
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
  int32_t v9; // w2
  int32_t v10; // w3
  struct ClassBoardEffectPlayer_o *startMainEffectPlayer; // x20
  System_Action_o *v12; // x21
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_4AB914C & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, method);
    sub_1BAB41C(&Method_ClassBoardBackground_PlayStartMainEffectPlayer__, v3);
    sub_1BAB41C(&ClassBoardEffectPlayer_TypeInfo, v4);
    byte_4AB914C = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_6;
  name = UnityEngine_Object__get_name(gameObject, 0LL);
  v8 = (ClassBoardEffectPlayer_o *)sub_1BAB668(ClassBoardEffectPlayer_TypeInfo);
  ClassBoardEffectPlayer___ctor_44881860(v8, name, 0LL);
  this->fields.startMainEffectPlayer = v8;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.startMainEffectPlayer, (int32_t)v8, v9, v10);
  startMainEffectPlayer = this->fields.startMainEffectPlayer;
  v12 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_ClassBoardBackground_PlayStartMainEffectPlayer__, 0LL);
  if ( !startMainEffectPlayer )
LABEL_6:
    sub_1BAB678(gameObject, v6);
  startMainEffectPlayer->fields.playCallback = v12;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&startMainEffectPlayer->fields.playCallback, (int32_t)v12, v13, v14);
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

  if ( (byte_4AB9157 & 1) == 0 )
  {
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, method);
    byte_4AB9157 = 1;
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
        sub_1BAB678(name, v5);
      }
      SimpleAnimation__Play_64185800(v7, (System_String_o *)name, 0LL);
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
  sub_1BAB3C0(p_showBoardCallback, 0, v3, v4);
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

  if ( (byte_4AB914D & 1) == 0 )
  {
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, camera);
    byte_4AB914D = 1;
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
    sub_1BAB678(classBoardViewCamera, camera);
  }
  UnityEngine_GameObject__SetActive(v9, (unsigned __int8)classBoardViewCamera & 1, 0LL);
  this->fields.currentCamera = camera;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.currentCamera, (int32_t)camera, v10, v11);
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
  int32_t v27; // w2
  int32_t v28; // w3
  DataMasterBase_TMaster__TEntity__PKType__o *v29; // x20
  __int64 v30; // x1
  BalanceConfig_c *v31; // x0
  ClassBoardClassEntity_o *current; // x21
  BalanceConfig_c *v33; // x0
  __int64 v34; // x1
  _BOOL8 v35; // x0
  __int64 v36; // x1
  int32_t monitor_high; // w22
  _BOOL8 IsOpen; // x0
  __int64 v39; // x1
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+0h] [xbp-90h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+20h] [xbp-70h] BYREF
  System_Collections_Generic_List_ClassBoardClassEntity__o *entitys; // [xsp+38h] [xbp-58h] BYREF

  if ( (byte_4AB9150 & 1) == 0 )
  {
    sub_1BAB41C(&BalanceConfig_TypeInfo, *(_QWORD *)&baseId);
    sub_1BAB41C(&System_Comparison_ClassBoardClassEntity__TypeInfo, v4);
    sub_1BAB41C(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v5);
    sub_1BAB41C(&Method_DataManager_GetMaster_ServantClassMaster___, v6);
    sub_1BAB41C(&DataManager_TypeInfo, v7);
    sub_1BAB41C(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__, v8);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_int__bool__Add__, v9);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__, v10);
    sub_1BAB41C(&System_Collections_Generic_Dictionary_int__bool__TypeInfo, v11);
    sub_1BAB41C(&Method_System_Linq_Enumerable_Contains_int___, v12);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__, v13);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__, v14);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__get_Current__, v15);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__, v16);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ClassBoardClassEntity__Sort__, v17);
    sub_1BAB41C(&Method_ClassBoardBackground___c__GetIconIdList_b__38_0__, v18);
    sub_1BAB41C(&ClassBoardBackground___c_TypeInfo, v19);
    byte_4AB9150 = 1;
  }
  entitys = 0LL;
  memset(&v43, 0, sizeof(v43));
  entity = 0LL;
  v20 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_1BAB668(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v20,
    (const MethodInfo_31A7A38 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
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
    v24 = (System_Comparison_T__o *)sub_1BAB668(System_Comparison_ClassBoardClassEntity__TypeInfo);
    System_Comparison_object____ctor(v24, v25, Method_ClassBoardBackground___c__GetIconIdList_b__38_0__, 0LL);
    static_fields = ClassBoardBackground___c_TypeInfo->static_fields;
    static_fields->__9__38_0 = (struct System_Comparison_ClassBoardClassEntity__o *)v24;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&static_fields->__9__38_0, (int32_t)v24, v27, v28);
  }
  if ( !v23 )
    goto LABEL_37;
  System_Collections_Generic_List_object___Sort_55899008(
    v23,
    v24,
    (const MethodInfo_354F380 *)Method_System_Collections_Generic_List_ClassBoardClassEntity__Sort__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_ServantClassMaster___);
  if ( !entitys )
LABEL_37:
    sub_1BAB678(Master_object, v22);
  v29 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v41,
    (System_Collections_Generic_List_object__o *)entitys,
    (const MethodInfo_354E3B4 *)Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__);
  v43 = v41;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v43,
            (const MethodInfo_32C4C78 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__) )
  {
    v31 = BalanceConfig_TypeInfo;
    current = (ClassBoardClassEntity_o *)v43.fields._current;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    if ( !current )
      sub_1BAB678(v31, v30);
    v33 = (BalanceConfig_c *)System_Linq_Enumerable__Contains_int_(
                               (System_Collections_Generic_IEnumerable_TSource__o *)BalanceConfig_TypeInfo->static_fields->PlayableBeastClassIds,
                               current->fields.classId,
                               (const MethodInfo_2EDD8B4 *)Method_System_Linq_Enumerable_Contains_int___);
    if ( ((unsigned __int8)v33 & 1) != 0 )
    {
      v33 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v33 = BalanceConfig_TypeInfo;
      }
      if ( v33->static_fields->PlayableBeastBaseClassId != current->fields.classId )
        continue;
    }
    if ( !v29 )
      sub_1BAB678(v33, v34);
    v35 = DataMasterBase_object__object__int___TryGetEntity(
            v29,
            &entity,
            current->fields.classId,
            (const MethodInfo_3163DE4 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    if ( v35 )
    {
      if ( !entity )
        sub_1BAB678(v35, v36);
      monitor_high = HIDWORD(entity[2].monitor);
      IsOpen = ClassBoardClassEntity__IsOpen(current, 0LL);
      if ( !v20 )
        sub_1BAB678(IsOpen, v39);
      System_Collections_Generic_Dictionary_int__bool___Add(
        v20,
        monitor_high,
        IsOpen,
        (const MethodInfo_31A8410 *)Method_System_Collections_Generic_Dictionary_int__bool__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v43,
    (const MethodInfo_32C4C74 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__);
  return v20;
}


UnityEngine_RenderTexture_o *__fastcall ClassBoardBackground__GetRenderTexture(
        ClassBoardBackground_o *this,
        const MethodInfo *method)
{
  UnityEngine_Camera_o *currentCamera; // x0

  currentCamera = this->fields.currentCamera;
  if ( !currentCamera )
    sub_1BAB678(0LL, method);
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
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_4AB9152 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_Renderer__TypeInfo, method);
    sub_1BAB41C(&Method_BasicHelper_ForEach_Renderer___, v3);
    sub_1BAB41C(&Method_ClassBoardBackground___c__OnDestroy_b__40_0__, v4);
    sub_1BAB41C(&ClassBoardBackground___c_TypeInfo, v5);
    byte_4AB9152 = 1;
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
    _9__40_0 = (System_Action_object__o *)sub_1BAB668(System_Action_Renderer__TypeInfo);
    System_Action_object____ctor(_9__40_0, v9, Method_ClassBoardBackground___c__OnDestroy_b__40_0__, 0LL);
    static_fields = ClassBoardBackground___c_TypeInfo->static_fields;
    static_fields->__9__40_0 = (struct System_Action_Renderer__o *)_9__40_0;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&static_fields->__9__40_0, (int32_t)_9__40_0, v11, v12);
  }
  BasicHelper__ForEach_object_(
    iconRenderers,
    (System_Action_T__o *)_9__40_0,
    (const MethodInfo_2EB172C *)Method_BasicHelper_ForEach_Renderer___);
}


void __fastcall ClassBoardBackground__PlayBoardParentBeforeAnimation(
        ClassBoardBackground_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *boardParentAnimation; // x20
  UnityEngine_Object_o *boardParentBeforeAnimationClip; // x20
  __int64 v5; // x1
  SimpleAnimation_o *v6; // x0

  if ( (byte_4AB9151 & 1) == 0 )
  {
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, method);
    byte_4AB9151 = 1;
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
        sub_1BAB678(v6, v5);
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

  if ( (byte_4AB9154 & 1) == 0 )
  {
    sub_1BAB41C(&ClassBoardBackground__PlayExClassReleaseEffectPlayer_d__42_TypeInfo, method);
    byte_4AB9154 = 1;
  }
  v3 = sub_1BAB668(ClassBoardBackground__PlayExClassReleaseEffectPlayer_d__42_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v4, v5);
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
    sub_1BAB678(this, 0LL);
  SimpleAnimation__Rewind(anim, 0LL);
  v9 = SimpleAnimation__Play_64185800(anim, name, 0LL);
  v11 = ClassBoardBackground__WaitAnimationFinished((ClassBoardBackground_o *)v9, anim, name, endCallback, v10);
  UnityEngine_MonoBehaviour__StartCoroutine_69785892((UnityEngine_MonoBehaviour_o *)this, v11, 0LL);
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
  int32_t v25; // w2
  int32_t v26; // w3
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v27; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v28; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_4AB9155 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, method);
    sub_1BAB41C(&Method_ClassBoardBackground__PlayStartExClassReleaseEffectPlayer_b__43_0__, v3);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__GetEnumerator__, v4);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__Dispose__, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__MoveNext__, v6);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__get_Current__, v7);
    sub_1BAB41C(&Method_System_Collections_Generic_KeyValuePair_int__SimpleAnimation__get_Key__, v8);
    sub_1BAB41C(&Method_System_Collections_Generic_KeyValuePair_int__SimpleAnimation__get_Value__, v9);
    sub_1BAB41C(&Method_ClassBoardBackground___c__PlayStartExClassReleaseEffectPlayer_b__43_1__, v10);
    sub_1BAB41C(&ClassBoardBackground___c_TypeInfo, v11);
    sub_1BAB41C(&StringLiteral_10564/*"Particle_CrassIcon_Ex_Released"*/, v12);
    byte_4AB9155 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  if ( !BasicHelper__IsNullOrEmpty(
          (System_Collections_ICollection_o *)this->fields.exClassReleaseEffectAnimationDic,
          0LL) )
  {
    exClassReleaseEffectAnimationDic = this->fields.exClassReleaseEffectAnimationDic;
    if ( !exClassReleaseEffectAnimationDic )
      sub_1BAB678(0LL, v13);
    System_Collections_Generic_Dictionary_int__object___GetEnumerator(
      &v27,
      (System_Collections_Generic_Dictionary_int__object__o *)exClassReleaseEffectAnimationDic,
      (const MethodInfo_31B726C *)Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__GetEnumerator__);
    v28 = v27;
    v15 = 1;
    while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
              &v28,
              (const MethodInfo_3304574 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__MoveNext__) )
    {
      value = v28.fields._current.fields.value;
      if ( (v15 & 1) != 0 )
      {
        v18 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
        System_Action___ctor(
          v18,
          (Il2CppObject *)this,
          Method_ClassBoardBackground__PlayStartExClassReleaseEffectPlayer_b__43_0__,
          0LL);
        ClassBoardBackground__PlaySimpleAnimation(
          this,
          (SimpleAnimation_o *)value,
          (System_String_o *)StringLiteral_10564/*"Particle_CrassIcon_Ex_Released"*/,
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
        v21 = (System_String_o *)StringLiteral_10564/*"Particle_CrassIcon_Ex_Released"*/;
        _9__43_1 = v20->static_fields->__9__43_1;
        if ( !_9__43_1 )
        {
          if ( !v20->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v20);
            v20 = ClassBoardBackground___c_TypeInfo;
          }
          v23 = (Il2CppObject *)v20->static_fields->__9;
          _9__43_1 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
          System_Action___ctor(
            _9__43_1,
            v23,
            Method_ClassBoardBackground___c__PlayStartExClassReleaseEffectPlayer_b__43_1__,
            0LL);
          static_fields = ClassBoardBackground___c_TypeInfo->static_fields;
          static_fields->__9__43_1 = _9__43_1;
          sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&static_fields->__9__43_1, (int32_t)_9__43_1, v25, v26);
        }
        ClassBoardBackground__PlaySimpleAnimation(this, (SimpleAnimation_o *)value, v21, _9__43_1, v16);
        v15 = 0;
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
      &v28,
      (const MethodInfo_3304698 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__SimpleAnimation__Dispose__);
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

  if ( (byte_4AB9153 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, method);
    sub_1BAB41C(&Method_ClassBoardBackground__PlayStartMainEffectPlayer_b__41_0__, v3);
    sub_1BAB41C(&Method_ClassBoardEffectPlayer_GetData_int___, v4);
    sub_1BAB41C(&int_TypeInfo, v5);
    sub_1BAB41C(&StringLiteral_8834/*"MainTransition{0}_Release"*/, v6);
    sub_1BAB41C(&StringLiteral_1/*""*/, v7);
    sub_1BAB41C(&StringLiteral_8833/*"MainTransition{0}"*/, v8);
    byte_4AB9153 = 1;
  }
  startMainEffectPlayer = this->fields.startMainEffectPlayer;
  if ( !startMainEffectPlayer )
    sub_1BAB678(0LL, method);
  Data_int = ClassBoardEffectPlayer__GetData_int_(
               startMainEffectPlayer,
               (const MethodInfo_2EB8140 *)Method_ClassBoardEffectPlayer_GetData_int___);
  if ( BasicHelper__IsNullOrEmpty(
         (System_Collections_ICollection_o *)this->fields.exClassReleaseEffectAnimationDic,
         0LL) )
  {
    v22 = Data_int;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22, v11, v12, v13);
    v15 = System_String__Format((System_String_o *)StringLiteral_8833/*"MainTransition{0}"*/, v14, 0LL);
  }
  else
  {
    v23 = Data_int;
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23, v11, v12, v13);
    v15 = System_String__Format((System_String_o *)StringLiteral_8834/*"MainTransition{0}_Release"*/, v16, 0LL);
    v18 = ClassBoardBackground__PlayExClassReleaseEffectPlayer(this, v17);
    UnityEngine_MonoBehaviour__StartCoroutine_69785892((UnityEngine_MonoBehaviour_o *)this, v18, 0LL);
  }
  mainAnimation = this->fields.mainAnimation;
  v20 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
  System_Action___ctor(v20, (Il2CppObject *)this, Method_ClassBoardBackground__PlayStartMainEffectPlayer_b__41_0__, 0LL);
  ClassBoardBackground__PlaySimpleAnimation(this, mainAnimation, v15, v20, v21);
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

  if ( (byte_4AB914E & 1) == 0 )
  {
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, animation);
    byte_4AB914E = 1;
  }
  this->fields.boardParentAnimation = animation;
  sub_1BAB3C0(
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
              SimpleAnimation__Play_64185800(v17, (System_String_o *)name, 0LL);
              return;
            }
          }
        }
      }
LABEL_28:
      sub_1BAB678(name, v8);
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
  int32_t v34; // w2
  int32_t v35; // w3
  System_Collections_Generic_IEnumerable_TSource__o *iconTextures; // x21
  System_Func_object__bool__o *v37; // x23
  Il2CppObject *v38; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  UnityEngine_Object_o *v41; // x21
  System_Collections_Generic_IEnumerable_T__o *iconRenderers; // x21
  System_Action_object__o *v43; // x23
  System_Collections_Generic_Dictionary_int__object__o *v44; // x21
  int32_t v45; // w2
  int32_t v46; // w3
  const MethodInfo *v47; // x2
  struct ClassBoardBackground_ExClassIconSet_array *exIconSet; // x19
  Il2CppObject *key; // x22
  __int64 v50; // x21
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  Il2CppObject *v54; // x1
  System_String_o *v55; // x0
  int32_t v56; // w2
  int32_t v57; // w3
  __int64 v58; // x2
  __int64 v59; // x3
  __int64 v60; // x4
  Il2CppObject *v61; // x1
  System_String_o *v62; // x0
  int32_t v63; // w2
  int32_t v64; // w3
  __int64 v65; // x2
  __int64 v66; // x3
  __int64 v67; // x4
  Il2CppObject *v68; // x1
  System_String_o *v69; // x0
  int32_t v70; // w2
  int32_t v71; // w3
  _BOOL8 v72; // x0
  __int64 v73; // x1
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
  System_Func_object__bool__o *v86; // x26
  UnityEngine_Object_o *v87; // x23
  int32_t v88; // w2
  int32_t v89; // w3
  Il2CppObject *v90; // x0
  System_Func_object__bool__o *v91; // x28
  UnityEngine_Object_o *v92; // x26
  int32_t v93; // w2
  int32_t v94; // w3
  Il2CppObject *v95; // x27
  struct ClassBoardBackground_ExClassIconSet_array *v96; // x8
  ClassBoardBackground_ExClassIconSet_o *v97; // x8
  UnityEngine_Renderer_o *v98; // x0
  UnityEngine_Material_o *material; // x0
  __int64 v100; // x1
  __int64 v101; // x0
  __int64 v102; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v103; // x8
  ClassBoardBackground_ExClassIconSet_o *v104; // x8
  UnityEngine_Renderer_o *effectRenderer; // x0
  UnityEngine_Material_o *v106; // x0
  __int64 v107; // x1
  __int64 v108; // x0
  __int64 v109; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v110; // x8
  ClassBoardBackground_ExClassIconSet_o *v111; // x8
  UnityEngine_Renderer_o *onRenderer; // x0
  UnityEngine_Material_o *v113; // x0
  __int64 v114; // x1
  __int64 v115; // x0
  __int64 v116; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v117; // x8
  ClassBoardBackground_ExClassIconSet_o *v118; // x8
  UnityEngine_Renderer_o *effectGlowRenderer; // x0
  UnityEngine_Material_o *v120; // x0
  __int64 v121; // x1
  __int64 v122; // x0
  __int64 v123; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v124; // x8
  ClassBoardBackground_ExClassIconSet_o *v125; // x8
  UnityEngine_Component_o *v126; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v128; // x1
  __int64 v129; // x0
  __int64 v130; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v131; // x8
  ClassBoardBackground_ExClassIconSet_o *v132; // x8
  UnityEngine_Component_o *v133; // x0
  UnityEngine_GameObject_o *v134; // x0
  __int64 v135; // x1
  __int64 v136; // x0
  __int64 v137; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v138; // x8
  ClassBoardBackground_ExClassIconSet_o *v139; // x8
  UnityEngine_GameObject_o *releaseEffect; // x0
  UnityEngine_GameObject_o *v141; // x0
  __int64 v142; // x1
  _BOOL8 IsPlayed; // x0
  __int64 v144; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v145; // x8
  ClassBoardBackground_ExClassIconSet_o *v146; // x8
  UnityEngine_Object_o *animation; // x21
  _BOOL8 v148; // x0
  __int64 v149; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v150; // x8
  ClassBoardBackground_ExClassIconSet_o *v151; // x8
  UnityEngine_Component_o *v152; // x0
  UnityEngine_GameObject_o *v153; // x0
  __int64 v154; // x1
  __int64 v155; // x0
  __int64 v156; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v157; // x8
  ClassBoardBackground_ExClassIconSet_o *v158; // x8
  UnityEngine_Component_o *v159; // x0
  UnityEngine_GameObject_o *v160; // x0
  __int64 v161; // x1
  __int64 v162; // x0
  __int64 v163; // x1
  struct ClassBoardBackground_ExClassIconSet_array *v164; // x8
  ClassBoardBackground_ExClassIconSet_o *v165; // x8
  struct System_Collections_Generic_Dictionary_int__SimpleAnimation__o *exClassReleaseEffectAnimationDic; // x0
  int max_length; // w8
  unsigned int v168; // w20
  ClassBoardBackground_ExClassIconSet_o *v169; // x21
  __int64 v170; // [xsp+0h] [xbp-C0h]
  Il2CppObject *classId; // [xsp+8h] [xbp-B8h]
  int v173; // [xsp+18h] [xbp-A8h] BYREF
  int v174; // [xsp+1Ch] [xbp-A4h] BYREF
  __int128 v175[2]; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v176; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4AB914F & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_Renderer__TypeInfo, *(_QWORD *)&baseId);
    sub_1BAB41C(&Method_BasicHelper_ForEach_Renderer___, v6);
    sub_1BAB41C(&ClassBoardUtility_TypeInfo, v7);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__Add__, v8);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__, v9);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_int__SimpleAnimation___ctor__, v10);
    sub_1BAB41C(&System_Collections_Generic_Dictionary_int__SimpleAnimation__TypeInfo, v11);
    sub_1BAB41C(&Method_System_Linq_Enumerable_FirstOrDefault_Texture___, v12);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__, v13);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__, v14);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__get_Current__, v15);
    sub_1BAB41C(&System_Func_Texture__bool__TypeInfo, v16);
    sub_1BAB41C(&int_TypeInfo, v17);
    sub_1BAB41C(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Key__, v18);
    sub_1BAB41C(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Value__, v19);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v20);
    sub_1BAB41C(&Method_ClassBoardBackground___c__DisplayClass37_0__SetClassIcon_b__0__, v21);
    sub_1BAB41C(&Method_ClassBoardBackground___c__DisplayClass37_0__SetClassIcon_b__1__, v22);
    sub_1BAB41C(&ClassBoardBackground___c__DisplayClass37_0_TypeInfo, v23);
    sub_1BAB41C(&Method_ClassBoardBackground___c__DisplayClass37_1__SetClassIcon_b__2__, v24);
    sub_1BAB41C(&Method_ClassBoardBackground___c__DisplayClass37_1__SetClassIcon_b__3__, v25);
    sub_1BAB41C(&Method_ClassBoardBackground___c__DisplayClass37_1__SetClassIcon_b__4__, v26);
    sub_1BAB41C(&ClassBoardBackground___c__DisplayClass37_1_TypeInfo, v27);
    sub_1BAB41C(&StringLiteral_4514/*"ClassIconEx_off_{0}"*/, v28);
    sub_1BAB41C(&StringLiteral_4515/*"ClassIconEx_on_{0}"*/, v29);
    sub_1BAB41C(&StringLiteral_4513/*"ClassIconEx_ef_glow_{0}"*/, v30);
    byte_4AB914F = 1;
  }
  memset(&v176, 0, 32);
  v31 = sub_1BAB668(ClassBoardBackground___c__DisplayClass37_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v31, 0LL);
  if ( !v31 )
    goto LABEL_162;
  *(_DWORD *)(v31 + 16) = iconId;
  *(_QWORD *)(v31 + 24) = this;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v31 + 24), (int32_t)this, v34, v35);
  iconTextures = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.iconTextures;
  v37 = (System_Func_object__bool__o *)sub_1BAB668(System_Func_Texture__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v37,
    (Il2CppObject *)v31,
    Method_ClassBoardBackground___c__DisplayClass37_0__SetClassIcon_b__0__,
    0LL);
  v38 = System_Linq_Enumerable__FirstOrDefault_object__49186032(
          iconTextures,
          (System_Func_TSource__bool__o *)v37,
          (const MethodInfo_2EE84F0 *)Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
  *(_QWORD *)(v31 + 32) = v38;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v31 + 32), (int32_t)v38, v39, v40);
  v41 = *(UnityEngine_Object_o **)(v31 + 32);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v41, 0LL, 0LL) )
    return;
  iconRenderers = (System_Collections_Generic_IEnumerable_T__o *)this->fields.iconRenderers;
  v43 = (System_Action_object__o *)sub_1BAB668(System_Action_Renderer__TypeInfo);
  System_Action_object____ctor(
    v43,
    (Il2CppObject *)v31,
    Method_ClassBoardBackground___c__DisplayClass37_0__SetClassIcon_b__1__,
    0LL);
  BasicHelper__ForEach_object_(
    iconRenderers,
    (System_Action_T__o *)v43,
    (const MethodInfo_2EB172C *)Method_BasicHelper_ForEach_Renderer___);
  v44 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BAB668(System_Collections_Generic_Dictionary_int__SimpleAnimation__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v44,
    (const MethodInfo_31B6460 *)Method_System_Collections_Generic_Dictionary_int__SimpleAnimation___ctor__);
  this->fields.exClassReleaseEffectAnimationDic = (struct System_Collections_Generic_Dictionary_int__SimpleAnimation__o *)v44;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)&this->fields.exClassReleaseEffectAnimationDic,
    (int32_t)v44,
    v45,
    v46);
  exIconSet = this->fields.exIconSet;
  if ( !exIconSet )
LABEL_162:
    sub_1BAB678(offRenderer, v33);
  if ( !*(_QWORD *)&exIconSet->max_length )
    return;
  if ( (baseId & 0xFFFFFFFE) != 8 )
  {
    max_length = exIconSet->max_length;
    if ( max_length < 1 )
      return;
    v168 = 0;
    while ( 1 )
    {
      if ( v168 >= max_length )
        sub_1BAB680(offRenderer, v33);
      v169 = exIconSet->m_Items[v168];
      if ( !v169 )
        break;
      offRenderer = (UnityEngine_Component_o *)v169->fields.offRenderer;
      if ( !offRenderer )
        break;
      offRenderer = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(offRenderer, 0LL);
      if ( !offRenderer )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)offRenderer, 0, 0LL);
      offRenderer = (UnityEngine_Component_o *)v169->fields.onRenderer;
      if ( !offRenderer )
        break;
      offRenderer = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(offRenderer, 0LL);
      if ( !offRenderer )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)offRenderer, 0, 0LL);
      offRenderer = (UnityEngine_Component_o *)v169->fields.releaseEffect;
      if ( !offRenderer )
        break;
      offRenderer = (UnityEngine_Component_o *)UnityEngine_GameObject__get_gameObject(
                                                 (UnityEngine_GameObject_o *)offRenderer,
                                                 0LL);
      if ( !offRenderer )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)offRenderer, 0, 0LL);
      max_length = exIconSet->max_length;
      if ( (int)++v168 >= max_length )
        return;
    }
    goto LABEL_162;
  }
  offRenderer = (UnityEngine_Component_o *)ClassBoardBackground__GetIconIdList(
                                             (ClassBoardBackground_o *)offRenderer,
                                             baseId,
                                             v47);
  if ( !offRenderer )
    goto LABEL_162;
  System_Collections_Generic_Dictionary_int__bool___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v175,
    (System_Collections_Generic_Dictionary_int__bool__o *)offRenderer,
    (const MethodInfo_31A87FC *)Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
  *(_OWORD *)&v176.fields._dictionary = v175[0];
  v176.fields._current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v175[1];
LABEL_12:
  while ( System_Collections_Generic_Dictionary_Enumerator_int__bool___MoveNext(
            &v176,
            (const MethodInfo_3301A6C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__) )
  {
    key = v176.fields._current.fields.key;
    v50 = sub_1BAB668(ClassBoardBackground___c__DisplayClass37_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v50, 0LL);
    LODWORD(v175[0]) = (_DWORD)key;
    v54 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v175, v51, v52, v53);
    v55 = System_String__Format((System_String_o *)StringLiteral_4515/*"ClassIconEx_on_{0}"*/, v54, 0LL);
    if ( !v50 )
      sub_1BAB678(v55, v55);
    *(_QWORD *)(v50 + 24) = v55;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v50 + 24), (int32_t)v55, v56, v57);
    v174 = (int)key;
    v61 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v174, v58, v59, v60);
    v62 = System_String__Format((System_String_o *)StringLiteral_4514/*"ClassIconEx_off_{0}"*/, v61, 0LL);
    *(_QWORD *)(v50 + 16) = v62;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v50 + 16), (int32_t)v62, v63, v64);
    v173 = (int)key;
    v68 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v173, v65, v66, v67);
    classId = key;
    v69 = System_String__Format((System_String_o *)StringLiteral_4513/*"ClassIconEx_ef_glow_{0}"*/, v68, 0LL);
    *(_QWORD *)(v50 + 32) = v69;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v50 + 32), (int32_t)v69, v70, v71);
    v74 = this->fields.exIconSet;
    if ( !v74 )
LABEL_94:
      sub_1BAB678(v72, v73);
    v75 = 0;
    v76 = (System_Func_object__bool__o **)(v50 + 40);
    v77 = (System_Func_object__bool__o **)(v50 + 48);
    v78 = (System_Func_object__bool__o **)(v50 + 56);
    v170 = (unsigned __int64)classId & 0xFF00000000LL;
    while ( 1 )
    {
      v79 = v74->max_length;
      if ( (int)v75 >= (int)v79 )
        break;
      if ( v75 >= v79 )
        sub_1BAB680(v72, v73);
      v80 = v74->m_Items[v75];
      if ( !v80 )
        sub_1BAB678(v72, v73);
      v81 = *v76;
      textures = (System_Collections_Generic_IEnumerable_TSource__o *)v80->fields.textures;
      if ( !*v76 )
      {
        v81 = (System_Func_object__bool__o *)sub_1BAB668(System_Func_Texture__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v81,
          (Il2CppObject *)v50,
          Method_ClassBoardBackground___c__DisplayClass37_1__SetClassIcon_b__2__,
          0LL);
        *v76 = v81;
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v50 + 40), (int32_t)v81, v83, v84);
      }
      v85 = System_Linq_Enumerable__FirstOrDefault_object__49186032(
              textures,
              (System_Func_TSource__bool__o *)v81,
              (const MethodInfo_2EE84F0 *)Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
      v86 = *v77;
      v87 = (UnityEngine_Object_o *)v85;
      if ( !*v77 )
      {
        v86 = (System_Func_object__bool__o *)sub_1BAB668(System_Func_Texture__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v86,
          (Il2CppObject *)v50,
          Method_ClassBoardBackground___c__DisplayClass37_1__SetClassIcon_b__3__,
          0LL);
        *v77 = v86;
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v50 + 48), (int32_t)v86, v88, v89);
      }
      v90 = System_Linq_Enumerable__FirstOrDefault_object__49186032(
              textures,
              (System_Func_TSource__bool__o *)v86,
              (const MethodInfo_2EE84F0 *)Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
      v91 = *v78;
      v92 = (UnityEngine_Object_o *)v90;
      if ( !*v78 )
      {
        v91 = (System_Func_object__bool__o *)sub_1BAB668(System_Func_Texture__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v91,
          (Il2CppObject *)v50,
          Method_ClassBoardBackground___c__DisplayClass37_1__SetClassIcon_b__4__,
          0LL);
        *v78 = v91;
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v50 + 56), (int32_t)v91, v93, v94);
      }
      v95 = System_Linq_Enumerable__FirstOrDefault_object__49186032(
              textures,
              (System_Func_TSource__bool__o *)v91,
              (const MethodInfo_2EE84F0 *)Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v72 = UnityEngine_Object__op_Inequality(v92, 0LL, 0LL);
      if ( v72 )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v72 = UnityEngine_Object__op_Inequality(v87, 0LL, 0LL);
        if ( v72 )
        {
          v96 = this->fields.exIconSet;
          if ( !v96 )
            sub_1BAB678(v72, v73);
          if ( v75 >= v96->max_length )
            sub_1BAB680(v72, v73);
          v97 = v96->m_Items[v75];
          if ( !v97 )
            sub_1BAB678(v72, v73);
          v98 = v97->fields.offRenderer;
          if ( !v98 )
            sub_1BAB678(0LL, v73);
          material = UnityEngine_Renderer__get_material(v98, 0LL);
          if ( !material )
            sub_1BAB678(0LL, v100);
          UnityEngine_Material__SetTexture(
            material,
            this->fields.iconMaterialPropertyName,
            (UnityEngine_Texture_o *)v87,
            0LL);
          v103 = this->fields.exIconSet;
          if ( !v103 )
            sub_1BAB678(v101, v102);
          if ( v75 >= v103->max_length )
            sub_1BAB680(v101, v102);
          v104 = v103->m_Items[v75];
          if ( !v104 )
            sub_1BAB678(v101, v102);
          effectRenderer = v104->fields.effectRenderer;
          if ( !effectRenderer )
            sub_1BAB678(0LL, v102);
          v106 = UnityEngine_Renderer__get_material(effectRenderer, 0LL);
          if ( !v106 )
            sub_1BAB678(0LL, v107);
          UnityEngine_Material__SetTexture(
            v106,
            this->fields.iconMaterialPropertyName,
            (UnityEngine_Texture_o *)v87,
            0LL);
          v110 = this->fields.exIconSet;
          if ( !v110 )
            sub_1BAB678(v108, v109);
          if ( v75 >= v110->max_length )
            sub_1BAB680(v108, v109);
          v111 = v110->m_Items[v75];
          if ( !v111 )
            sub_1BAB678(v108, v109);
          onRenderer = v111->fields.onRenderer;
          if ( !onRenderer )
            sub_1BAB678(0LL, v109);
          v113 = UnityEngine_Renderer__get_material(onRenderer, 0LL);
          if ( !v113 )
            sub_1BAB678(0LL, v114);
          UnityEngine_Material__SetTexture(
            v113,
            this->fields.iconMaterialPropertyName,
            (UnityEngine_Texture_o *)v92,
            0LL);
          v117 = this->fields.exIconSet;
          if ( !v117 )
            sub_1BAB678(v115, v116);
          if ( v75 >= v117->max_length )
            sub_1BAB680(v115, v116);
          v118 = v117->m_Items[v75];
          if ( !v118 )
            sub_1BAB678(v115, v116);
          effectGlowRenderer = v118->fields.effectGlowRenderer;
          if ( !effectGlowRenderer )
            sub_1BAB678(0LL, v116);
          v120 = UnityEngine_Renderer__get_material(effectGlowRenderer, 0LL);
          if ( !v120 )
            sub_1BAB678(0LL, v121);
          UnityEngine_Material__SetTexture(
            v120,
            this->fields.iconMaterialPropertyName,
            (UnityEngine_Texture_o *)v95,
            0LL);
          v124 = this->fields.exIconSet;
          if ( !v124 )
            sub_1BAB678(v122, v123);
          if ( v75 >= v124->max_length )
            sub_1BAB680(v122, v123);
          v125 = v124->m_Items[v75];
          if ( !v125 )
            sub_1BAB678(v122, v123);
          v126 = (UnityEngine_Component_o *)v125->fields.offRenderer;
          if ( !v126 )
            sub_1BAB678(0LL, v123);
          gameObject = UnityEngine_Component__get_gameObject(v126, 0LL);
          if ( !gameObject )
            sub_1BAB678(0LL, v128);
          UnityEngine_GameObject__SetActive(gameObject, v170 == 0, 0LL);
          v131 = this->fields.exIconSet;
          if ( !v131 )
            sub_1BAB678(v129, v130);
          if ( v75 >= v131->max_length )
            sub_1BAB680(v129, v130);
          v132 = v131->m_Items[v75];
          if ( !v132 )
            sub_1BAB678(v129, v130);
          v133 = (UnityEngine_Component_o *)v132->fields.onRenderer;
          if ( !v133 )
            sub_1BAB678(0LL, v130);
          v134 = UnityEngine_Component__get_gameObject(v133, 0LL);
          if ( !v134 )
            sub_1BAB678(0LL, v135);
          UnityEngine_GameObject__SetActive(v134, v170 != 0, 0LL);
          v138 = this->fields.exIconSet;
          if ( !v138 )
            sub_1BAB678(v136, v137);
          if ( v75 >= v138->max_length )
            sub_1BAB680(v136, v137);
          v139 = v138->m_Items[v75];
          if ( !v139 )
            sub_1BAB678(v136, v137);
          releaseEffect = v139->fields.releaseEffect;
          if ( !releaseEffect )
            sub_1BAB678(0LL, v137);
          v141 = UnityEngine_GameObject__get_gameObject(releaseEffect, 0LL);
          if ( !v141 )
            sub_1BAB678(0LL, v142);
          UnityEngine_GameObject__SetActive(v141, 0, 0LL);
          if ( v170 )
          {
            if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
            IsPlayed = ClassBoardUtility__IsPlayedExClassReleaseEffect((int32_t)classId, 0LL);
            if ( !IsPlayed )
            {
              v145 = this->fields.exIconSet;
              if ( !v145 )
                sub_1BAB678(IsPlayed, v144);
              if ( v75 >= v145->max_length )
                sub_1BAB680(IsPlayed, v144);
              v146 = v145->m_Items[v75];
              if ( !v146 )
                sub_1BAB678(IsPlayed, v144);
              animation = (UnityEngine_Object_o *)v146->fields.animation;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              v148 = UnityEngine_Object__op_Inequality(animation, 0LL, 0LL);
              if ( v148 )
              {
                v150 = this->fields.exIconSet;
                if ( !v150 )
                  sub_1BAB678(v148, v149);
                if ( v75 >= v150->max_length )
                  sub_1BAB680(v148, v149);
                v151 = v150->m_Items[v75];
                if ( !v151 )
                  sub_1BAB678(v148, v149);
                v152 = (UnityEngine_Component_o *)v151->fields.offRenderer;
                if ( !v152 )
                  sub_1BAB678(0LL, v149);
                v153 = UnityEngine_Component__get_gameObject(v152, 0LL);
                if ( !v153 )
                  sub_1BAB678(0LL, v154);
                UnityEngine_GameObject__SetActive(v153, 1, 0LL);
                v157 = this->fields.exIconSet;
                if ( !v157 )
                  sub_1BAB678(v155, v156);
                if ( v75 >= v157->max_length )
                  sub_1BAB680(v155, v156);
                v158 = v157->m_Items[v75];
                if ( !v158 )
                  sub_1BAB678(v155, v156);
                v159 = (UnityEngine_Component_o *)v158->fields.onRenderer;
                if ( !v159 )
                  sub_1BAB678(0LL, v156);
                v160 = UnityEngine_Component__get_gameObject(v159, 0LL);
                if ( !v160 )
                  sub_1BAB678(0LL, v161);
                UnityEngine_GameObject__SetActive(v160, 0, 0LL);
                v164 = this->fields.exIconSet;
                if ( !v164 )
                  sub_1BAB678(v162, v163);
                if ( v75 >= v164->max_length )
                  sub_1BAB680(v162, v163);
                v165 = v164->m_Items[v75];
                if ( !v165 )
                  sub_1BAB678(v162, v163);
                exClassReleaseEffectAnimationDic = this->fields.exClassReleaseEffectAnimationDic;
                if ( !exClassReleaseEffectAnimationDic )
                  sub_1BAB678(0LL, classId);
                System_Collections_Generic_Dictionary_int__object___Add(
                  (System_Collections_Generic_Dictionary_int__object__o *)exClassReleaseEffectAnimationDic,
                  (int32_t)classId,
                  (Il2CppObject *)v165->fields.animation,
                  (const MethodInfo_31B6E34 *)Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__Add__);
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
    &v176,
    (const MethodInfo_3301B74 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
}


void __fastcall ClassBoardBackground__SetShowBoardCallback(
        ClassBoardBackground_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.showBoardCallback = callback;
  sub_1BAB3C0(
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

  if ( (byte_4AB9156 & 1) == 0 )
  {
    sub_1BAB41C(&ClassBoardBackground__WaitAnimationFinished_d__45_TypeInfo, anim);
    byte_4AB9156 = 1;
  }
  v8 = sub_1BAB668(ClassBoardBackground__WaitAnimationFinished_d__45_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  *(_DWORD *)(v8 + 16) = 0;
  *(_QWORD *)(v8 + 32) = anim;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v8 + 32), (int32_t)anim, v9, v10);
  *(_QWORD *)(v8 + 40) = name;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v8 + 40), (int32_t)name, v11, v12);
  *(_QWORD *)(v8 + 48) = endCallback;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v8 + 48), (int32_t)endCallback, v13, v14);
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

  if ( (byte_4AB9159 & 1) == 0 )
  {
    sub_1BAB41C(&ClassBoardUtility_TypeInfo, method);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__get_Keys__, v3);
    sub_1BAB41C(&Method_System_Linq_Enumerable_ToArray_int___, v4);
    byte_4AB9159 = 1;
  }
  exClassReleaseEffectAnimationDic = this->fields.exClassReleaseEffectAnimationDic;
  p_exClassReleaseEffectAnimationDic = (ServantStatusBattleListViewItem_o *)&this->fields.exClassReleaseEffectAnimationDic;
  v5 = (System_Collections_Generic_Dictionary_int__object__o *)exClassReleaseEffectAnimationDic;
  if ( !exClassReleaseEffectAnimationDic )
    sub_1BAB678(0LL, method);
  Keys = System_Collections_Generic_Dictionary_int__object___get_Keys(
           v5,
           (const MethodInfo_31B6AF4 *)Method_System_Collections_Generic_Dictionary_int__SimpleAnimation__get_Keys__);
  v9 = System_Linq_Enumerable__ToArray_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
         (const MethodInfo_2EFCF54 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
  ClassBoardUtility__SavePlayedExClassReleaseEffect(v9, 0LL);
  p_exClassReleaseEffectAnimationDic->klass = 0LL;
  sub_1BAB3C0(p_exClassReleaseEffectAnimationDic, 0, v10, v11);
}


void __fastcall ClassBoardBackground___PlayStartMainEffectPlayer_b__41_0(
        ClassBoardBackground_o *this,
        const MethodInfo *method)
{
  ClassBoardEffectPlayer_o *startMainEffectPlayer; // x0

  startMainEffectPlayer = this->fields.startMainEffectPlayer;
  if ( !startMainEffectPlayer )
    sub_1BAB678(0LL, method);
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

  if ( (byte_4AB915D & 1) == 0 )
  {
    sub_1BAB41C(&UnityEngine_WaitForSeconds_TypeInfo, method);
    byte_4AB915D = 1;
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
      v6 = (UnityEngine_WaitForSeconds_o *)sub_1BAB668(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v6, exClassReleaseEffectStartSec, 0LL);
      this->fields.__2__current = (Il2CppObject *)v6;
      p__2__current = &this->fields.__2__current;
      sub_1BAB3C0((ServantStatusBattleListViewItem_o *)p__2__current, (int32_t)v6, v8, v9);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
LABEL_10:
    sub_1BAB678(_4__this, method);
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

  v2 = sub_1BAB430(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BAB668(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BAB430(&Method_ClassBoardBackground__PlayExClassReleaseEffectPlayer_d__42_System_Collections_IEnumerator_Reset__);
  sub_1BAB544(v3, v4);
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

  if ( (byte_4AB915E & 1) == 0 )
  {
    sub_1BAB41C(&SimpleAnimation_State_TypeInfo, method);
    byte_4AB915E = 1;
  }
  if ( this->fields.__1__state > 1u )
    return 0;
  anim = this->fields.anim;
  this->fields.__1__state = -1;
  if ( !anim )
    sub_1BAB678(0LL, method);
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
    p_method = sub_1BFD3FC(State, SimpleAnimation_State_TypeInfo, 5LL);
  }
  if ( (*(float (__fastcall **)(SimpleAnimation_State_o *, _QWORD))p_method)(v6, *(_QWORD *)(p_method + 8)) >= 1.0 )
  {
LABEL_13:
    ActionExtensions__Call(this->fields.endCallback, 0LL);
    return 0;
  }
  this->fields.__2__current = 0LL;
  p__2__current = &this->fields.__2__current;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)p__2__current, 0, v10, v11);
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

  v2 = sub_1BAB430(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BAB668(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BAB430(&Method_ClassBoardBackground__WaitAnimationFinished_d__45_System_Collections_IEnumerator_Reset__);
  sub_1BAB544(v3, v4);
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
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4AB915A & 1) == 0 )
  {
    sub_1BAB41C(&ClassBoardBackground___c_TypeInfo, v1);
    byte_4AB915A = 1;
  }
  v2 = (Il2CppObject *)sub_1BAB668(ClassBoardBackground___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ClassBoardBackground___c_TypeInfo->static_fields->__9 = (struct ClassBoardBackground___c_o *)v2;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)ClassBoardBackground___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
    sub_1BAB678(this, a);
  return a->fields.classId - b->fields.classId;
}


void __fastcall ClassBoardBackground___c___OnDestroy_b__40_0(
        ClassBoardBackground___c_o *this,
        UnityEngine_Renderer_o *x,
        const MethodInfo *method)
{
  UnityEngine_Object_o *material; // x19

  if ( (byte_4AB915B & 1) == 0 )
  {
    this = (ClassBoardBackground___c_o *)sub_1BAB41C(&UnityEngine_Object_TypeInfo, x);
    byte_4AB915B = 1;
  }
  if ( !x )
    sub_1BAB678(this, x);
  material = (UnityEngine_Object_o *)UnityEngine_Renderer__get_material(x, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69800620(material, 0LL);
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
  if ( (byte_4AB915C & 1) == 0 )
  {
    sub_1BAB41C(&int_TypeInfo, x);
    this = (ClassBoardBackground___c__DisplayClass37_0_o *)sub_1BAB41C(&StringLiteral_4517/*"ClassIcon{0}"*/, v5);
    byte_4AB915C = 1;
  }
  if ( !x )
    sub_1BAB678(this, x);
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)x, 0LL);
  iconId = v4->fields.iconId;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId, v7, v8, v9);
  v11 = System_String__Format((System_String_o *)StringLiteral_4517/*"ClassIcon{0}"*/, v10, 0LL);
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
    sub_1BAB678(this, x);
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
    sub_1BAB678(this, 0LL);
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
    sub_1BAB678(this, 0LL);
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
    sub_1BAB678(this, 0LL);
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)x, 0LL);
  return System_String__op_Equality(name, this->fields.glowIconName, 0LL);
}