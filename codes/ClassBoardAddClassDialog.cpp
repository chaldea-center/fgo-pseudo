void ClassBoardAddClassDialog___ctor(ClassBoardAddClassDialog_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4CB9D05 & 1) == 0 )
  {
    sub_1C6BA08(&BaseDialog_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantClassIconComponent___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_ServantClassIconComponent__TypeInfo);
    byte_4CB9D05 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_ServantClassIconComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_ServantClassIconComponent___ctor__);
  this->fields.iconList = (struct System_Collections_Generic_List_ServantClassIconComponent__o *)v3;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.iconList, (int32_t)v3, v4, v5);
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

  if ( (byte_4CB9D02 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_ClassBoardAddClassDialog_OnCloseEnd__);
    byte_4CB9D02 = 1;
  }
  this->fields.closeCallback = closeCallback;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.closeCallback, (int32_t)closeCallback, (int32_t)method, v3);
  v6 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_ClassBoardAddClassDialog_OnCloseEnd__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0);
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_4CB9D04 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_ServantClassIconComponent___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantClassIconComponent__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantClassIconComponent__get_Count__);
    sub_1C6BA08(&Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (ClassBoardAddClassDialog_o *)sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB9D04 = 1;
  }
  iconList = v4->fields.iconList;
  if ( !iconList )
LABEL_17:
    sub_1C6BC60(this, *(_QWORD *)&count);
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
               (const MethodInfo_31C7F14 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
                                                 (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_ServantClassIconComponent___);
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
              *(const MethodInfo_3800974 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
          }
          else
          {
            v17 = &items->obj.klass + v15;
            v10->fields._size = v15 + 1;
            v17[4] = (Il2CppClass *)v16;
            sub_1C6B9AC((CGThumbnailListItem_o *)(v17 + 4), (int32_t)v16, v11, v12);
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
  __int64 v5; // x1

  if ( (byte_4CB9D01 & 1) == 0 )
  {
    sub_1C6BA08(&Method_ClassBoardAddClassDialog_OnClickCloseButton__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CB9D01 = 1;
  }
  v2 = Method_ClassBoardAddClassDialog_OnClickCloseButton__;
  if ( (*((_BYTE *)Method_ClassBoardAddClassDialog_OnClickCloseButton__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1C6BA20(Method_ClassBoardAddClassDialog_OnClickCloseButton__);
  v3 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C6BC60(0, v5);
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
  sub_1C6B9AC(p_closeCallback, 0, v2, v3);
  ActionExtensions__Call(closeCallback, 0);
}


void ClassBoardAddClassDialog__Open(
        ClassBoardAddClassDialog_o *this,
        int32_t classBaseId,
        System_Int32_array *classIds,
        const MethodInfo *method)
{
  ServantClassMaster_o *Master_object; // x0
  __int64 v8; // x1
  int32_t PlayableGrandBeastBaseClassId; // w22
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  bool v12; // w23
  struct UILabel_o *grandContentLabel; // x1
  struct UnityEngine_Transform_o *grandIconListParent; // x1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct UIScrollView_o *grandScrollView; // x1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct UnityEngine_GameObject_o *grandScrollArea; // x1
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  bool v23; // w1
  struct UILabel_o *contentLabel; // x1
  struct UnityEngine_Transform_o *iconListParent; // x1
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  struct UIScrollView_o *scrollView; // x1
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  struct UnityEngine_GameObject_o *scrollArea; // x1
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  const MethodInfo *v34; // x2
  __int64 v35; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v37; // x1
  const MethodInfo *v38; // x2
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v40; // x24
  int32_t *m_Items; // x27
  Il2CppObject *Item; // x25
  UILabel_o *useContentLabel; // x21
  System_String_o *v44; // x22
  long double inited; // q0
  _QWORD *v46; // x23
  __int64 v47; // x8
  __int64 v48; // x0
  __int64 v49; // x0
  int v50; // w8
  System_Collections_Generic_List_Enumerator_object__o v51; // [xsp+0h] [xbp-A0h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v53; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4CB9D00 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Array_Empty_object___);
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_UIGrid___);
    sub_1C6BA08(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ServantClassIconComponent__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ServantClassIconComponent__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ServantClassIconComponent__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantClassIconComponent__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantClassIconComponent__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantClassIconComponent__get_Item__);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_3355/*"CLASS_BOARD_ADD_CLASS_DIALOG_CLASS_ICON_TEXT_BEAST"*/);
    sub_1C6BA08(&StringLiteral_3358/*"CLASS_BOARD_ADD_GRAND_CLASS_DIALOG_CONTENT_BEAST"*/);
    sub_1C6BA08(&StringLiteral_3356/*"CLASS_BOARD_ADD_CLASS_DIALOG_CONTENT_FORMAT"*/);
    byte_4CB9D00 = 1;
  }
  memset(&v53, 0, sizeof(v53));
  entity = 0;
  if ( !classIds || !classIds->max_length )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ServantClassMaster_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ServantClassMaster___);
  if ( !Master_object )
    goto LABEL_89;
  PlayableGrandBeastBaseClassId = ServantClassMaster__GetPlayableGrandBeastBaseClassId(Master_object, 0);
  v12 = System_Linq_Enumerable__Contains_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)classIds,
          PlayableGrandBeastBaseClassId,
          (const MethodInfo_31583F4 *)Method_System_Linq_Enumerable_Contains_int___);
  if ( v12 )
  {
    grandContentLabel = this->fields.grandContentLabel;
    this->fields.useContentLabel = grandContentLabel;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.useContentLabel, (int32_t)grandContentLabel, v10, v11);
    grandIconListParent = this->fields.grandIconListParent;
    this->fields.useIconListParent = grandIconListParent;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.useIconListParent, (int32_t)grandIconListParent, v15, v16);
    grandScrollView = this->fields.grandScrollView;
    this->fields.useScrollView = grandScrollView;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.useScrollView, (int32_t)grandScrollView, v18, v19);
    grandScrollArea = this->fields.grandScrollArea;
    this->fields.useScrollArea = grandScrollArea;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.useScrollArea, (int32_t)grandScrollArea, v21, v22);
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
    v23 = 1;
  }
  else
  {
    contentLabel = this->fields.contentLabel;
    this->fields.useContentLabel = contentLabel;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.useContentLabel, (int32_t)contentLabel, v10, v11);
    iconListParent = this->fields.iconListParent;
    this->fields.useIconListParent = iconListParent;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.useIconListParent, (int32_t)iconListParent, v26, v27);
    scrollView = this->fields.scrollView;
    this->fields.useScrollView = scrollView;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.useScrollView, (int32_t)scrollView, v29, v30);
    scrollArea = this->fields.scrollArea;
    this->fields.useScrollArea = scrollArea;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.useScrollArea, (int32_t)scrollArea, v32, v33);
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
    v23 = 0;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v23, 0);
  ClassBoardAddClassDialog__CreateServantClassIconComponents(this, classIds->max_length, v34);
  Master_object = (ServantClassMaster_o *)this->fields.iconList;
  if ( !Master_object )
    goto LABEL_89;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v51,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_ServantClassIconComponent__GetEnumerator__);
  v53 = v51;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v53,
            (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_ServantClassIconComponent__MoveNext__) )
  {
    if ( !v53.fields._current )
      sub_1C6BC60(0, v35);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v53.fields._current, 0);
    if ( !gameObject )
      sub_1C6BC60(0, v37);
    UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v53,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_ServantClassIconComponent__Dispose__);
  max_length = classIds->max_length;
  if ( (int)max_length >= 1 )
  {
    v40 = 0;
    m_Items = classIds->m_Items;
    while ( 1 )
    {
      Master_object = (ServantClassMaster_o *)this->fields.iconList;
      if ( !Master_object )
        break;
      if ( (__int64)v40 < SLODWORD(Master_object->fields._MasterName_k__BackingField) )
      {
        Master_object = (ServantClassMaster_o *)System_Collections_Generic_List_object___get_Item(
                                                  (System_Collections_Generic_List_object__o *)Master_object,
                                                  v40,
                                                  (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ServantClassIconComponent__get_Item__);
        if ( v40 >= LODWORD(classIds->max_length) )
          goto LABEL_92;
        if ( !Master_object )
          break;
        ServantClassIconComponent__Set_41224224((ServantClassIconComponent_o *)Master_object, m_Items[v40], 3, 0);
        if ( v40 >= LODWORD(classIds->max_length) )
LABEL_92:
          sub_1C6BC68(Master_object);
        if ( m_Items[v40] == PlayableGrandBeastBaseClassId )
        {
          Master_object = (ServantClassMaster_o *)this->fields.iconList;
          if ( !Master_object )
            break;
          Item = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)Master_object,
                   v40,
                   (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ServantClassIconComponent__get_Item__);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          Master_object = (ServantClassMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3355/*"CLASS_BOARD_ADD_CLASS_DIALOG_CLASS_ICON_TEXT_BEAST"*/, 0);
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
                                                  v40,
                                                  (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ServantClassIconComponent__get_Item__);
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
      if ( (__int64)++v40 >= (int)max_length )
        goto LABEL_59;
    }
LABEL_89:
    sub_1C6BC60(Master_object, v8);
  }
LABEL_59:
  ClassBoardAddClassDialog__SetupText(this, classBaseId, v38);
  if ( v12 )
  {
    useContentLabel = this->fields.useContentLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v44 = LocalizationManager__Get((System_String_o *)StringLiteral_3358/*"CLASS_BOARD_ADD_GRAND_CLASS_DIALOG_CONTENT_BEAST"*/, 0);
    v46 = Method_System_Array_Empty_object___;
    v47 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
    if ( !v47 )
    {
      sub_1C41AF8(Method_System_Array_Empty_object___);
      v47 = v46[7];
    }
    v48 = *(_QWORD *)(v47 + 16);
    if ( (*(_BYTE *)(v48 + 309) & 1) == 0 )
      v48 = sub_1C41A9C(inited);
    if ( !*(_DWORD *)(v48 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v48);
    v49 = *(_QWORD *)(v46[7] + 16LL);
    if ( (*(_BYTE *)(v49 + 309) & 1) == 0 )
      v49 = sub_1C41A9C(inited);
    Master_object = (ServantClassMaster_o *)System_String__Format_64008236(
                                              v44,
                                              **(System_Object_array ***)(v49 + 184),
                                              0);
    if ( !useContentLabel )
      goto LABEL_89;
  }
  else
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (ServantClassMaster_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    if ( !Master_object )
      goto LABEL_89;
    if ( !DataMasterBase_object__object__int___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
            &entity,
            classBaseId,
            (const MethodInfo_33F9128 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__) )
      goto LABEL_81;
    useContentLabel = this->fields.useContentLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Master_object = (ServantClassMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3356/*"CLASS_BOARD_ADD_CLASS_DIALOG_CONTENT_FORMAT"*/, 0);
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
                                            (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
  if ( !Master_object )
    goto LABEL_89;
  ((void (__fastcall *)(ServantClassMaster_o *, const MethodInfo *))Master_object->klass->vtable._8_ReplacedForThread.methodPtr)(
    Master_object,
    Master_object->klass->vtable._8_ReplacedForThread.method);
  Master_object = (ServantClassMaster_o *)this->fields.useScrollView;
  if ( !Master_object )
    goto LABEL_89;
  if ( SLODWORD(classIds->max_length) > 4 )
    v50 = 1;
  else
    v50 = 4;
  HIDWORD(Master_object[1].klass) = v50;
  UIScrollView__ResetPosition((UIScrollView_o *)Master_object, 0);
}


void ClassBoardAddClassDialog__SetupText(
        ClassBoardAddClassDialog_o *this,
        int32_t classBaseId,
        const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v6; // x1
  UILabel_o *titleLabel; // x20
  bool IsGrand; // w21
  System_String_o **v9; // x8
  UILabel_o *closeButtonLabel; // x19
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CB9D03 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_3357/*"CLASS_BOARD_ADD_CLASS_DIALOG_TITLE"*/);
    sub_1C6BA08(&StringLiteral_3677/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C6BA08(&StringLiteral_3359/*"CLASS_BOARD_ADD_GRAND_CLASS_DIALOG_TITLE"*/);
    byte_4CB9D03 = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_object )
    goto LABEL_17;
  DataMasterBase_object__object__int___TryGetEntity(
    Master_object,
    &entity,
    classBaseId,
    (const MethodInfo_33F9128 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
  if ( !entity )
    goto LABEL_17;
  titleLabel = this->fields.titleLabel;
  IsGrand = ClassBoardBaseEntity__IsGrand((ClassBoardBaseEntity_o *)entity, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v9 = (System_String_o **)(IsGrand ? &StringLiteral_3359/*"CLASS_BOARD_ADD_GRAND_CLASS_DIALOG_TITLE"*/ : &StringLiteral_3357/*"CLASS_BOARD_ADD_CLASS_DIALOG_TITLE"*/);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(*v9, 0);
  if ( !titleLabel )
    goto LABEL_17;
  UILabel__set_text(titleLabel, (System_String_o *)Master_object, 0);
  closeButtonLabel = this->fields.closeButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_3677/*"COMMON_CONFIRM_CLOSE"*/,
                                                                  0);
  if ( !closeButtonLabel )
LABEL_17:
    sub_1C6BC60(Master_object, v6);
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