void EventInfoPassportListViewManager___ctor(EventInfoPassportListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventInfoPassport__c *v3; // x0
  System_Collections_Generic_List_object__o *v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  if ( (byte_59399CD & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_EventInfoPassport___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_EventInfoPassport__TypeInfo);
    byte_59399CD = 1;
  }
  v3 = System_Collections_Generic_List_EventInfoPassport__TypeInfo;
  this->fields.requiredPassportCount = 10;
  v4 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(v3);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventInfoPassport___ctor__);
  this->fields.passportList = (struct System_Collections_Generic_List_EventInfoPassport__o *)v4;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.passportList, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventInfoPassportListViewManager__Awake(EventInfoPassportListViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *grid; // x20
  __int64 v4; // x1
  UnityEngine_Behaviour_o *transform; // x0
  UnityEngine_Object_o *scrollView; // x20

  if ( (byte_59399C3 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59399C3 = 1;
  }
  grid = (UnityEngine_Object_o *)this->fields.grid;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(grid, 0, 0) )
  {
    transform = (UnityEngine_Behaviour_o *)this->fields.grid;
    if ( !transform )
      goto LABEL_15;
    UnityEngine_Behaviour__set_enabled(transform, 0, 0);
  }
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
  {
    transform = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( transform )
    {
      transform = (UnityEngine_Behaviour_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)transform,
                                               0);
      if ( transform )
      {
        this->fields.initialScrollViewLocalPosition = UnityEngine_Transform__get_localPosition(
                                                        (UnityEngine_Transform_o *)transform,
                                                        0);
        return;
      }
    }
LABEL_15:
    sub_21FFECC(transform, v4);
  }
}


// local variable allocation has failed, the output may be wrong!
void EventInfoPassportListViewManager__CreateList(
        EventInfoPassportListViewManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  EventJobPassportMaster_o *Master_object; // x0
  struct System_Collections_Generic_List_EventInfoPassport__o *passportList; // x21
  struct EventInfoPassportListViewManager___c_StaticFields *list; // x8
  System_Predicate_object__o *_9__10_0; // x22
  Il2CppObject *v8; // x23
  struct EventInfoPassportListViewManager___c_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Collections_Generic_List_object__o *v16; // x21
  __int64 v17; // x1
  System_Collections_Generic_List_object__o *v18; // x28
  int32_t requiredPassportCount; // w20
  int32_t v20; // w23
  __int64 v21; // x25
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  EventJobPassportEntity_o *v28; // x24
  const MethodInfo *v29; // x4
  const MethodInfo *v30; // x2
  EventJobPassportEntity_o *v31; // x26
  EventInfoPassport_o *Passport; // x0
  EventInfoPassport_o **v33; // x24
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  __int64 v40; // x1
  UnityEngine_Object_o *v41; // x27
  const MethodInfo *v42; // x3
  const MethodInfo *v43; // x4
  EventInfoPassport_o *v44; // x0
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  __int64 v51; // x1
  UnityEngine_Object_o *v52; // x25
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  intptr_t v59; // x8
  _QWORD *v60; // x9
  __int64 MasterName_k__BackingField_low; // x10
  intptr_t v62; // x8
  System_String_o *v63; // x2
  System_String_o *v64; // x3
  int32_t v65; // w4
  int32_t v66; // w5
  bool v67; // w6
  bool v68; // w7
  struct System_Object_array *items; // x8
  _QWORD *v70; // x9
  System_Collections_Generic_List_object__o *v71; // x21
  EventInfoPassport_o *v72; // x27
  System_Action_o *v73; // x28
  const MethodInfo *v74; // x4
  EventInfoPassport_o *v75; // x25
  __int64 size; // x10
  Il2CppClass **v77; // x0
  __int64 v78; // x1
  Il2CppObject *current; // x20
  _BOOL8 v80; // x0
  __int64 v81; // x1
  _BOOL8 v82; // x0
  __int64 v83; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v85; // x1
  const MethodInfo *v86; // x1
  System_Collections_Generic_List_object__o *v87; // [xsp+8h] [xbp-A8h]
  int32_t eventIda; // [xsp+14h] [xbp-9Ch]
  System_Collections_Generic_List_Enumerator_object__o v89; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v90; // [xsp+30h] [xbp-80h] BYREF

  eventIda = eventId;
  if ( (byte_59399C4 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_EventJobPassportMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventInfoPassport__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventInfoPassport__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventInfoPassport__get_Current__);
    sub_21FFC50(&EventJobPassportEntity_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventInfoPassport__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventInfoPassport__Contains__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventInfoPassport__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventInfoPassport__RemoveAll__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventInfoPassport___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventJobPassportEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventJobPassportEntity__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_EventInfoPassport__TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&System_Predicate_EventInfoPassport__TypeInfo);
    sub_21FFC50(&Method_EventInfoPassportListViewManager___c__CreateList_b__10_0__);
    sub_21FFC50(&Method_EventInfoPassportListViewManager___c__DisplayClass10_0__CreateList_b__1__);
    sub_21FFC50(&EventInfoPassportListViewManager___c__DisplayClass10_0_TypeInfo);
    sub_21FFC50(&EventInfoPassportListViewManager___c_TypeInfo);
    byte_59399C4 = 1;
  }
  Master_object = (EventJobPassportMaster_o *)EventInfoPassportListViewManager___c_TypeInfo;
  passportList = this->fields.passportList;
  memset(&v90, 0, sizeof(v90));
  if ( !*(&EventInfoPassportListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventInfoPassportListViewManager___c_TypeInfo, *(_QWORD *)&eventId);
    Master_object = (EventJobPassportMaster_o *)EventInfoPassportListViewManager___c_TypeInfo;
  }
  list = (struct EventInfoPassportListViewManager___c_StaticFields *)Master_object[2].fields.list;
  _9__10_0 = (System_Predicate_object__o *)list->__9__10_0;
  if ( !_9__10_0 )
  {
    if ( !HIDWORD(Master_object[3].monitor) )
    {
      j_il2cpp_runtime_class_init_0(Master_object, *(_QWORD *)&eventId);
      list = EventInfoPassportListViewManager___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)list->__9;
    _9__10_0 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_EventInfoPassport__TypeInfo);
    System_Predicate_object____ctor(_9__10_0, v8, Method_EventInfoPassportListViewManager___c__CreateList_b__10_0__, 0);
    static_fields = EventInfoPassportListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__10_0 = (struct System_Predicate_EventInfoPassport__o *)_9__10_0;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&static_fields->__9__10_0,
      (int32_t)_9__10_0,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  if ( !passportList )
    goto LABEL_63;
  System_Collections_Generic_List_object___RemoveAll(
    (System_Collections_Generic_List_object__o *)passportList,
    (System_Predicate_T__o *)_9__10_0,
    (const MethodInfo_4451158 *)Method_System_Collections_Generic_List_EventInfoPassport__RemoveAll__);
  v16 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EventInfoPassport__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventInfoPassport___ctor__);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v17);
  Master_object = (EventJobPassportMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventJobPassportMaster___);
  if ( !Master_object )
    goto LABEL_63;
  Master_object = (EventJobPassportMaster_o *)EventJobPassportMaster__GetDisplayPassportEntityList(
                                                Master_object,
                                                eventIda,
                                                0);
  if ( !Master_object )
    goto LABEL_63;
  v18 = (System_Collections_Generic_List_object__o *)Master_object;
  if ( SLODWORD(Master_object->fields._MasterName_k__BackingField) <= this->fields.requiredPassportCount )
    requiredPassportCount = this->fields.requiredPassportCount;
  else
    requiredPassportCount = (int32_t)Master_object->fields._MasterName_k__BackingField;
  if ( requiredPassportCount >= 1 )
  {
    v20 = 0;
    v87 = v16;
    while ( 1 )
    {
      v21 = sub_21FFEBC(EventInfoPassportListViewManager___c__DisplayClass10_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v21, 0);
      if ( !v21 )
        goto LABEL_63;
      *(_QWORD *)(v21 + 24) = this;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v21 + 24), (int32_t)this, v22, v23, v24, v25, v26, v27);
      v28 = (EventJobPassportEntity_o *)sub_21FFEBC(EventJobPassportEntity_TypeInfo);
      EventJobPassportEntity___ctor(v28, 0);
      if ( v20 >= v18->fields._size )
        break;
      Master_object = (EventJobPassportMaster_o *)System_Collections_Generic_List_object___get_Item(
                                                    v18,
                                                    v20,
                                                    (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_EventJobPassportEntity__get_Item__);
      if ( !Master_object )
        goto LABEL_63;
      v31 = (EventJobPassportEntity_o *)Master_object;
      Passport = EventInfoPassportListViewManager__FindPassport(
                   this,
                   *(&Master_object->fields._MasterKind_k__BackingField + 1),
                   v30);
      *(_QWORD *)(v21 + 16) = Passport;
      v33 = (EventInfoPassport_o **)(v21 + 16);
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v21 + 16), (int32_t)Passport, v34, v35, v36, v37, v38, v39);
      v41 = *(UnityEngine_Object_o **)(v21 + 16);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v40);
      if ( UnityEngine_Object__op_Equality(v41, 0, 0) )
      {
        v44 = EventInfoPassportListViewManager__CreatePassport(this, v20, v31, 0, v43);
        *v33 = v44;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v21 + 16), (int32_t)v44, v45, v46, v47, v48, v49, v50);
        v52 = (UnityEngine_Object_o *)*v33;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v51);
        if ( UnityEngine_Object__op_Inequality(v52, 0, 0) )
        {
          Master_object = (EventJobPassportMaster_o *)this->fields.passportList;
          if ( !Master_object )
            goto LABEL_63;
          v59 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
          *(_QWORD *)&eventId = *v33;
          v60 = Method_System_Collections_Generic_List_EventInfoPassport__Add__;
          ++HIDWORD(Master_object->fields._MasterName_k__BackingField);
          if ( !v59 )
            goto LABEL_63;
          MasterName_k__BackingField_low = SLODWORD(Master_object->fields._MasterName_k__BackingField);
          if ( (unsigned int)MasterName_k__BackingField_low >= *(_DWORD *)(v59 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)Master_object,
              *(Il2CppObject **)&eventId,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
          }
          else
          {
            v62 = v59 + 8 * MasterName_k__BackingField_low;
            LODWORD(Master_object->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
            *(_QWORD *)(v62 + 32) = *(_QWORD *)&eventId;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v62 + 32), eventId, v53, v54, v55, v56, v57, v58);
          }
        }
      }
      else
      {
        v71 = v18;
        EventInfoPassportListViewManager__SetupPassportTransform(this, *v33, v20, v42);
        Master_object = (EventJobPassportMaster_o *)*v33;
        if ( !*v33 )
          goto LABEL_63;
        Master_object = (EventJobPassportMaster_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)Master_object,
                                                      0);
        if ( !Master_object )
          goto LABEL_63;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
        v72 = *(EventInfoPassport_o **)(v21 + 16);
        v73 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
        System_Action___ctor(
          v73,
          (Il2CppObject *)v21,
          Method_EventInfoPassportListViewManager___c__DisplayClass10_0__CreateList_b__1__,
          0);
        if ( !v72 )
          goto LABEL_63;
        EventInfoPassport__DisplayPassport(v72, v31, v73, 0, v74);
        v18 = v71;
        v16 = v87;
      }
      v75 = *v33;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&eventId);
      Master_object = (EventJobPassportMaster_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v75, 0, 0);
      if ( ((unsigned __int8)Master_object & 1) == 0 )
      {
        if ( !v16 )
          goto LABEL_63;
        items = v16->fields._items;
        *(_QWORD *)&eventId = *v33;
        v70 = Method_System_Collections_Generic_List_EventInfoPassport__Add__;
        ++v16->fields._version;
        if ( !items )
          goto LABEL_63;
LABEL_46:
        size = v16->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v16,
            *(Il2CppObject **)&eventId,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
        }
        else
        {
          v77 = &items->obj.klass + size;
          v16->fields._size = size + 1;
          v77[4] = *(Il2CppClass **)&eventId;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v77 + 4), eventId, v63, v64, v65, v66, v67, v68);
        }
      }
      if ( requiredPassportCount == ++v20 )
        goto LABEL_50;
    }
    if ( !v28 )
      goto LABEL_63;
    v28->fields.eventId = eventIda;
    Master_object = (EventJobPassportMaster_o *)EventInfoPassportListViewManager__CreatePassport(this, v20, v28, 1, v29);
    if ( !v16 )
      goto LABEL_63;
    items = v16->fields._items;
    v70 = Method_System_Collections_Generic_List_EventInfoPassport__Add__;
    ++v16->fields._version;
    if ( !items )
      goto LABEL_63;
    *(_QWORD *)&eventId = Master_object;
    goto LABEL_46;
  }
LABEL_50:
  Master_object = (EventJobPassportMaster_o *)this->fields.passportList;
  if ( !Master_object )
    goto LABEL_63;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v89,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_EventInfoPassport__GetEnumerator__);
  v90 = v89;
  v89.fields._list = 0;
  *(_QWORD *)&v89.fields._index = &v90;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v90,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_EventInfoPassport__MoveNext__) )
  {
    current = v90.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v78);
    v80 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v80 )
    {
      if ( !v16 )
        sub_21FFECC(v80, v81);
      v82 = System_Collections_Generic_List_object___Contains(
              v16,
              current,
              (const MethodInfo_444FEC8 *)Method_System_Collections_Generic_List_EventInfoPassport__Contains__);
      if ( !v82 )
      {
        if ( !current )
          sub_21FFECC(v82, v83);
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0);
        if ( !gameObject )
          sub_21FFECC(0, v85);
        UnityEngine_GameObject__SetActive(gameObject, 0, 0);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v90,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_EventInfoPassport__Dispose__);
  Master_object = (EventJobPassportMaster_o *)this->fields.grid;
  if ( !Master_object )
LABEL_63:
    sub_21FFECC(Master_object, *(_QWORD *)&eventId);
  ((void (__fastcall *)(EventJobPassportMaster_o *, const MethodInfo *))Master_object->klass->vtable._8_ReplacedForThread.methodPtr)(
    Master_object,
    Master_object->klass->vtable._8_ReplacedForThread.method);
  EventInfoPassportListViewManager__RefreshScrollView(this, v86);
}


EventInfoPassport_o *EventInfoPassportListViewManager__CreatePassport(
        EventInfoPassportListViewManager_o *this,
        int32_t index,
        EventJobPassportEntity_o *passportEntity,
        bool isEmptyPassport,
        const MethodInfo *method)
{
  __int64 v9; // x23
  EventInfoPassport_o *result; // x0
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  __int64 v18; // x1
  Il2CppObject *gameObject; // x24
  Il2CppObject *v20; // x24
  bool v21; // w8
  Il2CppObject *Component_object; // x0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  __int64 v29; // x1
  UnityEngine_Object_o *v30; // x25
  const MethodInfo *v31; // x3
  EventInfoPassport_o *v32; // x21
  System_Action_o *v33; // x22
  const MethodInfo *v34; // x4

  if ( (byte_59399C7 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_EventInfoPassport___);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_EventInfoPassportListViewManager___c__DisplayClass14_0__CreatePassport_b__0__);
    sub_21FFC50(&EventInfoPassportListViewManager___c__DisplayClass14_0_TypeInfo);
    byte_59399C7 = 1;
  }
  v9 = sub_21FFEBC(EventInfoPassportListViewManager___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_16;
  *(_QWORD *)(v9 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 16), (int32_t)this, v12, v13, v14, v15, v16, v17);
  result = this->fields.passportPrefab;
  if ( !result )
    goto LABEL_16;
  gameObject = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)result, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
  v20 = UnityEngine_Object__Instantiate_object_(
          gameObject,
          (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  v21 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v20, 0, 0);
  result = 0;
  if ( !v21 )
  {
    if ( v20 )
    {
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v20,
                           (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_EventInfoPassport___);
      *(_QWORD *)(v9 + 24) = Component_object;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)(v9 + 24),
        (int32_t)Component_object,
        v23,
        v24,
        v25,
        v26,
        v27,
        v28);
      v30 = *(UnityEngine_Object_o **)(v9 + 24);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29);
      if ( !UnityEngine_Object__op_Inequality(v30, 0, 0) )
        return *(EventInfoPassport_o **)(v9 + 24);
      EventInfoPassportListViewManager__SetupPassportTransform(this, *(EventInfoPassport_o **)(v9 + 24), index, v31);
      v32 = *(EventInfoPassport_o **)(v9 + 24);
      v33 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(
        v33,
        (Il2CppObject *)v9,
        Method_EventInfoPassportListViewManager___c__DisplayClass14_0__CreatePassport_b__0__,
        0);
      if ( v32 )
      {
        EventInfoPassport__DisplayPassport(v32, passportEntity, v33, isEmptyPassport, v34);
        return *(EventInfoPassport_o **)(v9 + 24);
      }
    }
LABEL_16:
    sub_21FFECC(result, v11);
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
EventInfoPassport_o *EventInfoPassportListViewManager__FindPassport(
        EventInfoPassportListViewManager_o *this,
        int32_t jobId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_EventInfoPassport__o *passportList; // x0
  __int64 v6; // x1
  Il2CppObject *current; // x20
  _BOOL8 v8; // x0
  __int64 v9; // x1
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_59399C8 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventInfoPassport__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventInfoPassport__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventInfoPassport__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventInfoPassport__GetEnumerator__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59399C8 = 1;
  }
  passportList = this->fields.passportList;
  memset(&v11, 0, sizeof(v11));
  if ( !passportList )
    sub_21FFECC(0, *(_QWORD *)&jobId);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    (System_Collections_Generic_List_object__o *)passportList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_EventInfoPassport__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v11,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_EventInfoPassport__MoveNext__) )
  {
    current = v11.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    v8 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v8 )
    {
      if ( !current )
        sub_21FFECC(v8, v9);
      if ( *(int *)((char *)&dword_78 + (_QWORD)current) == jobId )
        goto LABEL_13;
    }
  }
  current = 0;
LABEL_13:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_EventInfoPassport__Dispose__);
  return (EventInfoPassport_o *)current;
}


void EventInfoPassportListViewManager__LockInputForDialogClosing(
        EventInfoPassportListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_c *v3; // x0
  UnityEngine_Object_o *scrollView; // x20
  int v5; // w8
  const MethodInfo *v6; // x1
  UnityEngine_Behaviour_o *passportList; // x0
  UnityEngine_Object_o *scrollBar; // x20
  UnityEngine_Object_o *grid; // x20
  __int64 v10; // x1
  Il2CppObject *current; // x20
  _BOOL8 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x1
  UnityEngine_Object_o *maximController; // x20
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_59399CC & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventInfoPassport__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventInfoPassport__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventInfoPassport__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventInfoPassport__GetEnumerator__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59399CC = 1;
  }
  v3 = UnityEngine_Object_TypeInfo;
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  this->fields.isInputLocked = 1;
  v5 = *(&v3->_2.cctor_finished + 1);
  memset(&v17, 0, sizeof(v17));
  if ( !v5 )
    j_il2cpp_runtime_class_init_0(v3, method);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
  {
    passportList = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !passportList )
      goto LABEL_33;
    UnityEngine_Behaviour__set_enabled(passportList, 0, 0);
  }
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( UnityEngine_Object__op_Inequality(scrollBar, 0, 0) )
  {
    passportList = (UnityEngine_Behaviour_o *)this->fields.scrollBar;
    if ( !passportList )
      goto LABEL_33;
    UnityEngine_Behaviour__set_enabled(passportList, 0, 0);
  }
  grid = (UnityEngine_Object_o *)this->fields.grid;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( UnityEngine_Object__op_Inequality(grid, 0, 0) )
  {
    passportList = (UnityEngine_Behaviour_o *)this->fields.grid;
    if ( !passportList )
      goto LABEL_33;
    UnityEngine_Behaviour__set_enabled(passportList, 0, 0);
  }
  passportList = (UnityEngine_Behaviour_o *)this->fields.passportList;
  if ( !passportList )
LABEL_33:
    sub_21FFECC(passportList, v6);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)passportList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_EventInfoPassport__GetEnumerator__);
  v17 = v16;
  v16.fields._list = 0;
  *(_QWORD *)&v16.fields._index = &v17;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_EventInfoPassport__MoveNext__) )
  {
    current = v17.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
    v12 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v12 )
    {
      if ( !current )
        sub_21FFECC(v12, v13);
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)current, 0, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_EventInfoPassport__Dispose__);
  maximController = (UnityEngine_Object_o *)this->fields.maximController;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
  if ( UnityEngine_Object__op_Inequality(maximController, 0, 0) )
  {
    passportList = (UnityEngine_Behaviour_o *)this->fields.maximController;
    if ( passportList )
    {
      EventInfoPassportMaximController__ForceCloseForDialogClosing(
        (EventInfoPassportMaximController_o *)passportList,
        v6);
      return;
    }
    goto LABEL_33;
  }
}


void EventInfoPassportListViewManager__OnClickPassport(
        EventInfoPassportListViewManager_o *this,
        EventInfoPassport_o *passport,
        const MethodInfo *method)
{
  EventInfoPassportListViewManager_o *v4; // x20
  UnityEngine_Object_o *maximController; // x21
  const MethodInfo *v6; // x2

  v4 = this;
  if ( (byte_59399CB & 1) == 0 )
  {
    this = (EventInfoPassportListViewManager_o *)sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59399CB = 1;
  }
  if ( !v4->fields.isInputLocked )
  {
    if ( passport )
    {
      if ( !passport->fields._IsOpenPassport_k__BackingField )
        return;
      maximController = (UnityEngine_Object_o *)v4->fields.maximController;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, passport);
      if ( UnityEngine_Object__op_Equality(maximController, 0, 0) )
        return;
      this = (EventInfoPassportListViewManager_o *)v4->fields.maximController;
      if ( this )
      {
        if ( !*((_BYTE *)&this->fields.requiredPassportCount + 4) )
          EventInfoPassportMaximController__Open((EventInfoPassportMaximController_o *)this, passport, v6);
        return;
      }
    }
    sub_21FFECC(this, passport);
  }
}


void EventInfoPassportListViewManager__OnScrollBarDragFinished(
        EventInfoPassportListViewManager_o *this,
        const MethodInfo *method)
{
  UIScrollView_o *scrollView; // x20
  EventInfoPassportListViewManager_o *v3; // x19
  const MethodInfo *v4; // x1

  scrollView = this->fields.scrollView;
  v3 = this;
  if ( !byte_5931940 )
  {
    this = (EventInfoPassportListViewManager_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931940 = 1;
  }
  if ( !scrollView
    || (UIScrollView__set_currentMomentum(scrollView, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0),
        (this = (EventInfoPassportListViewManager_o *)v3->fields.scrollView) == 0)
    || (UIScrollView__RestrictWithinBounds_56088144((UIScrollView_o *)this, 1, 0, 1, 0),
        EventInfoPassportListViewManager__ResetHorizontalOffset(v3, v4),
        (this = (EventInfoPassportListViewManager_o *)v3->fields.scrollView) == 0) )
  {
    sub_21FFECC(this, method);
  }
  ((void (__fastcall *)(EventInfoPassportListViewManager_o *, __int64, Il2CppClass *))this->klass[1]._1.element_class)(
    this,
    1,
    this->klass[1]._1.castClass);
}


void EventInfoPassportListViewManager__RefreshScrollView(
        EventInfoPassportListViewManager_o *this,
        const MethodInfo *method)
{
  UIScrollView_o *scrollView; // x0
  struct UIScrollBar_o *scrollBar; // x20
  UIProgressBar_OnDragFinished_o *v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_59399C5 & 1) == 0 )
  {
    sub_21FFC50(&Method_EventInfoPassportListViewManager_OnScrollBarDragFinished__);
    sub_21FFC50(&UIProgressBar_OnDragFinished_TypeInfo);
    byte_59399C5 = 1;
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView
    || (UIScrollView__ResetPosition(scrollView, 0), (scrollView = this->fields.scrollView) == 0)
    || (((void (__fastcall *)(UIScrollView_o *, __int64, const MethodInfo *))scrollView->klass->vtable._8_UpdateScrollbars.methodPtr)(
          scrollView,
          1,
          scrollView->klass->vtable._8_UpdateScrollbars.method),
        scrollBar = this->fields.scrollBar,
        v5 = (UIProgressBar_OnDragFinished_o *)sub_21FFEBC(UIProgressBar_OnDragFinished_TypeInfo),
        UIProgressBar_OnDragFinished___ctor(
          v5,
          (Il2CppObject *)this,
          Method_EventInfoPassportListViewManager_OnScrollBarDragFinished__,
          0),
        !scrollBar) )
  {
    sub_21FFECC(scrollView, method);
  }
  scrollBar->fields.onDragFinished = v5;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&scrollBar->fields.onDragFinished,
    (int32_t)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


void EventInfoPassportListViewManager__ResetHorizontalOffset(
        EventInfoPassportListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *scrollView; // x0
  UnityEngine_Transform_o *v4; // x20
  __int64 v5; // x1
  Il2CppObject *Component_object; // x19
  UnityEngine_Vector2_o v7; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_59399C6 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59399C6 = 1;
  }
  scrollView = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_11;
  scrollView = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(scrollView, 0);
  if ( !scrollView )
    goto LABEL_11;
  v4 = (UnityEngine_Transform_o *)scrollView;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)scrollView, 0);
  localPosition.fields.x = this->fields.initialScrollViewLocalPosition.fields.x;
  UnityEngine_Transform__set_localPosition(v4, localPosition, 0);
  scrollView = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_11;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       scrollView,
                       (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  scrollView = (UnityEngine_Component_o *)UnityEngine_Object__op_Equality(
                                            (UnityEngine_Object_o *)Component_object,
                                            0,
                                            0);
  if ( ((unsigned __int8)scrollView & 1) == 0 )
  {
    if ( Component_object )
    {
      v7.fields.y = *(float *)&Component_object[21].klass;
      v7.fields.x = 0.0;
      UIPanel__set_clipOffset((UIPanel_o *)Component_object, v7, 0);
      return;
    }
LABEL_11:
    sub_21FFECC(scrollView, method);
  }
}


void EventInfoPassportListViewManager__SetupDragScrollView(
        EventInfoPassportListViewManager_o *this,
        UnityEngine_GameObject_o *go,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *scrollView; // x21
  Il2CppObject *v7; // x0
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *Component_object; // x21
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct UIScrollView_o *v17; // x1

  if ( (byte_59399CA & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_AddComponent_UIDragScrollView___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59399CA = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, go);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)go, 0, 0) )
  {
    scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
    v7 = (Il2CppObject *)UnityEngine_Object__op_Equality(scrollView, 0, 0);
    if ( ((unsigned __int8)v7 & 1) == 0 )
    {
      if ( !go )
        goto LABEL_17;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           go,
                           (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
      v7 = (Il2CppObject *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
      if ( ((unsigned __int8)v7 & 1) != 0 )
      {
        v7 = UnityEngine_GameObject__AddComponent_object_(
               go,
               (const MethodInfo_38839E8 *)Method_UnityEngine_GameObject_AddComponent_UIDragScrollView___);
        Component_object = v7;
      }
      if ( !Component_object )
LABEL_17:
        sub_21FFECC(v7, v8);
      v17 = this->fields.scrollView;
      Component_object[2].klass = (Il2CppClass *)v17;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&Component_object[2], (int32_t)v17, v11, v12, v13, v14, v15, v16);
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 1, 0);
    }
  }
}


void EventInfoPassportListViewManager__SetupPassportTransform(
        EventInfoPassportListViewManager_o *this,
        EventInfoPassport_o *passport,
        int32_t index,
        const MethodInfo *method)
{
  __int64 gameObject; // x0
  __int64 v8; // x1
  UnityEngine_GameObject_o *v9; // x21
  UnityEngine_Transform_o *v10; // x22
  UnityEngine_Transform_o *v11; // x22
  UnityEngine_Transform_o *v12; // x22
  UnityEngine_Transform_o *v13; // x22
  const MethodInfo *v14; // x2

  if ( (byte_59399C9 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59399C9 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, passport);
  gameObject = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)passport, 0, 0);
  if ( (gameObject & 1) == 0 )
  {
    if ( !passport )
      goto LABEL_21;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)passport, 0);
    if ( !gameObject )
      goto LABEL_21;
    v9 = (UnityEngine_GameObject_o *)gameObject;
    gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
    if ( !this->fields.grid )
      goto LABEL_21;
    v10 = (UnityEngine_Transform_o *)gameObject;
    gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.grid, 0);
    if ( !v10 )
      goto LABEL_21;
    UnityEngine_Transform__set_parent(v10, (UnityEngine_Transform_o *)gameObject, 0);
    gameObject = (__int64)UnityEngine_GameObject__get_transform(v9, 0);
    v11 = (UnityEngine_Transform_o *)gameObject;
    if ( !byte_5931940 )
    {
      gameObject = sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
      byte_5931940 = 1;
    }
    if ( !v11 )
      goto LABEL_21;
    UnityEngine_Transform__set_localPosition(v11, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
    gameObject = (__int64)UnityEngine_GameObject__get_transform(v9, 0);
    v12 = (UnityEngine_Transform_o *)gameObject;
    if ( !byte_5931946 )
    {
      gameObject = sub_21FFC50(&UnityEngine_Quaternion_TypeInfo);
      byte_5931946 = 1;
    }
    if ( !v12 )
      goto LABEL_21;
    UnityEngine_Transform__set_localRotation(v12, UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion, 0);
    gameObject = (__int64)UnityEngine_GameObject__get_transform(v9, 0);
    v13 = (UnityEngine_Transform_o *)gameObject;
    if ( !byte_5931945 )
    {
      gameObject = sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
      byte_5931945 = 1;
    }
    if ( !v13
      || (UnityEngine_Transform__set_localScale(v13, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0),
          (gameObject = (__int64)UnityEngine_GameObject__get_transform(v9, 0)) == 0) )
    {
LABEL_21:
      sub_21FFECC(gameObject, v8);
    }
    UnityEngine_Transform__SetSiblingIndex((UnityEngine_Transform_o *)gameObject, index, 0);
    EventInfoPassportListViewManager__SetupDragScrollView(this, v9, v14);
  }
}


void EventInfoPassportListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_59399CE & 1) == 0 )
  {
    sub_21FFC50(&EventInfoPassportListViewManager___c_TypeInfo);
    byte_59399CE = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(EventInfoPassportListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventInfoPassportListViewManager___c_TypeInfo->static_fields->__9 = (struct EventInfoPassportListViewManager___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)EventInfoPassportListViewManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventInfoPassportListViewManager___c___ctor(
        EventInfoPassportListViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventInfoPassportListViewManager___c___CreateList_b__10_0(
        EventInfoPassportListViewManager___c_o *this,
        EventInfoPassport_o *passport,
        const MethodInfo *method)
{
  if ( (byte_59399CF & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59399CF = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, passport);
  return UnityEngine_Object__op_Equality((UnityEngine_Object_o *)passport, 0, 0);
}


void EventInfoPassportListViewManager___c__DisplayClass10_0___ctor(
        EventInfoPassportListViewManager___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoPassportListViewManager___c__DisplayClass10_0___CreateList_b__1(
        EventInfoPassportListViewManager___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_21FFECC(this, method);
  EventInfoPassportListViewManager__OnClickPassport(this->fields.__4__this, this->fields.passport, v2);
}


void EventInfoPassportListViewManager___c__DisplayClass14_0___ctor(
        EventInfoPassportListViewManager___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoPassportListViewManager___c__DisplayClass14_0___CreatePassport_b__0(
        EventInfoPassportListViewManager___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_21FFECC(this, method);
  EventInfoPassportListViewManager__OnClickPassport(this->fields.__4__this, this->fields.passport, v2);
}