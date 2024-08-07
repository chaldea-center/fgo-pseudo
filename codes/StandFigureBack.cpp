void __fastcall StandFigureBack___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct StandFigureBack_StaticFields *static_fields; // x8

  if ( (byte_49FE0F5 & 1) == 0 )
  {
    sub_1B64A00(&StandFigureBack_TypeInfo, v1);
    byte_49FE0F5 = 1;
  }
  static_fields = StandFigureBack_TypeInfo->static_fields;
  static_fields->COSTUME_IMAGE_CNT_START = 11;
  *(int32x2_t *)&static_fields->OPEN_TIME = vdup_n_s32(0x3E99999Au);
}


void __fastcall StandFigureBack___ctor(StandFigureBack_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_49FE0F4 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_List_StandFigureCollect___ctor__, method);
    sub_1B64A00(&System_Collections_Generic_List_StandFigureCollect__TypeInfo, v3);
    byte_49FE0F4 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_StandFigureCollect__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
  this->fields.standFigureCollectList = (struct System_Collections_Generic_List_StandFigureCollect__o *)v4;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.standFigureCollectList, (int32_t)v4, v5, v6);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StandFigureBack__CreatePrefab(
        StandFigureBack_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  UnityEngine_Object_o *baseStandFigure; // x20
  bool v17; // w0
  __int64 v18; // x8
  UnityEngine_GameObject_o *v19; // x20
  Il2CppObject *Instance; // x0
  __int64 v21; // x1
  System_Collections_Generic_List_SvtMultiPortraitEntity__o *EntityListOrderBy; // x0
  System_Collections_Generic_List_object__o *v23; // x21
  Il2CppObject *current; // x23
  UIStandFigureR_o *v25; // x0
  __int64 v26; // x1
  int32_t v27; // w2
  int32_t v28; // w3
  UIStandFigureR_o *v29; // x24
  System_Collections_Generic_List_object__o *v30; // x21
  StandFigureCollect_o *v31; // x22
  const MethodInfo *v32; // x3
  __int64 v33; // x0
  __int64 v34; // x1
  int32_t v35; // w2
  int32_t v36; // w3
  struct System_Object_array *v37; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10
  Il2CppClass **v40; // x0
  System_Collections_Generic_List_object__o *standFigureCollectList; // x21
  UIStandFigureR_o *RenderPrefab; // x22
  StandFigureCollect_o *v43; // x20
  const MethodInfo *v44; // x3
  int32_t v45; // w2
  int32_t v46; // w3
  struct System_Object_array *items; // x8
  _QWORD *v48; // x9
  __int64 size; // x10
  Il2CppClass **v50; // x0
  System_Collections_Generic_List_Enumerator_object__o v51; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v52; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_49FE0EA & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___, *(_QWORD *)&svtId);
    sub_1B64A00(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___, v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__, v8);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__, v9);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__, v10);
    sub_1B64A00(&Method_System_Collections_Generic_List_StandFigureCollect__Add__, v11);
    sub_1B64A00(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__, v12);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v13);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_1B64A00(&StandFigureCollect_TypeInfo, v15);
    byte_49FE0EA = 1;
  }
  memset(&v52, 0, sizeof(v52));
  baseStandFigure = (UnityEngine_Object_o *)this->fields.baseStandFigure;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v17 = UnityEngine_Object__op_Inequality(baseStandFigure, 0LL, 0LL);
  v18 = 40LL;
  if ( v17 )
    v18 = 48LL;
  v19 = *(UnityEngine_GameObject_o **)((char *)&this->klass + v18);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
  if ( !Instance )
    goto LABEL_29;
  EntityListOrderBy = SvtMultiPortraitMaster__GetEntityListOrderBy(
                        (SvtMultiPortraitMaster_o *)Instance,
                        svtId,
                        limitCount,
                        0,
                        0LL);
  if ( !EntityListOrderBy
    || (v23 = (System_Collections_Generic_List_object__o *)EntityListOrderBy,
        !System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)EntityListOrderBy,
           (const MethodInfo_2E49388 *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___)) )
  {
    standFigureCollectList = (System_Collections_Generic_List_object__o *)this->fields.standFigureCollectList;
    RenderPrefab = StandFigureManager__CreateRenderPrefab(v19, 0LL);
    v43 = (StandFigureCollect_o *)sub_1B64C4C(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v43, 0LL, RenderPrefab, v44);
    if ( standFigureCollectList )
    {
      items = standFigureCollectList->fields._items;
      v48 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
      ++standFigureCollectList->fields._version;
      if ( items )
      {
        size = standFigureCollectList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            standFigureCollectList,
            (Il2CppObject *)v43,
            *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
        }
        else
        {
          v50 = &items->obj.klass + size;
          standFigureCollectList->fields._size = size + 1;
          v50[4] = (Il2CppClass *)v43;
          sub_1B649A4((ServantStatusBattleListViewItem_o *)(v50 + 4), (int32_t)v43, v45, v46);
        }
        goto LABEL_28;
      }
    }
LABEL_29:
    sub_1B64C5C(Instance, v21);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v51,
    v23,
    (const MethodInfo_34B0B60 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
  v52 = v51;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v52,
            (const MethodInfo_322C9A4 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__) )
  {
    current = v52.fields._current;
    v25 = StandFigureManager__CreateRenderPrefab(v19, 0LL);
    v29 = v25;
    if ( !v25 )
      sub_1B64C5C(0LL, v26);
    v25->fields.svtMultiPortraitEntity = (struct SvtMultiPortraitEntity_o *)current;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&v25->fields.svtMultiPortraitEntity, (int32_t)current, v27, v28);
    v30 = (System_Collections_Generic_List_object__o *)this->fields.standFigureCollectList;
    v31 = (StandFigureCollect_o *)sub_1B64C4C(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v31, (SvtMultiPortraitEntity_o *)current, v29, v32);
    if ( !v30 )
      sub_1B64C5C(v33, v34);
    v37 = v30->fields._items;
    v38 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
    ++v30->fields._version;
    if ( !v37 )
      sub_1B64C5C(v33, v34);
    v39 = v30->fields._size;
    if ( (unsigned int)v39 >= v37->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v30,
        (Il2CppObject *)v31,
        *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
    }
    else
    {
      v40 = &v37->obj.klass + v39;
      v30->fields._size = v39 + 1;
      v40[4] = (Il2CppClass *)v31;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)(v40 + 4), (int32_t)v31, v35, v36);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v52,
    (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
LABEL_28:
  this->fields.isFirstLoading = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StandFigureBack__CreatedStandFigure(
        StandFigureBack_o *this,
        int32_t svtId,
        int32_t imageLimitCount,
        int32_t offsetKind,
        int32_t faceType,
        System_Action_o *callback,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v15; // x1
  __int64 v16; // x1
  const MethodInfo *v17; // x3
  __int64 v18; // x1
  void *standFigureCollectList; // x0
  UIStandFigureR_o *v20; // x24
  System_Action_o *v21; // x25

  if ( (byte_49FE0EE & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, *(_QWORD *)&svtId);
    sub_1B64A00(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v15);
    sub_1B64A00(&Method_StandFigureBack_EndLoad__, v16);
    byte_49FE0EE = 1;
  }
  StandFigureBack__InitStandFigure(this, callback, *(const MethodInfo **)&imageLimitCount);
  StandFigureBack__CreatePrefab(this, svtId, imageLimitCount, v17);
  standFigureCollectList = this->fields.standFigureCollectList;
  if ( !standFigureCollectList
    || (standFigureCollectList = System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)standFigureCollectList,
                                   index,
                                   (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__)) == 0LL
    || (v20 = (UIStandFigureR_o *)*((_QWORD *)standFigureCollectList + 3),
        v21 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo),
        System_Action___ctor(v21, (Il2CppObject *)this, Method_StandFigureBack_EndLoad__, 0LL),
        !v20) )
  {
    sub_1B64C5C(standFigureCollectList, v18);
  }
  UIStandFigureR__SetCharacter_40646980(v20, svtId, imageLimitCount, offsetKind, faceType, v21, 0LL);
}


void __fastcall StandFigureBack__DestroyFigure(StandFigureBack_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *standFigureCollectList; // x0
  _BOOL8 v11; // x0
  __int64 v12; // x1
  Il2CppObject *current; // x20
  UIStandFigureR_o *monitor; // x0
  __int64 v15; // x1
  UnityEngine_Component_o *v16; // x0
  UnityEngine_Object_o *gameObject; // x20
  struct System_Collections_Generic_List_StandFigureCollect__o *v18; // x8
  int32_t size; // w2
  int v20; // w9
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_49FE0E8 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Linq_Enumerable_Any_StandFigureCollect___, method);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__, v3);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__, v4);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__, v5);
    sub_1B64A00(&Method_System_Collections_Generic_List_StandFigureCollect__Clear__, v6);
    sub_1B64A00(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__, v7);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v8);
    byte_49FE0E8 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.standFigureCollectList,
         (const MethodInfo_2E49388 *)Method_System_Linq_Enumerable_Any_StandFigureCollect___) )
  {
    standFigureCollectList = (System_Collections_Generic_List_object__o *)this->fields.standFigureCollectList;
    if ( !standFigureCollectList )
      goto LABEL_20;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v21,
      standFigureCollectList,
      (const MethodInfo_34B0B60 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    v22 = v21;
    while ( 1 )
    {
      v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v22,
              (const MethodInfo_322C9A4 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
      if ( !v11 )
        break;
      current = v22.fields._current;
      if ( !v22.fields._current )
        sub_1B64C5C(v11, v12);
      monitor = (UIStandFigureR_o *)v22.fields._current[1].monitor;
      if ( !monitor )
        sub_1B64C5C(0LL, v12);
      UIStandFigureR__Destroy(monitor, 0LL);
      v16 = (UnityEngine_Component_o *)current[1].monitor;
      if ( !v16 )
        sub_1B64C5C(0LL, v15);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v16, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_69137664(gameObject, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v22,
      (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    v18 = this->fields.standFigureCollectList;
    if ( !v18 )
LABEL_20:
      sub_1B64C5C(standFigureCollectList, v9);
    size = v18->fields._size;
    v20 = v18->fields._version + 1;
    v18->fields._size = 0;
    v18->fields._version = v20;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v18->fields._items, 0, size, 0LL);
  }
}


void __fastcall StandFigureBack__EndClose(StandFigureBack_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  ServantStatusBattleListViewItem_o *p_baseCallbackFunc; // x19
  struct System_Action_o *v8; // x20
  struct System_Action_o *baseCallbackFunc; // t1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B64C5C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  baseCallbackFunc = this->fields.baseCallbackFunc;
  p_baseCallbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.baseCallbackFunc;
  v8 = baseCallbackFunc;
  if ( baseCallbackFunc )
  {
    p_baseCallbackFunc->klass = 0LL;
    sub_1B649A4(p_baseCallbackFunc, 0, v5, v6);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v8->fields.m_target)(
      v8->fields.original_method_info,
      *(_QWORD *)&v8->fields.extra_arg);
  }
}


void __fastcall StandFigureBack__EndFadein(StandFigureBack_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_baseCallbackFunc; // x0
  struct System_Action_o *v5; // x19
  struct System_Action_o *baseCallbackFunc; // t1

  baseCallbackFunc = this->fields.baseCallbackFunc;
  p_baseCallbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.baseCallbackFunc;
  v5 = baseCallbackFunc;
  if ( baseCallbackFunc )
  {
    p_baseCallbackFunc->klass = 0LL;
    sub_1B649A4(p_baseCallbackFunc, 0, v2, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      *(_QWORD *)&v5->fields.extra_arg);
  }
}


void __fastcall StandFigureBack__EndFadeout(StandFigureBack_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_baseCallbackFunc; // x0
  struct System_Action_o *v5; // x19
  struct System_Action_o *baseCallbackFunc; // t1

  baseCallbackFunc = this->fields.baseCallbackFunc;
  p_baseCallbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.baseCallbackFunc;
  v5 = baseCallbackFunc;
  if ( baseCallbackFunc )
  {
    p_baseCallbackFunc->klass = 0LL;
    sub_1B649A4(p_baseCallbackFunc, 0, v2, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      *(_QWORD *)&v5->fields.extra_arg);
  }
}


void __fastcall StandFigureBack__EndLoad(StandFigureBack_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( this->fields.isFirstLoading )
    this->fields.isFirstLoading = 0;
  if ( this->fields.isDispRequest )
    StandFigureBack__Fadein(this, this->fields.baseCallbackFunc, v2);
}


void __fastcall StandFigureBack__Fadein(StandFigureBack_o *this, System_Action_o *callback, const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  __int64 v7; // x1
  const MethodInfo *v8; // x1
  _BOOL4 isFirstLoading; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v11; // x1
  UnityEngine_Object_o *baseWindow; // x20
  UnityEngine_Object_o *closeTransform; // x20
  UnityEngine_GameObject_o *v14; // x20
  StandFigureBack_c *v15; // x0
  TweenPosition_o *v16; // x20
  UnityEngine_GameObject_o *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w1
  int32_t v21; // w2
  int32_t v22; // w3

  if ( (byte_49FE0F2 & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_Object_TypeInfo, callback);
    sub_1B64A00(&StandFigureBack_TypeInfo, v6);
    sub_1B64A00(&StringLiteral_5943/*"EndFadein"*/, v7);
    byte_49FE0F2 = 1;
  }
  this->fields.baseCallbackFunc = callback;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)&this->fields.baseCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3);
  isFirstLoading = this->fields.isFirstLoading;
  this->fields.isDispRequest = 1;
  if ( !isFirstLoading )
  {
    if ( !this->fields.isDisp )
    {
      this->fields.isDisp = 1;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !gameObject )
        goto LABEL_23;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      baseWindow = (UnityEngine_Object_o *)this->fields.baseWindow;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(baseWindow, 0LL, 0LL) )
      {
        closeTransform = (UnityEngine_Object_o *)this->fields.closeTransform;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(closeTransform, 0LL, 0LL) )
        {
          v14 = this->fields.baseWindow;
          v15 = StandFigureBack_TypeInfo;
          if ( !StandFigureBack_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(StandFigureBack_TypeInfo);
            v15 = StandFigureBack_TypeInfo;
          }
          v16 = TweenPosition__Begin(v14, v15->static_fields->OPEN_TIME, this->fields.basePosition, 0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                     (UnityEngine_Object_o *)v16,
                                                     0LL,
                                                     0LL);
          if ( ((unsigned __int8)gameObject & 1) != 0 )
          {
            if ( v16 )
            {
              v16->fields.method = 3;
              v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
              v16->fields.eventReceiver = v17;
              sub_1B649A4((ServantStatusBattleListViewItem_o *)&v16->fields.eventReceiver, (int32_t)v17, v18, v19);
              v20 = StringLiteral_5943/*"EndFadein"*/;
              v16->fields.callWhenFinished = (struct System_String_o *)StringLiteral_5943/*"EndFadein"*/;
              sub_1B649A4((ServantStatusBattleListViewItem_o *)&v16->fields.callWhenFinished, v20, v21, v22);
              return;
            }
LABEL_23:
            sub_1B64C5C(gameObject, v11);
          }
          gameObject = this->fields.baseWindow;
          if ( !gameObject )
            goto LABEL_23;
          gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_23;
          UnityEngine_Transform__set_localPosition(
            (UnityEngine_Transform_o *)gameObject,
            this->fields.basePosition,
            0LL);
        }
      }
    }
    StandFigureBack__EndFadein(this, v8);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StandFigureBack__Fadeout(StandFigureBack_o *this, System_Action_o *callback, const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  __int64 v7; // x1
  const MethodInfo *v8; // x1
  _BOOL4 isDisp; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *baseWindow; // x20
  UnityEngine_Object_o *closeTransform; // x20
  UnityEngine_Transform_o *v13; // x20
  int v14; // s0
  UnityEngine_GameObject_o *v17; // x20
  float x; // s8
  float y; // s9
  StandFigureBack_c *v20; // x0
  float z; // s10
  TweenPosition_o *v22; // x20
  UnityEngine_GameObject_o *v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  int32_t v26; // w1
  int32_t v27; // w2
  int32_t v28; // w3
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_49FE0F3 & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_Object_TypeInfo, callback);
    sub_1B64A00(&StandFigureBack_TypeInfo, v6);
    sub_1B64A00(&StringLiteral_5944/*"EndFadeout"*/, v7);
    byte_49FE0F3 = 1;
  }
  this->fields.baseCallbackFunc = callback;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)&this->fields.baseCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3);
  isDisp = this->fields.isDisp;
  this->fields.isDispRequest = 0;
  if ( isDisp )
  {
    this->fields.isDisp = 0;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_26;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    baseWindow = (UnityEngine_Object_o *)this->fields.baseWindow;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(baseWindow, 0LL, 0LL) )
    {
      closeTransform = (UnityEngine_Object_o *)this->fields.closeTransform;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(closeTransform, 0LL, 0LL) )
      {
        gameObject = this->fields.baseWindow;
        if ( !gameObject )
          goto LABEL_26;
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_26;
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent(
                                                   (UnityEngine_Transform_o *)gameObject,
                                                   0LL);
        if ( !this->fields.closeTransform )
          goto LABEL_26;
        v13 = (UnityEngine_Transform_o *)gameObject;
        *(UnityEngine_Vector3_o *)&v14 = UnityEngine_Transform__get_position(this->fields.closeTransform, 0LL);
        if ( !v13 )
          goto LABEL_26;
        v29 = UnityEngine_Transform__InverseTransformPoint(v13, *(UnityEngine_Vector3_o *)&v14, 0LL);
        v17 = this->fields.baseWindow;
        x = v29.fields.x;
        y = v29.fields.y;
        v20 = StandFigureBack_TypeInfo;
        z = v29.fields.z;
        if ( !StandFigureBack_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(StandFigureBack_TypeInfo);
          v20 = StandFigureBack_TypeInfo;
        }
        v30.fields.x = x;
        v30.fields.y = y;
        v30.fields.z = z;
        v22 = TweenPosition__Begin(v17, v20->static_fields->OPEN_TIME, v30, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                   (UnityEngine_Object_o *)v22,
                                                   0LL,
                                                   0LL);
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          if ( v22 )
          {
            v22->fields.method = 3;
            v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            v22->fields.eventReceiver = v23;
            sub_1B649A4((ServantStatusBattleListViewItem_o *)&v22->fields.eventReceiver, (int32_t)v23, v24, v25);
            v26 = StringLiteral_5944/*"EndFadeout"*/;
            v22->fields.callWhenFinished = (struct System_String_o *)StringLiteral_5944/*"EndFadeout"*/;
            sub_1B649A4((ServantStatusBattleListViewItem_o *)&v22->fields.callWhenFinished, v26, v27, v28);
            return;
          }
LABEL_26:
          sub_1B64C5C(gameObject, v8);
        }
        gameObject = this->fields.baseWindow;
        if ( !gameObject )
          goto LABEL_26;
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_26;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, this->fields.basePosition, 0LL);
      }
    }
  }
  StandFigureBack__EndClose(this, v8);
}


// local variable allocation has failed, the output may be wrong!
UIStandFigureR_o *__fastcall StandFigureBack__GetSvtStandFigure(
        StandFigureBack_o *this,
        int32_t index,
        const MethodInfo *method)
{
  void *standFigureCollectList; // x0

  if ( (byte_49FE0E5 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, *(_QWORD *)&index);
    byte_49FE0E5 = 1;
  }
  standFigureCollectList = this->fields.standFigureCollectList;
  if ( !standFigureCollectList
    || (standFigureCollectList = System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)standFigureCollectList,
                                   index,
                                   (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__)) == 0LL )
  {
    sub_1B64C5C(standFigureCollectList, *(_QWORD *)&index);
  }
  return (UIStandFigureR_o *)*((_QWORD *)standFigureCollectList + 3);
}


System_Collections_Generic_List_StandFigureCollect__o *__fastcall StandFigureBack__GetSvtStandFigureCollect(
        StandFigureBack_o *this,
        const MethodInfo *method)
{
  return this->fields.standFigureCollectList;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StandFigureBack__Init(StandFigureBack_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *baseWindow; // x20
  const MethodInfo *v4; // x1
  UnityEngine_GameObject_o *transform; // x0
  UnityEngine_Object_o *v6; // x20
  UnityEngine_Object_o *closeTransform; // x20
  UnityEngine_Transform_o *v8; // x8
  UnityEngine_Transform_o *v9; // x19
  int v10; // s0

  if ( (byte_49FE0E7 & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_Object_TypeInfo, method);
    byte_49FE0E7 = 1;
  }
  baseWindow = (UnityEngine_Object_o *)this->fields.baseWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(baseWindow, 0LL, 0LL) && !this->fields.isBasePosition )
  {
    transform = this->fields.baseWindow;
    this->fields.isBasePosition = 1;
    if ( !transform )
      goto LABEL_22;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    if ( !transform )
      goto LABEL_22;
    this->fields.basePosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
  }
  StandFigureBack__DestroyFigure(this, v4);
  transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(transform, 0, 0LL);
  *(_WORD *)&this->fields.isFirstLoading = 0;
  this->fields.isDisp = 0;
  v6 = (UnityEngine_Object_o *)this->fields.baseWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v6, 0LL, 0LL) )
  {
    closeTransform = (UnityEngine_Object_o *)this->fields.closeTransform;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(closeTransform, 0LL, 0LL) )
    {
      transform = this->fields.baseWindow;
      if ( transform )
      {
        transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
        v8 = this->fields.closeTransform;
        if ( v8 )
        {
          v9 = (UnityEngine_Transform_o *)transform;
          *(UnityEngine_Vector3_o *)&v10 = UnityEngine_Transform__get_position(v8, 0LL);
          if ( v9 )
          {
            UnityEngine_Transform__set_position(v9, *(UnityEngine_Vector3_o *)&v10, 0LL);
            return;
          }
        }
      }
LABEL_22:
      sub_1B64C5C(transform, v4);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StandFigureBack__InitStandFigure(
        StandFigureBack_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  UnityEngine_Object_o *baseWindow; // x20
  UnityEngine_Object_o *closeTransform; // x20
  UnityEngine_Transform_o *v12; // x8
  UnityEngine_Transform_o *v13; // x19
  int v14; // s0

  if ( (byte_49FE0E9 & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_Object_TypeInfo, callback);
    byte_49FE0E9 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  StandFigureBack__DestroyFigure(this, v7);
  this->fields.baseCallbackFunc = callback;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.baseCallbackFunc, (int32_t)callback, v8, v9);
  this->fields.isDispRequest = 1;
  baseWindow = (UnityEngine_Object_o *)this->fields.baseWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(baseWindow, 0LL, 0LL) && !this->fields.isBasePosition )
  {
    gameObject = this->fields.baseWindow;
    this->fields.isBasePosition = 1;
    if ( !gameObject )
      goto LABEL_18;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_18;
    this->fields.basePosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0LL);
    closeTransform = (UnityEngine_Object_o *)this->fields.closeTransform;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(closeTransform, 0LL, 0LL) )
    {
      gameObject = this->fields.baseWindow;
      if ( gameObject )
      {
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
        v12 = this->fields.closeTransform;
        if ( v12 )
        {
          v13 = (UnityEngine_Transform_o *)gameObject;
          *(UnityEngine_Vector3_o *)&v14 = UnityEngine_Transform__get_position(v12, 0LL);
          if ( v13 )
          {
            UnityEngine_Transform__set_position(v13, *(UnityEngine_Vector3_o *)&v14, 0LL);
            return;
          }
        }
      }
LABEL_18:
      sub_1B64C5C(gameObject, v6);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
UIStandFigureR_o *__fastcall StandFigureBack__RobSvtStandFigure(
        StandFigureBack_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *standFigureCollectList; // x0
  System_Collections_Generic_List_object__o *v7; // x8
  System_Collections_Generic_List_object__o *v8; // x19

  if ( (byte_49FE0E6 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_List_StandFigureCollect__Remove__, *(_QWORD *)&index);
    sub_1B64A00(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v5);
    byte_49FE0E6 = 1;
  }
  standFigureCollectList = (System_Collections_Generic_List_object__o *)this->fields.standFigureCollectList;
  if ( !standFigureCollectList
    || (standFigureCollectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                standFigureCollectList,
                                                                                index,
                                                                                (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__),
        (v7 = (System_Collections_Generic_List_object__o *)this->fields.standFigureCollectList) == 0LL)
    || (v8 = standFigureCollectList,
        standFigureCollectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___Remove(
                                                                                v7,
                                                                                (Il2CppObject *)standFigureCollectList,
                                                                                (const MethodInfo_34B1590 *)Method_System_Collections_Generic_List_StandFigureCollect__Remove__),
        !v8) )
  {
    sub_1B64C5C(standFigureCollectList, *(_QWORD *)&index);
  }
  return *(UIStandFigureR_o **)&v8->fields._size;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StandFigureBack__SetEventRewardStandFigure(
        StandFigureBack_o *this,
        int32_t svtId,
        int32_t imageLimitCount,
        int32_t offsetKind,
        int32_t faceType,
        int32_t depth,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  const MethodInfo *v23; // x3
  Il2CppObject *Item; // x0
  __int64 v25; // x1
  UIStandFigureR_o *monitor; // x22
  System_Action_o *v27; // x25
  _BOOL8 v28; // x0
  __int64 v29; // x1
  Il2CppObject *current; // x24
  Il2CppClass *klass; // x8
  UIStandFigureR_o *v32; // x0
  _BOOL8 v33; // x0
  __int64 v34; // x1
  Il2CppClass *v35; // x8
  UIStandFigureR_o *v36; // x0
  System_Action_o *v37; // x20
  const MethodInfo *v38; // x2
  System_Collections_IEnumerator_o *AllAssetBundle; // x0
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_49FE0EF & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, *(_QWORD *)&svtId);
    sub_1B64A00(&Method_System_Linq_Enumerable_Any_StandFigureCollect___, v15);
    sub_1B64A00(&Method_System_Linq_Enumerable_Count_StandFigureCollect___, v16);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__, v17);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__, v18);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__, v19);
    sub_1B64A00(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__, v20);
    sub_1B64A00(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v21);
    sub_1B64A00(&Method_StandFigureBack_EndLoad__, v22);
    byte_49FE0EF = 1;
  }
  memset(&v41, 0, sizeof(v41));
  StandFigureBack__InitStandFigure(this, callback, *(const MethodInfo **)&imageLimitCount);
  StandFigureBack__CreatePrefab(this, svtId, imageLimitCount, v23);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.standFigureCollectList,
         (const MethodInfo_2E49388 *)Method_System_Linq_Enumerable_Any_StandFigureCollect___) )
  {
    Item = (Il2CppObject *)System_Linq_Enumerable__Count_object_(
                             (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.standFigureCollectList,
                             (const MethodInfo_2E585A8 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
    if ( !this->fields.standFigureCollectList )
      goto LABEL_24;
    if ( (int)Item < 2 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)this->fields.standFigureCollectList,
               0,
               (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
      if ( Item )
      {
        monitor = (UIStandFigureR_o *)Item[1].monitor;
        v27 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
        System_Action___ctor(v27, (Il2CppObject *)this, Method_StandFigureBack_EndLoad__, 0LL);
        if ( monitor )
        {
          UIStandFigureR__SetCharacter_40646980(monitor, svtId, imageLimitCount, offsetKind, faceType, v27, 0LL);
          return;
        }
      }
LABEL_24:
      sub_1B64C5C(Item, v25);
    }
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v40,
      (System_Collections_Generic_List_object__o *)this->fields.standFigureCollectList,
      (const MethodInfo_34B0B60 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    v41 = v40;
    while ( 1 )
    {
      v28 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v41,
              (const MethodInfo_322C9A4 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
      if ( !v28 )
        break;
      current = v41.fields._current;
      if ( !v41.fields._current )
        sub_1B64C5C(v28, v29);
      klass = v41.fields._current[1].klass;
      if ( !klass )
        sub_1B64C5C(v28, v29);
      v32 = (UIStandFigureR_o *)v41.fields._current[1].monitor;
      if ( !v32 )
        sub_1B64C5C(0LL, v29);
      v33 = UIStandFigureR__SetCharacterForImageId(
              v32,
              (int32_t)klass->_1.byval_arg.data,
              offsetKind,
              faceType,
              0,
              0LL,
              0,
              0LL);
      v35 = current[1].klass;
      if ( !v35 )
        sub_1B64C5C(v33, v34);
      v36 = (UIStandFigureR_o *)current[1].monitor;
      if ( !v36 )
        sub_1B64C5C(0LL, v34);
      UIStandFigureR__SetDepth(
        v36,
        (HIDWORD(v35->_1.byval_arg.data) & ~(SHIDWORD(v35->_1.byval_arg.data) >> 31)) + depth,
        0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v41,
      (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    v37 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
    System_Action___ctor(v37, (Il2CppObject *)this, Method_StandFigureBack_EndLoad__, 0LL);
    AllAssetBundle = StandFigureBack__WaitForLoadAllAssetBundle(this, v37, v38);
    UnityEngine_MonoBehaviour__StartCoroutine_69122748((UnityEngine_MonoBehaviour_o *)this, AllAssetBundle, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StandFigureBack__SetFaceType(
        StandFigureBack_o *this,
        int32_t faceType,
        float fadeTime,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *standFigureCollectList; // x0

  if ( (byte_49FE0EB & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Linq_Enumerable_Any_StandFigureCollect___, *(_QWORD *)&faceType);
    sub_1B64A00(&Method_System_Collections_Generic_List_StandFigureCollect__get_Count__, v9);
    sub_1B64A00(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v10);
    byte_49FE0EB = 1;
  }
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.standFigureCollectList,
         (const MethodInfo_2E49388 *)Method_System_Linq_Enumerable_Any_StandFigureCollect___) )
  {
    standFigureCollectList = (System_Collections_Generic_List_object__o *)this->fields.standFigureCollectList;
    if ( standFigureCollectList )
    {
      if ( standFigureCollectList->fields._size < index )
        return;
      standFigureCollectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                              standFigureCollectList,
                                                                              index,
                                                                              (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
      if ( standFigureCollectList )
      {
        standFigureCollectList = *(System_Collections_Generic_List_object__o **)&standFigureCollectList->fields._size;
        if ( standFigureCollectList )
        {
          UIStandFigureR__SetFace((UIStandFigureR_o *)standFigureCollectList, faceType, fadeTime, 0LL);
          return;
        }
      }
    }
    sub_1B64C5C(standFigureCollectList, v11);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StandFigureBack__SetFaceTypeAll(
        StandFigureBack_o *this,
        int32_t faceType,
        float fadeTime,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *standFigureCollectList; // x0
  _BOOL8 v11; // x0
  __int64 v12; // x1
  UIStandFigureR_o *monitor; // x0
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_49FE0EC & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__, *(_QWORD *)&faceType);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__, v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__, v8);
    sub_1B64A00(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__, v9);
    byte_49FE0EC = 1;
  }
  memset(&v14, 0, sizeof(v14));
  standFigureCollectList = (System_Collections_Generic_List_object__o *)this->fields.standFigureCollectList;
  if ( !standFigureCollectList )
    sub_1B64C5C(0LL, *(_QWORD *)&faceType);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    standFigureCollectList,
    (const MethodInfo_34B0B60 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v14,
            (const MethodInfo_322C9A4 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v11 )
      break;
    if ( !v14.fields._current )
      sub_1B64C5C(v11, v12);
    monitor = (UIStandFigureR_o *)v14.fields._current[1].monitor;
    if ( !monitor )
      sub_1B64C5C(0LL, v12);
    UIStandFigureR__SetFace(monitor, faceType, fadeTime, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v14,
    (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StandFigureBack__SetFaceTypeAndForm(
        StandFigureBack_o *this,
        int32_t faceType,
        int32_t formId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *standFigureCollectList; // x0
  _BOOL8 v11; // x0
  __int64 v12; // x1
  UIStandFigureR_o *monitor; // x0
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_49FE0ED & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__, *(_QWORD *)&faceType);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__, v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__, v8);
    sub_1B64A00(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__, v9);
    byte_49FE0ED = 1;
  }
  memset(&v14, 0, sizeof(v14));
  standFigureCollectList = (System_Collections_Generic_List_object__o *)this->fields.standFigureCollectList;
  if ( !standFigureCollectList )
    sub_1B64C5C(0LL, *(_QWORD *)&faceType);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    standFigureCollectList,
    (const MethodInfo_34B0B60 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v14,
            (const MethodInfo_322C9A4 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v11 )
      break;
    if ( !v14.fields._current )
      sub_1B64C5C(v11, v12);
    monitor = (UIStandFigureR_o *)v14.fields._current[1].monitor;
    if ( !monitor )
      sub_1B64C5C(0LL, v12);
    UIStandFigureR__SetFace_40651944(monitor, faceType, formId, 0LL, 0.0, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v14,
    (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StandFigureBack__SetMyRoomStandFigure(
        StandFigureBack_o *this,
        int32_t svtId,
        int32_t imageLimitCount,
        int32_t offsetKind,
        int32_t faceType,
        int32_t formId,
        int32_t depth,
        System_Action_o *callback,
        bool isPhotoWithMaster,
        const MethodInfo *method)
{
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x0
  int v27; // w28
  const MethodInfo *v28; // x3
  System_Action_o *baseCallbackFunc; // x20
  UIStandFigureR_o *Item; // x0
  __int64 v31; // x1
  _BOOL8 v32; // x0
  __int64 v33; // x1
  Il2CppObject *current; // x27
  Il2CppClass *klass; // x8
  UIStandFigureR_o *monitor; // x0
  _BOOL8 v37; // x0
  __int64 v38; // x1
  Il2CppClass *v39; // x8
  UIStandFigureR_o *v40; // x0
  const MethodInfo *v41; // x2
  System_Collections_IEnumerator_o *AllAssetBundle; // x0
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v44; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_49FE0F0 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, *(_QWORD *)&svtId);
    sub_1B64A00(&Method_System_Linq_Enumerable_Any_StandFigureCollect___, v18);
    sub_1B64A00(&Method_System_Linq_Enumerable_Count_StandFigureCollect___, v19);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__, v20);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__, v21);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__, v22);
    sub_1B64A00(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__, v23);
    sub_1B64A00(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v24);
    sub_1B64A00(&Method_StandFigureBack_EndLoad__, v25);
    byte_49FE0F0 = 1;
  }
  memset(&v44, 0, sizeof(v44));
  standFigureCollectList = this->fields.standFigureCollectList;
  if ( standFigureCollectList )
    v27 = !System_Linq_Enumerable__Any_object_(
             (System_Collections_Generic_IEnumerable_TSource__o *)standFigureCollectList,
             (const MethodInfo_2E49388 *)Method_System_Linq_Enumerable_Any_StandFigureCollect___);
  else
    v27 = 1;
  StandFigureBack__InitStandFigure(this, callback, *(const MethodInfo **)&imageLimitCount);
  StandFigureBack__CreatePrefab(this, svtId, imageLimitCount, v28);
  if ( v27 )
  {
    baseCallbackFunc = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
    System_Action___ctor(baseCallbackFunc, (Il2CppObject *)this, Method_StandFigureBack_EndLoad__, 0LL);
  }
  else
  {
    baseCallbackFunc = this->fields.baseCallbackFunc;
  }
  this->fields.isFirstLoading = v27;
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.standFigureCollectList,
         (const MethodInfo_2E49388 *)Method_System_Linq_Enumerable_Any_StandFigureCollect___) )
  {
    Item = (UIStandFigureR_o *)System_Linq_Enumerable__Count_object_(
                                 (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.standFigureCollectList,
                                 (const MethodInfo_2E585A8 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
    if ( !this->fields.standFigureCollectList )
      goto LABEL_30;
    if ( (int)Item < 2 )
    {
      Item = (UIStandFigureR_o *)System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)this->fields.standFigureCollectList,
                                   0,
                                   (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
      if ( Item )
      {
        Item = (UIStandFigureR_o *)Item->fields.m_CancellationTokenSource;
        if ( Item )
        {
          UIStandFigureR__SetCharacter_40646976(
            Item,
            svtId,
            imageLimitCount,
            offsetKind,
            faceType,
            formId,
            baseCallbackFunc,
            0LL);
          return;
        }
      }
LABEL_30:
      sub_1B64C5C(Item, v31);
    }
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v43,
      (System_Collections_Generic_List_object__o *)this->fields.standFigureCollectList,
      (const MethodInfo_34B0B60 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    v44 = v43;
    while ( 1 )
    {
      v32 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v44,
              (const MethodInfo_322C9A4 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
      if ( !v32 )
        break;
      current = v44.fields._current;
      if ( !v44.fields._current )
        sub_1B64C5C(v32, v33);
      klass = v44.fields._current[1].klass;
      if ( !klass )
        sub_1B64C5C(v32, v33);
      monitor = (UIStandFigureR_o *)v44.fields._current[1].monitor;
      if ( !monitor )
        sub_1B64C5C(0LL, v33);
      v37 = UIStandFigureR__SetCharacterForImageId(
              monitor,
              (int32_t)klass->_1.byval_arg.data,
              offsetKind,
              faceType,
              formId,
              0LL,
              isPhotoWithMaster,
              0LL);
      v39 = current[1].klass;
      if ( !v39 )
        sub_1B64C5C(v37, v38);
      v40 = (UIStandFigureR_o *)current[1].monitor;
      if ( !v40 )
        sub_1B64C5C(0LL, v38);
      UIStandFigureR__SetDepth(
        v40,
        (HIDWORD(v39->_1.byval_arg.data) & ~(SHIDWORD(v39->_1.byval_arg.data) >> 31)) + depth,
        0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v44,
      (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    AllAssetBundle = StandFigureBack__WaitForLoadAllAssetBundle(this, baseCallbackFunc, v41);
    UnityEngine_MonoBehaviour__StartCoroutine_69122748((UnityEngine_MonoBehaviour_o *)this, AllAssetBundle, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall StandFigureBack__WaitForLoadAllAssetBundle(
        StandFigureBack_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_49FE0F1 & 1) == 0 )
  {
    sub_1B64A00(&StandFigureBack__WaitForLoadAllAssetBundle_d__31_TypeInfo, action);
    byte_49FE0F1 = 1;
  }
  v5 = sub_1B64C4C(StandFigureBack__WaitForLoadAllAssetBundle_d__31_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 40) = action;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)action, v8, v9);
  return (System_Collections_IEnumerator_o *)v5;
}


bool __fastcall StandFigureBack__get_IsBusy(StandFigureBack_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B64C5C(0LL, v3);
  return UnityEngine_GameObject__get_activeSelf(gameObject, 0LL);
}


bool __fastcall StandFigureBack__get_IsDisp(StandFigureBack_o *this, const MethodInfo *method)
{
  return this->fields.isDispRequest;
}


void __fastcall StandFigureBack__WaitForLoadAllAssetBundle_d__31___ctor(
        StandFigureBack__WaitForLoadAllAssetBundle_d__31_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall StandFigureBack__WaitForLoadAllAssetBundle_d__31__MoveNext(
        StandFigureBack__WaitForLoadAllAssetBundle_d__31_o *this,
        const MethodInfo *method)
{
  StandFigureBack__WaitForLoadAllAssetBundle_d__31_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  int32_t _1__state; // w8
  struct StandFigureBack_o *_4__this; // x23
  _BOOL8 v13; // x0
  __int64 v14; // x1
  void *monitor; // x8
  UnityEngine_Behaviour_o *v16; // x0
  System_Collections_Generic_IEnumerable_TSource__o *standFigureCollectList; // x20
  StandFigureBack___c_c *v18; // x0
  System_Func_object__bool__o *_9__31_0; // x21
  Il2CppObject *v20; // x22
  struct StandFigureBack___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  int32_t v24; // w2
  int32_t v25; // w3
  int32_t v26; // w2
  int32_t v27; // w3
  _BOOL8 v28; // x0
  __int64 v29; // x1
  void *v30; // x8
  UnityEngine_Behaviour_o *v31; // x0
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  bool result; // w0
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+20h] [xbp-60h] BYREF

  v2 = this;
  if ( (byte_49FE0F8 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Linq_Enumerable_Count_StandFigureCollect___, method);
    sub_1B64A00(&Method_System_Linq_Enumerable_Where_StandFigureCollect___, v3);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__, v4);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__, v5);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__, v6);
    sub_1B64A00(&System_Func_StandFigureCollect__bool__TypeInfo, v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__, v8);
    sub_1B64A00(&Method_StandFigureBack___c__WaitForLoadAllAssetBundle_b__31_0__, v9);
    this = (StandFigureBack__WaitForLoadAllAssetBundle_d__31_o *)sub_1B64A00(&StandFigureBack___c_TypeInfo, v10);
    byte_49FE0F8 = 1;
  }
  memset(&v35, 0, sizeof(v35));
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    goto LABEL_22;
  }
  if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_41;
    this = (StandFigureBack__WaitForLoadAllAssetBundle_d__31_o *)_4__this->fields.standFigureCollectList;
    if ( !this )
      goto LABEL_41;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v34,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_34B0B60 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    v35 = v34;
    while ( 1 )
    {
      v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v35,
              (const MethodInfo_322C9A4 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
      if ( !v13 )
        break;
      if ( !v35.fields._current )
        sub_1B64C5C(v13, v14);
      monitor = v35.fields._current[1].monitor;
      if ( !monitor )
        sub_1B64C5C(v13, v14);
      v16 = (UnityEngine_Behaviour_o *)*((_QWORD *)monitor + 4);
      if ( !v16 )
        sub_1B64C5C(0LL, v14);
      UnityEngine_Behaviour__set_enabled(v16, 0, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v35,
      (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    standFigureCollectList = (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.standFigureCollectList;
    v18 = StandFigureBack___c_TypeInfo;
    if ( !StandFigureBack___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(StandFigureBack___c_TypeInfo);
      v18 = StandFigureBack___c_TypeInfo;
    }
    _9__31_0 = (System_Func_object__bool__o *)v18->static_fields->__9__31_0;
    if ( !_9__31_0 )
    {
      if ( !v18->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v18);
        v18 = StandFigureBack___c_TypeInfo;
      }
      v20 = (Il2CppObject *)v18->static_fields->__9;
      _9__31_0 = (System_Func_object__bool__o *)sub_1B64C4C(System_Func_StandFigureCollect__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__31_0,
        v20,
        Method_StandFigureBack___c__WaitForLoadAllAssetBundle_b__31_0__,
        0LL);
      static_fields = StandFigureBack___c_TypeInfo->static_fields;
      static_fields->__9__31_0 = (struct System_Func_StandFigureCollect__bool__o *)_9__31_0;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)&static_fields->__9__31_0, (int32_t)_9__31_0, v22, v23);
    }
    this = (StandFigureBack__WaitForLoadAllAssetBundle_d__31_o *)System_Linq_Enumerable__Where_object_(
                                                                   standFigureCollectList,
                                                                   (System_Func_TSource__bool__o *)_9__31_0,
                                                                   (const MethodInfo_2E79990 *)Method_System_Linq_Enumerable_Where_StandFigureCollect___);
    if ( !v2 )
      goto LABEL_41;
    v2->fields._assetRendered_5__2 = (struct System_Collections_Generic_IEnumerable_StandFigureCollect__o *)this;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&v2->fields._assetRendered_5__2, (int32_t)this, v24, v25);
LABEL_22:
    this = (StandFigureBack__WaitForLoadAllAssetBundle_d__31_o *)System_Linq_Enumerable__Count_object_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)v2->fields._assetRendered_5__2,
                                                                   (const MethodInfo_2E585A8 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
    if ( _4__this )
    {
      if ( (_DWORD)this != System_Linq_Enumerable__Count_object_(
                             (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.standFigureCollectList,
                             (const MethodInfo_2E585A8 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___) )
      {
        v2->fields.__2__current = 0LL;
        p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
        sub_1B649A4(p__2__current, 0, v26, v27);
        result = 1;
        *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
        return result;
      }
      this = (StandFigureBack__WaitForLoadAllAssetBundle_d__31_o *)_4__this->fields.standFigureCollectList;
      if ( this )
      {
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v34,
          (System_Collections_Generic_List_object__o *)this,
          (const MethodInfo_34B0B60 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
        v35 = v34;
        while ( 1 )
        {
          v28 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v35,
                  (const MethodInfo_322C9A4 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
          if ( !v28 )
            break;
          if ( !v35.fields._current )
            sub_1B64C5C(v28, v29);
          v30 = v35.fields._current[1].monitor;
          if ( !v30 )
            sub_1B64C5C(v28, v29);
          v31 = (UnityEngine_Behaviour_o *)*((_QWORD *)v30 + 4);
          if ( !v31 )
            sub_1B64C5C(0LL, v29);
          UnityEngine_Behaviour__set_enabled(v31, 1, 0LL);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v35,
          (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
        ActionExtensions__Call(v2->fields.action, 0LL);
        return 0;
      }
    }
LABEL_41:
    sub_1B64C5C(this, method);
  }
  return 0;
}


Il2CppObject *__fastcall StandFigureBack__WaitForLoadAllAssetBundle_d__31__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        StandFigureBack__WaitForLoadAllAssetBundle_d__31_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn StandFigureBack__WaitForLoadAllAssetBundle_d__31__System_Collections_IEnumerator_Reset(
        StandFigureBack__WaitForLoadAllAssetBundle_d__31_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B64A14(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B64C4C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B64A14(&Method_StandFigureBack__WaitForLoadAllAssetBundle_d__31_System_Collections_IEnumerator_Reset__);
  sub_1B64B28(v3, v4);
}


Il2CppObject *__fastcall StandFigureBack__WaitForLoadAllAssetBundle_d__31__System_Collections_IEnumerator_get_Current(
        StandFigureBack__WaitForLoadAllAssetBundle_d__31_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall StandFigureBack__WaitForLoadAllAssetBundle_d__31__System_IDisposable_Dispose(
        StandFigureBack__WaitForLoadAllAssetBundle_d__31_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall StandFigureBack___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_49FE0F6 & 1) == 0 )
  {
    sub_1B64A00(&StandFigureBack___c_TypeInfo, v1);
    byte_49FE0F6 = 1;
  }
  v2 = (Il2CppObject *)sub_1B64C4C(StandFigureBack___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  StandFigureBack___c_TypeInfo->static_fields->__9 = (struct StandFigureBack___c_o *)v2;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)StandFigureBack___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall StandFigureBack___c___ctor(StandFigureBack___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall StandFigureBack___c___WaitForLoadAllAssetBundle_b__31_0(
        StandFigureBack___c_o *this,
        StandFigureCollect_o *x,
        const MethodInfo *method)
{
  struct UIStandFigureR_o *standFigure_k__BackingField; // x8
  UnityEngine_Object_o *v5; // x19

  if ( (byte_49FE0F7 & 1) == 0 )
  {
    this = (StandFigureBack___c_o *)sub_1B64A00(&UnityEngine_Object_TypeInfo, x);
    byte_49FE0F7 = 1;
  }
  if ( !x
    || (standFigure_k__BackingField = x->fields._standFigure_k__BackingField) == 0LL
    || (this = (StandFigureBack___c_o *)standFigure_k__BackingField->fields.bodyTexture) == 0LL )
  {
    sub_1B64C5C(this, x);
  }
  v5 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(StandFigureBack___c_o *, void *, const MethodInfo *))this->klass[1].vtable._3_ToString.method)(
                                 this,
                                 this->klass[2]._1.image,
                                 method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality(v5, 0LL, 0LL);
}