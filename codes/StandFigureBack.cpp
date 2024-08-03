void __fastcall StandFigureBack___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct StandFigureBack_StaticFields *static_fields; // x8

  if ( (byte_49FB9DD & 1) == 0 )
  {
    sub_1B640C8(&StandFigureBack_TypeInfo, v1);
    byte_49FB9DD = 1;
  }
  static_fields = StandFigureBack_TypeInfo->static_fields;
  static_fields->COSTUME_IMAGE_CNT_START = 11;
  *(int32x2_t *)&static_fields->OPEN_TIME = vdup_n_s32(0x3E99999Au);
}


void __fastcall StandFigureBack___ctor(StandFigureBack_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49FB9DC & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_StandFigureCollect___ctor__, method);
    sub_1B640C8(&System_Collections_Generic_List_StandFigureCollect__TypeInfo, v4);
    byte_49FB9DC = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_StandFigureCollect__TypeInfo,
                                                      method,
                                                      v2);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
  this->fields.standFigureCollectList = (struct System_Collections_Generic_List_StandFigureCollect__o *)v5;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.standFigureCollectList, (int32_t)v5, v6, v7);
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
  System_Collections_Generic_List_SvtMultiPortraitEntity__o *EntityListOrderBy; // x0
  System_Collections_Generic_List_object__o *v22; // x21
  Il2CppObject *current; // x23
  UIStandFigureR_o *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  UIStandFigureR_o *v27; // x24
  System_Collections_Generic_List_object__o *v28; // x21
  __int64 v29; // x1
  __int64 v30; // x2
  StandFigureCollect_o *v31; // x22
  const MethodInfo *v32; // x3
  __int64 v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  struct System_Object_array *v36; // x8
  _QWORD *v37; // x9
  __int64 v38; // x10
  Il2CppClass **v39; // x0
  System_Collections_Generic_List_object__o *standFigureCollectList; // x21
  UIStandFigureR_o *RenderPrefab; // x22
  __int64 v42; // x1
  __int64 v43; // x2
  StandFigureCollect_o *v44; // x20
  const MethodInfo *v45; // x3
  int32_t v46; // w2
  int32_t v47; // w3
  struct System_Object_array *items; // x8
  _QWORD *v49; // x9
  __int64 size; // x10
  Il2CppClass **v51; // x0
  System_Collections_Generic_List_Enumerator_object__o v52; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v53; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_49FB9D2 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___, *(_QWORD *)&svtId);
    sub_1B640C8(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_StandFigureCollect__Add__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__, v12);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v13);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_1B640C8(&StandFigureCollect_TypeInfo, v15);
    byte_49FB9D2 = 1;
  }
  memset(&v53, 0, sizeof(v53));
  baseStandFigure = (UnityEngine_Object_o *)this->fields.baseStandFigure;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v17 = UnityEngine_Object__op_Inequality(baseStandFigure, 0LL, 0LL);
  v18 = 40LL;
  if ( v17 )
    v18 = 48LL;
  v19 = *(UnityEngine_GameObject_o **)((char *)&this->klass + v18);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
  if ( !Instance )
    goto LABEL_29;
  EntityListOrderBy = SvtMultiPortraitMaster__GetEntityListOrderBy(
                        (SvtMultiPortraitMaster_o *)Instance,
                        svtId,
                        limitCount,
                        0,
                        0LL);
  if ( !EntityListOrderBy
    || (v22 = (System_Collections_Generic_List_object__o *)EntityListOrderBy,
        !System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)EntityListOrderBy,
           (const MethodInfo_2E46A94 *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___)) )
  {
    standFigureCollectList = (System_Collections_Generic_List_object__o *)this->fields.standFigureCollectList;
    RenderPrefab = StandFigureManager__CreateRenderPrefab(v19, 0LL);
    v44 = (StandFigureCollect_o *)sub_1B64314(StandFigureCollect_TypeInfo, v42, v43);
    StandFigureCollect___ctor(v44, 0LL, RenderPrefab, v45);
    if ( standFigureCollectList )
    {
      items = standFigureCollectList->fields._items;
      v49 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
      ++standFigureCollectList->fields._version;
      if ( items )
      {
        size = standFigureCollectList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            standFigureCollectList,
            (Il2CppObject *)v44,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
        }
        else
        {
          v51 = &items->obj.klass + size;
          standFigureCollectList->fields._size = size + 1;
          v51[4] = (Il2CppClass *)v44;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v51 + 4), (int32_t)v44, v46, v47);
        }
        goto LABEL_28;
      }
    }
LABEL_29:
    sub_1B64324(Instance);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v52,
    v22,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
  v53 = v52;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v53,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__) )
  {
    current = v53.fields._current;
    v24 = StandFigureManager__CreateRenderPrefab(v19, 0LL);
    v27 = v24;
    if ( !v24 )
      sub_1B64324(0LL);
    v24->fields.svtMultiPortraitEntity = (struct SvtMultiPortraitEntity_o *)current;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v24->fields.svtMultiPortraitEntity, (int32_t)current, v25, v26);
    v28 = (System_Collections_Generic_List_object__o *)this->fields.standFigureCollectList;
    v31 = (StandFigureCollect_o *)sub_1B64314(StandFigureCollect_TypeInfo, v29, v30);
    StandFigureCollect___ctor(v31, (SvtMultiPortraitEntity_o *)current, v27, v32);
    if ( !v28 )
      sub_1B64324(v33);
    v36 = v28->fields._items;
    v37 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
    ++v28->fields._version;
    if ( !v36 )
      sub_1B64324(v33);
    v38 = v28->fields._size;
    if ( (unsigned int)v38 >= v36->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v28,
        (Il2CppObject *)v31,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
    }
    else
    {
      v39 = &v36->obj.klass + v38;
      v28->fields._size = v38 + 1;
      v39[4] = (Il2CppClass *)v31;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v39 + 4), (int32_t)v31, v34, v35);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v53,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
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
  void *standFigureCollectList; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  UIStandFigureR_o *v21; // x24
  System_Action_o *v22; // x25

  if ( (byte_49FB9D6 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&svtId);
    sub_1B640C8(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v15);
    sub_1B640C8(&Method_StandFigureBack_EndLoad__, v16);
    byte_49FB9D6 = 1;
  }
  StandFigureBack__InitStandFigure(this, callback, *(const MethodInfo **)&imageLimitCount);
  StandFigureBack__CreatePrefab(this, svtId, imageLimitCount, v17);
  standFigureCollectList = this->fields.standFigureCollectList;
  if ( !standFigureCollectList
    || (standFigureCollectList = System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)standFigureCollectList,
                                   index,
                                   (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__)) == 0LL
    || (v21 = (UIStandFigureR_o *)*((_QWORD *)standFigureCollectList + 3),
        v22 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v19, v20),
        System_Action___ctor(v22, (Il2CppObject *)this, Method_StandFigureBack_EndLoad__, 0LL),
        !v21) )
  {
    sub_1B64324(standFigureCollectList);
  }
  UIStandFigureR__SetCharacter_40641336(v21, svtId, imageLimitCount, offsetKind, faceType, v22, 0LL);
}


void __fastcall StandFigureBack__DestroyFigure(StandFigureBack_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *standFigureCollectList; // x0
  _BOOL8 v10; // x0
  Il2CppObject *current; // x20
  UIStandFigureR_o *monitor; // x0
  UnityEngine_Component_o *v13; // x0
  UnityEngine_Object_o *gameObject; // x20
  struct System_Collections_Generic_List_StandFigureCollect__o *v15; // x8
  int32_t size; // w2
  int v17; // w9
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_49FB9D0 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Any_StandFigureCollect___, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_StandFigureCollect__Clear__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__, v7);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v8);
    byte_49FB9D0 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.standFigureCollectList,
         (const MethodInfo_2E46A94 *)Method_System_Linq_Enumerable_Any_StandFigureCollect___) )
  {
    standFigureCollectList = (System_Collections_Generic_List_object__o *)this->fields.standFigureCollectList;
    if ( !standFigureCollectList )
      goto LABEL_20;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v18,
      standFigureCollectList,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    v19 = v18;
    while ( 1 )
    {
      v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v19,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
      if ( !v10 )
        break;
      current = v19.fields._current;
      if ( !v19.fields._current )
        sub_1B64324(v10);
      monitor = (UIStandFigureR_o *)v19.fields._current[1].monitor;
      if ( !monitor )
        sub_1B64324(0LL);
      UIStandFigureR__Destroy(monitor, 0LL);
      v13 = (UnityEngine_Component_o *)current[1].monitor;
      if ( !v13 )
        sub_1B64324(0LL);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v13, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_69127924(gameObject, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v19,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    v15 = this->fields.standFigureCollectList;
    if ( !v15 )
LABEL_20:
      sub_1B64324(standFigureCollectList);
    size = v15->fields._size;
    v17 = v15->fields._version + 1;
    v15->fields._size = 0;
    v15->fields._version = v17;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v15->fields._items, 0, size, 0LL);
  }
}


void __fastcall StandFigureBack__EndClose(StandFigureBack_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  ServantStatusBattleListViewItem_o *p_baseCallbackFunc; // x19
  struct System_Action_o *v7; // x20
  struct System_Action_o *baseCallbackFunc; // t1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B64324(0LL);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  baseCallbackFunc = this->fields.baseCallbackFunc;
  p_baseCallbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.baseCallbackFunc;
  v7 = baseCallbackFunc;
  if ( baseCallbackFunc )
  {
    p_baseCallbackFunc->klass = 0LL;
    sub_1B6406C(p_baseCallbackFunc, 0, v4, v5);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v7->fields.m_target)(
      v7->fields.original_method_info,
      *(_QWORD *)&v7->fields.extra_arg);
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
    sub_1B6406C(p_baseCallbackFunc, 0, v2, v3);
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
    sub_1B6406C(p_baseCallbackFunc, 0, v2, v3);
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
  UnityEngine_Object_o *baseWindow; // x20
  UnityEngine_Object_o *closeTransform; // x20
  UnityEngine_GameObject_o *v13; // x20
  StandFigureBack_c *v14; // x0
  TweenPosition_o *v15; // x20
  UnityEngine_GameObject_o *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w1
  int32_t v20; // w2
  int32_t v21; // w3

  if ( (byte_49FB9DA & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, callback);
    sub_1B640C8(&StandFigureBack_TypeInfo, v6);
    sub_1B640C8(&StringLiteral_5942/*"EndFadein"*/, v7);
    byte_49FB9DA = 1;
  }
  this->fields.baseCallbackFunc = callback;
  sub_1B6406C(
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
          v13 = this->fields.baseWindow;
          v14 = StandFigureBack_TypeInfo;
          if ( !StandFigureBack_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(StandFigureBack_TypeInfo);
            v14 = StandFigureBack_TypeInfo;
          }
          v15 = TweenPosition__Begin(v13, v14->static_fields->OPEN_TIME, this->fields.basePosition, 0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                     (UnityEngine_Object_o *)v15,
                                                     0LL,
                                                     0LL);
          if ( ((unsigned __int8)gameObject & 1) != 0 )
          {
            if ( v15 )
            {
              v15->fields.method = 3;
              v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
              v15->fields.eventReceiver = v16;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)&v15->fields.eventReceiver, (int32_t)v16, v17, v18);
              v19 = StringLiteral_5942/*"EndFadein"*/;
              v15->fields.callWhenFinished = (struct System_String_o *)StringLiteral_5942/*"EndFadein"*/;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)&v15->fields.callWhenFinished, v19, v20, v21);
              return;
            }
LABEL_23:
            sub_1B64324(gameObject);
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

  if ( (byte_49FB9DB & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, callback);
    sub_1B640C8(&StandFigureBack_TypeInfo, v6);
    sub_1B640C8(&StringLiteral_5943/*"EndFadeout"*/, v7);
    byte_49FB9DB = 1;
  }
  this->fields.baseCallbackFunc = callback;
  sub_1B6406C(
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
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v22->fields.eventReceiver, (int32_t)v23, v24, v25);
            v26 = StringLiteral_5943/*"EndFadeout"*/;
            v22->fields.callWhenFinished = (struct System_String_o *)StringLiteral_5943/*"EndFadeout"*/;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v22->fields.callWhenFinished, v26, v27, v28);
            return;
          }
LABEL_26:
          sub_1B64324(gameObject);
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

  if ( (byte_49FB9CD & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, *(_QWORD *)&index);
    byte_49FB9CD = 1;
  }
  standFigureCollectList = this->fields.standFigureCollectList;
  if ( !standFigureCollectList
    || (standFigureCollectList = System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)standFigureCollectList,
                                   index,
                                   (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__)) == 0LL )
  {
    sub_1B64324(standFigureCollectList);
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

  if ( (byte_49FB9CF & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FB9CF = 1;
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
      sub_1B64324(transform);
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
  const MethodInfo *v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  UnityEngine_Object_o *baseWindow; // x20
  UnityEngine_Object_o *closeTransform; // x20
  UnityEngine_Transform_o *v11; // x8
  UnityEngine_Transform_o *v12; // x19
  int v13; // s0

  if ( (byte_49FB9D1 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, callback);
    byte_49FB9D1 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  StandFigureBack__DestroyFigure(this, v6);
  this->fields.baseCallbackFunc = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.baseCallbackFunc, (int32_t)callback, v7, v8);
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
        v11 = this->fields.closeTransform;
        if ( v11 )
        {
          v12 = (UnityEngine_Transform_o *)gameObject;
          *(UnityEngine_Vector3_o *)&v13 = UnityEngine_Transform__get_position(v11, 0LL);
          if ( v12 )
          {
            UnityEngine_Transform__set_position(v12, *(UnityEngine_Vector3_o *)&v13, 0LL);
            return;
          }
        }
      }
LABEL_18:
      sub_1B64324(gameObject);
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

  if ( (byte_49FB9CE & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_StandFigureCollect__Remove__, *(_QWORD *)&index);
    sub_1B640C8(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v5);
    byte_49FB9CE = 1;
  }
  standFigureCollectList = (System_Collections_Generic_List_object__o *)this->fields.standFigureCollectList;
  if ( !standFigureCollectList
    || (standFigureCollectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                standFigureCollectList,
                                                                                index,
                                                                                (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__),
        (v7 = (System_Collections_Generic_List_object__o *)this->fields.standFigureCollectList) == 0LL)
    || (v8 = standFigureCollectList,
        standFigureCollectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___Remove(
                                                                                v7,
                                                                                (Il2CppObject *)standFigureCollectList,
                                                                                (const MethodInfo_34AEC9C *)Method_System_Collections_Generic_List_StandFigureCollect__Remove__),
        !v8) )
  {
    sub_1B64324(standFigureCollectList);
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
  __int64 v26; // x2
  UIStandFigureR_o *monitor; // x22
  System_Action_o *v28; // x25
  _BOOL8 v29; // x0
  Il2CppObject *current; // x24
  Il2CppClass *klass; // x8
  UIStandFigureR_o *v32; // x0
  _BOOL8 v33; // x0
  Il2CppClass *v34; // x8
  UIStandFigureR_o *v35; // x0
  __int64 v36; // x1
  __int64 v37; // x2
  System_Action_o *v38; // x20
  const MethodInfo *v39; // x2
  System_Collections_IEnumerator_o *AllAssetBundle; // x0
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_49FB9D7 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&svtId);
    sub_1B640C8(&Method_System_Linq_Enumerable_Any_StandFigureCollect___, v15);
    sub_1B640C8(&Method_System_Linq_Enumerable_Count_StandFigureCollect___, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__, v19);
    sub_1B640C8(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__, v20);
    sub_1B640C8(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v21);
    sub_1B640C8(&Method_StandFigureBack_EndLoad__, v22);
    byte_49FB9D7 = 1;
  }
  memset(&v42, 0, sizeof(v42));
  StandFigureBack__InitStandFigure(this, callback, *(const MethodInfo **)&imageLimitCount);
  StandFigureBack__CreatePrefab(this, svtId, imageLimitCount, v23);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.standFigureCollectList,
         (const MethodInfo_2E46A94 *)Method_System_Linq_Enumerable_Any_StandFigureCollect___) )
  {
    Item = (Il2CppObject *)System_Linq_Enumerable__Count_object_(
                             (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.standFigureCollectList,
                             (const MethodInfo_2E55CB4 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
    if ( !this->fields.standFigureCollectList )
      goto LABEL_24;
    if ( (int)Item < 2 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)this->fields.standFigureCollectList,
               0,
               (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
      if ( Item )
      {
        monitor = (UIStandFigureR_o *)Item[1].monitor;
        v28 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v25, v26);
        System_Action___ctor(v28, (Il2CppObject *)this, Method_StandFigureBack_EndLoad__, 0LL);
        if ( monitor )
        {
          UIStandFigureR__SetCharacter_40641336(monitor, svtId, imageLimitCount, offsetKind, faceType, v28, 0LL);
          return;
        }
      }
LABEL_24:
      sub_1B64324(Item);
    }
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v41,
      (System_Collections_Generic_List_object__o *)this->fields.standFigureCollectList,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    v42 = v41;
    while ( 1 )
    {
      v29 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v42,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
      if ( !v29 )
        break;
      current = v42.fields._current;
      if ( !v42.fields._current )
        sub_1B64324(v29);
      klass = v42.fields._current[1].klass;
      if ( !klass )
        sub_1B64324(v29);
      v32 = (UIStandFigureR_o *)v42.fields._current[1].monitor;
      if ( !v32 )
        sub_1B64324(0LL);
      v33 = UIStandFigureR__SetCharacterForImageId(
              v32,
              (int32_t)klass->_1.byval_arg.data,
              offsetKind,
              faceType,
              0,
              0LL,
              0,
              0LL);
      v34 = current[1].klass;
      if ( !v34 )
        sub_1B64324(v33);
      v35 = (UIStandFigureR_o *)current[1].monitor;
      if ( !v35 )
        sub_1B64324(0LL);
      UIStandFigureR__SetDepth(
        v35,
        (HIDWORD(v34->_1.byval_arg.data) & ~(SHIDWORD(v34->_1.byval_arg.data) >> 31)) + depth,
        0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v42,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    v38 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v36, v37);
    System_Action___ctor(v38, (Il2CppObject *)this, Method_StandFigureBack_EndLoad__, 0LL);
    AllAssetBundle = StandFigureBack__WaitForLoadAllAssetBundle(this, v38, v39);
    UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)this, AllAssetBundle, 0LL);
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
  System_Collections_Generic_List_object__o *standFigureCollectList; // x0

  if ( (byte_49FB9D3 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Any_StandFigureCollect___, *(_QWORD *)&faceType);
    sub_1B640C8(&Method_System_Collections_Generic_List_StandFigureCollect__get_Count__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v10);
    byte_49FB9D3 = 1;
  }
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.standFigureCollectList,
         (const MethodInfo_2E46A94 *)Method_System_Linq_Enumerable_Any_StandFigureCollect___) )
  {
    standFigureCollectList = (System_Collections_Generic_List_object__o *)this->fields.standFigureCollectList;
    if ( standFigureCollectList )
    {
      if ( standFigureCollectList->fields._size < index )
        return;
      standFigureCollectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                              standFigureCollectList,
                                                                              index,
                                                                              (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
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
    sub_1B64324(standFigureCollectList);
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
  UIStandFigureR_o *monitor; // x0
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_49FB9D4 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__, *(_QWORD *)&faceType);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__, v9);
    byte_49FB9D4 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  standFigureCollectList = (System_Collections_Generic_List_object__o *)this->fields.standFigureCollectList;
  if ( !standFigureCollectList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    standFigureCollectList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v13,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v11 )
      break;
    if ( !v13.fields._current )
      sub_1B64324(v11);
    monitor = (UIStandFigureR_o *)v13.fields._current[1].monitor;
    if ( !monitor )
      sub_1B64324(0LL);
    UIStandFigureR__SetFace(monitor, faceType, fadeTime, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
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
  UIStandFigureR_o *monitor; // x0
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_49FB9D5 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__, *(_QWORD *)&faceType);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__, v9);
    byte_49FB9D5 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  standFigureCollectList = (System_Collections_Generic_List_object__o *)this->fields.standFigureCollectList;
  if ( !standFigureCollectList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    standFigureCollectList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v13,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v11 )
      break;
    if ( !v13.fields._current )
      sub_1B64324(v11);
    monitor = (UIStandFigureR_o *)v13.fields._current[1].monitor;
    if ( !monitor )
      sub_1B64324(0LL);
    UIStandFigureR__SetFace_40646300(monitor, faceType, formId, 0LL, 0.0, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
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
  __int64 v29; // x1
  __int64 v30; // x2
  System_Action_o *baseCallbackFunc; // x20
  UIStandFigureR_o *Item; // x0
  _BOOL8 v33; // x0
  Il2CppObject *current; // x27
  Il2CppClass *klass; // x8
  UIStandFigureR_o *monitor; // x0
  _BOOL8 v37; // x0
  Il2CppClass *v38; // x8
  UIStandFigureR_o *v39; // x0
  const MethodInfo *v40; // x2
  System_Collections_IEnumerator_o *AllAssetBundle; // x0
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_49FB9D8 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&svtId);
    sub_1B640C8(&Method_System_Linq_Enumerable_Any_StandFigureCollect___, v18);
    sub_1B640C8(&Method_System_Linq_Enumerable_Count_StandFigureCollect___, v19);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__, v20);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__, v21);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__, v22);
    sub_1B640C8(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__, v23);
    sub_1B640C8(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v24);
    sub_1B640C8(&Method_StandFigureBack_EndLoad__, v25);
    byte_49FB9D8 = 1;
  }
  memset(&v43, 0, sizeof(v43));
  standFigureCollectList = this->fields.standFigureCollectList;
  if ( standFigureCollectList )
    v27 = !System_Linq_Enumerable__Any_object_(
             (System_Collections_Generic_IEnumerable_TSource__o *)standFigureCollectList,
             (const MethodInfo_2E46A94 *)Method_System_Linq_Enumerable_Any_StandFigureCollect___);
  else
    v27 = 1;
  StandFigureBack__InitStandFigure(this, callback, *(const MethodInfo **)&imageLimitCount);
  StandFigureBack__CreatePrefab(this, svtId, imageLimitCount, v28);
  if ( v27 )
  {
    baseCallbackFunc = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v29, v30);
    System_Action___ctor(baseCallbackFunc, (Il2CppObject *)this, Method_StandFigureBack_EndLoad__, 0LL);
  }
  else
  {
    baseCallbackFunc = this->fields.baseCallbackFunc;
  }
  this->fields.isFirstLoading = v27;
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.standFigureCollectList,
         (const MethodInfo_2E46A94 *)Method_System_Linq_Enumerable_Any_StandFigureCollect___) )
  {
    Item = (UIStandFigureR_o *)System_Linq_Enumerable__Count_object_(
                                 (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.standFigureCollectList,
                                 (const MethodInfo_2E55CB4 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
    if ( !this->fields.standFigureCollectList )
      goto LABEL_30;
    if ( (int)Item < 2 )
    {
      Item = (UIStandFigureR_o *)System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)this->fields.standFigureCollectList,
                                   0,
                                   (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
      if ( Item )
      {
        Item = (UIStandFigureR_o *)Item->fields.m_CancellationTokenSource;
        if ( Item )
        {
          UIStandFigureR__SetCharacter_40641332(
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
      sub_1B64324(Item);
    }
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v42,
      (System_Collections_Generic_List_object__o *)this->fields.standFigureCollectList,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    v43 = v42;
    while ( 1 )
    {
      v33 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v43,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
      if ( !v33 )
        break;
      current = v43.fields._current;
      if ( !v43.fields._current )
        sub_1B64324(v33);
      klass = v43.fields._current[1].klass;
      if ( !klass )
        sub_1B64324(v33);
      monitor = (UIStandFigureR_o *)v43.fields._current[1].monitor;
      if ( !monitor )
        sub_1B64324(0LL);
      v37 = UIStandFigureR__SetCharacterForImageId(
              monitor,
              (int32_t)klass->_1.byval_arg.data,
              offsetKind,
              faceType,
              formId,
              0LL,
              isPhotoWithMaster,
              0LL);
      v38 = current[1].klass;
      if ( !v38 )
        sub_1B64324(v37);
      v39 = (UIStandFigureR_o *)current[1].monitor;
      if ( !v39 )
        sub_1B64324(0LL);
      UIStandFigureR__SetDepth(
        v39,
        (HIDWORD(v38->_1.byval_arg.data) & ~(SHIDWORD(v38->_1.byval_arg.data) >> 31)) + depth,
        0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v43,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    AllAssetBundle = StandFigureBack__WaitForLoadAllAssetBundle(this, baseCallbackFunc, v40);
    UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)this, AllAssetBundle, 0LL);
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

  if ( (byte_49FB9D9 & 1) == 0 )
  {
    sub_1B640C8(&StandFigureBack__WaitForLoadAllAssetBundle_d__31_TypeInfo, action);
    byte_49FB9D9 = 1;
  }
  v5 = sub_1B64314(StandFigureBack__WaitForLoadAllAssetBundle_d__31_TypeInfo, action, method);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 40) = action;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)action, v8, v9);
  return (System_Collections_IEnumerator_o *)v5;
}


bool __fastcall StandFigureBack__get_IsBusy(StandFigureBack_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B64324(0LL);
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
  void *monitor; // x8
  UnityEngine_Behaviour_o *v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_IEnumerable_TSource__o *standFigureCollectList; // x20
  StandFigureBack___c_c *v19; // x0
  System_Func_object__bool__o *_9__31_0; // x21
  Il2CppObject *v21; // x22
  struct StandFigureBack___c_StaticFields *static_fields; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w2
  int32_t v28; // w3
  _BOOL8 v29; // x0
  void *v30; // x8
  UnityEngine_Behaviour_o *v31; // x0
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  bool result; // w0
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+20h] [xbp-60h] BYREF

  v2 = this;
  if ( (byte_49FB9E0 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Count_StandFigureCollect___, method);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_StandFigureCollect___, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__, v6);
    sub_1B640C8(&System_Func_StandFigureCollect__bool__TypeInfo, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__, v8);
    sub_1B640C8(&Method_StandFigureBack___c__WaitForLoadAllAssetBundle_b__31_0__, v9);
    this = (StandFigureBack__WaitForLoadAllAssetBundle_d__31_o *)sub_1B640C8(&StandFigureBack___c_TypeInfo, v10);
    byte_49FB9E0 = 1;
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
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    v35 = v34;
    while ( 1 )
    {
      v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v35,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
      if ( !v13 )
        break;
      if ( !v35.fields._current )
        sub_1B64324(v13);
      monitor = v35.fields._current[1].monitor;
      if ( !monitor )
        sub_1B64324(v13);
      v15 = (UnityEngine_Behaviour_o *)*((_QWORD *)monitor + 4);
      if ( !v15 )
        sub_1B64324(0LL);
      UnityEngine_Behaviour__set_enabled(v15, 0, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v35,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    standFigureCollectList = (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.standFigureCollectList;
    v19 = StandFigureBack___c_TypeInfo;
    if ( !StandFigureBack___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(StandFigureBack___c_TypeInfo);
      v19 = StandFigureBack___c_TypeInfo;
    }
    _9__31_0 = (System_Func_object__bool__o *)v19->static_fields->__9__31_0;
    if ( !_9__31_0 )
    {
      if ( !v19->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v19);
        v19 = StandFigureBack___c_TypeInfo;
      }
      v21 = (Il2CppObject *)v19->static_fields->__9;
      _9__31_0 = (System_Func_object__bool__o *)sub_1B64314(System_Func_StandFigureCollect__bool__TypeInfo, v16, v17);
      System_Func_object__bool____ctor(
        _9__31_0,
        v21,
        Method_StandFigureBack___c__WaitForLoadAllAssetBundle_b__31_0__,
        0LL);
      static_fields = StandFigureBack___c_TypeInfo->static_fields;
      static_fields->__9__31_0 = (struct System_Func_StandFigureCollect__bool__o *)_9__31_0;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__31_0, (int32_t)_9__31_0, v23, v24);
    }
    this = (StandFigureBack__WaitForLoadAllAssetBundle_d__31_o *)System_Linq_Enumerable__Where_object_(
                                                                   standFigureCollectList,
                                                                   (System_Func_TSource__bool__o *)_9__31_0,
                                                                   (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_StandFigureCollect___);
    if ( !v2 )
      goto LABEL_41;
    v2->fields._assetRendered_5__2 = (struct System_Collections_Generic_IEnumerable_StandFigureCollect__o *)this;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v2->fields._assetRendered_5__2, (int32_t)this, v25, v26);
LABEL_22:
    this = (StandFigureBack__WaitForLoadAllAssetBundle_d__31_o *)System_Linq_Enumerable__Count_object_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)v2->fields._assetRendered_5__2,
                                                                   (const MethodInfo_2E55CB4 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
    if ( _4__this )
    {
      if ( (_DWORD)this != System_Linq_Enumerable__Count_object_(
                             (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.standFigureCollectList,
                             (const MethodInfo_2E55CB4 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___) )
      {
        v2->fields.__2__current = 0LL;
        p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
        sub_1B6406C(p__2__current, 0, v27, v28);
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
          (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
        v35 = v34;
        while ( 1 )
        {
          v29 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v35,
                  (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
          if ( !v29 )
            break;
          if ( !v35.fields._current )
            sub_1B64324(v29);
          v30 = v35.fields._current[1].monitor;
          if ( !v30 )
            sub_1B64324(v29);
          v31 = (UnityEngine_Behaviour_o *)*((_QWORD *)v30 + 4);
          if ( !v31 )
            sub_1B64324(0LL);
          UnityEngine_Behaviour__set_enabled(v31, 1, 0LL);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v35,
          (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
        ActionExtensions__Call(v2->fields.action, 0LL);
        return 0;
      }
    }
LABEL_41:
    sub_1B64324(this);
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_StandFigureBack__WaitForLoadAllAssetBundle_d__31_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FB9DE & 1) == 0 )
  {
    sub_1B640C8(&StandFigureBack___c_TypeInfo, v1);
    byte_49FB9DE = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(StandFigureBack___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  StandFigureBack___c_TypeInfo->static_fields->__9 = (struct StandFigureBack___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)StandFigureBack___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
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

  if ( (byte_49FB9DF & 1) == 0 )
  {
    this = (StandFigureBack___c_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, x);
    byte_49FB9DF = 1;
  }
  if ( !x
    || (standFigure_k__BackingField = x->fields._standFigure_k__BackingField) == 0LL
    || (this = (StandFigureBack___c_o *)standFigure_k__BackingField->fields.bodyTexture) == 0LL )
  {
    sub_1B64324(this);
  }
  v5 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(StandFigureBack___c_o *, void *, const MethodInfo *))this->klass[1].vtable._3_ToString.method)(
                                 this,
                                 this->klass[2]._1.image,
                                 method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality(v5, 0LL, 0LL);
}