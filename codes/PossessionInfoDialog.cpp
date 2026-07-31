void PossessionInfoDialog___ctor(PossessionInfoDialog_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  __int64 v10; // x1
  __int64 v11; // x2

  if ( (byte_59348BD & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_59348BD = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_GameObject__o *)v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.objectList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, v10, v11);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


bool PossessionInfoDialog__CanOpenPossessionInfo(PossessionInfoDialog_o *this, const MethodInfo *method)
{
  return !this->fields.baseState && PossessionInfoDialog__IsEmptyDispObject(this, method);
}


void PossessionInfoDialog__CheckSerializeFieldNotNull(PossessionInfoDialog_o *this, const MethodInfo *method)
{
  ;
}


void PossessionInfoDialog__CreateObjList(PossessionInfoDialog_o *this, int32_t gachaId, const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x1
  __int64 v7; // x2
  ViewGachaFeaturedServantMaster_o *Master_object; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  Il2CppObject *v16; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  System_Collections_Generic_IEnumerable_TSource__o *FeaturedServantIds; // x20
  System_Func_int__int__o *v24; // x22
  System_Linq_IOrderedEnumerable_TSource__o *v25; // x20
  System_Func_int__int__o *v26; // x22
  ViewGachaFeaturedServantMaster_c *klass; // x8
  ViewGachaFeaturedServantMaster_o *v28; // x20
  __int64 v29; // x9
  int32_t *p_offset; // x10
  __int64 v31; // x0
  __int64 v32; // x0
  __int64 v33; // x1
  __int64 v34; // x8
  __int64 v35; // x9
  int *v36; // x10
  __int64 v37; // x0
  __int64 v38; // x8
  __int64 v39; // x9
  int *v40; // x10
  __int64 v41; // x0
  __int64 v42; // x1
  int32_t v43; // w20
  UnityEngine_Component_o *listRoot; // x0
  Il2CppObject *possessionInfoObject; // x21
  __int64 v46; // x1
  __int64 v47; // x2
  UnityEngine_Transform_o *transform; // x22
  Il2CppObject *v49; // x0
  __int64 v50; // x1
  PossessionInfo_o *v51; // x21
  System_Collections_Generic_List_object__o *objectList; // x22
  Il2CppObject *gameObject; // x0
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  Il2CppObject *v60; // x1
  struct System_Object_array *items; // x8
  _QWORD *v62; // x9
  __int64 size; // x10
  Il2CppClass **v64; // x0
  __int64 v65; // x8
  __int64 v66; // x9
  int *v67; // x10
  __int64 v68; // x0
  __int64 v69; // [xsp+18h] [xbp-58h]

  if ( (byte_59348B8 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ViewGachaFeaturedServantMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_OrderByDescending_int__int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ThenBy_int__int___);
    sub_21FFC50(&System_Func_int__int__TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerable_int__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_int__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_PossessionInfo___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_PossessionInfoDialog___c__DisplayClass12_0__CreateObjList_b__0__);
    sub_21FFC50(&Method_PossessionInfoDialog___c__DisplayClass12_0__CreateObjList_b__1__);
    sub_21FFC50(&PossessionInfoDialog___c__DisplayClass12_0_TypeInfo);
    byte_59348B8 = 1;
  }
  v5 = sub_21FFEBC(PossessionInfoDialog___c__DisplayClass12_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v6, v7);
  Master_object = (ViewGachaFeaturedServantMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !v5 )
    goto LABEL_50;
  *(_QWORD *)(v5 + 24) = Master_object;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)Master_object, v10, v11, v12, v13, v14, v15);
  v16 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantLimitMaster___);
  *(_QWORD *)(v5 + 16) = v16;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)v16, v17, v18, v19, v20, v21, v22);
  Master_object = (ViewGachaFeaturedServantMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ViewGachaFeaturedServantMaster___);
  if ( !Master_object
    || (FeaturedServantIds = (System_Collections_Generic_IEnumerable_TSource__o *)ViewGachaFeaturedServantMaster__GetFeaturedServantIds(
                                                                                    Master_object,
                                                                                    gachaId,
                                                                                    0),
        v24 = (System_Func_int__int__o *)sub_21FFEBC(System_Func_int__int__TypeInfo),
        System_Func_int__int____ctor(
          v24,
          (Il2CppObject *)v5,
          Method_PossessionInfoDialog___c__DisplayClass12_0__CreateObjList_b__0__,
          0),
        v25 = System_Linq_Enumerable__OrderByDescending_int__int_(
                FeaturedServantIds,
                (System_Func_TSource__TKey__o *)v24,
                (const MethodInfo_3855BAC *)Method_System_Linq_Enumerable_OrderByDescending_int__int___),
        v26 = (System_Func_int__int__o *)sub_21FFEBC(System_Func_int__int__TypeInfo),
        System_Func_int__int____ctor(
          v26,
          (Il2CppObject *)v5,
          Method_PossessionInfoDialog___c__DisplayClass12_0__CreateObjList_b__1__,
          0),
        (Master_object = (ViewGachaFeaturedServantMaster_o *)System_Linq_Enumerable__ThenBy_int__int_(
                                                               v25,
                                                               (System_Func_TSource__TKey__o *)v26,
                                                               (const MethodInfo_38673CC *)Method_System_Linq_Enumerable_ThenBy_int__int___)) == 0) )
  {
LABEL_50:
    sub_21FFECC(Master_object, v9);
  }
  klass = Master_object->klass;
  v28 = Master_object;
  v29 = *(unsigned __int16 *)&Master_object->klass->_2.rank;
  if ( *(_WORD *)&Master_object->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      --v29;
      p_offset += 4;
      if ( !v29 )
        goto LABEL_12;
    }
    v31 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_12:
    v31 = sub_2237E2C(Master_object, System_Collections_Generic_IEnumerable_int__TypeInfo, 0);
  }
  v32 = (*(__int64 (__fastcall **)(ViewGachaFeaturedServantMaster_o *, _QWORD))v31)(v28, *(_QWORD *)(v31 + 8));
  v69 = v32;
  while ( 1 )
  {
    if ( !v69 )
      sub_21FFECC(v32, v33);
    v34 = *(_QWORD *)v69;
    v35 = *(unsigned __int16 *)(*(_QWORD *)v69 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v69 + 302LL) )
    {
      v36 = (int *)(*(_QWORD *)(v34 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v36 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v35;
        v36 += 4;
        if ( !v35 )
          goto LABEL_20;
      }
      v37 = v34 + 16LL * *v36 + 312;
    }
    else
    {
LABEL_20:
      v37 = sub_2237E2C(v69, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v37)(v69, *(_QWORD *)(v37 + 8)) & 1) == 0 )
      break;
    v38 = *(_QWORD *)v69;
    v39 = *(unsigned __int16 *)(*(_QWORD *)v69 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v69 + 302LL) )
    {
      v40 = (int *)(*(_QWORD *)(v38 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v40 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        --v39;
        v40 += 4;
        if ( !v39 )
          goto LABEL_27;
      }
      v41 = v38 + 16LL * *v40 + 312;
    }
    else
    {
LABEL_27:
      v41 = sub_2237E2C(v69, System_Collections_Generic_IEnumerator_int__TypeInfo, 0);
    }
    v43 = (*(__int64 (__fastcall **)(__int64, _QWORD))v41)(v69, *(_QWORD *)(v41 + 8));
    listRoot = (UnityEngine_Component_o *)this->fields.listRoot;
    if ( !listRoot )
      sub_21FFECC(0, v42);
    possessionInfoObject = (Il2CppObject *)this->fields.possessionInfoObject;
    transform = UnityEngine_Component__get_transform(listRoot, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v46, v47);
    v49 = UnityEngine_Object__Instantiate_object__59506996(
            possessionInfoObject,
            transform,
            (const MethodInfo_38C0134 *)Method_UnityEngine_Object_Instantiate_PossessionInfo___);
    v51 = (PossessionInfo_o *)v49;
    if ( !v49 )
      sub_21FFECC(0, v50);
    objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    gameObject = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v49, 0);
    v60 = gameObject;
    if ( !objectList
      || (items = objectList->fields._items,
          v62 = Method_System_Collections_Generic_List_GameObject__Add__,
          ++objectList->fields._version,
          !items) )
    {
      sub_21FFECC(gameObject, gameObject);
    }
    size = objectList->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        objectList,
        gameObject,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
    }
    else
    {
      v64 = &items->obj.klass + size;
      objectList->fields._size = size + 1;
      v64[4] = (Il2CppClass *)v60;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v64 + 4), (int32_t)v60, v54, v55, v56, v57, v58, v59);
    }
    PossessionInfo__SetInfo(v51, v43, 0);
  }
  v65 = *(_QWORD *)v69;
  v66 = *(unsigned __int16 *)(*(_QWORD *)v69 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v69 + 302LL) )
  {
    v67 = (int *)(*(_QWORD *)(v65 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v67 - 1) != System_IDisposable_TypeInfo )
    {
      --v66;
      v67 += 4;
      if ( !v66 )
        goto LABEL_43;
    }
    v68 = v65 + 16LL * *v67 + 312;
  }
  else
  {
LABEL_43:
    v68 = sub_2237E2C(v69, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v68)(v69, *(_QWORD *)(v68 + 8));
}


void PossessionInfoDialog__Init(PossessionInfoDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  UILabel_o *titleLabel; // x20
  void *v7; // x0
  __int64 v8; // x1
  UILabel_o *messageLabel; // x20
  __int64 v10; // x2
  struct System_Collections_Generic_List_GameObject__o *objectList; // x20
  struct PossessionInfoDialog___c_StaticFields *static_fields; // x8
  System_Action_object__o *_9__11_0; // x21
  Il2CppObject *v14; // x22
  struct PossessionInfoDialog___c_StaticFields *v15; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  struct System_Collections_Generic_List_GameObject__o *v22; // x8
  int32_t size; // w2
  int v24; // w9

  if ( (byte_59348B7 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_GameObject__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__ForEach__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_PossessionInfoDialog___c__Init_b__11_0__);
    sub_21FFC50(&PossessionInfoDialog___c_TypeInfo);
    sub_21FFC50(&StringLiteral_16229/*"Window/CloseButton"*/);
    sub_21FFC50(&StringLiteral_10824/*"POSSESSION_DIALOG_TITLE"*/);
    sub_21FFC50(&StringLiteral_10823/*"POSSESSION_DIALOG_MESSAGE"*/);
    byte_59348B7 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackKeyTarget_51911336(transform, (System_String_o *)StringLiteral_16229/*"Window/CloseButton"*/, 0);
  titleLabel = this->fields.titleLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v4, v5);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_10824/*"POSSESSION_DIALOG_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_18;
  UILabel__set_text(titleLabel, (System_String_o *)v7, 0);
  messageLabel = this->fields.messageLabel;
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_10823/*"POSSESSION_DIALOG_MESSAGE"*/, 0);
  if ( !messageLabel )
    goto LABEL_18;
  UILabel__set_text(messageLabel, (System_String_o *)v7, 0);
  v7 = PossessionInfoDialog___c_TypeInfo;
  objectList = this->fields.objectList;
  if ( !*(&PossessionInfoDialog___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(PossessionInfoDialog___c_TypeInfo, v8, v10);
    v7 = PossessionInfoDialog___c_TypeInfo;
  }
  static_fields = (struct PossessionInfoDialog___c_StaticFields *)*((_QWORD *)v7 + 23);
  _9__11_0 = (System_Action_object__o *)static_fields->__9__11_0;
  if ( !_9__11_0 )
  {
    if ( !*((_DWORD *)v7 + 57) )
    {
      j_il2cpp_runtime_class_init_0(v7, v8, v10);
      static_fields = PossessionInfoDialog___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__11_0 = (System_Action_object__o *)sub_21FFEBC(System_Action_GameObject__TypeInfo);
    System_Action_object____ctor(_9__11_0, v14, Method_PossessionInfoDialog___c__Init_b__11_0__, 0);
    v15 = PossessionInfoDialog___c_TypeInfo->static_fields;
    v15->__9__11_0 = (struct System_Action_GameObject__o *)_9__11_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v15->__9__11_0, (int32_t)_9__11_0, v16, v17, v18, v19, v20, v21);
  }
  if ( !objectList
    || (System_Collections_Generic_List_object___ForEach(
          (System_Collections_Generic_List_object__o *)objectList,
          (System_Action_T__o *)_9__11_0,
          (const MethodInfo_445054C *)Method_System_Collections_Generic_List_GameObject__ForEach__),
        (v22 = this->fields.objectList) == 0) )
  {
LABEL_18:
    sub_21FFECC(v7, v8);
  }
  size = v22->fields._size;
  v24 = v22->fields._version + 1;
  v22->fields._size = 0;
  v22->fields._version = v24;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v22->fields._items, 0, size, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


bool PossessionInfoDialog__IsEmptyDispObject(PossessionInfoDialog_o *this, const MethodInfo *method)
{
  PossessionInfoDialog_o *v2; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x8

  v2 = this;
  if ( (byte_59348BC & 1) == 0 )
  {
    this = (PossessionInfoDialog_o *)sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    byte_59348BC = 1;
  }
  objectList = v2->fields.objectList;
  if ( !objectList )
    goto LABEL_9;
  if ( objectList->fields._size )
    return 0;
  this = (PossessionInfoDialog_o *)v2->fields.listRoot;
  if ( !this
    || (this = (PossessionInfoDialog_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0 )
  {
LABEL_9:
    sub_21FFECC(this, method);
  }
  return UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)this, 0) == 0;
}


void PossessionInfoDialog__OnClickClose(PossessionInfoDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_59348BB & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_PossessionInfoDialog_Init__);
    sub_21FFC50(&Method_PossessionInfoDialog_OnClickClose__);
    byte_59348BB = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_PossessionInfoDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_PossessionInfoDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_PossessionInfoDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_PossessionInfoDialog_Init__, 0);
    BaseDialog__SafeClose((BaseDialog_o *)this, v5, 0);
  }
}


void PossessionInfoDialog__Open(PossessionInfoDialog_o *this, int32_t gachaId, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  __int64 v6; // x1
  UnityEngine_Component_o *scrollBar; // x0
  System_Action_o *v8; // x20

  if ( (byte_59348BA & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_PossessionInfoDialog__Open_b__15_0__);
    byte_59348BA = 1;
  }
  PossessionInfoDialog__CreateObjList(this, gachaId, method);
  PossessionInfoDialog__Reposition(this, v5);
  scrollBar = (UnityEngine_Component_o *)this->fields.scrollBar;
  if ( !scrollBar
    || (scrollBar = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(scrollBar, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)scrollBar, 0, 0),
        (scrollBar = (UnityEngine_Component_o *)this->fields.scrollView) == 0) )
  {
    sub_21FFECC(scrollBar, v6);
  }
  UIScrollView__UpdateScrollbars((UIScrollView_o *)scrollBar, 0);
  v8 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_PossessionInfoDialog__Open_b__15_0__, 0);
  BaseDialog__SafeOpen((BaseDialog_o *)this, v8, 0, 0);
}


void PossessionInfoDialog__Reposition(PossessionInfoDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  PossessionInfoDialog_o *v3; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x8
  struct UIGrid_o *listRoot; // x9
  float size; // s8
  float maxPerLine; // s9
  float v8; // s8
  unsigned int v9; // w9
  int v10; // w22
  UnityEngine_GameObject_o *gameObject; // x0
  struct UIGrid_o *v12; // x8
  float x; // s0
  float v14; // s1
  int v15; // w25
  float v16; // s9
  struct UIGrid_o *v17; // x8
  int v18; // w8
  int32_t v19; // w2
  struct UIGrid_o *v20; // x8
  int m_CancellationTokenSource; // w9
  System_Collections_Generic_List_object__o *v22; // x20
  bool v23; // vf
  int v24; // w9
  int32_t v25; // w21
  float v26; // s10
  struct UIGrid_o *v27; // x8
  float cellHeight; // s12
  float cellWidth; // s13
  UnityEngine_GameObject_o *v30; // x0
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4

  v3 = this;
  if ( (byte_59348B9 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__GetRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    this = (PossessionInfoDialog_o *)sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    byte_59348B9 = 1;
  }
  objectList = v3->fields.objectList;
  if ( !objectList )
    goto LABEL_38;
  listRoot = v3->fields.listRoot;
  if ( !listRoot )
    goto LABEL_38;
  size = (float)objectList->fields._size;
  maxPerLine = (float)listRoot->fields.maxPerLine;
  if ( !byte_5931FBB )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_5931FBB = 1;
  }
  v8 = size / maxPerLine;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, method, v2);
  v9 = vcvtps_s32_f32(v8);
  this = (PossessionInfoDialog_o *)v3->fields.listRoot;
  if ( ceilf(v8) == INFINITY )
    v10 = 0x80000000;
  else
    v10 = v9;
  if ( v10 > 1 )
  {
    if ( this )
    {
      LODWORD(this->fields.baseWindow) = 1124204544;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      GameObjectExtensions__SetLocalPositionX(gameObject, -10.0, 0);
      v12 = v3->fields.listRoot;
      if ( v12 )
      {
        x = NGUIMath__GetPivotOffset(v12->fields.pivot, 0).fields.x;
        v14 = 1.0;
        v15 = 0;
        if ( x <= 1.0 )
          v14 = x;
        if ( x >= 0.0 )
          v16 = v14;
        else
          v16 = 0.0;
        while ( 1 )
        {
          v17 = v3->fields.listRoot;
          if ( !v17 )
            goto LABEL_38;
          this = (PossessionInfoDialog_o *)v3->fields.objectList;
          if ( !this )
            goto LABEL_38;
          v18 = v17->fields.maxPerLine;
          v19 = LODWORD(this->fields.m_CancellationTokenSource) - v18 * v15 >= v18
              ? v18
              : LODWORD(this->fields.m_CancellationTokenSource) - v18 * v15;
          this = (PossessionInfoDialog_o *)System_Collections_Generic_List_object___GetRange(
                                             (System_Collections_Generic_List_object__o *)this,
                                             v18 * v15,
                                             v19,
                                             (const MethodInfo_44506DC *)Method_System_Collections_Generic_List_GameObject__GetRange__);
          if ( !this )
            goto LABEL_38;
          v20 = v3->fields.listRoot;
          if ( !v20 )
            goto LABEL_38;
          m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
          v22 = (System_Collections_Generic_List_object__o *)this;
          v23 = __OFSUB__(m_CancellationTokenSource, 1);
          v24 = m_CancellationTokenSource - 1;
          if ( v24 < 0 == v23 )
            break;
LABEL_33:
          if ( ++v15 == v10 )
            return;
        }
        v25 = 0;
        v26 = (float)(v16 * (float)(v20->fields.cellWidth * (float)v24)) + 0.0;
        while ( 1 )
        {
          this = (PossessionInfoDialog_o *)System_Collections_Generic_List_object___get_Item(
                                             v22,
                                             v25,
                                             (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
          v27 = v3->fields.listRoot;
          if ( !v27 )
            break;
          if ( !this )
            break;
          cellWidth = v27->fields.cellWidth;
          cellHeight = v27->fields.cellHeight;
          this = (PossessionInfoDialog_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
          if ( !this )
            break;
          v31.fields.y = -(float)(cellHeight * (float)v15);
          v31.fields.z = 0.0;
          v31.fields.x = (float)(cellWidth * (float)v25) - v26;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v31, 0);
          if ( ++v25 >= v22->fields._size )
            goto LABEL_33;
        }
      }
    }
LABEL_38:
    sub_21FFECC(this, method);
  }
  if ( !this )
    goto LABEL_38;
  LODWORD(this->fields.baseWindow) = 1124597760;
  v30 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalPositionX(v30, 0.0, 0);
  this = (PossessionInfoDialog_o *)v3->fields.listRoot;
  if ( !this )
    goto LABEL_38;
  ((void (__fastcall *)(PossessionInfoDialog_o *, const char *))this->klass[1]._1.name)(
    this,
    this->klass[1]._1.namespaze);
}


void PossessionInfoDialog___Open_b__15_0(PossessionInfoDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  void *scrollBar; // x0
  struct System_Collections_Generic_List_GameObject__o *objectList; // x20
  struct PossessionInfoDialog___c_StaticFields *static_fields; // x8
  System_Action_object__o *_9__15_1; // x21
  Il2CppObject *v8; // x22
  struct PossessionInfoDialog___c_StaticFields *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct System_Collections_Generic_List_GameObject__o *v16; // x8
  struct UIGrid_o *listRoot; // x9

  if ( (byte_59348BE & 1) == 0 )
  {
    sub_21FFC50(&System_Action_GameObject__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__ForEach__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_21FFC50(&Method_PossessionInfoDialog___c__Open_b__15_1__);
    sub_21FFC50(&PossessionInfoDialog___c_TypeInfo);
    byte_59348BE = 1;
  }
  scrollBar = PossessionInfoDialog___c_TypeInfo;
  objectList = this->fields.objectList;
  if ( !*(&PossessionInfoDialog___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(PossessionInfoDialog___c_TypeInfo, method, v2);
    scrollBar = PossessionInfoDialog___c_TypeInfo;
  }
  static_fields = (struct PossessionInfoDialog___c_StaticFields *)*((_QWORD *)scrollBar + 23);
  _9__15_1 = (System_Action_object__o *)static_fields->__9__15_1;
  if ( !_9__15_1 )
  {
    if ( !*((_DWORD *)scrollBar + 57) )
    {
      j_il2cpp_runtime_class_init_0(scrollBar, method, v2);
      static_fields = PossessionInfoDialog___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__15_1 = (System_Action_object__o *)sub_21FFEBC(System_Action_GameObject__TypeInfo);
    System_Action_object____ctor(_9__15_1, v8, Method_PossessionInfoDialog___c__Open_b__15_1__, 0);
    v9 = PossessionInfoDialog___c_TypeInfo->static_fields;
    v9->__9__15_1 = (struct System_Action_GameObject__o *)_9__15_1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v9->__9__15_1, (int32_t)_9__15_1, v10, v11, v12, v13, v14, v15);
  }
  if ( !objectList
    || (System_Collections_Generic_List_object___ForEach(
          (System_Collections_Generic_List_object__o *)objectList,
          (System_Action_T__o *)_9__15_1,
          (const MethodInfo_445054C *)Method_System_Collections_Generic_List_GameObject__ForEach__),
        (scrollBar = this->fields.scrollBar) == 0)
    || (scrollBar = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollBar, 0),
        (v16 = this->fields.objectList) == 0)
    || (listRoot = this->fields.listRoot) == 0
    || !scrollBar
    || (UnityEngine_GameObject__SetActive(
          (UnityEngine_GameObject_o *)scrollBar,
          v16->fields._size > listRoot->fields.maxPerLine,
          0),
        (scrollBar = this->fields.scrollView) == 0) )
  {
    sub_21FFECC(scrollBar, method);
  }
  UIScrollView__ResetPosition((UIScrollView_o *)scrollBar, 0);
}


void PossessionInfoDialog___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_59348BF & 1) == 0 )
  {
    sub_21FFC50(&PossessionInfoDialog___c_TypeInfo);
    byte_59348BF = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(PossessionInfoDialog___c_TypeInfo);
  System_Object___ctor(v1, 0);
  PossessionInfoDialog___c_TypeInfo->static_fields->__9 = (struct PossessionInfoDialog___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)PossessionInfoDialog___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void PossessionInfoDialog___c___ctor(PossessionInfoDialog___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void PossessionInfoDialog___c___Init_b__11_0(
        PossessionInfoDialog___c_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2

  if ( (byte_59348C0 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59348C0 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, obj, method);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0, 0) )
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v5);
    UnityEngine_Object__Destroy_83246496((UnityEngine_Object_o *)obj, 0);
  }
}


void PossessionInfoDialog___c___Open_b__15_1(
        PossessionInfoDialog___c_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  _BOOL8 v4; // x0
  __int64 v5; // x1

  if ( (byte_59348C1 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59348C1 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, obj, method);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0, 0);
  if ( v4 )
  {
    if ( !obj )
      sub_21FFECC(v4, v5);
    UnityEngine_GameObject__SetActive(obj, 1, 0);
  }
}


void PossessionInfoDialog___c__DisplayClass12_0___ctor(
        PossessionInfoDialog___c__DisplayClass12_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
int32_t PossessionInfoDialog___c__DisplayClass12_0___CreateObjList_b__0(
        PossessionInfoDialog___c__DisplayClass12_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  void *servantLimitMaster; // x0

  servantLimitMaster = this->fields.servantLimitMaster;
  if ( !servantLimitMaster
    || (servantLimitMaster = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)servantLimitMaster, id, 0, 0)) == 0 )
  {
    sub_21FFECC(servantLimitMaster, *(_QWORD *)&id);
  }
  return *((_DWORD *)servantLimitMaster + 6);
}


// local variable allocation has failed, the output may be wrong!
int32_t PossessionInfoDialog___c__DisplayClass12_0___CreateObjList_b__1(
        PossessionInfoDialog___c__DisplayClass12_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  void *svtMaster; // x0

  if ( (byte_59348C2 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    byte_59348C2 = 1;
  }
  svtMaster = this->fields.svtMaster;
  if ( !svtMaster
    || (svtMaster = DataMasterBase_object__object__int___GetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)svtMaster,
                      id,
                      (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0 )
  {
    sub_21FFECC(svtMaster, *(_QWORD *)&id);
  }
  return *((_DWORD *)svtMaster + 52);
}