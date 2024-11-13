void __fastcall EventInfoTipsArchiveListViewManager___ctor(
        EventInfoTipsArchiveListViewManager_o *this,
        const MethodInfo *method)
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
  __int64 v14; // x1
  __int64 v15; // x2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1

  if ( (byte_4B1813B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__TypeInfo, v5, v6);
    byte_4B1813B = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__TypeInfo,
                                                      method,
                                                      v2,
                                                      v3);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__o *)v7;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.objectList, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v14, v15);
    byte_4B109C1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.initialScrollPosition.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.initialScrollPosition.fields.z = z;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventInfoTipsArchiveListViewManager__Awake(
        EventInfoTipsArchiveListViewManager_o *this,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoTipsArchiveListViewManager__CreateList(
        EventInfoTipsArchiveListViewManager_o *this,
        int32_t tabKind,
        EventInfoTipsArchiveListViewItem_o *item,
        System_Action_o *scrollAction,
        const MethodInfo *method)
{
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
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x20
  void *mainInfo; // x0
  __int64 v41; // x1
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  const MethodInfo *v48; // x1
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  const MethodInfo *v55; // x2
  System_Collections_Generic_List_int__o *IdList; // x0
  __int64 v57; // x2
  const MethodInfo *v58; // x3
  System_Collections_Generic_List_int__o *v59; // x22
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float x; // s8
  float y; // s10
  float z; // s9
  __int64 v64; // x2
  __int64 v65; // x3
  int32_t v66; // w24
  __int64 v67; // x26
  const MethodInfo *v68; // x2
  EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *StateData; // x0
  struct EventInfoTipsArchiveListViewManager_ViewObjectInfo_array *viewObjectInfoList; // x25
  System_Predicate_object__o *v71; // x27
  Il2CppObject *object; // x0
  Il2CppObject *monitor; // x25
  Il2CppObject *v74; // x27
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  int v81; // w8
  EventInfoTipsArchiveListViewObject_o *v82; // x25
  bool v83; // w26
  const MethodInfo *v84; // x5
  float v85; // s0
  const MethodInfo *v86; // x1
  int32_t Size; // w0
  int v88; // w8
  int v89; // w26
  float v90; // s10
  int32_t layer; // w0
  const MethodInfo *v92; // x1
  const MethodInfo *v93; // x2
  int64_t v94; // x2
  int32_t v95; // w3
  System_String_o *v96; // x4
  BattleSetupInfo_o *v97; // x5
  FollowerInfo_o *v98; // x6
  PartyListViewItem_o *v99; // x7
  __int64 v100; // x8
  _QWORD *v101; // x9
  __int64 v102; // x10
  __int64 v103; // x8
  const MethodInfo *v104; // x1
  UnityEngine_Object_o *scrollView; // x21
  const MethodInfo *v106; // x1
  __int64 v107; // x2
  __int64 v108; // x3
  struct UIScrollBar_o *scrollBar; // x8
  System_Collections_Generic_List_EventDelegate__o *onChange; // x21
  Il2CppObject *v111; // x23
  EventDelegate_Callback_o *v112; // x22
  __int64 v113; // x1
  __int64 v114; // x2
  __int64 v115; // x3
  struct UIScrollBar_o *v116; // x8
  System_Collections_Generic_List_EventDelegate__o *v117; // x21
  EventDelegate_Callback_o *v118; // x22
  __int64 v119; // x2
  __int64 v120; // x3
  struct UIScrollBar_o *v121; // x8
  System_Collections_Generic_List_EventDelegate__o *v122; // x19
  EventDelegate_Callback_o *v123; // x21
  int32_t DispLastId; // [xsp+Ch] [xbp-74h]
  System_Nullable_Vector3__o v125; // 0:x3.16
  UnityEngine_Vector3_o v126; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B18132 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Array_Find_EventInfoTipsArchiveListViewManager_ViewObjectInfo___,
      *(_QWORD *)&tabKind,
      item);
    sub_1BCA7E0(&EventDelegate_Callback_TypeInfo, v9, v10);
    sub_1BCA7E0(&EventDelegate_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_EventInfoTipsArchiveListViewManager_OnChangeScrollBarValue__, v13, v14);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_EventInfoTipsArchiveListViewObject___, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__Add__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Item__, v21, v22);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v23, v24);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v25, v26);
    sub_1BCA7E0(&System_Predicate_EventInfoTipsArchiveListViewManager_ViewObjectInfo__TypeInfo, v27, v28);
    sub_1BCA7E0(&Method_EventInfoTipsArchiveListViewManager___c__DisplayClass21_0__CreateList_b__0__, v29, v30);
    sub_1BCA7E0(&EventInfoTipsArchiveListViewManager___c__DisplayClass21_0_TypeInfo, v31, v32);
    sub_1BCA7E0(&Method_EventInfoTipsArchiveListViewManager___c__DisplayClass21_1__CreateList_b__1__, v33, v34);
    sub_1BCA7E0(&EventInfoTipsArchiveListViewManager___c__DisplayClass21_1_TypeInfo, v35, v36);
    sub_1BCA7E0(&Method_UIScrollView_OnScrollBar__, v37, v38);
    byte_4B18132 = 1;
  }
  v39 = sub_1BCAA2C(
          EventInfoTipsArchiveListViewManager___c__DisplayClass21_0_TypeInfo,
          *(_QWORD *)&tabKind,
          item,
          scrollAction);
  System_Object___ctor((Il2CppObject *)v39, 0LL);
  if ( !v39 )
    goto LABEL_45;
  *(_QWORD *)(v39 + 16) = scrollAction;
  sub_1BCA784((PartyOrganizationUtility_o *)(v39 + 16), (int64_t)scrollAction, v42, v43, v44, v45, v46, v47);
  EventInfoTipsArchiveListViewManager__DestroyList(this, v48);
  this->fields.mainInfo = item;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mainInfo, (int64_t)item, v49, v50, v51, v52, v53, v54);
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_45;
  IdList = EventInfoTipsArchiveListViewItem__GetIdList((EventInfoTipsArchiveListViewItem_o *)mainInfo, tabKind, v55);
  if ( IdList && this->fields.viewObjectInfoList )
  {
    v59 = IdList;
    if ( !byte_4B109C1 )
    {
      sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v41, v57);
      byte_4B109C1 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    x = static_fields->zeroVector.fields.x;
    y = static_fields->zeroVector.fields.y;
    z = static_fields->zeroVector.fields.z;
    DispLastId = EventInfoTipsArchiveListViewManager__GetDispLastId(this, v59, this->fields.mainInfo, v58);
    if ( v59->fields._size >= 1 )
    {
      v66 = 0;
      do
      {
        v67 = sub_1BCAA2C(EventInfoTipsArchiveListViewManager___c__DisplayClass21_1_TypeInfo, v41, v64, v65);
        System_Object___ctor((Il2CppObject *)v67, 0LL);
        mainInfo = (void *)System_Collections_Generic_List_int___get_Item(
                             v59,
                             v66,
                             (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__);
        if ( !v67 )
          goto LABEL_45;
        v41 = (unsigned int)mainInfo;
        *(_DWORD *)(v67 + 16) = (_DWORD)mainInfo;
        if ( !item )
          goto LABEL_45;
        StateData = EventInfoTipsArchiveListViewItem__GetStateData(item, (int32_t)mainInfo, v68);
        if ( StateData )
        {
          if ( StateData->fields.index >= 1 )
          {
            viewObjectInfoList = this->fields.viewObjectInfoList;
            v71 = (System_Predicate_object__o *)sub_1BCAA2C(
                                                  System_Predicate_EventInfoTipsArchiveListViewManager_ViewObjectInfo__TypeInfo,
                                                  v41,
                                                  v64,
                                                  v65);
            System_Predicate_object____ctor(
              v71,
              (Il2CppObject *)v67,
              Method_EventInfoTipsArchiveListViewManager___c__DisplayClass21_1__CreateList_b__1__,
              0LL);
            object = System_Array__Find_object_(
                       (System_Object_array *)viewObjectInfoList,
                       (System_Predicate_T__o *)v71,
                       (const MethodInfo_300CA48 *)Method_System_Array_Find_EventInfoTipsArchiveListViewManager_ViewObjectInfo___);
            if ( object )
            {
              monitor = (Il2CppObject *)object[1].monitor;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v41);
              v74 = UnityEngine_Object__Instantiate_object_(
                      monitor,
                      (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
              mainInfo = (void *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v74, 0LL, 0LL);
              if ( ((unsigned __int8)mainInfo & 1) == 0 )
              {
                if ( !v74 )
                  goto LABEL_45;
                mainInfo = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)v74,
                             (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_EventInfoTipsArchiveListViewObject___);
                if ( !mainInfo )
                  goto LABEL_45;
                v81 = *(_DWORD *)(v67 + 16);
                v82 = (EventInfoTipsArchiveListViewObject_o *)mainInfo;
                *((_DWORD *)mainInfo + 10) = v81;
                *((_QWORD *)mainInfo + 6) = item;
                v83 = v81 == DispLastId;
                sub_1BCA784(
                  (PartyOrganizationUtility_o *)((char *)mainInfo + 48),
                  (int64_t)item,
                  v75,
                  v76,
                  v77,
                  v78,
                  v79,
                  v80);
                *(_QWORD *)&v125.fields.hasValue = 0LL;
                *(_QWORD *)&v125.fields.value.fields.y = 0LL;
                v82->fields.isLast = v83;
                EventInfoTipsArchiveListViewObject__Init(v82, 2, 0LL, v85, v125, v84);
                Size = EventInfoTipsArchiveListViewObject__GetSize(v82, v86);
                v88 = Size >= 0 ? Size : Size + 1;
                v89 = v88 >> 1;
                v90 = y - (float)(v88 >> 1);
                GameObjectExtensions__SetParent_34336872((UnityEngine_GameObject_o *)v74, this->fields.listParent, 0LL);
                v126.fields.x = x;
                v126.fields.y = v90;
                v126.fields.z = z;
                GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)v74, v126, 0LL);
                GameObjectExtensions__ResetLocalRotation((UnityEngine_GameObject_o *)v74, 0LL);
                GameObjectExtensions__ResetLocalScale((UnityEngine_GameObject_o *)v74, 0LL);
                mainInfo = this->fields.listParent;
                if ( !mainInfo )
                  goto LABEL_45;
                layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)mainInfo, 0LL);
                UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)v74, layer, 0LL);
                EventInfoTipsArchiveListViewObject__SetBaseTransform(v82, v92);
                EventInfoTipsArchiveListViewObject__SetManager(v82, this, v93);
                mainInfo = this->fields.objectList;
                if ( !mainInfo )
                  goto LABEL_45;
                v100 = *((_QWORD *)mainInfo + 2);
                v101 = Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__Add__;
                ++*((_DWORD *)mainInfo + 7);
                if ( !v100 )
                  goto LABEL_45;
                v102 = *((int *)mainInfo + 6);
                if ( (unsigned int)v102 >= *(_DWORD *)(v100 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)mainInfo,
                    (Il2CppObject *)v82,
                    *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v101[4] + 192LL) + 112LL));
                }
                else
                {
                  v103 = v100 + 8 * v102;
                  *((_DWORD *)mainInfo + 6) = v102 + 1;
                  *(_QWORD *)(v103 + 32) = v82;
                  sub_1BCA784((PartyOrganizationUtility_o *)(v103 + 32), (int64_t)v82, v94, v95, v96, v97, v98, v99);
                }
                y = v90 - (float)(EventInfoTipsArchiveListViewObject__PartitionHeight(v82, v104) + v89);
              }
            }
          }
        }
      }
      while ( ++v66 < v59->fields._size );
    }
  }
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v41);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
  {
    mainInfo = this->fields.scrollView;
    if ( !mainInfo )
      goto LABEL_45;
    UIScrollView__ResetPosition((UIScrollView_o *)mainInfo, 0LL);
  }
  mainInfo = this->fields.scrollView;
  if ( !mainInfo )
    goto LABEL_45;
  mainInfo = UnityEngine_Component__get_transform((UnityEngine_Component_o *)mainInfo, 0LL);
  if ( !mainInfo )
    goto LABEL_45;
  this->fields.initialScrollPosition = UnityEngine_Transform__get_localPosition(
                                         (UnityEngine_Transform_o *)mainInfo,
                                         0LL);
  EventInfoTipsArchiveListViewManager__SetupTipsArchiveReadEndValue(this, v106);
  scrollBar = this->fields.scrollBar;
  if ( !scrollBar )
    goto LABEL_45;
  onChange = scrollBar->fields.onChange;
  v111 = (Il2CppObject *)this->fields.scrollView;
  v112 = (EventDelegate_Callback_o *)sub_1BCAA2C(EventDelegate_Callback_TypeInfo, v41, v107, v108);
  EventDelegate_Callback___ctor(v112, v111, Method_UIScrollView_OnScrollBar__, 0LL);
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v113);
  mainInfo = EventDelegate__Add(onChange, v112, 0LL);
  v116 = this->fields.scrollBar;
  if ( !v116
    || (v117 = v116->fields.onChange,
        v118 = (EventDelegate_Callback_o *)sub_1BCAA2C(EventDelegate_Callback_TypeInfo, v41, v114, v115),
        EventDelegate_Callback___ctor(
          v118,
          (Il2CppObject *)this,
          Method_EventInfoTipsArchiveListViewManager_OnChangeScrollBarValue__,
          0LL),
        mainInfo = EventDelegate__Add(v117, v118, 0LL),
        (v121 = this->fields.scrollBar) == 0LL) )
  {
LABEL_45:
    sub_1BCAA3C(mainInfo, v41);
  }
  v122 = v121->fields.onChange;
  v123 = (EventDelegate_Callback_o *)sub_1BCAA2C(EventDelegate_Callback_TypeInfo, v41, v119, v120);
  EventDelegate_Callback___ctor(
    v123,
    (Il2CppObject *)v39,
    Method_EventInfoTipsArchiveListViewManager___c__DisplayClass21_0__CreateList_b__0__,
    0LL);
  EventDelegate__Add(v122, v123, 0LL);
}


void __fastcall EventInfoTipsArchiveListViewManager__DestroyList(
        EventInfoTipsArchiveListViewManager_o *this,
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
  System_Collections_Generic_List_object__o *objectList; // x0
  __int64 v15; // x1
  __int64 v16; // x1
  UnityEngine_Object_o *gameObject; // x20
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__o *v18; // x8
  int32_t size; // w2
  int v20; // w9
  UnityEngine_Object_o *scrollView; // x20
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4B18135 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__Dispose__,
      method,
      v2);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__MoveNext__,
      v4,
      v5);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__get_Current__,
      v6,
      v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__Clear__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__GetEnumerator__, v10, v11);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v12, v13);
    byte_4B18135 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_20;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    objectList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__MoveNext__) )
  {
    if ( !v23.fields._current )
      sub_1BCAA3C(0LL, v15);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)v23.fields._current,
                                           0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
    UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__Dispose__);
  v18 = this->fields.objectList;
  if ( !v18 )
    goto LABEL_20;
  size = v18->fields._size;
  v20 = v18->fields._version + 1;
  v18->fields._size = 0;
  v18->fields._version = v20;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v18->fields._items, 0, size, 0LL);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
  {
    objectList = (System_Collections_Generic_List_object__o *)this->fields.scrollView;
    if ( objectList )
    {
      UIScrollView__ResetPosition((UIScrollView_o *)objectList, 0LL);
      return;
    }
LABEL_20:
    sub_1BCAA3C(objectList, method);
  }
}


int32_t __fastcall EventInfoTipsArchiveListViewManager__GetDispLastId(
        EventInfoTipsArchiveListViewManager_o *this,
        System_Collections_Generic_List_int__o *idList,
        EventInfoTipsArchiveListViewItem_o *item,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v5; // x20
  EventInfoTipsArchiveListViewManager_o *v6; // x21
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
  int32_t v17; // w23
  int32_t v18; // w22
  __int64 v19; // x24
  const MethodInfo *v20; // x2
  EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *StateData; // x0
  System_Object_array *viewObjectInfoList; // x25
  System_Predicate_object__o *v23; // x26

  v5 = idList;
  v6 = this;
  if ( (byte_4B18134 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Find_EventInfoTipsArchiveListViewManager_ViewObjectInfo___, idList, item);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Item__, v9, v10);
    sub_1BCA7E0(&System_Predicate_EventInfoTipsArchiveListViewManager_ViewObjectInfo__TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_EventInfoTipsArchiveListViewManager___c__DisplayClass23_0__GetDispLastId_b__0__, v13, v14);
    this = (EventInfoTipsArchiveListViewManager_o *)sub_1BCA7E0(
                                                      &EventInfoTipsArchiveListViewManager___c__DisplayClass23_0_TypeInfo,
                                                      v15,
                                                      v16);
    byte_4B18134 = 1;
  }
  if ( !v5 )
    goto LABEL_16;
  if ( v5->fields._size >= 1 )
  {
    v17 = 0;
    v18 = 0;
    while ( 1 )
    {
      v19 = sub_1BCAA2C(EventInfoTipsArchiveListViewManager___c__DisplayClass23_0_TypeInfo, idList, item, method);
      System_Object___ctor((Il2CppObject *)v19, 0LL);
      this = (EventInfoTipsArchiveListViewManager_o *)System_Collections_Generic_List_int___get_Item(
                                                        v5,
                                                        v17,
                                                        (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !v19 )
        break;
      idList = (System_Collections_Generic_List_int__o *)(unsigned int)this;
      *(_DWORD *)(v19 + 16) = (_DWORD)this;
      if ( !item )
        break;
      StateData = EventInfoTipsArchiveListViewItem__GetStateData(item, (int32_t)this, v20);
      if ( StateData )
      {
        if ( StateData->fields.index >= 1 )
        {
          viewObjectInfoList = (System_Object_array *)v6->fields.viewObjectInfoList;
          v23 = (System_Predicate_object__o *)sub_1BCAA2C(
                                                System_Predicate_EventInfoTipsArchiveListViewManager_ViewObjectInfo__TypeInfo,
                                                idList,
                                                item,
                                                method);
          System_Predicate_object____ctor(
            v23,
            (Il2CppObject *)v19,
            Method_EventInfoTipsArchiveListViewManager___c__DisplayClass23_0__GetDispLastId_b__0__,
            0LL);
          if ( System_Array__Find_object_(
                 viewObjectInfoList,
                 (System_Predicate_T__o *)v23,
                 (const MethodInfo_300CA48 *)Method_System_Array_Find_EventInfoTipsArchiveListViewManager_ViewObjectInfo___) )
          {
            v18 = *(_DWORD *)(v19 + 16);
          }
        }
      }
      if ( ++v17 >= v5->fields._size )
        return v18;
    }
LABEL_16:
    sub_1BCAA3C(this, idList);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoTipsArchiveListViewManager__OnChangeScrollBarValue(
        EventInfoTipsArchiveListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *scrollBar; // x20
  const MethodInfo *v9; // x1
  void *scrollView; // x0
  float v11; // s1
  int v12; // w8
  int32_t v13; // w20
  int v14; // w23
  float v15; // s9
  EventInfoTipsArchiveListViewObject_o *v16; // x21
  UnityEngine_Vector2_o ViewSize; // kr00_8
  const MethodInfo *v18; // x1
  float ReadEndValue_k__BackingField; // s8
  const MethodInfo *v20; // x2
  float height; // s0
  int v22; // w8
  struct EventInfoTipsArchiveListViewItem_o *mainInfo; // x8
  struct TipsArchiveStateManager_o *tipsArchiveStateManager; // x8

  if ( (byte_4B18139 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__get_Item__, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    byte_4B18139 = 1;
  }
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(scrollBar, 0LL, 0LL) )
  {
    scrollView = this->fields.scrollView;
    if ( !scrollView )
      goto LABEL_30;
    scrollView = UnityEngine_Component__get_transform((UnityEngine_Component_o *)scrollView, 0LL);
    if ( !scrollView )
      goto LABEL_30;
    *(UnityEngine_Vector3_o *)(&v11 - 1) = UnityEngine_Transform__get_localPosition(
                                             (UnityEngine_Transform_o *)scrollView,
                                             0LL);
    scrollView = this->fields.objectList;
    if ( !scrollView )
      goto LABEL_30;
    v12 = *((_DWORD *)scrollView + 6);
    if ( v12 >= 1 )
    {
      v13 = 0;
      v14 = -v12;
      v15 = v11 - this->fields.initialScrollPosition.fields.y;
      do
      {
        scrollView = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)scrollView,
                       v13,
                       (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__get_Item__);
        v16 = (EventInfoTipsArchiveListViewObject_o *)scrollView;
        if ( v14 + v13 == -1 )
        {
          if ( !scrollView )
            break;
          scrollView = (void *)EventInfoTipsArchiveListViewObject__GetSize(
                                 (EventInfoTipsArchiveListViewObject_o *)scrollView,
                                 v9);
          if ( !this->fields.scrollViewPanel )
            break;
          if ( COERCE_FLOAT(LODWORD(UIPanel__GetViewSize((UIPanel_o *)this[32LL], 0LL).fields.y)) > (float)(int)scrollView )
          {
            scrollView = this->fields.scrollViewPanel;
            if ( !scrollView )
              break;
            ViewSize = UIPanel__GetViewSize((UIPanel_o *)scrollView, 0LL);
            v15 = v15 + (float)(ViewSize.fields.y - (float)EventInfoTipsArchiveListViewObject__GetSize(v16, v18));
          }
        }
        else if ( !scrollView )
        {
          break;
        }
        scrollView = this->fields.scrollViewPanel;
        if ( !scrollView )
          break;
        ReadEndValue_k__BackingField = v16->fields._ReadEndValue_k__BackingField;
        height = UIPanel__get_height((UIPanel_o *)scrollView, 0LL);
        if ( ReadEndValue_k__BackingField <= v15 && v15 <= (float)(ReadEndValue_k__BackingField + height) )
        {
          scrollView = this->fields.mainInfo;
          if ( !scrollView )
            break;
          scrollView = EventInfoTipsArchiveListViewItem__GetStateData(
                         (EventInfoTipsArchiveListViewItem_o *)scrollView,
                         v16->fields.id,
                         v20);
          if ( scrollView )
          {
            v22 = *((_DWORD *)scrollView + 6);
            if ( (v22 & 1) != 0 )
            {
              *((_DWORD *)scrollView + 6) = v22 & 0xFFFFFFFE;
              mainInfo = this->fields.mainInfo;
              if ( !mainInfo )
                break;
              tipsArchiveStateManager = mainInfo->fields.tipsArchiveStateManager;
              if ( !tipsArchiveStateManager )
                break;
              tipsArchiveStateManager->fields.isModfiy = 1;
            }
          }
        }
        ++v13;
        if ( !(v14 + v13) )
          return;
        scrollView = this->fields.objectList;
      }
      while ( scrollView );
LABEL_30:
      sub_1BCAA3C(scrollView, v9);
    }
  }
}


void __fastcall EventInfoTipsArchiveListViewManager__OnClickListView(
        EventInfoTipsArchiveListViewManager_o *this,
        EventInfoTipsArchiveListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_callbackFunc; // x0
  struct EventInfoTipsArchiveListViewManager_CallbackFunc_o *v9; // x20
  struct EventInfoTipsArchiveListViewManager_CallbackFunc_o *callbackFunc; // t1
  __int64 v12; // x0
  const MethodInfo *v13; // x1
  unsigned int Kind; // w0

  if ( this->fields.initMode == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (PartyOrganizationUtility_o *)&this->fields.callbackFunc;
    v9 = callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_1BCA784(p_callbackFunc, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_1BCAA3C(v12, v13);
      Kind = EventInfoTipsArchiveListViewObject__GetKind(obj, v13);
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD, _QWORD))v9->fields.m_target)(
        v9->fields.original_method_info,
        0LL,
        Kind,
        *(_QWORD *)&v9->fields.extra_arg);
    }
  }
}


void __fastcall EventInfoTipsArchiveListViewManager__OnMoveEnd(
        EventInfoTipsArchiveListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t callbackCount; // w8
  bool v5; // vf
  int32_t v6; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v8; // x1
  UIScrollView_o *v9; // x0

  if ( (byte_4B18138 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B18138 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v5 = __OFSUB__(callbackCount, 1);
  v6 = callbackCount - 1;
  if ( v6 < 0 == v5 )
  {
    this->fields.callbackCount = v6;
    if ( !v6 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      if ( !UnityEngine_Object__op_Equality(scrollView, 0LL, 0LL) )
      {
        v9 = this->fields.scrollView;
        if ( !v9
          || (((void (__fastcall *)(UIScrollView_o *, __int64, Il2CppMethodPointer))v9->klass->vtable._8_UpdateScrollbars.method)(
                v9,
                1LL,
                v9->klass->vtable._9_SetDragAmount.methodPtr),
              (v9 = this->fields.scrollView) == 0LL) )
        {
          sub_1BCAA3C(v9, v8);
        }
        UIScrollView__UpdatePosition(v9, 0LL);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoTipsArchiveListViewManager__RequestListObject(
        EventInfoTipsArchiveListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
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
  System_Collections_Generic_List_object__o *objectList; // x0
  int32_t size; // w8
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  Il2CppObject *current; // x21
  System_Action_o *v25; // x22
  __int64 v26; // x0
  __int64 v27; // x1
  const MethodInfo *v28; // x5
  float v29; // s0
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-68h] BYREF
  System_Nullable_Vector3__o v31; // 0:x3.16

  if ( (byte_4B18137 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&mode, method);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__Dispose__,
      v5,
      v6);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__MoveNext__,
      v7,
      v8);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__get_Current__,
      v9,
      v10);
    sub_1BCA7E0(&Method_EventInfoTipsArchiveListViewManager_OnMoveEnd__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__get_Count__, v15, v16);
    sub_1BCA7E0(&StringLiteral_10069/*"OnMoveEnd"*/, v17, v18);
    byte_4B18137 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    sub_1BCAA3C(0LL, *(_QWORD *)&mode);
  size = objectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10069/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v30,
      objectList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v30,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__MoveNext__) )
    {
      current = v30.fields._current;
      v25 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v21, v22, v23);
      System_Action___ctor(v25, (Il2CppObject *)this, Method_EventInfoTipsArchiveListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BCAA3C(v26, v27);
      *(_QWORD *)&v31.fields.hasValue = 0LL;
      *(_QWORD *)&v31.fields.value.fields.y = 0LL;
      EventInfoTipsArchiveListViewObject__Init(
        (EventInfoTipsArchiveListViewObject_o *)current,
        mode,
        v25,
        v29,
        v31,
        v28);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v30,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__Dispose__);
  }
}


void __fastcall EventInfoTipsArchiveListViewManager__SetMode(
        EventInfoTipsArchiveListViewManager_o *this,
        int32_t mode,
        EventInfoTipsArchiveListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
    (int64_t)callback,
    (int64_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  EventInfoTipsArchiveListViewManager__SetMode_42768316(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoTipsArchiveListViewManager__SetMode_42768316(
        EventInfoTipsArchiveListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  EventInfoTipsArchiveListViewManager_o *v4; // x19
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__o *objectList; // x8

  v4 = this;
  if ( (byte_4B18136 & 1) == 0 )
  {
    this = (EventInfoTipsArchiveListViewManager_o *)sub_1BCA7E0(
                                                      &Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__get_Count__,
                                                      *(_QWORD *)&mode,
                                                      method);
    byte_4B18136 = 1;
  }
  objectList = v4->fields.objectList;
  v4->fields.initMode = mode;
  if ( !objectList )
    sub_1BCAA3C(this, *(_QWORD *)&mode);
  v4->fields.callbackCount = objectList->fields._size;
  if ( (unsigned int)(mode - 1) <= 2 )
    EventInfoTipsArchiveListViewManager__RequestListObject(v4, dword_C0DBF8[mode - 1], method);
}


void __fastcall EventInfoTipsArchiveListViewManager__SetObjectItem(
        EventInfoTipsArchiveListViewManager_o *this,
        EventInfoTipsArchiveListViewObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5
  float v4; // s0
  int32_t initMode; // w8
  int32_t v6; // w8
  System_Nullable_Vector3__o v7; // 0:x3.16

  initMode = this->fields.initMode;
  if ( initMode == 3 )
  {
    if ( obj )
    {
      v6 = 4;
      goto LABEL_9;
    }
LABEL_10:
    sub_1BCAA3C(this, obj);
  }
  if ( initMode != 1 )
  {
    if ( obj )
    {
      v6 = 2;
      goto LABEL_9;
    }
    goto LABEL_10;
  }
  if ( !obj )
    goto LABEL_10;
  v6 = 3;
LABEL_9:
  *(_QWORD *)&v7.fields.hasValue = 0LL;
  *(_QWORD *)&v7.fields.value.fields.y = 0LL;
  EventInfoTipsArchiveListViewObject__Init(obj, v6, 0LL, v4, v7, v3);
}


void __fastcall EventInfoTipsArchiveListViewManager__SetupTipsArchiveReadEndValue(
        EventInfoTipsArchiveListViewManager_o *this,
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
  UnityEngine_Component_o *scrollView; // x0
  UnityEngine_Component_o *v13; // x20
  float height; // s0
  float v15; // s9
  float v16; // s8
  _BOOL8 v17; // x0
  const MethodInfo *v18; // x1
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B1813A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIPanel___, method, v2);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__Dispose__,
      v4,
      v5);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__MoveNext__,
      v6,
      v7);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__get_Current__,
      v8,
      v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__GetEnumerator__, v10, v11);
    byte_4B1813A = 1;
  }
  memset(&v19, 0, sizeof(v19));
  scrollView = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !scrollView
    || (scrollView = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                  scrollView,
                                                  (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIPanel___)) == 0LL
    || (v13 = scrollView,
        height = UIPanel__get_height((UIPanel_o *)scrollView, 0LL),
        (scrollView = (UnityEngine_Component_o *)this->fields.objectList) == 0LL) )
  {
    sub_1BCAA3C(scrollView, method);
  }
  v15 = *((float *)&v13[13].klass + 1);
  v16 = height;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    (System_Collections_Generic_List_object__o *)scrollView,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__GetEnumerator__);
  while ( 1 )
  {
    v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__MoveNext__);
    if ( !v17 )
      break;
    if ( !v19.fields._current )
      sub_1BCAA3C(v17, v18);
    *((float *)&v19.fields._current[8].klass + 1) = fmaxf(
                                                      vabds_f32(
                                                        *((float *)&v19.fields._current[5].klass + 1)
                                                      + (float)((float)EventInfoTipsArchiveListViewObject__GetSize(
                                                                         (EventInfoTipsArchiveListViewObject_o *)v19.fields._current,
                                                                         v18)
                                                              * -0.5),
                                                        v15)
                                                    - v16,
                                                      0.0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__Dispose__);
}


void __fastcall EventInfoTipsArchiveListViewManager__UpdateNewIconDisp(
        EventInfoTipsArchiveListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__o *objectList; // x0
  _BOOL8 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  Il2CppObject *current; // x20
  EventInfoTipsArchiveListViewItem_o *mainInfo; // x0
  EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *StateData; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x2
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4B18133 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__Dispose__,
      method,
      v2);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__MoveNext__,
      v4,
      v5);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__get_Current__,
      v6,
      v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__GetEnumerator__, v8, v9);
    byte_4B18133 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BCAA3C(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewObject__GetEnumerator__);
  v20 = v19;
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v20,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__MoveNext__);
    if ( !v11 )
      break;
    current = v20.fields._current;
    if ( !v20.fields._current )
      sub_1BCAA3C(v11, v12);
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      sub_1BCAA3C(0LL, v12);
    StateData = EventInfoTipsArchiveListViewItem__GetStateData(mainInfo, (int32_t)v20.fields._current[2].monitor, v13);
    if ( !StateData )
      sub_1BCAA3C(0LL, v17);
    EventInfoTipsArchiveListViewObject__SetNewIconDisp(
      (EventInfoTipsArchiveListViewObject_o *)current,
      StateData->fields.state & 1,
      v18);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v20,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventInfoTipsArchiveListViewObject__Dispose__);
}


void __fastcall EventInfoTipsArchiveListViewManager__add_callbackFunc(
        EventInfoTipsArchiveListViewManager_o *this,
        EventInfoTipsArchiveListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct EventInfoTipsArchiveListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct EventInfoTipsArchiveListViewManager_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  EventInfoTipsArchiveListViewManager_o *v11; // x0
  EventInfoTipsArchiveListViewManager_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4B18130 & 1) == 0 )
  {
    sub_1BCA7E0(&EventInfoTipsArchiveListViewManager_CallbackFunc_TypeInfo, value, method);
    byte_4B18130 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (EventInfoTipsArchiveListViewManager_CallbackFunc_c *)v8->klass != EventInfoTipsArchiveListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BCACFC(v8);
  EventInfoTipsArchiveListViewManager__remove_callbackFunc(v11, v12, v13);
}


UIScrollBar_o *__fastcall EventInfoTipsArchiveListViewManager__get_ScrollBar(
        EventInfoTipsArchiveListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.scrollBar;
}


void __fastcall EventInfoTipsArchiveListViewManager__remove_callbackFunc(
        EventInfoTipsArchiveListViewManager_o *this,
        EventInfoTipsArchiveListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct EventInfoTipsArchiveListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct EventInfoTipsArchiveListViewManager_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  EventInfoTipsArchiveListViewManager_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4B18131 & 1) == 0 )
  {
    sub_1BCA7E0(&EventInfoTipsArchiveListViewManager_CallbackFunc_TypeInfo, value, method);
    byte_4B18131 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (EventInfoTipsArchiveListViewManager_CallbackFunc_c *)v8->klass != EventInfoTipsArchiveListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BCACFC(v8);
  EventInfoTipsArchiveListViewManager__Awake(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoTipsArchiveListViewManager_CallbackFunc___ctor(
        EventInfoTipsArchiveListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 2 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A0E8F8;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0E8A0;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall EventInfoTipsArchiveListViewManager_CallbackFunc__BeginInvoke(
        EventInfoTipsArchiveListViewManager_CallbackFunc_o *this,
        int32_t result,
        int32_t id,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v12[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v13; // [xsp+28h] [xbp-38h] BYREF
  int32_t v14; // [xsp+2Ch] [xbp-34h] BYREF

  v13 = id;
  v14 = result;
  if ( (byte_4B1813C & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&result, *(_QWORD *)&id);
    sub_1BCA7E0(&EventInfoTipsArchiveListViewManager_ResultKind_TypeInfo, v9, v10);
    byte_4B1813C = 1;
  }
  v12[2] = 0LL;
  v12[0] = j_il2cpp_value_box_0(EventInfoTipsArchiveListViewManager_ResultKind_TypeInfo, &v14);
  v12[1] = j_il2cpp_value_box_0(int_TypeInfo, &v13);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v12, callback, object);
}


void __fastcall EventInfoTipsArchiveListViewManager_CallbackFunc__EndInvoke(
        EventInfoTipsArchiveListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
}


void __fastcall EventInfoTipsArchiveListViewManager_CallbackFunc__Invoke(
        EventInfoTipsArchiveListViewManager_CallbackFunc_o *this,
        int32_t result,
        int32_t id,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    id,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall EventInfoTipsArchiveListViewManager_ViewObjectInfo___ctor(
        EventInfoTipsArchiveListViewManager_ViewObjectInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoTipsArchiveListViewManager___c__DisplayClass21_0___ctor(
        EventInfoTipsArchiveListViewManager___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoTipsArchiveListViewManager___c__DisplayClass21_0___CreateList_b__0(
        EventInfoTipsArchiveListViewManager___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.scrollAction, 0LL);
}


void __fastcall EventInfoTipsArchiveListViewManager___c__DisplayClass21_1___ctor(
        EventInfoTipsArchiveListViewManager___c__DisplayClass21_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventInfoTipsArchiveListViewManager___c__DisplayClass21_1___CreateList_b__1(
        EventInfoTipsArchiveListViewManager___c__DisplayClass21_1_o *this,
        EventInfoTipsArchiveListViewManager_ViewObjectInfo_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1BCAA3C(this, 0LL);
  return n->fields.Id == this->fields.id;
}


void __fastcall EventInfoTipsArchiveListViewManager___c__DisplayClass23_0___ctor(
        EventInfoTipsArchiveListViewManager___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventInfoTipsArchiveListViewManager___c__DisplayClass23_0___GetDispLastId_b__0(
        EventInfoTipsArchiveListViewManager___c__DisplayClass23_0_o *this,
        EventInfoTipsArchiveListViewManager_ViewObjectInfo_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1BCAA3C(this, 0LL);
  return n->fields.Id == this->fields.id;
}