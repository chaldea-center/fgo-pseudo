void ClassBoardAddClassDialog___ctor(ClassBoardAddClassDialog_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C3B32A & 1) == 0 )
  {
    sub_1C32C20(&BaseDialog_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantClassIconComponent___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_ServantClassIconComponent__TypeInfo);
    byte_4C3B32A = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ServantClassIconComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_ServantClassIconComponent___ctor__);
  this->fields.iconList = (struct System_Collections_Generic_List_ServantClassIconComponent__o *)v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.iconList, (int32_t)v3, v4, v5);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void ClassBoardAddClassDialog__Close(
        ClassBoardAddClassDialog_o *this,
        System_Action_o *closeCallback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Action_o *v6; // x20

  if ( (byte_4C3B327 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_ClassBoardAddClassDialog_OnCloseEnd__);
    byte_4C3B327 = 1;
  }
  this->fields.closeCallback = closeCallback;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.closeCallback, (int32_t)closeCallback, (int32_t)method, v3);
  v6 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_ClassBoardAddClassDialog_OnCloseEnd__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0);
}


void ClassBoardAddClassDialog__CreateServantClassIconComponents(
        ClassBoardAddClassDialog_o *this,
        int32_t count,
        const MethodInfo *method)
{
  ClassBoardAddClassDialog_o *v4; // x19
  struct System_Collections_Generic_List_ServantClassIconComponent__o *iconList; // x8
  int32_t size; // w8
  int v7; // w22
  Il2CppObject *iconPrefab; // x20
  Il2CppObject *v9; // x21
  System_Collections_Generic_List_object__o *v10; // x20
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 v15; // x10
  ClassBoardAddClassDialog_o *v16; // x1
  Il2CppClass **v17; // x0

  v4 = this;
  if ( (byte_4C3B329 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_ServantClassIconComponent___);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantClassIconComponent__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantClassIconComponent__get_Count__);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (ClassBoardAddClassDialog_o *)sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3B329 = 1;
  }
  iconList = v4->fields.iconList;
  if ( !iconList )
LABEL_17:
    sub_1C32E7C(this);
  size = iconList->fields._size;
  if ( size < count )
  {
    v7 = count - size;
    if ( count - size >= 1 )
    {
      do
      {
        iconPrefab = (Il2CppObject *)v4->fields.iconPrefab;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v9 = UnityEngine_Object__Instantiate_object_(
               iconPrefab,
               (const MethodInfo_3169758 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v9, 0, 0) )
        {
          GameObjectExtensions__SafeSetParent(
            (UnityEngine_GameObject_o *)v9,
            (UnityEngine_Component_o *)v4->fields.useIconListParent,
            0);
          if ( !v9 )
            goto LABEL_17;
          v10 = (System_Collections_Generic_List_object__o *)v4->fields.iconList;
          this = (ClassBoardAddClassDialog_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 (UnityEngine_GameObject_o *)v9,
                                                 (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_ServantClassIconComponent___);
          if ( !v10 )
            goto LABEL_17;
          items = v10->fields._items;
          v14 = Method_System_Collections_Generic_List_ServantClassIconComponent__Add__;
          ++v10->fields._version;
          if ( !items )
            goto LABEL_17;
          v15 = v10->fields._size;
          v16 = this;
          if ( (unsigned int)v15 >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v10,
              (Il2CppObject *)this,
              *(const MethodInfo_37987BC **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
          }
          else
          {
            v17 = &items->obj.klass + v15;
            v10->fields._size = v15 + 1;
            v17[4] = (Il2CppClass *)v16;
            sub_1C32BC4((CGThumbnailListItem_o *)(v17 + 4), (int32_t)v16, v11, v12);
          }
        }
        --v7;
      }
      while ( v7 );
    }
  }
}


void ClassBoardAddClassDialog__Init(ClassBoardAddClassDialog_o *this, const MethodInfo *method)
{
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void ClassBoardAddClassDialog__OnClickCloseButton(ClassBoardAddClassDialog_o *this, const MethodInfo *method)
{
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0
  Il2CppObject *Instance; // x0

  if ( (byte_4C3B326 & 1) == 0 )
  {
    sub_1C32C20(&Method_ClassBoardAddClassDialog_OnClickCloseButton__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3B326 = 1;
  }
  v2 = Method_ClassBoardAddClassDialog_OnClickCloseButton__;
  if ( (*((_BYTE *)Method_ClassBoardAddClassDialog_OnClickCloseButton__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1C32C38(Method_ClassBoardAddClassDialog_OnClickCloseButton__);
  v3 = (System_Reflection_MethodBase_o *)sub_1C32C04(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
  CommonUI__CloseClassBoardAddClassDialog((CommonUI_o *)Instance, 0);
}


void ClassBoardAddClassDialog__OnCloseEnd(ClassBoardAddClassDialog_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_closeCallback; // x0
  System_Action_o *closeCallback; // t1

  closeCallback = this->fields.closeCallback;
  p_closeCallback = (CGThumbnailListItem_o *)&this->fields.closeCallback;
  p_closeCallback->klass = 0;
  sub_1C32BC4(p_closeCallback, 0, v2, v3);
  ActionExtensions__Call(closeCallback, 0);
}


void ClassBoardAddClassDialog__Open(
        ClassBoardAddClassDialog_o *this,
        int32_t classBaseId,
        System_Int32_array *classIds,
        const MethodInfo *method)
{
  ServantClassMaster_o *Master_object; // x0
  int32_t PlayableGrandBeastBaseClassId; // w22
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  bool v11; // w23
  struct UILabel_o *grandContentLabel; // x1
  struct UnityEngine_Transform_o *grandIconListParent; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct UIScrollView_o *grandScrollView; // x1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct UnityEngine_GameObject_o *grandScrollArea; // x1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  bool v22; // w1
  struct UILabel_o *contentLabel; // x1
  struct UnityEngine_Transform_o *iconListParent; // x1
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  struct UIScrollView_o *scrollView; // x1
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  struct UnityEngine_GameObject_o *scrollArea; // x1
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  const MethodInfo *v33; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v35; // x2
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v37; // x24
  int32_t *m_Items; // x27
  Il2CppObject *Item; // x25
  UILabel_o *useContentLabel; // x21
  System_String_o *v41; // x22
  long double inited; // q0
  _QWORD *v43; // x23
  __int64 v44; // x8
  __int64 v45; // x0
  __int64 v46; // x0
  int v47; // w8
  System_Collections_Generic_List_Enumerator_object__o v48; // [xsp+0h] [xbp-A0h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v50; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C3B325 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Array_Empty_object___);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_UIGrid___);
    sub_1C32C20(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ServantClassIconComponent__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ServantClassIconComponent__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ServantClassIconComponent__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantClassIconComponent__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantClassIconComponent__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantClassIconComponent__get_Item__);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_3363/*"CLASS_BOARD_ADD_CLASS_DIALOG_CLASS_ICON_TEXT_BEAST"*/);
    sub_1C32C20(&StringLiteral_3366/*"CLASS_BOARD_ADD_GRAND_CLASS_DIALOG_CONTENT_BEAST"*/);
    sub_1C32C20(&StringLiteral_3364/*"CLASS_BOARD_ADD_CLASS_DIALOG_CONTENT_FORMAT"*/);
    byte_4C3B325 = 1;
  }
  memset(&v50, 0, sizeof(v50));
  entity = 0;
  if ( !classIds || !classIds->max_length )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ServantClassMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantClassMaster___);
  if ( !Master_object )
    goto LABEL_89;
  PlayableGrandBeastBaseClassId = ServantClassMaster__GetPlayableGrandBeastBaseClassId(Master_object, 0);
  v11 = System_Linq_Enumerable__Contains_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)classIds,
          PlayableGrandBeastBaseClassId,
          (const MethodInfo_30FA3A0 *)Method_System_Linq_Enumerable_Contains_int___);
  if ( v11 )
  {
    grandContentLabel = this->fields.grandContentLabel;
    this->fields.useContentLabel = grandContentLabel;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.useContentLabel, (int32_t)grandContentLabel, v9, v10);
    grandIconListParent = this->fields.grandIconListParent;
    this->fields.useIconListParent = grandIconListParent;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.useIconListParent, (int32_t)grandIconListParent, v14, v15);
    grandScrollView = this->fields.grandScrollView;
    this->fields.useScrollView = grandScrollView;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.useScrollView, (int32_t)grandScrollView, v17, v18);
    grandScrollArea = this->fields.grandScrollArea;
    this->fields.useScrollArea = grandScrollArea;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.useScrollArea, (int32_t)grandScrollArea, v20, v21);
    Master_object = (ServantClassMaster_o *)this->fields.contentLabel;
    if ( !Master_object )
      goto LABEL_89;
    Master_object = (ServantClassMaster_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)Master_object,
                                              0);
    if ( !Master_object )
      goto LABEL_89;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
    Master_object = (ServantClassMaster_o *)this->fields.iconListParent;
    if ( !Master_object )
      goto LABEL_89;
    Master_object = (ServantClassMaster_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)Master_object,
                                              0);
    if ( !Master_object )
      goto LABEL_89;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
    Master_object = (ServantClassMaster_o *)this->fields.scrollArea;
    if ( !Master_object )
      goto LABEL_89;
    Master_object = (ServantClassMaster_o *)UnityEngine_GameObject__get_gameObject(
                                              (UnityEngine_GameObject_o *)Master_object,
                                              0);
    if ( !Master_object )
      goto LABEL_89;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
    Master_object = (ServantClassMaster_o *)this->fields.grandContentLabel;
    if ( !Master_object )
      goto LABEL_89;
    Master_object = (ServantClassMaster_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)Master_object,
                                              0);
    if ( !Master_object )
      goto LABEL_89;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
    Master_object = (ServantClassMaster_o *)this->fields.grandIconListParent;
    if ( !Master_object )
      goto LABEL_89;
    Master_object = (ServantClassMaster_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)Master_object,
                                              0);
    if ( !Master_object )
      goto LABEL_89;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
    Master_object = (ServantClassMaster_o *)this->fields.grandScrollArea;
    if ( !Master_object )
      goto LABEL_89;
    Master_object = (ServantClassMaster_o *)UnityEngine_GameObject__get_gameObject(
                                              (UnityEngine_GameObject_o *)Master_object,
                                              0);
    if ( !Master_object )
      goto LABEL_89;
    v22 = 1;
  }
  else
  {
    contentLabel = this->fields.contentLabel;
    this->fields.useContentLabel = contentLabel;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.useContentLabel, (int32_t)contentLabel, v9, v10);
    iconListParent = this->fields.iconListParent;
    this->fields.useIconListParent = iconListParent;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.useIconListParent, (int32_t)iconListParent, v25, v26);
    scrollView = this->fields.scrollView;
    this->fields.useScrollView = scrollView;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.useScrollView, (int32_t)scrollView, v28, v29);
    scrollArea = this->fields.scrollArea;
    this->fields.useScrollArea = scrollArea;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.useScrollArea, (int32_t)scrollArea, v31, v32);
    Master_object = (ServantClassMaster_o *)this->fields.contentLabel;
    if ( !Master_object )
      goto LABEL_89;
    Master_object = (ServantClassMaster_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)Master_object,
                                              0);
    if ( !Master_object )
      goto LABEL_89;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
    Master_object = (ServantClassMaster_o *)this->fields.iconListParent;
    if ( !Master_object )
      goto LABEL_89;
    Master_object = (ServantClassMaster_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)Master_object,
                                              0);
    if ( !Master_object )
      goto LABEL_89;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
    Master_object = (ServantClassMaster_o *)this->fields.scrollArea;
    if ( !Master_object )
      goto LABEL_89;
    Master_object = (ServantClassMaster_o *)UnityEngine_GameObject__get_gameObject(
                                              (UnityEngine_GameObject_o *)Master_object,
                                              0);
    if ( !Master_object )
      goto LABEL_89;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
    Master_object = (ServantClassMaster_o *)this->fields.grandContentLabel;
    if ( !Master_object )
      goto LABEL_89;
    Master_object = (ServantClassMaster_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)Master_object,
                                              0);
    if ( !Master_object )
      goto LABEL_89;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
    Master_object = (ServantClassMaster_o *)this->fields.grandIconListParent;
    if ( !Master_object )
      goto LABEL_89;
    Master_object = (ServantClassMaster_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)Master_object,
                                              0);
    if ( !Master_object )
      goto LABEL_89;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
    Master_object = (ServantClassMaster_o *)this->fields.grandScrollArea;
    if ( !Master_object )
      goto LABEL_89;
    Master_object = (ServantClassMaster_o *)UnityEngine_GameObject__get_gameObject(
                                              (UnityEngine_GameObject_o *)Master_object,
                                              0);
    if ( !Master_object )
      goto LABEL_89;
    v22 = 0;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v22, 0);
  ClassBoardAddClassDialog__CreateServantClassIconComponents(this, classIds->max_length, v33);
  Master_object = (ServantClassMaster_o *)this->fields.iconList;
  if ( !Master_object )
    goto LABEL_89;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v48,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_ServantClassIconComponent__GetEnumerator__);
  v50 = v48;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v50,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_ServantClassIconComponent__MoveNext__) )
  {
    if ( !v50.fields._current )
      sub_1C32E7C(0);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v50.fields._current, 0);
    if ( !gameObject )
      sub_1C32E7C(0);
    UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v50,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_ServantClassIconComponent__Dispose__);
  max_length = classIds->max_length;
  if ( (int)max_length >= 1 )
  {
    v37 = 0;
    m_Items = classIds->m_Items;
    while ( 1 )
    {
      Master_object = (ServantClassMaster_o *)this->fields.iconList;
      if ( !Master_object )
        break;
      if ( (__int64)v37 < SLODWORD(Master_object->fields._MasterName_k__BackingField) )
      {
        Master_object = (ServantClassMaster_o *)System_Collections_Generic_List_object___get_Item(
                                                  (System_Collections_Generic_List_object__o *)Master_object,
                                                  v37,
                                                  (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ServantClassIconComponent__get_Item__);
        if ( v37 >= LODWORD(classIds->max_length) )
          goto LABEL_92;
        if ( !Master_object )
          break;
        ServantClassIconComponent__Set_40891056((ServantClassIconComponent_o *)Master_object, m_Items[v37], 3, 0);
        if ( v37 >= LODWORD(classIds->max_length) )
LABEL_92:
          sub_1C32E84(Master_object);
        if ( m_Items[v37] == PlayableGrandBeastBaseClassId )
        {
          Master_object = (ServantClassMaster_o *)this->fields.iconList;
          if ( !Master_object )
            break;
          Item = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)Master_object,
                   v37,
                   (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ServantClassIconComponent__get_Item__);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          Master_object = (ServantClassMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3363/*"CLASS_BOARD_ADD_CLASS_DIALOG_CLASS_ICON_TEXT_BEAST"*/, 0);
          if ( !Item )
            break;
          ServantClassIconComponent__OverwriteTextNameLabel(
            (ServantClassIconComponent_o *)Item,
            (System_String_o *)Master_object,
            0);
        }
        Master_object = (ServantClassMaster_o *)this->fields.iconList;
        if ( !Master_object )
          break;
        Master_object = (ServantClassMaster_o *)System_Collections_Generic_List_object___get_Item(
                                                  (System_Collections_Generic_List_object__o *)Master_object,
                                                  v37,
                                                  (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ServantClassIconComponent__get_Item__);
        if ( !Master_object )
          break;
        Master_object = (ServantClassMaster_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)Master_object,
                                                  0);
        if ( !Master_object )
          break;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
        max_length = classIds->max_length;
      }
      if ( (__int64)++v37 >= (int)max_length )
        goto LABEL_59;
    }
LABEL_89:
    sub_1C32E7C(Master_object);
  }
LABEL_59:
  ClassBoardAddClassDialog__SetupText(this, classBaseId, v35);
  if ( v11 )
  {
    useContentLabel = this->fields.useContentLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v41 = LocalizationManager__Get((System_String_o *)StringLiteral_3366/*"CLASS_BOARD_ADD_GRAND_CLASS_DIALOG_CONTENT_BEAST"*/, 0);
    v43 = Method_System_Array_Empty_object___;
    v44 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
    if ( !v44 )
    {
      sub_1C83390(Method_System_Array_Empty_object___);
      v44 = v43[7];
    }
    v45 = *(_QWORD *)(v44 + 16);
    if ( (*(_BYTE *)(v45 + 309) & 1) == 0 )
      v45 = sub_1C83334(inited);
    if ( !*(_DWORD *)(v45 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v45);
    v46 = *(_QWORD *)(v43[7] + 16LL);
    if ( (*(_BYTE *)(v46 + 309) & 1) == 0 )
      v46 = sub_1C83334(inited);
    Master_object = (ServantClassMaster_o *)System_String__Format_63559972(
                                              v41,
                                              **(System_Object_array ***)(v46 + 184),
                                              0);
    if ( !useContentLabel )
      goto LABEL_89;
  }
  else
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (ServantClassMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    if ( !Master_object )
      goto LABEL_89;
    if ( !DataMasterBase_object__object__int___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
            &entity,
            classBaseId,
            (const MethodInfo_3396884 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__) )
      goto LABEL_81;
    useContentLabel = this->fields.useContentLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Master_object = (ServantClassMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3364/*"CLASS_BOARD_ADD_CLASS_DIALOG_CONTENT_FORMAT"*/, 0);
    if ( !entity )
      goto LABEL_89;
    Master_object = (ServantClassMaster_o *)System_String__Format(
                                              (System_String_o *)Master_object,
                                              (Il2CppObject *)entity[1].monitor,
                                              0);
    if ( !useContentLabel )
      goto LABEL_89;
  }
  UILabel__set_text(useContentLabel, (System_String_o *)Master_object, 0);
LABEL_81:
  BaseDialog__Open((BaseDialog_o *)this, 0, 0, 0, 0);
  Master_object = (ServantClassMaster_o *)this->fields.useIconListParent;
  if ( !Master_object )
    goto LABEL_89;
  Master_object = (ServantClassMaster_o *)UnityEngine_Component__GetComponent_object_(
                                            (UnityEngine_Component_o *)Master_object,
                                            (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
  if ( !Master_object )
    goto LABEL_89;
  ((void (__fastcall *)(ServantClassMaster_o *, const MethodInfo *))Master_object->klass->vtable._8_ReplacedForThread.methodPtr)(
    Master_object,
    Master_object->klass->vtable._8_ReplacedForThread.method);
  Master_object = (ServantClassMaster_o *)this->fields.useScrollView;
  if ( !Master_object )
    goto LABEL_89;
  if ( SLODWORD(classIds->max_length) > 4 )
    v47 = 1;
  else
    v47 = 4;
  HIDWORD(Master_object[1].klass) = v47;
  UIScrollView__ResetPosition((UIScrollView_o *)Master_object, 0);
}


void ClassBoardAddClassDialog__SetupText(
        ClassBoardAddClassDialog_o *this,
        int32_t classBaseId,
        const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  UILabel_o *titleLabel; // x20
  bool IsGrand; // w21
  System_String_o **v8; // x8
  UILabel_o *closeButtonLabel; // x19
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C3B328 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_3365/*"CLASS_BOARD_ADD_CLASS_DIALOG_TITLE"*/);
    sub_1C32C20(&StringLiteral_3685/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C32C20(&StringLiteral_3367/*"CLASS_BOARD_ADD_GRAND_CLASS_DIALOG_TITLE"*/);
    byte_4C3B328 = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_object )
    goto LABEL_17;
  DataMasterBase_object__object__int___TryGetEntity(
    Master_object,
    &entity,
    classBaseId,
    (const MethodInfo_3396884 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
  if ( !entity )
    goto LABEL_17;
  titleLabel = this->fields.titleLabel;
  IsGrand = ClassBoardBaseEntity__IsGrand((ClassBoardBaseEntity_o *)entity, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = (System_String_o **)(IsGrand ? &StringLiteral_3367/*"CLASS_BOARD_ADD_GRAND_CLASS_DIALOG_TITLE"*/ : &StringLiteral_3365/*"CLASS_BOARD_ADD_CLASS_DIALOG_TITLE"*/);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(*v8, 0);
  if ( !titleLabel )
    goto LABEL_17;
  UILabel__set_text(titleLabel, (System_String_o *)Master_object, 0);
  closeButtonLabel = this->fields.closeButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_3685/*"COMMON_CONFIRM_CLOSE"*/,
                                                                  0);
  if ( !closeButtonLabel )
LABEL_17:
    sub_1C32E7C(Master_object);
  UILabel__set_text(closeButtonLabel, (System_String_o *)Master_object, 0);
}


void ClassBoardAddClassDialog__Validation(ClassBoardAddClassDialog_o *this, const MethodInfo *method)
{
  ;
}


UnityEngine_GameObject_o *ClassBoardAddClassDialog__get_closeBtnObject(
        ClassBoardAddClassDialog_o *this,
        const MethodInfo *method)
{
  return this->fields.closeButtonObj;
}