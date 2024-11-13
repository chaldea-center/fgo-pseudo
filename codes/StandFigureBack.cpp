void __fastcall StandFigureBack___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  struct StandFigureBack_StaticFields *static_fields; // x8

  if ( (byte_4B1578E & 1) == 0 )
  {
    sub_1BCA7E0(&StandFigureBack_TypeInfo, v1, v2);
    byte_4B1578E = 1;
  }
  static_fields = StandFigureBack_TypeInfo->static_fields;
  static_fields->COSTUME_IMAGE_CNT_START = 11;
  *(int32x2_t *)&static_fields->OPEN_TIME = vdup_n_s32(0x3E99999Au);
}


void __fastcall StandFigureBack___ctor(StandFigureBack_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_List_object__o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B1578D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_StandFigureCollect___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_StandFigureCollect__TypeInfo, v5, v6);
    byte_4B1578D = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_StandFigureCollect__TypeInfo,
                                                      method,
                                                      v2,
                                                      v3);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
  this->fields.standFigureCollectList = (struct System_Collections_Generic_List_StandFigureCollect__o *)v7;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.standFigureCollectList,
    (int64_t)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StandFigureBack__CreatePrefab(
        StandFigureBack_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
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
  UnityEngine_Object_o *baseStandFigure; // x20
  bool v26; // w0
  __int64 v27; // x8
  UnityEngine_GameObject_o *v28; // x20
  Il2CppObject *Instance; // x0
  __int64 v30; // x1
  System_Collections_Generic_List_SvtMultiPortraitEntity__o *EntityListOrderBy; // x0
  System_Collections_Generic_List_object__o *v32; // x21
  Il2CppObject *current; // x23
  UIStandFigureR_o *v34; // x0
  __int64 v35; // x1
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  UIStandFigureR_o *v42; // x24
  System_Collections_Generic_List_object__o *v43; // x21
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  StandFigureCollect_o *v47; // x22
  const MethodInfo *v48; // x3
  __int64 v49; // x0
  __int64 v50; // x1
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  struct System_Object_array *v57; // x8
  _QWORD *v58; // x9
  __int64 v59; // x10
  Il2CppClass **v60; // x0
  System_Collections_Generic_List_object__o *standFigureCollectList; // x21
  UIStandFigureR_o *RenderPrefab; // x22
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x3
  StandFigureCollect_o *v66; // x20
  const MethodInfo *v67; // x3
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  struct System_Object_array *items; // x8
  _QWORD *v75; // x9
  __int64 size; // x10
  Il2CppClass **v77; // x0
  System_Collections_Generic_List_Enumerator_object__o v78; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v79; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B15783 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___, *(_QWORD *)&svtId, *(_QWORD *)&limitCount);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_StandFigureCollect__Add__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22);
    sub_1BCA7E0(&StandFigureCollect_TypeInfo, v23, v24);
    byte_4B15783 = 1;
  }
  memset(&v79, 0, sizeof(v79));
  baseStandFigure = (UnityEngine_Object_o *)this->fields.baseStandFigure;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&svtId);
  v26 = UnityEngine_Object__op_Inequality(baseStandFigure, 0LL, 0LL);
  v27 = 40LL;
  if ( v26 )
    v27 = 48LL;
  v28 = *(UnityEngine_GameObject_o **)((char *)&this->klass + v27);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
  if ( !Instance )
    goto LABEL_29;
  EntityListOrderBy = SvtMultiPortraitMaster__GetEntityListOrderBy(
                        (SvtMultiPortraitMaster_o *)Instance,
                        svtId,
                        limitCount,
                        0,
                        0LL);
  if ( !EntityListOrderBy
    || (v32 = (System_Collections_Generic_List_object__o *)EntityListOrderBy,
        !System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)EntityListOrderBy,
           (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___)) )
  {
    standFigureCollectList = (System_Collections_Generic_List_object__o *)this->fields.standFigureCollectList;
    RenderPrefab = StandFigureManager__CreateRenderPrefab(v28, 0LL);
    v66 = (StandFigureCollect_o *)sub_1BCAA2C(StandFigureCollect_TypeInfo, v63, v64, v65);
    StandFigureCollect___ctor(v66, 0LL, RenderPrefab, v67);
    if ( standFigureCollectList )
    {
      items = standFigureCollectList->fields._items;
      v75 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
      ++standFigureCollectList->fields._version;
      if ( items )
      {
        size = standFigureCollectList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            standFigureCollectList,
            (Il2CppObject *)v66,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v75[4] + 192LL) + 112LL));
        }
        else
        {
          v77 = &items->obj.klass + size;
          standFigureCollectList->fields._size = size + 1;
          v77[4] = (Il2CppClass *)v66;
          sub_1BCA784((PartyOrganizationUtility_o *)(v77 + 4), (int64_t)v66, v68, v69, v70, v71, v72, v73);
        }
        goto LABEL_28;
      }
    }
LABEL_29:
    sub_1BCAA3C(Instance, v30);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v78,
    v32,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
  v79 = v78;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v79,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__) )
  {
    current = v79.fields._current;
    v34 = StandFigureManager__CreateRenderPrefab(v28, 0LL);
    v42 = v34;
    if ( !v34 )
      sub_1BCAA3C(0LL, v35);
    v34->fields.svtMultiPortraitEntity = (struct SvtMultiPortraitEntity_o *)current;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&v34->fields.svtMultiPortraitEntity,
      (int64_t)current,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
    v43 = (System_Collections_Generic_List_object__o *)this->fields.standFigureCollectList;
    v47 = (StandFigureCollect_o *)sub_1BCAA2C(StandFigureCollect_TypeInfo, v44, v45, v46);
    StandFigureCollect___ctor(v47, (SvtMultiPortraitEntity_o *)current, v42, v48);
    if ( !v43 )
      sub_1BCAA3C(v49, v50);
    v57 = v43->fields._items;
    v58 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
    ++v43->fields._version;
    if ( !v57 )
      sub_1BCAA3C(v49, v50);
    v59 = v43->fields._size;
    if ( (unsigned int)v59 >= v57->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v43,
        (Il2CppObject *)v47,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
    }
    else
    {
      v60 = &v57->obj.klass + v59;
      v43->fields._size = v59 + 1;
      v60[4] = (Il2CppClass *)v47;
      sub_1BCA784((PartyOrganizationUtility_o *)(v60 + 4), (int64_t)v47, v51, v52, v53, v54, v55, v56);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v79,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
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
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  const MethodInfo *v19; // x3
  __int64 v20; // x1
  void *standFigureCollectList; // x0
  __int64 v22; // x2
  __int64 v23; // x3
  UIStandFigureR_o *v24; // x24
  System_Action_o *v25; // x25

  if ( (byte_4B15787 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&svtId, *(_QWORD *)&imageLimitCount);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v15, v16);
    sub_1BCA7E0(&Method_StandFigureBack_EndLoad__, v17, v18);
    byte_4B15787 = 1;
  }
  StandFigureBack__InitStandFigure(this, callback, *(const MethodInfo **)&imageLimitCount);
  StandFigureBack__CreatePrefab(this, svtId, imageLimitCount, v19);
  standFigureCollectList = this->fields.standFigureCollectList;
  if ( !standFigureCollectList
    || (standFigureCollectList = System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)standFigureCollectList,
                                   index,
                                   (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__)) == 0LL
    || (v24 = (UIStandFigureR_o *)*((_QWORD *)standFigureCollectList + 3),
        v25 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v20, v22, v23),
        System_Action___ctor(v25, (Il2CppObject *)this, Method_StandFigureBack_EndLoad__, 0LL),
        !v24) )
  {
    sub_1BCAA3C(standFigureCollectList, v20);
  }
  UIStandFigureR__SetCharacter_41769076(v24, svtId, imageLimitCount, offsetKind, faceType, v25, 0LL);
}


void __fastcall StandFigureBack__DestroyFigure(StandFigureBack_o *this, const MethodInfo *method)
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
  System_Collections_Generic_List_object__o *standFigureCollectList; // x0
  _BOOL8 v18; // x0
  __int64 v19; // x1
  Il2CppObject *current; // x20
  UIStandFigureR_o *monitor; // x0
  __int64 v22; // x1
  UnityEngine_Component_o *v23; // x0
  __int64 v24; // x1
  UnityEngine_Object_o *gameObject; // x20
  struct System_Collections_Generic_List_StandFigureCollect__o *v26; // x8
  int32_t size; // w2
  int v28; // w9
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4B15781 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_StandFigureCollect___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_StandFigureCollect__Clear__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__, v12, v13);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v14, v15);
    byte_4B15781 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.standFigureCollectList,
         (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_StandFigureCollect___) )
  {
    standFigureCollectList = (System_Collections_Generic_List_object__o *)this->fields.standFigureCollectList;
    if ( !standFigureCollectList )
      goto LABEL_20;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v29,
      standFigureCollectList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    v30 = v29;
    while ( 1 )
    {
      v18 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v30,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
      if ( !v18 )
        break;
      current = v30.fields._current;
      if ( !v30.fields._current )
        sub_1BCAA3C(v18, v19);
      monitor = (UIStandFigureR_o *)v30.fields._current[1].monitor;
      if ( !monitor )
        sub_1BCAA3C(0LL, v19);
      UIStandFigureR__Destroy(monitor, 0LL);
      v23 = (UnityEngine_Component_o *)current[1].monitor;
      if ( !v23 )
        sub_1BCAA3C(0LL, v22);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v23, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
      UnityEngine_Object__DestroyImmediate_70154432(gameObject, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v30,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    v26 = this->fields.standFigureCollectList;
    if ( !v26 )
LABEL_20:
      sub_1BCAA3C(standFigureCollectList, v16);
    size = v26->fields._size;
    v28 = v26->fields._version + 1;
    v26->fields._size = 0;
    v26->fields._version = v28;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v26->fields._items, 0, size, 0LL);
  }
}


void __fastcall StandFigureBack__EndClose(StandFigureBack_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  PartyOrganizationUtility_o *p_baseCallbackFunc; // x19
  struct System_Action_o *v12; // x20
  struct System_Action_o *baseCallbackFunc; // t1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  baseCallbackFunc = this->fields.baseCallbackFunc;
  p_baseCallbackFunc = (PartyOrganizationUtility_o *)&this->fields.baseCallbackFunc;
  v12 = baseCallbackFunc;
  if ( baseCallbackFunc )
  {
    p_baseCallbackFunc->klass = 0LL;
    sub_1BCA784(p_baseCallbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v12->fields.m_target)(
      v12->fields.original_method_info,
      *(_QWORD *)&v12->fields.extra_arg);
  }
}


void __fastcall StandFigureBack__EndFadein(StandFigureBack_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_baseCallbackFunc; // x0
  struct System_Action_o *v9; // x19
  struct System_Action_o *baseCallbackFunc; // t1

  baseCallbackFunc = this->fields.baseCallbackFunc;
  p_baseCallbackFunc = (PartyOrganizationUtility_o *)&this->fields.baseCallbackFunc;
  v9 = baseCallbackFunc;
  if ( baseCallbackFunc )
  {
    p_baseCallbackFunc->klass = 0LL;
    sub_1BCA784(p_baseCallbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v9->fields.m_target)(
      v9->fields.original_method_info,
      *(_QWORD *)&v9->fields.extra_arg);
  }
}


void __fastcall StandFigureBack__EndFadeout(StandFigureBack_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_baseCallbackFunc; // x0
  struct System_Action_o *v9; // x19
  struct System_Action_o *baseCallbackFunc; // t1

  baseCallbackFunc = this->fields.baseCallbackFunc;
  p_baseCallbackFunc = (PartyOrganizationUtility_o *)&this->fields.baseCallbackFunc;
  v9 = baseCallbackFunc;
  if ( baseCallbackFunc )
  {
    p_baseCallbackFunc->klass = 0LL;
    sub_1BCA784(p_baseCallbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v9->fields.m_target)(
      v9->fields.original_method_info,
      *(_QWORD *)&v9->fields.extra_arg);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  const MethodInfo *v14; // x1
  _BOOL4 isFirstLoading; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v17; // x1
  __int64 v18; // x1
  UnityEngine_Object_o *baseWindow; // x20
  UnityEngine_Object_o *closeTransform; // x20
  UnityEngine_GameObject_o *v21; // x20
  StandFigureBack_c *v22; // x0
  __int64 v23; // x1
  TweenPosition_o *v24; // x20
  UnityEngine_GameObject_o *v25; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int64_t v32; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7

  if ( (byte_4B1578B & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, callback, method);
    sub_1BCA7E0(&StandFigureBack_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_6082/*"EndFadein"*/, v12, v13);
    byte_4B1578B = 1;
  }
  this->fields.baseCallbackFunc = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.baseCallbackFunc,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
      if ( UnityEngine_Object__op_Inequality(baseWindow, 0LL, 0LL) )
      {
        closeTransform = (UnityEngine_Object_o *)this->fields.closeTransform;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
        if ( UnityEngine_Object__op_Inequality(closeTransform, 0LL, 0LL) )
        {
          v21 = this->fields.baseWindow;
          v22 = StandFigureBack_TypeInfo;
          if ( !StandFigureBack_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(StandFigureBack_TypeInfo, v14);
            v22 = StandFigureBack_TypeInfo;
          }
          v24 = TweenPosition__Begin(v21, v22->static_fields->OPEN_TIME, this->fields.basePosition, 0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
          gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                     (UnityEngine_Object_o *)v24,
                                                     0LL,
                                                     0LL);
          if ( ((unsigned __int8)gameObject & 1) != 0 )
          {
            if ( v24 )
            {
              v24->fields.method = 3;
              v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
              v24->fields.eventReceiver = v25;
              sub_1BCA784(
                (PartyOrganizationUtility_o *)&v24->fields.eventReceiver,
                (int64_t)v25,
                v26,
                v27,
                v28,
                v29,
                v30,
                v31);
              v32 = StringLiteral_6082/*"EndFadein"*/;
              v24->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6082/*"EndFadein"*/;
              sub_1BCA784(
                (PartyOrganizationUtility_o *)&v24->fields.callWhenFinished,
                v32,
                v33,
                v34,
                v35,
                v36,
                v37,
                v38);
              return;
            }
LABEL_23:
            sub_1BCAA3C(gameObject, v17);
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
    StandFigureBack__EndFadein(this, v14);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StandFigureBack__Fadeout(StandFigureBack_o *this, System_Action_o *callback, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  const MethodInfo *v14; // x1
  _BOOL4 isDisp; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v17; // x1
  UnityEngine_Object_o *baseWindow; // x20
  UnityEngine_Object_o *closeTransform; // x20
  UnityEngine_Transform_o *v20; // x20
  int v21; // s0
  __int64 v24; // x1
  UnityEngine_GameObject_o *v25; // x20
  float x; // s8
  float y; // s9
  StandFigureBack_c *v28; // x0
  float z; // s10
  __int64 v30; // x1
  TweenPosition_o *v31; // x20
  UnityEngine_GameObject_o *v32; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int64_t v39; // x1
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v47; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4B1578C & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, callback, method);
    sub_1BCA7E0(&StandFigureBack_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_6083/*"EndFadeout"*/, v12, v13);
    byte_4B1578C = 1;
  }
  this->fields.baseCallbackFunc = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.baseCallbackFunc,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
    if ( UnityEngine_Object__op_Inequality(baseWindow, 0LL, 0LL) )
    {
      closeTransform = (UnityEngine_Object_o *)this->fields.closeTransform;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
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
        v20 = (UnityEngine_Transform_o *)gameObject;
        *(UnityEngine_Vector3_o *)&v21 = UnityEngine_Transform__get_position(this->fields.closeTransform, 0LL);
        if ( !v20 )
          goto LABEL_26;
        v46 = UnityEngine_Transform__InverseTransformPoint(v20, *(UnityEngine_Vector3_o *)&v21, 0LL);
        v25 = this->fields.baseWindow;
        x = v46.fields.x;
        y = v46.fields.y;
        v28 = StandFigureBack_TypeInfo;
        z = v46.fields.z;
        if ( !StandFigureBack_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(StandFigureBack_TypeInfo, v24);
          v28 = StandFigureBack_TypeInfo;
        }
        v47.fields.x = x;
        v47.fields.y = y;
        v47.fields.z = z;
        v31 = TweenPosition__Begin(v25, v28->static_fields->OPEN_TIME, v47, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30);
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                   (UnityEngine_Object_o *)v31,
                                                   0LL,
                                                   0LL);
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          if ( v31 )
          {
            v31->fields.method = 3;
            v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            v31->fields.eventReceiver = v32;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&v31->fields.eventReceiver,
              (int64_t)v32,
              v33,
              v34,
              v35,
              v36,
              v37,
              v38);
            v39 = StringLiteral_6083/*"EndFadeout"*/;
            v31->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6083/*"EndFadeout"*/;
            sub_1BCA784((PartyOrganizationUtility_o *)&v31->fields.callWhenFinished, v39, v40, v41, v42, v43, v44, v45);
            return;
          }
LABEL_26:
          sub_1BCAA3C(gameObject, v14);
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
  StandFigureBack__EndClose(this, v14);
}


// local variable allocation has failed, the output may be wrong!
UIStandFigureR_o *__fastcall StandFigureBack__GetSvtStandFigure(
        StandFigureBack_o *this,
        int32_t index,
        const MethodInfo *method)
{
  void *standFigureCollectList; // x0

  if ( (byte_4B1577E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, *(_QWORD *)&index, method);
    byte_4B1577E = 1;
  }
  standFigureCollectList = this->fields.standFigureCollectList;
  if ( !standFigureCollectList
    || (standFigureCollectList = System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)standFigureCollectList,
                                   index,
                                   (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__)) == 0LL )
  {
    sub_1BCAA3C(standFigureCollectList, *(_QWORD *)&index);
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
  __int64 v2; // x2
  UnityEngine_Object_o *baseWindow; // x20
  const MethodInfo *v5; // x1
  UnityEngine_GameObject_o *transform; // x0
  __int64 v7; // x1
  UnityEngine_Object_o *v8; // x20
  __int64 v9; // x1
  UnityEngine_Object_o *closeTransform; // x20
  UnityEngine_Transform_o *v11; // x8
  UnityEngine_Transform_o *v12; // x19
  int v13; // s0

  if ( (byte_4B15780 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B15780 = 1;
  }
  baseWindow = (UnityEngine_Object_o *)this->fields.baseWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
  StandFigureBack__DestroyFigure(this, v5);
  transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(transform, 0, 0LL);
  *(_WORD *)&this->fields.isFirstLoading = 0;
  this->fields.isDisp = 0;
  v8 = (UnityEngine_Object_o *)this->fields.baseWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Inequality(v8, 0LL, 0LL) )
  {
    closeTransform = (UnityEngine_Object_o *)this->fields.closeTransform;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
    if ( UnityEngine_Object__op_Inequality(closeTransform, 0LL, 0LL) )
    {
      transform = this->fields.baseWindow;
      if ( transform )
      {
        transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
        v11 = this->fields.closeTransform;
        if ( v11 )
        {
          v12 = (UnityEngine_Transform_o *)transform;
          *(UnityEngine_Vector3_o *)&v13 = UnityEngine_Transform__get_position(v11, 0LL);
          if ( v12 )
          {
            UnityEngine_Transform__set_position(v12, *(UnityEngine_Vector3_o *)&v13, 0LL);
            return;
          }
        }
      }
LABEL_22:
      sub_1BCAA3C(transform, v5);
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  __int64 v14; // x1
  UnityEngine_Object_o *baseWindow; // x20
  __int64 v16; // x1
  UnityEngine_Object_o *closeTransform; // x20
  UnityEngine_Transform_o *v18; // x8
  UnityEngine_Transform_o *v19; // x19
  int v20; // s0

  if ( (byte_4B15782 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, callback, method);
    byte_4B15782 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  StandFigureBack__DestroyFigure(this, v7);
  this->fields.baseCallbackFunc = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.baseCallbackFunc,
    (int64_t)callback,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  this->fields.isDispRequest = 1;
  baseWindow = (UnityEngine_Object_o *)this->fields.baseWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
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
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
    if ( UnityEngine_Object__op_Inequality(closeTransform, 0LL, 0LL) )
    {
      gameObject = this->fields.baseWindow;
      if ( gameObject )
      {
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
        v18 = this->fields.closeTransform;
        if ( v18 )
        {
          v19 = (UnityEngine_Transform_o *)gameObject;
          *(UnityEngine_Vector3_o *)&v20 = UnityEngine_Transform__get_position(v18, 0LL);
          if ( v19 )
          {
            UnityEngine_Transform__set_position(v19, *(UnityEngine_Vector3_o *)&v20, 0LL);
            return;
          }
        }
      }
LABEL_18:
      sub_1BCAA3C(gameObject, v6);
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
  __int64 v6; // x2
  System_Collections_Generic_List_object__o *standFigureCollectList; // x0
  System_Collections_Generic_List_object__o *v8; // x8
  System_Collections_Generic_List_object__o *v9; // x19

  if ( (byte_4B1577F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_StandFigureCollect__Remove__, *(_QWORD *)&index, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v5, v6);
    byte_4B1577F = 1;
  }
  standFigureCollectList = (System_Collections_Generic_List_object__o *)this->fields.standFigureCollectList;
  if ( !standFigureCollectList
    || (standFigureCollectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                standFigureCollectList,
                                                                                index,
                                                                                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__),
        (v8 = (System_Collections_Generic_List_object__o *)this->fields.standFigureCollectList) == 0LL)
    || (v9 = standFigureCollectList,
        standFigureCollectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___Remove(
                                                                                v8,
                                                                                (Il2CppObject *)standFigureCollectList,
                                                                                (const MethodInfo_35A3184 *)Method_System_Collections_Generic_List_StandFigureCollect__Remove__),
        !v9) )
  {
    sub_1BCAA3C(standFigureCollectList, *(_QWORD *)&index);
  }
  return *(UIStandFigureR_o **)&v9->fields._size;
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
  const MethodInfo *v31; // x3
  Il2CppObject *Item; // x0
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  UIStandFigureR_o *monitor; // x22
  System_Action_o *v37; // x25
  _BOOL8 v38; // x0
  __int64 v39; // x1
  Il2CppObject *current; // x24
  Il2CppClass *klass; // x8
  UIStandFigureR_o *v42; // x0
  _BOOL8 v43; // x0
  __int64 v44; // x1
  Il2CppClass *v45; // x8
  UIStandFigureR_o *v46; // x0
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  System_Action_o *v50; // x20
  const MethodInfo *v51; // x2
  System_Collections_IEnumerator_o *AllAssetBundle; // x0
  System_Collections_Generic_List_Enumerator_object__o v53; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v54; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B15788 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&svtId, *(_QWORD *)&imageLimitCount);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_StandFigureCollect___, v15, v16);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Count_StandFigureCollect___, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v27, v28);
    sub_1BCA7E0(&Method_StandFigureBack_EndLoad__, v29, v30);
    byte_4B15788 = 1;
  }
  memset(&v54, 0, sizeof(v54));
  StandFigureBack__InitStandFigure(this, callback, *(const MethodInfo **)&imageLimitCount);
  StandFigureBack__CreatePrefab(this, svtId, imageLimitCount, v31);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.standFigureCollectList,
         (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_StandFigureCollect___) )
  {
    Item = (Il2CppObject *)System_Linq_Enumerable__Count_object_(
                             (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.standFigureCollectList,
                             (const MethodInfo_2F2DF88 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
    if ( !this->fields.standFigureCollectList )
      goto LABEL_24;
    if ( (int)Item < 2 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)this->fields.standFigureCollectList,
               0,
               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
      if ( Item )
      {
        monitor = (UIStandFigureR_o *)Item[1].monitor;
        v37 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v33, v34, v35);
        System_Action___ctor(v37, (Il2CppObject *)this, Method_StandFigureBack_EndLoad__, 0LL);
        if ( monitor )
        {
          UIStandFigureR__SetCharacter_41769076(monitor, svtId, imageLimitCount, offsetKind, faceType, v37, 0LL);
          return;
        }
      }
LABEL_24:
      sub_1BCAA3C(Item, v33);
    }
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v53,
      (System_Collections_Generic_List_object__o *)this->fields.standFigureCollectList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    v54 = v53;
    while ( 1 )
    {
      v38 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v54,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
      if ( !v38 )
        break;
      current = v54.fields._current;
      if ( !v54.fields._current )
        sub_1BCAA3C(v38, v39);
      klass = v54.fields._current[1].klass;
      if ( !klass )
        sub_1BCAA3C(v38, v39);
      v42 = (UIStandFigureR_o *)v54.fields._current[1].monitor;
      if ( !v42 )
        sub_1BCAA3C(0LL, v39);
      v43 = UIStandFigureR__SetCharacterForImageId(
              v42,
              (int32_t)klass->_1.byval_arg.data,
              offsetKind,
              faceType,
              0,
              0LL,
              0,
              0LL);
      v45 = current[1].klass;
      if ( !v45 )
        sub_1BCAA3C(v43, v44);
      v46 = (UIStandFigureR_o *)current[1].monitor;
      if ( !v46 )
        sub_1BCAA3C(0LL, v44);
      UIStandFigureR__SetDepth(
        v46,
        (HIDWORD(v45->_1.byval_arg.data) & ~(SHIDWORD(v45->_1.byval_arg.data) >> 31)) + depth,
        0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v54,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    v50 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v47, v48, v49);
    System_Action___ctor(v50, (Il2CppObject *)this, Method_StandFigureBack_EndLoad__, 0LL);
    AllAssetBundle = StandFigureBack__WaitForLoadAllAssetBundle(this, v50, v51);
    UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, AllAssetBundle, 0LL);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *standFigureCollectList; // x0

  if ( (byte_4B15784 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_StandFigureCollect___, *(_QWORD *)&faceType, *(_QWORD *)&index);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_StandFigureCollect__get_Count__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v11, v12);
    byte_4B15784 = 1;
  }
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.standFigureCollectList,
         (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_StandFigureCollect___) )
  {
    standFigureCollectList = (System_Collections_Generic_List_object__o *)this->fields.standFigureCollectList;
    if ( standFigureCollectList )
    {
      if ( standFigureCollectList->fields._size < index )
        return;
      standFigureCollectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                              standFigureCollectList,
                                                                              index,
                                                                              (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
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
    sub_1BCAA3C(standFigureCollectList, v13);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_object__o *standFigureCollectList; // x0
  _BOOL8 v14; // x0
  __int64 v15; // x1
  UIStandFigureR_o *monitor; // x0
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B15785 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__,
      *(_QWORD *)&faceType,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__, v11, v12);
    byte_4B15785 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  standFigureCollectList = (System_Collections_Generic_List_object__o *)this->fields.standFigureCollectList;
  if ( !standFigureCollectList )
    sub_1BCAA3C(0LL, *(_QWORD *)&faceType);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    standFigureCollectList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v14 )
      break;
    if ( !v17.fields._current )
      sub_1BCAA3C(v14, v15);
    monitor = (UIStandFigureR_o *)v17.fields._current[1].monitor;
    if ( !monitor )
      sub_1BCAA3C(0LL, v15);
    UIStandFigureR__SetFace(monitor, faceType, fadeTime, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StandFigureBack__SetFaceTypeAndForm(
        StandFigureBack_o *this,
        int32_t faceType,
        int32_t formId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_object__o *standFigureCollectList; // x0
  _BOOL8 v14; // x0
  __int64 v15; // x1
  UIStandFigureR_o *monitor; // x0
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B15786 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__,
      *(_QWORD *)&faceType,
      *(_QWORD *)&formId);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__, v11, v12);
    byte_4B15786 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  standFigureCollectList = (System_Collections_Generic_List_object__o *)this->fields.standFigureCollectList;
  if ( !standFigureCollectList )
    sub_1BCAA3C(0LL, *(_QWORD *)&faceType);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    standFigureCollectList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v14 )
      break;
    if ( !v17.fields._current )
      sub_1BCAA3C(v14, v15);
    monitor = (UIStandFigureR_o *)v17.fields._current[1].monitor;
    if ( !monitor )
      sub_1BCAA3C(0LL, v15);
    UIStandFigureR__SetFace_41776260(monitor, faceType, formId, 0LL, 0.0, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
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
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x0
  int v35; // w28
  const MethodInfo *v36; // x3
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  System_Action_o *baseCallbackFunc; // x20
  UIStandFigureR_o *Item; // x0
  __int64 v42; // x1
  _BOOL8 v43; // x0
  __int64 v44; // x1
  Il2CppObject *current; // x27
  Il2CppClass *klass; // x8
  UIStandFigureR_o *monitor; // x0
  _BOOL8 v48; // x0
  __int64 v49; // x1
  Il2CppClass *v50; // x8
  UIStandFigureR_o *v51; // x0
  const MethodInfo *v52; // x2
  System_Collections_IEnumerator_o *AllAssetBundle; // x0
  System_Collections_Generic_List_Enumerator_object__o v54; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v55; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B15789 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&svtId, *(_QWORD *)&imageLimitCount);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_StandFigureCollect___, v18, v19);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Count_StandFigureCollect___, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__, v24, v25);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__, v26, v27);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__, v28, v29);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v30, v31);
    sub_1BCA7E0(&Method_StandFigureBack_EndLoad__, v32, v33);
    byte_4B15789 = 1;
  }
  memset(&v55, 0, sizeof(v55));
  standFigureCollectList = this->fields.standFigureCollectList;
  if ( standFigureCollectList )
    v35 = !System_Linq_Enumerable__Any_object_(
             (System_Collections_Generic_IEnumerable_TSource__o *)standFigureCollectList,
             (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_StandFigureCollect___);
  else
    v35 = 1;
  StandFigureBack__InitStandFigure(this, callback, *(const MethodInfo **)&imageLimitCount);
  StandFigureBack__CreatePrefab(this, svtId, imageLimitCount, v36);
  if ( v35 )
  {
    baseCallbackFunc = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v37, v38, v39);
    System_Action___ctor(baseCallbackFunc, (Il2CppObject *)this, Method_StandFigureBack_EndLoad__, 0LL);
  }
  else
  {
    baseCallbackFunc = this->fields.baseCallbackFunc;
  }
  this->fields.isFirstLoading = v35;
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.standFigureCollectList,
         (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_StandFigureCollect___) )
  {
    Item = (UIStandFigureR_o *)System_Linq_Enumerable__Count_object_(
                                 (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.standFigureCollectList,
                                 (const MethodInfo_2F2DF88 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
    if ( !this->fields.standFigureCollectList )
      goto LABEL_30;
    if ( (int)Item < 2 )
    {
      Item = (UIStandFigureR_o *)System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)this->fields.standFigureCollectList,
                                   0,
                                   (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
      if ( Item )
      {
        Item = (UIStandFigureR_o *)Item->fields.m_CancellationTokenSource;
        if ( Item )
        {
          UIStandFigureR__SetCharacter_41769072(
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
      sub_1BCAA3C(Item, v42);
    }
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v54,
      (System_Collections_Generic_List_object__o *)this->fields.standFigureCollectList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    v55 = v54;
    while ( 1 )
    {
      v43 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v55,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
      if ( !v43 )
        break;
      current = v55.fields._current;
      if ( !v55.fields._current )
        sub_1BCAA3C(v43, v44);
      klass = v55.fields._current[1].klass;
      if ( !klass )
        sub_1BCAA3C(v43, v44);
      monitor = (UIStandFigureR_o *)v55.fields._current[1].monitor;
      if ( !monitor )
        sub_1BCAA3C(0LL, v44);
      v48 = UIStandFigureR__SetCharacterForImageId(
              monitor,
              (int32_t)klass->_1.byval_arg.data,
              offsetKind,
              faceType,
              formId,
              0LL,
              isPhotoWithMaster,
              0LL);
      v50 = current[1].klass;
      if ( !v50 )
        sub_1BCAA3C(v48, v49);
      v51 = (UIStandFigureR_o *)current[1].monitor;
      if ( !v51 )
        sub_1BCAA3C(0LL, v49);
      UIStandFigureR__SetDepth(
        v51,
        (HIDWORD(v50->_1.byval_arg.data) & ~(SHIDWORD(v50->_1.byval_arg.data) >> 31)) + depth,
        0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v55,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    AllAssetBundle = StandFigureBack__WaitForLoadAllAssetBundle(this, baseCallbackFunc, v52);
    UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, AllAssetBundle, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall StandFigureBack__WaitForLoadAllAssetBundle(
        StandFigureBack_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x21
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4B1578A & 1) == 0 )
  {
    sub_1BCA7E0(&StandFigureBack__WaitForLoadAllAssetBundle_d__31_TypeInfo, action, method);
    byte_4B1578A = 1;
  }
  v6 = sub_1BCAA2C(StandFigureBack__WaitForLoadAllAssetBundle_d__31_TypeInfo, action, method, v3);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_DWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 32), (int64_t)this, v7, v8, v9, v10, v11, v12);
  *(_QWORD *)(v6 + 40) = action;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 40), (int64_t)action, v13, v14, v15, v16, v17, v18);
  return (System_Collections_IEnumerator_o *)v6;
}


bool __fastcall StandFigureBack__get_IsBusy(StandFigureBack_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v3);
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
  __int64 v2; // x2
  StandFigureBack__WaitForLoadAllAssetBundle_d__31_o *v3; // x19
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
  int32_t _1__state; // w8
  struct StandFigureBack_o *_4__this; // x23
  _BOOL8 v22; // x0
  __int64 v23; // x1
  void *monitor; // x8
  UnityEngine_Behaviour_o *v25; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  System_Collections_Generic_IEnumerable_TSource__o *standFigureCollectList; // x20
  StandFigureBack___c_c *v30; // x0
  System_Func_object__bool__o *_9__31_0; // x21
  Il2CppObject *v32; // x22
  struct StandFigureBack___c_StaticFields *static_fields; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  _BOOL8 v52; // x0
  __int64 v53; // x1
  void *v54; // x8
  UnityEngine_Behaviour_o *v55; // x0
  PartyOrganizationUtility_o *p__2__current; // x19
  bool result; // w0
  System_Collections_Generic_List_Enumerator_object__o v58; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v59; // [xsp+20h] [xbp-60h] BYREF

  v3 = this;
  if ( (byte_4B15791 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Count_StandFigureCollect___, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_StandFigureCollect___, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__, v10, v11);
    sub_1BCA7E0(&System_Func_StandFigureCollect__bool__TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__, v14, v15);
    sub_1BCA7E0(&Method_StandFigureBack___c__WaitForLoadAllAssetBundle_b__31_0__, v16, v17);
    this = (StandFigureBack__WaitForLoadAllAssetBundle_d__31_o *)sub_1BCA7E0(&StandFigureBack___c_TypeInfo, v18, v19);
    byte_4B15791 = 1;
  }
  memset(&v59, 0, sizeof(v59));
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state == 1 )
  {
    v3->fields.__1__state = -1;
    goto LABEL_22;
  }
  if ( !_1__state )
  {
    v3->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_41;
    this = (StandFigureBack__WaitForLoadAllAssetBundle_d__31_o *)_4__this->fields.standFigureCollectList;
    if ( !this )
      goto LABEL_41;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v58,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    v59 = v58;
    while ( 1 )
    {
      v22 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v59,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
      if ( !v22 )
        break;
      if ( !v59.fields._current )
        sub_1BCAA3C(v22, v23);
      monitor = v59.fields._current[1].monitor;
      if ( !monitor )
        sub_1BCAA3C(v22, v23);
      v25 = (UnityEngine_Behaviour_o *)*((_QWORD *)monitor + 4);
      if ( !v25 )
        sub_1BCAA3C(0LL, v23);
      UnityEngine_Behaviour__set_enabled(v25, 0, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v59,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    standFigureCollectList = (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.standFigureCollectList;
    v30 = StandFigureBack___c_TypeInfo;
    if ( !StandFigureBack___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(StandFigureBack___c_TypeInfo, v26);
      v30 = StandFigureBack___c_TypeInfo;
    }
    _9__31_0 = (System_Func_object__bool__o *)v30->static_fields->__9__31_0;
    if ( !_9__31_0 )
    {
      if ( !v30->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v30, v26);
        v30 = StandFigureBack___c_TypeInfo;
      }
      v32 = (Il2CppObject *)v30->static_fields->__9;
      _9__31_0 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                  System_Func_StandFigureCollect__bool__TypeInfo,
                                                  v26,
                                                  v27,
                                                  v28);
      System_Func_object__bool____ctor(
        _9__31_0,
        v32,
        Method_StandFigureBack___c__WaitForLoadAllAssetBundle_b__31_0__,
        0LL);
      static_fields = StandFigureBack___c_TypeInfo->static_fields;
      static_fields->__9__31_0 = (struct System_Func_StandFigureCollect__bool__o *)_9__31_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__31_0,
        (int64_t)_9__31_0,
        v34,
        v35,
        v36,
        v37,
        v38,
        v39);
    }
    this = (StandFigureBack__WaitForLoadAllAssetBundle_d__31_o *)System_Linq_Enumerable__Where_object_(
                                                                   standFigureCollectList,
                                                                   (System_Func_TSource__bool__o *)_9__31_0,
                                                                   (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_StandFigureCollect___);
    if ( !v3 )
      goto LABEL_41;
    v3->fields._assetRendered_5__2 = (struct System_Collections_Generic_IEnumerable_StandFigureCollect__o *)this;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&v3->fields._assetRendered_5__2,
      (int64_t)this,
      v40,
      v41,
      v42,
      v43,
      v44,
      v45);
LABEL_22:
    this = (StandFigureBack__WaitForLoadAllAssetBundle_d__31_o *)System_Linq_Enumerable__Count_object_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)v3->fields._assetRendered_5__2,
                                                                   (const MethodInfo_2F2DF88 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
    if ( _4__this )
    {
      if ( (_DWORD)this != System_Linq_Enumerable__Count_object_(
                             (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.standFigureCollectList,
                             (const MethodInfo_2F2DF88 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___) )
      {
        v3->fields.__2__current = 0LL;
        p__2__current = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
        sub_1BCA784(p__2__current, 0LL, v46, v47, v48, v49, v50, v51);
        result = 1;
        *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
        return result;
      }
      this = (StandFigureBack__WaitForLoadAllAssetBundle_d__31_o *)_4__this->fields.standFigureCollectList;
      if ( this )
      {
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v58,
          (System_Collections_Generic_List_object__o *)this,
          (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
        v59 = v58;
        while ( 1 )
        {
          v52 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v59,
                  (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
          if ( !v52 )
            break;
          if ( !v59.fields._current )
            sub_1BCAA3C(v52, v53);
          v54 = v59.fields._current[1].monitor;
          if ( !v54 )
            sub_1BCAA3C(v52, v53);
          v55 = (UnityEngine_Behaviour_o *)*((_QWORD *)v54 + 4);
          if ( !v55 )
            sub_1BCAA3C(0LL, v53);
          UnityEngine_Behaviour__set_enabled(v55, 1, 0LL);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v59,
          (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
        ActionExtensions__Call(v3->fields.action, 0LL);
        return 0;
      }
    }
LABEL_41:
    sub_1BCAA3C(this, method);
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
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_StandFigureBack__WaitForLoadAllAssetBundle_d__31_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B1578F & 1) == 0 )
  {
    sub_1BCA7E0(&StandFigureBack___c_TypeInfo, v1, v2);
    byte_4B1578F = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(StandFigureBack___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  StandFigureBack___c_TypeInfo->static_fields->__9 = (struct StandFigureBack___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)StandFigureBack___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
  __int64 v5; // x1
  UnityEngine_Object_o *v6; // x19

  if ( (byte_4B15790 & 1) == 0 )
  {
    this = (StandFigureBack___c_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, x, method);
    byte_4B15790 = 1;
  }
  if ( !x
    || (standFigure_k__BackingField = x->fields._standFigure_k__BackingField) == 0LL
    || (this = (StandFigureBack___c_o *)standFigure_k__BackingField->fields.bodyTexture) == 0LL )
  {
    sub_1BCAA3C(this, x);
  }
  v6 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(StandFigureBack___c_o *, void *, const MethodInfo *))this->klass[1].vtable._3_ToString.method)(
                                 this,
                                 this->klass[2]._1.image,
                                 method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  return UnityEngine_Object__op_Inequality(v6, 0LL, 0LL);
}