void PossessionInfoDialog___ctor(PossessionInfoDialog_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D2CCE0 & 1) == 0 )
  {
    sub_1C93AD4(&BaseDialog_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_4D2CCE0 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_GameObject__o *)v3;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.objectList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
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
  ViewGachaFeaturedServantMaster_o *Master_object; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  Il2CppObject *v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  System_Collections_Generic_IEnumerable_TSource__o *FeaturedServantIds; // x19
  System_Func_int__int__o *v22; // x22
  System_Linq_IOrderedEnumerable_TSource__o *v23; // x19
  System_Func_int__int__o *v24; // x22
  ViewGachaFeaturedServantMaster_c *klass; // x8
  ViewGachaFeaturedServantMaster_o *v26; // x19
  __int64 v27; // x9
  int32_t *p_offset; // x10
  __int64 v29; // x0
  __int64 v30; // x1
  __int64 v31; // x19
  __int64 v32; // x8
  __int64 v33; // x9
  int *v34; // x10
  __int64 v35; // x0
  __int64 v36; // x8
  __int64 v37; // x9
  int *v38; // x10
  __int64 v39; // x0
  __int64 v40; // x1
  int32_t v41; // w21
  UnityEngine_Component_o *listRoot; // x0
  Il2CppObject *possessionInfoObject; // x22
  UnityEngine_Transform_o *transform; // x23
  Il2CppObject *v45; // x0
  __int64 v46; // x1
  PossessionInfo_o *v47; // x22
  System_Collections_Generic_List_object__o *objectList; // x23
  Il2CppObject *gameObject; // x0
  int32_t v50; // w2
  int32_t v51; // w3
  System_String_o *v52; // x4
  int32_t v53; // w5
  int64_t v54; // x6
  System_String_o *v55; // x7
  Il2CppObject *v56; // x1
  struct System_Object_array *items; // x8
  _QWORD *v58; // x9
  __int64 size; // x10
  Il2CppClass **v60; // x0
  __int64 v61; // x8
  __int64 v62; // x9
  int *v63; // x10
  __int64 v64; // x0

  if ( (byte_4D2CCDB & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_ViewGachaFeaturedServantMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_System_Linq_Enumerable_OrderByDescending_int__int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ThenBy_int__int___);
    sub_1C93AD4(&System_Func_int__int__TypeInfo);
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerable_int__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerator_int__TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerator_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_PossessionInfo___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_PossessionInfoDialog___c__DisplayClass12_0__CreateObjList_b__0__);
    sub_1C93AD4(&Method_PossessionInfoDialog___c__DisplayClass12_0__CreateObjList_b__1__);
    sub_1C93AD4(&PossessionInfoDialog___c__DisplayClass12_0_TypeInfo);
    byte_4D2CCDB = 1;
  }
  v5 = sub_1C93D20(PossessionInfoDialog___c__DisplayClass12_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ViewGachaFeaturedServantMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !v5 )
    goto LABEL_49;
  *(_QWORD *)(v5 + 24) = Master_object;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)Master_object, v8, v9, v10, v11, v12, v13);
  v14 = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantLimitMaster___);
  *(_QWORD *)(v5 + 16) = v14;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)v14, v15, v16, v17, v18, v19, v20);
  Master_object = (ViewGachaFeaturedServantMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ViewGachaFeaturedServantMaster___);
  if ( !Master_object
    || (FeaturedServantIds = (System_Collections_Generic_IEnumerable_TSource__o *)ViewGachaFeaturedServantMaster__GetFeaturedServantIds(
                                                                                    Master_object,
                                                                                    gachaId,
                                                                                    0),
        v22 = (System_Func_int__int__o *)sub_1C93D20(System_Func_int__int__TypeInfo),
        System_Func_int__int____ctor(
          v22,
          (Il2CppObject *)v5,
          Method_PossessionInfoDialog___c__DisplayClass12_0__CreateObjList_b__0__,
          0),
        v23 = System_Linq_Enumerable__OrderByDescending_int__int_(
                FeaturedServantIds,
                (System_Func_TSource__TKey__o *)v22,
                (const MethodInfo_31D3CA0 *)Method_System_Linq_Enumerable_OrderByDescending_int__int___),
        v24 = (System_Func_int__int__o *)sub_1C93D20(System_Func_int__int__TypeInfo),
        System_Func_int__int____ctor(
          v24,
          (Il2CppObject *)v5,
          Method_PossessionInfoDialog___c__DisplayClass12_0__CreateObjList_b__1__,
          0),
        (Master_object = (ViewGachaFeaturedServantMaster_o *)System_Linq_Enumerable__ThenBy_int__int_(
                                                               v23,
                                                               (System_Func_TSource__TKey__o *)v24,
                                                               (const MethodInfo_31E2C18 *)Method_System_Linq_Enumerable_ThenBy_int__int___)) == 0) )
  {
LABEL_49:
    sub_1C93D2C(Master_object, v7);
  }
  klass = Master_object->klass;
  v26 = Master_object;
  v27 = *(unsigned __int16 *)&Master_object->klass->_2.rank;
  if ( *(_WORD *)&Master_object->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      --v27;
      p_offset += 4;
      if ( !v27 )
        goto LABEL_12;
    }
    v29 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_12:
    v29 = sub_1C69E5C(Master_object, System_Collections_Generic_IEnumerable_int__TypeInfo, 0);
  }
  v31 = (*(__int64 (__fastcall **)(ViewGachaFeaturedServantMaster_o *, _QWORD))v29)(v26, *(_QWORD *)(v29 + 8));
  if ( !v31 )
    sub_1C93D2C(0, v30);
  while ( 1 )
  {
    v32 = *(_QWORD *)v31;
    v33 = *(unsigned __int16 *)(*(_QWORD *)v31 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v31 + 302LL) )
    {
      v34 = (int *)(*(_QWORD *)(v32 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v34 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v33;
        v34 += 4;
        if ( !v33 )
          goto LABEL_19;
      }
      v35 = v32 + 16LL * *v34 + 312;
    }
    else
    {
LABEL_19:
      v35 = sub_1C69E5C(v31, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v35)(v31, *(_QWORD *)(v35 + 8)) & 1) == 0 )
      break;
    v36 = *(_QWORD *)v31;
    v37 = *(unsigned __int16 *)(*(_QWORD *)v31 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v31 + 302LL) )
    {
      v38 = (int *)(*(_QWORD *)(v36 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v38 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        --v37;
        v38 += 4;
        if ( !v37 )
          goto LABEL_26;
      }
      v39 = v36 + 16LL * *v38 + 312;
    }
    else
    {
LABEL_26:
      v39 = sub_1C69E5C(v31, System_Collections_Generic_IEnumerator_int__TypeInfo, 0);
    }
    v41 = (*(__int64 (__fastcall **)(__int64, _QWORD))v39)(v31, *(_QWORD *)(v39 + 8));
    listRoot = (UnityEngine_Component_o *)this->fields.listRoot;
    if ( !listRoot )
      sub_1C93D2C(0, v40);
    possessionInfoObject = (Il2CppObject *)this->fields.possessionInfoObject;
    transform = UnityEngine_Component__get_transform(listRoot, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v45 = UnityEngine_Object__Instantiate_object__52629400(
            possessionInfoObject,
            transform,
            (const MethodInfo_3230F98 *)Method_UnityEngine_Object_Instantiate_PossessionInfo___);
    v47 = (PossessionInfo_o *)v45;
    if ( !v45 )
      sub_1C93D2C(0, v46);
    objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    gameObject = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v45, 0);
    v56 = gameObject;
    if ( !objectList )
      sub_1C93D2C(gameObject, gameObject);
    items = objectList->fields._items;
    v58 = Method_System_Collections_Generic_List_GameObject__Add__;
    ++objectList->fields._version;
    if ( !items )
      sub_1C93D2C(gameObject, gameObject);
    size = objectList->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        objectList,
        gameObject,
        *(const MethodInfo_387999C **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
    }
    else
    {
      v60 = &items->obj.klass + size;
      objectList->fields._size = size + 1;
      v60[4] = (Il2CppClass *)v56;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v60 + 4), (int32_t)v56, v50, v51, v52, v53, v54, v55);
    }
    PossessionInfo__SetInfo(v47, v41, 0);
  }
  v61 = *(_QWORD *)v31;
  v62 = *(unsigned __int16 *)(*(_QWORD *)v31 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v31 + 302LL) )
  {
    v63 = (int *)(*(_QWORD *)(v61 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v63 - 1) != System_IDisposable_TypeInfo )
    {
      --v62;
      v63 += 4;
      if ( !v62 )
        goto LABEL_42;
    }
    v64 = v61 + 16LL * *v63 + 312;
  }
  else
  {
LABEL_42:
    v64 = sub_1C69E5C(v31, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v64)(v31, *(_QWORD *)(v64 + 8));
}


void PossessionInfoDialog__Init(PossessionInfoDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  UILabel_o *titleLabel; // x20
  void *v5; // x0
  __int64 v6; // x1
  UILabel_o *messageLabel; // x20
  struct System_Collections_Generic_List_GameObject__o *objectList; // x20
  System_Action_object__o *v9; // x21
  Il2CppObject *v10; // x22
  struct PossessionInfoDialog___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  struct System_Collections_Generic_List_GameObject__o *v18; // x8
  int32_t size; // w2
  int v20; // w9

  if ( (byte_4D2CCDA & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_GameObject__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__ForEach__);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&Method_PossessionInfoDialog___c__Init_b__11_0__);
    sub_1C93AD4(&PossessionInfoDialog___c_TypeInfo);
    sub_1C93AD4(&StringLiteral_15743/*"Window/CloseButton"*/);
    sub_1C93AD4(&StringLiteral_10474/*"POSSESSION_DIALOG_TITLE"*/);
    sub_1C93AD4(&StringLiteral_10473/*"POSSESSION_DIALOG_MESSAGE"*/);
    byte_4D2CCDA = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackKeyTarget_45666792(transform, (System_String_o *)StringLiteral_15743/*"Window/CloseButton"*/, 0);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_10474/*"POSSESSION_DIALOG_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_18;
  UILabel__set_text(titleLabel, (System_String_o *)v5, 0);
  messageLabel = this->fields.messageLabel;
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_10473/*"POSSESSION_DIALOG_MESSAGE"*/, 0);
  if ( !messageLabel )
    goto LABEL_18;
  UILabel__set_text(messageLabel, (System_String_o *)v5, 0);
  v5 = PossessionInfoDialog___c_TypeInfo;
  objectList = this->fields.objectList;
  if ( !PossessionInfoDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PossessionInfoDialog___c_TypeInfo);
    v5 = PossessionInfoDialog___c_TypeInfo;
  }
  v9 = *(System_Action_object__o **)(*((_QWORD *)v5 + 23) + 8LL);
  if ( !v9 )
  {
    if ( !*((_DWORD *)v5 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = PossessionInfoDialog___c_TypeInfo;
    }
    v10 = (Il2CppObject *)**((_QWORD **)v5 + 23);
    v9 = (System_Action_object__o *)sub_1C93D20(System_Action_GameObject__TypeInfo);
    System_Action_object____ctor(v9, v10, Method_PossessionInfoDialog___c__Init_b__11_0__, 0);
    static_fields = PossessionInfoDialog___c_TypeInfo->static_fields;
    static_fields->__9__11_0 = (struct System_Action_GameObject__o *)v9;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__11_0, (int32_t)v9, v12, v13, v14, v15, v16, v17);
  }
  if ( !objectList
    || (System_Collections_Generic_List_object___ForEach(
          (System_Collections_Generic_List_object__o *)objectList,
          (System_Action_T__o *)v9,
          (const MethodInfo_387A3DC *)Method_System_Collections_Generic_List_GameObject__ForEach__),
        (v18 = this->fields.objectList) == 0) )
  {
LABEL_18:
    sub_1C93D2C(v5, v6);
  }
  size = v18->fields._size;
  v20 = v18->fields._version + 1;
  v18->fields._size = 0;
  v18->fields._version = v20;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v18->fields._items, 0, size, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


bool PossessionInfoDialog__IsEmptyDispObject(PossessionInfoDialog_o *this, const MethodInfo *method)
{
  PossessionInfoDialog_o *v2; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x8

  v2 = this;
  if ( (byte_4D2CCDF & 1) == 0 )
  {
    this = (PossessionInfoDialog_o *)sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    byte_4D2CCDF = 1;
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
    sub_1C93D2C(this, method);
  }
  return UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)this, 0) == 0;
}


void PossessionInfoDialog__OnClickClose(PossessionInfoDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4D2CCDE & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_PossessionInfoDialog_Init__);
    sub_1C93AD4(&Method_PossessionInfoDialog_OnClickClose__);
    byte_4D2CCDE = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_PossessionInfoDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_PossessionInfoDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_PossessionInfoDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
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

  if ( (byte_4D2CCDD & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_PossessionInfoDialog__Open_b__15_0__);
    byte_4D2CCDD = 1;
  }
  PossessionInfoDialog__CreateObjList(this, gachaId, method);
  PossessionInfoDialog__Reposition(this, v5);
  scrollBar = (UnityEngine_Component_o *)this->fields.scrollBar;
  if ( !scrollBar
    || (scrollBar = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(scrollBar, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)scrollBar, 0, 0),
        (scrollBar = (UnityEngine_Component_o *)this->fields.scrollView) == 0) )
  {
    sub_1C93D2C(scrollBar, v6);
  }
  UIScrollView__UpdateScrollbars((UIScrollView_o *)scrollBar, 0);
  v8 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_PossessionInfoDialog__Open_b__15_0__, 0);
  BaseDialog__SafeOpen((BaseDialog_o *)this, v8, 0, 0);
}


void PossessionInfoDialog__Reposition(PossessionInfoDialog_o *this, const MethodInfo *method)
{
  PossessionInfoDialog_o *v2; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x8
  struct UIGrid_o *listRoot; // x9
  float size; // s8
  float maxPerLine; // s9
  float v7; // s8
  unsigned int v8; // w9
  signed int v9; // w22
  UnityEngine_GameObject_o *gameObject; // x0
  struct UIGrid_o *v11; // x8
  float x; // s0
  bool v13; // nf
  float v14; // s0
  int v15; // w23
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
  float cellWidth; // s12
  float cellHeight; // s13
  UnityEngine_GameObject_o *v30; // x0
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4D2CCDC & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__GetRange__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    this = (PossessionInfoDialog_o *)sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    byte_4D2CCDC = 1;
  }
  objectList = v2->fields.objectList;
  if ( !objectList )
    goto LABEL_35;
  listRoot = v2->fields.listRoot;
  if ( !listRoot )
    goto LABEL_35;
  size = (float)objectList->fields._size;
  maxPerLine = (float)listRoot->fields.maxPerLine;
  if ( !byte_4D2A7BA )
  {
    sub_1C93AD4(&System_Math_TypeInfo);
    byte_4D2A7BA = 1;
  }
  v7 = size / maxPerLine;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  this = (PossessionInfoDialog_o *)v2->fields.listRoot;
  v8 = vcvtps_s32_f32(v7);
  v9 = ceilf(v7) == INFINITY ? 0x80000000 : v8;
  if ( !this )
    goto LABEL_35;
  if ( v9 > 1 )
  {
    LODWORD(this->fields.baseWindow) = 1124204544;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    GameObjectExtensions__SetLocalPositionX(gameObject, -10.0, 0);
    v11 = v2->fields.listRoot;
    if ( v11 )
    {
      x = NGUIMath__GetPivotOffset(v11->fields.pivot, 0).fields.x;
      v13 = x < 0.0;
      v14 = fminf(x, 1.0);
      v15 = 0;
      if ( v13 )
        v16 = 0.0;
      else
        v16 = v14;
      while ( 1 )
      {
        v17 = v2->fields.listRoot;
        if ( !v17 )
          goto LABEL_35;
        this = (PossessionInfoDialog_o *)v2->fields.objectList;
        if ( !this )
          goto LABEL_35;
        v18 = v17->fields.maxPerLine;
        v19 = LODWORD(this->fields.m_CancellationTokenSource) - v18 * v15 >= v18
            ? v18
            : LODWORD(this->fields.m_CancellationTokenSource) - v18 * v15;
        this = (PossessionInfoDialog_o *)System_Collections_Generic_List_object___GetRange(
                                           (System_Collections_Generic_List_object__o *)this,
                                           v18 * v15,
                                           v19,
                                           (const MethodInfo_387A56C *)Method_System_Collections_Generic_List_GameObject__GetRange__);
        if ( !this )
          goto LABEL_35;
        v20 = v2->fields.listRoot;
        if ( !v20 )
          goto LABEL_35;
        m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
        v22 = (System_Collections_Generic_List_object__o *)this;
        v23 = __OFSUB__(m_CancellationTokenSource, 1);
        v24 = m_CancellationTokenSource - 1;
        if ( v24 < 0 == v23 )
          break;
LABEL_31:
        if ( ++v15 == v9 )
          return;
      }
      v25 = 0;
      v26 = (float)(v16 * (float)(v20->fields.cellWidth * (float)v24)) + 0.0;
      while ( 1 )
      {
        this = (PossessionInfoDialog_o *)System_Collections_Generic_List_object___get_Item(
                                           v22,
                                           v25,
                                           (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_GameObject__get_Item__);
        v27 = v2->fields.listRoot;
        if ( !v27 )
          break;
        if ( !this )
          break;
        cellWidth = v27->fields.cellWidth;
        cellHeight = v27->fields.cellHeight;
        this = (PossessionInfoDialog_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
        if ( !this )
          break;
        v31.fields.x = (float)(cellWidth * (float)v25) - v26;
        v31.fields.y = (float)v15 * (float)-cellHeight;
        v31.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v31, 0);
        if ( ++v25 >= v22->fields._size )
          goto LABEL_31;
      }
    }
LABEL_35:
    sub_1C93D2C(this, method);
  }
  LODWORD(this->fields.baseWindow) = 1124597760;
  v30 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalPositionX(v30, 0.0, 0);
  this = (PossessionInfoDialog_o *)v2->fields.listRoot;
  if ( !this )
    goto LABEL_35;
  ((void (__fastcall *)(PossessionInfoDialog_o *, const char *))this->klass[1]._1.name)(
    this,
    this->klass[1]._1.namespaze);
}


void PossessionInfoDialog___Open_b__15_0(PossessionInfoDialog_o *this, const MethodInfo *method)
{
  void *scrollBar; // x0
  struct System_Collections_Generic_List_GameObject__o *objectList; // x20
  System_Action_object__o *v5; // x21
  Il2CppObject *v6; // x22
  struct PossessionInfoDialog___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  struct System_Collections_Generic_List_GameObject__o *v14; // x8
  struct UIGrid_o *listRoot; // x9

  if ( (byte_4D2CCE1 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_GameObject__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__ForEach__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C93AD4(&Method_PossessionInfoDialog___c__Open_b__15_1__);
    sub_1C93AD4(&PossessionInfoDialog___c_TypeInfo);
    byte_4D2CCE1 = 1;
  }
  scrollBar = PossessionInfoDialog___c_TypeInfo;
  objectList = this->fields.objectList;
  if ( !PossessionInfoDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PossessionInfoDialog___c_TypeInfo);
    scrollBar = PossessionInfoDialog___c_TypeInfo;
  }
  v5 = *(System_Action_object__o **)(*((_QWORD *)scrollBar + 23) + 16LL);
  if ( !v5 )
  {
    if ( !*((_DWORD *)scrollBar + 56) )
    {
      j_il2cpp_runtime_class_init_0(scrollBar);
      scrollBar = PossessionInfoDialog___c_TypeInfo;
    }
    v6 = (Il2CppObject *)**((_QWORD **)scrollBar + 23);
    v5 = (System_Action_object__o *)sub_1C93D20(System_Action_GameObject__TypeInfo);
    System_Action_object____ctor(v5, v6, Method_PossessionInfoDialog___c__Open_b__15_1__, 0);
    static_fields = PossessionInfoDialog___c_TypeInfo->static_fields;
    static_fields->__9__15_1 = (struct System_Action_GameObject__o *)v5;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__15_1, (int32_t)v5, v8, v9, v10, v11, v12, v13);
  }
  if ( !objectList
    || (System_Collections_Generic_List_object___ForEach(
          (System_Collections_Generic_List_object__o *)objectList,
          (System_Action_T__o *)v5,
          (const MethodInfo_387A3DC *)Method_System_Collections_Generic_List_GameObject__ForEach__),
        (scrollBar = this->fields.scrollBar) == 0)
    || (scrollBar = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollBar, 0),
        (v14 = this->fields.objectList) == 0)
    || (listRoot = this->fields.listRoot) == 0
    || !scrollBar
    || (UnityEngine_GameObject__SetActive(
          (UnityEngine_GameObject_o *)scrollBar,
          v14->fields._size > listRoot->fields.maxPerLine,
          0),
        (scrollBar = this->fields.scrollView) == 0) )
  {
    sub_1C93D2C(scrollBar, method);
  }
  UIScrollView__ResetPosition((UIScrollView_o *)scrollBar, 0);
}


void PossessionInfoDialog___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2CCE2 & 1) == 0 )
  {
    sub_1C93AD4(&PossessionInfoDialog___c_TypeInfo);
    byte_4D2CCE2 = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(PossessionInfoDialog___c_TypeInfo);
  System_Object___ctor(v1, 0);
  PossessionInfoDialog___c_TypeInfo->static_fields->__9 = (struct PossessionInfoDialog___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)PossessionInfoDialog___c_TypeInfo->static_fields,
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
  if ( (byte_4D2CCE3 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2CCE3 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0, 0) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_72119908((UnityEngine_Object_o *)obj, 0);
  }
}


void PossessionInfoDialog___c___Open_b__15_1(
        PossessionInfoDialog___c_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  _BOOL8 v4; // x0
  __int64 v5; // x1

  if ( (byte_4D2CCE4 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2CCE4 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0, 0);
  if ( v4 )
  {
    if ( !obj )
      sub_1C93D2C(v4, v5);
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
    sub_1C93D2C(servantLimitMaster, *(_QWORD *)&id);
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

  if ( (byte_4D2CCE5 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    byte_4D2CCE5 = 1;
  }
  svtMaster = this->fields.svtMaster;
  if ( !svtMaster
    || (svtMaster = DataMasterBase_object__object__int___GetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)svtMaster,
                      id,
                      (const MethodInfo_3463274 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0 )
  {
    sub_1C93D2C(svtMaster, *(_QWORD *)&id);
  }
  return *((_DWORD *)svtMaster + 52);
}