void __fastcall StandFigureBack___cctor(const MethodInfo *method)
{
  struct StandFigureBack_StaticFields *static_fields; // x8

  if ( (byte_4A5A724 & 1) == 0 )
  {
    sub_1B885B0(&StandFigureBack_TypeInfo);
    byte_4A5A724 = 1;
  }
  static_fields = StandFigureBack_TypeInfo->static_fields;
  static_fields->COSTUME_IMAGE_CNT_START = 11;
  *(int32x2_t *)&static_fields->OPEN_TIME = vdup_n_s32(0x3E99999Au);
}


void __fastcall StandFigureBack___ctor(StandFigureBack_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A5A723 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_StandFigureCollect__TypeInfo);
    byte_4A5A723 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_StandFigureCollect__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
  this->fields.standFigureCollectList = (struct System_Collections_Generic_List_StandFigureCollect__o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.standFigureCollectList, (int32_t)v3, v4, v5);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall StandFigureBack__CreatePrefab(
        StandFigureBack_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseStandFigure; // x20
  bool v8; // w0
  __int64 v9; // x8
  UnityEngine_GameObject_o *v10; // x20
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  System_Collections_Generic_List_SvtMultiPortraitEntity__o *EntityListOrderBy; // x0
  System_Collections_Generic_List_object__o *v14; // x21
  Il2CppObject *current; // x23
  UIStandFigureR_o *v16; // x0
  __int64 v17; // x1
  int32_t v18; // w2
  int32_t v19; // w3
  UIStandFigureR_o *v20; // x24
  System_Collections_Generic_List_object__o *v21; // x21
  StandFigureCollect_o *v22; // x22
  const MethodInfo *v23; // x3
  __int64 v24; // x0
  __int64 v25; // x1
  int32_t v26; // w2
  int32_t v27; // w3
  struct System_Object_array *v28; // x8
  _QWORD *v29; // x9
  __int64 v30; // x10
  Il2CppClass **v31; // x0
  System_Collections_Generic_List_object__o *standFigureCollectList; // x21
  UIStandFigureR_o *RenderPrefab; // x22
  StandFigureCollect_o *v34; // x20
  const MethodInfo *v35; // x3
  int32_t v36; // w2
  int32_t v37; // w3
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  Il2CppClass **v41; // x0
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4A5A719 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_StandFigureCollect__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StandFigureCollect_TypeInfo);
    byte_4A5A719 = 1;
  }
  memset(&v43, 0, sizeof(v43));
  baseStandFigure = (UnityEngine_Object_o *)this->fields.baseStandFigure;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Inequality(baseStandFigure, 0LL, 0LL);
  v9 = 40LL;
  if ( v8 )
    v9 = 48LL;
  v10 = *(UnityEngine_GameObject_o **)((char *)&this->klass + v9);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
  if ( !Instance )
    goto LABEL_29;
  EntityListOrderBy = SvtMultiPortraitMaster__GetEntityListOrderBy(
                        (SvtMultiPortraitMaster_o *)Instance,
                        svtId,
                        limitCount,
                        0,
                        0LL);
  if ( !EntityListOrderBy
    || (v14 = (System_Collections_Generic_List_object__o *)EntityListOrderBy,
        !System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)EntityListOrderBy,
           (const MethodInfo_2E8D2DC *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___)) )
  {
    standFigureCollectList = (System_Collections_Generic_List_object__o *)this->fields.standFigureCollectList;
    RenderPrefab = StandFigureManager__CreateRenderPrefab(v10, 0LL);
    v34 = (StandFigureCollect_o *)sub_1B887FC(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v34, 0LL, RenderPrefab, v35);
    if ( standFigureCollectList )
    {
      items = standFigureCollectList->fields._items;
      v39 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
      ++standFigureCollectList->fields._version;
      if ( items )
      {
        size = standFigureCollectList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            standFigureCollectList,
            (Il2CppObject *)v34,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
        }
        else
        {
          v41 = &items->obj.klass + size;
          standFigureCollectList->fields._size = size + 1;
          v41[4] = (Il2CppClass *)v34;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v41 + 4), (int32_t)v34, v36, v37);
        }
        goto LABEL_28;
      }
    }
LABEL_29:
    sub_1B8880C(Instance, v12);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v42,
    v14,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
  v43 = v42;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v43,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__) )
  {
    current = v43.fields._current;
    v16 = StandFigureManager__CreateRenderPrefab(v10, 0LL);
    v20 = v16;
    if ( !v16 )
      sub_1B8880C(0LL, v17);
    v16->fields.svtMultiPortraitEntity = (struct SvtMultiPortraitEntity_o *)current;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v16->fields.svtMultiPortraitEntity, (int32_t)current, v18, v19);
    v21 = (System_Collections_Generic_List_object__o *)this->fields.standFigureCollectList;
    v22 = (StandFigureCollect_o *)sub_1B887FC(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v22, (SvtMultiPortraitEntity_o *)current, v20, v23);
    if ( !v21 )
      sub_1B8880C(v24, v25);
    v28 = v21->fields._items;
    v29 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
    ++v21->fields._version;
    if ( !v28 )
      sub_1B8880C(v24, v25);
    v30 = v21->fields._size;
    if ( (unsigned int)v30 >= v28->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v21,
        (Il2CppObject *)v22,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
    }
    else
    {
      v31 = &v28->obj.klass + v30;
      v21->fields._size = v30 + 1;
      v31[4] = (Il2CppClass *)v22;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v31 + 4), (int32_t)v22, v26, v27);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v43,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
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
  const MethodInfo *v15; // x3
  __int64 v16; // x1
  void *standFigureCollectList; // x0
  UIStandFigureR_o *v18; // x24
  System_Action_o *v19; // x25

  if ( (byte_4A5A71D & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    sub_1B885B0(&Method_StandFigureBack_EndLoad__);
    byte_4A5A71D = 1;
  }
  StandFigureBack__InitStandFigure(this, callback, *(const MethodInfo **)&imageLimitCount);
  StandFigureBack__CreatePrefab(this, svtId, imageLimitCount, v15);
  standFigureCollectList = this->fields.standFigureCollectList;
  if ( !standFigureCollectList
    || (standFigureCollectList = System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)standFigureCollectList,
                                   index,
                                   (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__)) == 0LL
    || (v18 = (UIStandFigureR_o *)*((_QWORD *)standFigureCollectList + 3),
        v19 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo),
        System_Action___ctor(v19, (Il2CppObject *)this, Method_StandFigureBack_EndLoad__, 0LL),
        !v18) )
  {
    sub_1B8880C(standFigureCollectList, v16);
  }
  UIStandFigureR__SetCharacter_41041748(v18, svtId, imageLimitCount, offsetKind, faceType, v19, 0LL);
}


void __fastcall StandFigureBack__DestroyFigure(StandFigureBack_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *standFigureCollectList; // x0
  _BOOL8 v5; // x0
  __int64 v6; // x1
  Il2CppObject *current; // x20
  UIStandFigureR_o *monitor; // x0
  __int64 v9; // x1
  UnityEngine_Component_o *v10; // x0
  UnityEngine_Object_o *gameObject; // x20
  struct System_Collections_Generic_List_StandFigureCollect__o *v12; // x8
  int32_t size; // w2
  int v14; // w9
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4A5A717 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Any_StandFigureCollect___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_StandFigureCollect__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5A717 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.standFigureCollectList,
         (const MethodInfo_2E8D2DC *)Method_System_Linq_Enumerable_Any_StandFigureCollect___) )
  {
    standFigureCollectList = (System_Collections_Generic_List_object__o *)this->fields.standFigureCollectList;
    if ( !standFigureCollectList )
      goto LABEL_20;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      standFigureCollectList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    v16 = v15;
    while ( 1 )
    {
      v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v16,
             (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
      if ( !v5 )
        break;
      current = v16.fields._current;
      if ( !v16.fields._current )
        sub_1B8880C(v5, v6);
      monitor = (UIStandFigureR_o *)v16.fields._current[1].monitor;
      if ( !monitor )
        sub_1B8880C(0LL, v6);
      UIStandFigureR__Destroy(monitor, 0LL);
      v10 = (UnityEngine_Component_o *)current[1].monitor;
      if ( !v10 )
        sub_1B8880C(0LL, v9);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v10, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_69459568(gameObject, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    v12 = this->fields.standFigureCollectList;
    if ( !v12 )
LABEL_20:
      sub_1B8880C(standFigureCollectList, v3);
    size = v12->fields._size;
    v14 = v12->fields._version + 1;
    v12->fields._size = 0;
    v12->fields._version = v14;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v12->fields._items, 0, size, 0LL);
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
    sub_1B8880C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  baseCallbackFunc = this->fields.baseCallbackFunc;
  p_baseCallbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.baseCallbackFunc;
  v8 = baseCallbackFunc;
  if ( baseCallbackFunc )
  {
    p_baseCallbackFunc->klass = 0LL;
    sub_1B88554(p_baseCallbackFunc, 0, v5, v6);
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
    sub_1B88554(p_baseCallbackFunc, 0, v2, v3);
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
    sub_1B88554(p_baseCallbackFunc, 0, v2, v3);
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
  const MethodInfo *v6; // x1
  _BOOL4 isFirstLoading; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v9; // x1
  UnityEngine_Object_o *baseWindow; // x20
  UnityEngine_Object_o *closeTransform; // x20
  UnityEngine_GameObject_o *v12; // x20
  StandFigureBack_c *v13; // x0
  TweenPosition_o *v14; // x20
  UnityEngine_GameObject_o *v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w1
  int32_t v19; // w2
  int32_t v20; // w3

  if ( (byte_4A5A721 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StandFigureBack_TypeInfo);
    sub_1B885B0(&StringLiteral_5968/*"EndFadein"*/);
    byte_4A5A721 = 1;
  }
  this->fields.baseCallbackFunc = callback;
  sub_1B88554(
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
          v12 = this->fields.baseWindow;
          v13 = StandFigureBack_TypeInfo;
          if ( !StandFigureBack_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(StandFigureBack_TypeInfo);
            v13 = StandFigureBack_TypeInfo;
          }
          v14 = TweenPosition__Begin(v12, v13->static_fields->OPEN_TIME, this->fields.basePosition, 0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                     (UnityEngine_Object_o *)v14,
                                                     0LL,
                                                     0LL);
          if ( ((unsigned __int8)gameObject & 1) != 0 )
          {
            if ( v14 )
            {
              v14->fields.method = 3;
              v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
              v14->fields.eventReceiver = v15;
              sub_1B88554((ServantStatusBattleListViewItem_o *)&v14->fields.eventReceiver, (int32_t)v15, v16, v17);
              v18 = StringLiteral_5968/*"EndFadein"*/;
              v14->fields.callWhenFinished = (struct System_String_o *)StringLiteral_5968/*"EndFadein"*/;
              sub_1B88554((ServantStatusBattleListViewItem_o *)&v14->fields.callWhenFinished, v18, v19, v20);
              return;
            }
LABEL_23:
            sub_1B8880C(gameObject, v9);
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
    StandFigureBack__EndFadein(this, v6);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StandFigureBack__Fadeout(StandFigureBack_o *this, System_Action_o *callback, const MethodInfo *method)
{
  int32_t v3; // w3
  const MethodInfo *v6; // x1
  _BOOL4 isDisp; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *baseWindow; // x20
  UnityEngine_Object_o *closeTransform; // x20
  UnityEngine_Transform_o *v11; // x20
  int v12; // s0
  UnityEngine_GameObject_o *v15; // x20
  float x; // s8
  float y; // s9
  StandFigureBack_c *v18; // x0
  float z; // s10
  TweenPosition_o *v20; // x20
  UnityEngine_GameObject_o *v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  int32_t v24; // w1
  int32_t v25; // w2
  int32_t v26; // w3
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4A5A722 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StandFigureBack_TypeInfo);
    sub_1B885B0(&StringLiteral_5969/*"EndFadeout"*/);
    byte_4A5A722 = 1;
  }
  this->fields.baseCallbackFunc = callback;
  sub_1B88554(
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
        v11 = (UnityEngine_Transform_o *)gameObject;
        *(UnityEngine_Vector3_o *)&v12 = UnityEngine_Transform__get_position(this->fields.closeTransform, 0LL);
        if ( !v11 )
          goto LABEL_26;
        v27 = UnityEngine_Transform__InverseTransformPoint(v11, *(UnityEngine_Vector3_o *)&v12, 0LL);
        v15 = this->fields.baseWindow;
        x = v27.fields.x;
        y = v27.fields.y;
        v18 = StandFigureBack_TypeInfo;
        z = v27.fields.z;
        if ( !StandFigureBack_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(StandFigureBack_TypeInfo);
          v18 = StandFigureBack_TypeInfo;
        }
        v28.fields.x = x;
        v28.fields.y = y;
        v28.fields.z = z;
        v20 = TweenPosition__Begin(v15, v18->static_fields->OPEN_TIME, v28, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                   (UnityEngine_Object_o *)v20,
                                                   0LL,
                                                   0LL);
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          if ( v20 )
          {
            v20->fields.method = 3;
            v21 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            v20->fields.eventReceiver = v21;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&v20->fields.eventReceiver, (int32_t)v21, v22, v23);
            v24 = StringLiteral_5969/*"EndFadeout"*/;
            v20->fields.callWhenFinished = (struct System_String_o *)StringLiteral_5969/*"EndFadeout"*/;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&v20->fields.callWhenFinished, v24, v25, v26);
            return;
          }
LABEL_26:
          sub_1B8880C(gameObject, v6);
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
  StandFigureBack__EndClose(this, v6);
}


// local variable allocation has failed, the output may be wrong!
UIStandFigureR_o *__fastcall StandFigureBack__GetSvtStandFigure(
        StandFigureBack_o *this,
        int32_t index,
        const MethodInfo *method)
{
  void *standFigureCollectList; // x0

  if ( (byte_4A5A714 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    byte_4A5A714 = 1;
  }
  standFigureCollectList = this->fields.standFigureCollectList;
  if ( !standFigureCollectList
    || (standFigureCollectList = System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)standFigureCollectList,
                                   index,
                                   (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__)) == 0LL )
  {
    sub_1B8880C(standFigureCollectList, *(_QWORD *)&index);
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

  if ( (byte_4A5A716 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5A716 = 1;
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
      sub_1B8880C(transform, v4);
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

  if ( (byte_4A5A718 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5A718 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  StandFigureBack__DestroyFigure(this, v7);
  this->fields.baseCallbackFunc = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.baseCallbackFunc, (int32_t)callback, v8, v9);
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
      sub_1B8880C(gameObject, v6);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
UIStandFigureR_o *__fastcall StandFigureBack__RobSvtStandFigure(
        StandFigureBack_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *standFigureCollectList; // x0
  System_Collections_Generic_List_object__o *v6; // x8
  System_Collections_Generic_List_object__o *v7; // x19

  if ( (byte_4A5A715 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_StandFigureCollect__Remove__);
    sub_1B885B0(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    byte_4A5A715 = 1;
  }
  standFigureCollectList = (System_Collections_Generic_List_object__o *)this->fields.standFigureCollectList;
  if ( !standFigureCollectList
    || (standFigureCollectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                standFigureCollectList,
                                                                                index,
                                                                                (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__),
        (v6 = (System_Collections_Generic_List_object__o *)this->fields.standFigureCollectList) == 0LL)
    || (v7 = standFigureCollectList,
        standFigureCollectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___Remove(
                                                                                v6,
                                                                                (Il2CppObject *)standFigureCollectList,
                                                                                (const MethodInfo_34FED5C *)Method_System_Collections_Generic_List_StandFigureCollect__Remove__),
        !v7) )
  {
    sub_1B8880C(standFigureCollectList, *(_QWORD *)&index);
  }
  return *(UIStandFigureR_o **)&v7->fields._size;
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
  const MethodInfo *v15; // x3
  Il2CppObject *Item; // x0
  __int64 v17; // x1
  UIStandFigureR_o *monitor; // x22
  System_Action_o *v19; // x25
  _BOOL8 v20; // x0
  __int64 v21; // x1
  Il2CppObject *current; // x24
  Il2CppClass *klass; // x8
  UIStandFigureR_o *v24; // x0
  _BOOL8 v25; // x0
  __int64 v26; // x1
  Il2CppClass *v27; // x8
  UIStandFigureR_o *v28; // x0
  System_Action_o *v29; // x20
  const MethodInfo *v30; // x2
  System_Collections_IEnumerator_o *AllAssetBundle; // x0
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4A5A71E & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_Any_StandFigureCollect___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Count_StandFigureCollect___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    sub_1B885B0(&Method_StandFigureBack_EndLoad__);
    byte_4A5A71E = 1;
  }
  memset(&v33, 0, sizeof(v33));
  StandFigureBack__InitStandFigure(this, callback, *(const MethodInfo **)&imageLimitCount);
  StandFigureBack__CreatePrefab(this, svtId, imageLimitCount, v15);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.standFigureCollectList,
         (const MethodInfo_2E8D2DC *)Method_System_Linq_Enumerable_Any_StandFigureCollect___) )
  {
    Item = (Il2CppObject *)System_Linq_Enumerable__Count_object_(
                             (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.standFigureCollectList,
                             (const MethodInfo_2E9CA20 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
    if ( !this->fields.standFigureCollectList )
      goto LABEL_24;
    if ( (int)Item < 2 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)this->fields.standFigureCollectList,
               0,
               (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
      if ( Item )
      {
        monitor = (UIStandFigureR_o *)Item[1].monitor;
        v19 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
        System_Action___ctor(v19, (Il2CppObject *)this, Method_StandFigureBack_EndLoad__, 0LL);
        if ( monitor )
        {
          UIStandFigureR__SetCharacter_41041748(monitor, svtId, imageLimitCount, offsetKind, faceType, v19, 0LL);
          return;
        }
      }
LABEL_24:
      sub_1B8880C(Item, v17);
    }
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v32,
      (System_Collections_Generic_List_object__o *)this->fields.standFigureCollectList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    v33 = v32;
    while ( 1 )
    {
      v20 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v33,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
      if ( !v20 )
        break;
      current = v33.fields._current;
      if ( !v33.fields._current )
        sub_1B8880C(v20, v21);
      klass = v33.fields._current[1].klass;
      if ( !klass )
        sub_1B8880C(v20, v21);
      v24 = (UIStandFigureR_o *)v33.fields._current[1].monitor;
      if ( !v24 )
        sub_1B8880C(0LL, v21);
      v25 = UIStandFigureR__SetCharacterForImageId(
              v24,
              (int32_t)klass->_1.byval_arg.data,
              offsetKind,
              faceType,
              0,
              0LL,
              0,
              0LL);
      v27 = current[1].klass;
      if ( !v27 )
        sub_1B8880C(v25, v26);
      v28 = (UIStandFigureR_o *)current[1].monitor;
      if ( !v28 )
        sub_1B8880C(0LL, v26);
      UIStandFigureR__SetDepth(
        v28,
        (HIDWORD(v27->_1.byval_arg.data) & ~(SHIDWORD(v27->_1.byval_arg.data) >> 31)) + depth,
        0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v33,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    v29 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v29, (Il2CppObject *)this, Method_StandFigureBack_EndLoad__, 0LL);
    AllAssetBundle = StandFigureBack__WaitForLoadAllAssetBundle(this, v29, v30);
    UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, AllAssetBundle, 0LL);
  }
}


void __fastcall StandFigureBack__SetFaceType(
        StandFigureBack_o *this,
        int32_t faceType,
        float fadeTime,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *standFigureCollectList; // x0

  if ( (byte_4A5A71A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Any_StandFigureCollect___);
    sub_1B885B0(&Method_System_Collections_Generic_List_StandFigureCollect__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    byte_4A5A71A = 1;
  }
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.standFigureCollectList,
         (const MethodInfo_2E8D2DC *)Method_System_Linq_Enumerable_Any_StandFigureCollect___) )
  {
    standFigureCollectList = (System_Collections_Generic_List_object__o *)this->fields.standFigureCollectList;
    if ( standFigureCollectList )
    {
      if ( standFigureCollectList->fields._size < index )
        return;
      standFigureCollectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                              standFigureCollectList,
                                                                              index,
                                                                              (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
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
    sub_1B8880C(standFigureCollectList, v9);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StandFigureBack__SetFaceTypeAll(
        StandFigureBack_o *this,
        int32_t faceType,
        float fadeTime,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *standFigureCollectList; // x0
  _BOOL8 v8; // x0
  __int64 v9; // x1
  UIStandFigureR_o *monitor; // x0
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A5A71B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    byte_4A5A71B = 1;
  }
  memset(&v11, 0, sizeof(v11));
  standFigureCollectList = (System_Collections_Generic_List_object__o *)this->fields.standFigureCollectList;
  if ( !standFigureCollectList )
    sub_1B8880C(0LL, *(_QWORD *)&faceType);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    standFigureCollectList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v11,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v8 )
      break;
    if ( !v11.fields._current )
      sub_1B8880C(v8, v9);
    monitor = (UIStandFigureR_o *)v11.fields._current[1].monitor;
    if ( !monitor )
      sub_1B8880C(0LL, v9);
    UIStandFigureR__SetFace(monitor, faceType, fadeTime, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StandFigureBack__SetFaceTypeAndForm(
        StandFigureBack_o *this,
        int32_t faceType,
        int32_t formId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *standFigureCollectList; // x0
  _BOOL8 v8; // x0
  __int64 v9; // x1
  UIStandFigureR_o *monitor; // x0
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A5A71C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    byte_4A5A71C = 1;
  }
  memset(&v11, 0, sizeof(v11));
  standFigureCollectList = (System_Collections_Generic_List_object__o *)this->fields.standFigureCollectList;
  if ( !standFigureCollectList )
    sub_1B8880C(0LL, *(_QWORD *)&faceType);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    standFigureCollectList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v11,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v8 )
      break;
    if ( !v11.fields._current )
      sub_1B8880C(v8, v9);
    monitor = (UIStandFigureR_o *)v11.fields._current[1].monitor;
    if ( !monitor )
      sub_1B8880C(0LL, v9);
    UIStandFigureR__SetFace_41048928(monitor, faceType, formId, 0LL, 0.0, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
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
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x0
  int v19; // w28
  const MethodInfo *v20; // x3
  System_Action_o *baseCallbackFunc; // x20
  UIStandFigureR_o *Item; // x0
  __int64 v23; // x1
  _BOOL8 v24; // x0
  __int64 v25; // x1
  Il2CppObject *current; // x27
  Il2CppClass *klass; // x8
  UIStandFigureR_o *monitor; // x0
  _BOOL8 v29; // x0
  __int64 v30; // x1
  Il2CppClass *v31; // x8
  UIStandFigureR_o *v32; // x0
  const MethodInfo *v33; // x2
  System_Collections_IEnumerator_o *AllAssetBundle; // x0
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4A5A71F & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_Any_StandFigureCollect___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Count_StandFigureCollect___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    sub_1B885B0(&Method_StandFigureBack_EndLoad__);
    byte_4A5A71F = 1;
  }
  memset(&v36, 0, sizeof(v36));
  standFigureCollectList = this->fields.standFigureCollectList;
  if ( standFigureCollectList )
    v19 = !System_Linq_Enumerable__Any_object_(
             (System_Collections_Generic_IEnumerable_TSource__o *)standFigureCollectList,
             (const MethodInfo_2E8D2DC *)Method_System_Linq_Enumerable_Any_StandFigureCollect___);
  else
    v19 = 1;
  StandFigureBack__InitStandFigure(this, callback, *(const MethodInfo **)&imageLimitCount);
  StandFigureBack__CreatePrefab(this, svtId, imageLimitCount, v20);
  if ( v19 )
  {
    baseCallbackFunc = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(baseCallbackFunc, (Il2CppObject *)this, Method_StandFigureBack_EndLoad__, 0LL);
  }
  else
  {
    baseCallbackFunc = this->fields.baseCallbackFunc;
  }
  this->fields.isFirstLoading = v19;
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.standFigureCollectList,
         (const MethodInfo_2E8D2DC *)Method_System_Linq_Enumerable_Any_StandFigureCollect___) )
  {
    Item = (UIStandFigureR_o *)System_Linq_Enumerable__Count_object_(
                                 (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.standFigureCollectList,
                                 (const MethodInfo_2E9CA20 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
    if ( !this->fields.standFigureCollectList )
      goto LABEL_30;
    if ( (int)Item < 2 )
    {
      Item = (UIStandFigureR_o *)System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)this->fields.standFigureCollectList,
                                   0,
                                   (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
      if ( Item )
      {
        Item = (UIStandFigureR_o *)Item->fields.m_CancellationTokenSource;
        if ( Item )
        {
          UIStandFigureR__SetCharacter_41041744(
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
      sub_1B8880C(Item, v23);
    }
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v35,
      (System_Collections_Generic_List_object__o *)this->fields.standFigureCollectList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    v36 = v35;
    while ( 1 )
    {
      v24 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v36,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
      if ( !v24 )
        break;
      current = v36.fields._current;
      if ( !v36.fields._current )
        sub_1B8880C(v24, v25);
      klass = v36.fields._current[1].klass;
      if ( !klass )
        sub_1B8880C(v24, v25);
      monitor = (UIStandFigureR_o *)v36.fields._current[1].monitor;
      if ( !monitor )
        sub_1B8880C(0LL, v25);
      v29 = UIStandFigureR__SetCharacterForImageId(
              monitor,
              (int32_t)klass->_1.byval_arg.data,
              offsetKind,
              faceType,
              formId,
              0LL,
              isPhotoWithMaster,
              0LL);
      v31 = current[1].klass;
      if ( !v31 )
        sub_1B8880C(v29, v30);
      v32 = (UIStandFigureR_o *)current[1].monitor;
      if ( !v32 )
        sub_1B8880C(0LL, v30);
      UIStandFigureR__SetDepth(
        v32,
        (HIDWORD(v31->_1.byval_arg.data) & ~(SHIDWORD(v31->_1.byval_arg.data) >> 31)) + depth,
        0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v36,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    AllAssetBundle = StandFigureBack__WaitForLoadAllAssetBundle(this, baseCallbackFunc, v33);
    UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, AllAssetBundle, 0LL);
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

  if ( (byte_4A5A720 & 1) == 0 )
  {
    sub_1B885B0(&StandFigureBack__WaitForLoadAllAssetBundle_d__31_TypeInfo);
    byte_4A5A720 = 1;
  }
  v5 = sub_1B887FC(StandFigureBack__WaitForLoadAllAssetBundle_d__31_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 40) = action;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)action, v8, v9);
  return (System_Collections_IEnumerator_o *)v5;
}


bool __fastcall StandFigureBack__get_IsBusy(StandFigureBack_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B8880C(0LL, v3);
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
  int32_t _1__state; // w8
  struct StandFigureBack_o *_4__this; // x23
  _BOOL8 v5; // x0
  __int64 v6; // x1
  void *monitor; // x8
  UnityEngine_Behaviour_o *v8; // x0
  System_Collections_Generic_IEnumerable_TSource__o *standFigureCollectList; // x20
  StandFigureBack___c_c *v10; // x0
  System_Func_object__bool__o *_9__31_0; // x21
  Il2CppObject *v12; // x22
  struct StandFigureBack___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w2
  int32_t v19; // w3
  _BOOL8 v20; // x0
  __int64 v21; // x1
  void *v22; // x8
  UnityEngine_Behaviour_o *v23; // x0
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  bool result; // w0
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-60h] BYREF

  v2 = this;
  if ( (byte_4A5A727 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Count_StandFigureCollect___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_StandFigureCollect___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__);
    sub_1B885B0(&System_Func_StandFigureCollect__bool__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    sub_1B885B0(&Method_StandFigureBack___c__WaitForLoadAllAssetBundle_b__31_0__);
    this = (StandFigureBack__WaitForLoadAllAssetBundle_d__31_o *)sub_1B885B0(&StandFigureBack___c_TypeInfo);
    byte_4A5A727 = 1;
  }
  memset(&v27, 0, sizeof(v27));
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
      (System_Collections_Generic_List_Enumerator_T__o *)&v26,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    v27 = v26;
    while ( 1 )
    {
      v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v27,
             (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
      if ( !v5 )
        break;
      if ( !v27.fields._current )
        sub_1B8880C(v5, v6);
      monitor = v27.fields._current[1].monitor;
      if ( !monitor )
        sub_1B8880C(v5, v6);
      v8 = (UnityEngine_Behaviour_o *)*((_QWORD *)monitor + 4);
      if ( !v8 )
        sub_1B8880C(0LL, v6);
      UnityEngine_Behaviour__set_enabled(v8, 0, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v27,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    standFigureCollectList = (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.standFigureCollectList;
    v10 = StandFigureBack___c_TypeInfo;
    if ( !StandFigureBack___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(StandFigureBack___c_TypeInfo);
      v10 = StandFigureBack___c_TypeInfo;
    }
    _9__31_0 = (System_Func_object__bool__o *)v10->static_fields->__9__31_0;
    if ( !_9__31_0 )
    {
      if ( !v10->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v10);
        v10 = StandFigureBack___c_TypeInfo;
      }
      v12 = (Il2CppObject *)v10->static_fields->__9;
      _9__31_0 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_StandFigureCollect__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__31_0,
        v12,
        Method_StandFigureBack___c__WaitForLoadAllAssetBundle_b__31_0__,
        0LL);
      static_fields = StandFigureBack___c_TypeInfo->static_fields;
      static_fields->__9__31_0 = (struct System_Func_StandFigureCollect__bool__o *)_9__31_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__31_0, (int32_t)_9__31_0, v14, v15);
    }
    this = (StandFigureBack__WaitForLoadAllAssetBundle_d__31_o *)System_Linq_Enumerable__Where_object_(
                                                                   standFigureCollectList,
                                                                   (System_Func_TSource__bool__o *)_9__31_0,
                                                                   (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_StandFigureCollect___);
    if ( !v2 )
      goto LABEL_41;
    v2->fields._assetRendered_5__2 = (struct System_Collections_Generic_IEnumerable_StandFigureCollect__o *)this;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields._assetRendered_5__2, (int32_t)this, v16, v17);
LABEL_22:
    this = (StandFigureBack__WaitForLoadAllAssetBundle_d__31_o *)System_Linq_Enumerable__Count_object_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)v2->fields._assetRendered_5__2,
                                                                   (const MethodInfo_2E9CA20 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
    if ( _4__this )
    {
      if ( (_DWORD)this != System_Linq_Enumerable__Count_object_(
                             (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.standFigureCollectList,
                             (const MethodInfo_2E9CA20 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___) )
      {
        v2->fields.__2__current = 0LL;
        p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
        sub_1B88554(p__2__current, 0, v18, v19);
        result = 1;
        *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
        return result;
      }
      this = (StandFigureBack__WaitForLoadAllAssetBundle_d__31_o *)_4__this->fields.standFigureCollectList;
      if ( this )
      {
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v26,
          (System_Collections_Generic_List_object__o *)this,
          (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
        v27 = v26;
        while ( 1 )
        {
          v20 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v27,
                  (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
          if ( !v20 )
            break;
          if ( !v27.fields._current )
            sub_1B8880C(v20, v21);
          v22 = v27.fields._current[1].monitor;
          if ( !v22 )
            sub_1B8880C(v20, v21);
          v23 = (UnityEngine_Behaviour_o *)*((_QWORD *)v22 + 4);
          if ( !v23 )
            sub_1B8880C(0LL, v21);
          UnityEngine_Behaviour__set_enabled(v23, 1, 0LL);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v27,
          (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
        ActionExtensions__Call(v2->fields.action, 0LL);
        return 0;
      }
    }
LABEL_41:
    sub_1B8880C(this, method);
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

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_StandFigureBack__WaitForLoadAllAssetBundle_d__31_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
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
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5A725 & 1) == 0 )
  {
    sub_1B885B0(&StandFigureBack___c_TypeInfo);
    byte_4A5A725 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(StandFigureBack___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  StandFigureBack___c_TypeInfo->static_fields->__9 = (struct StandFigureBack___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)StandFigureBack___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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

  if ( (byte_4A5A726 & 1) == 0 )
  {
    this = (StandFigureBack___c_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5A726 = 1;
  }
  if ( !x
    || (standFigure_k__BackingField = x->fields._standFigure_k__BackingField) == 0LL
    || (this = (StandFigureBack___c_o *)standFigure_k__BackingField->fields.bodyTexture) == 0LL )
  {
    sub_1B8880C(this, x);
  }
  v5 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(StandFigureBack___c_o *, void *, const MethodInfo *))this->klass[1].vtable._3_ToString.method)(
                                 this,
                                 this->klass[2]._1.image,
                                 method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality(v5, 0LL, 0LL);
}