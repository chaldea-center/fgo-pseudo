void ClassBoardAddClassDialog___ctor(ClassBoardAddClassDialog_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4CCAE57 & 1) == 0 )
  {
    sub_1C713B0(&BaseDialog_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantClassIconComponent___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_ServantClassIconComponent__TypeInfo);
    byte_4CCAE57 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_ServantClassIconComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_ServantClassIconComponent___ctor__);
  this->fields.iconList = (struct System_Collections_Generic_List_ServantClassIconComponent__o *)v3;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.iconList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void ClassBoardAddClassDialog__Close(
        ClassBoardAddClassDialog_o *this,
        System_Action_o *closeCallback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_4CCAE54 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_ClassBoardAddClassDialog_OnCloseEnd__);
    byte_4CCAE54 = 1;
  }
  this->fields.closeCallback = closeCallback;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.closeCallback,
    (int32_t)closeCallback,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_ClassBoardAddClassDialog_OnCloseEnd__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0);
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
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 v19; // x10
  ClassBoardAddClassDialog_o *v20; // x1
  Il2CppClass **v21; // x0

  v4 = this;
  if ( (byte_4CCAE56 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_ServantClassIconComponent___);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantClassIconComponent__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantClassIconComponent__get_Count__);
    sub_1C713B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (ClassBoardAddClassDialog_o *)sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCAE56 = 1;
  }
  iconList = v4->fields.iconList;
  if ( !iconList )
LABEL_17:
    sub_1C71608(this, *(_QWORD *)&count);
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
               (const MethodInfo_31D7CB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
                                                 (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_ServantClassIconComponent___);
          if ( !v10 )
            goto LABEL_17;
          items = v10->fields._items;
          v18 = Method_System_Collections_Generic_List_ServantClassIconComponent__Add__;
          ++v10->fields._version;
          if ( !items )
            goto LABEL_17;
          v19 = v10->fields._size;
          v20 = this;
          if ( (unsigned int)v19 >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v10,
              (Il2CppObject *)this,
              *(const MethodInfo_3810718 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v21 = &items->obj.klass + v19;
            v10->fields._size = v19 + 1;
            v21[4] = (Il2CppClass *)v20;
            sub_1C71354((GrandQuestFolderBoardItem_o *)(v21 + 4), (int32_t)v20, v11, v12, v13, v14, v15, v16);
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

  if ( (byte_4CCAE53 & 1) == 0 )
  {
    sub_1C713B0(&Method_ClassBoardAddClassDialog_OnClickCloseButton__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CCAE53 = 1;
  }
  v2 = Method_ClassBoardAddClassDialog_OnClickCloseButton__;
  if ( (*((_BYTE *)Method_ClassBoardAddClassDialog_OnClickCloseButton__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1C713C8(Method_ClassBoardAddClassDialog_OnClickCloseButton__);
  v3 = (System_Reflection_MethodBase_o *)sub_1C71394(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C71608(0, v5);
  CommonUI__CloseClassBoardAddClassDialog((CommonUI_o *)Instance, 0);
}


void ClassBoardAddClassDialog__OnCloseEnd(ClassBoardAddClassDialog_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_closeCallback; // x0
  System_Action_o *closeCallback; // t1

  closeCallback = this->fields.closeCallback;
  p_closeCallback = (GrandQuestFolderBoardItem_o *)&this->fields.closeCallback;
  p_closeCallback->klass = 0;
  sub_1C71354(p_closeCallback, 0, v2, v3, v4, v5, v6, v7);
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
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  bool v16; // w23
  struct UILabel_o *grandContentLabel; // x1
  struct UnityEngine_Transform_o *grandIconListParent; // x1
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  struct UIScrollView_o *grandScrollView; // x1
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  struct UnityEngine_GameObject_o *grandScrollArea; // x1
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  bool v39; // w1
  struct UILabel_o *contentLabel; // x1
  struct UnityEngine_Transform_o *iconListParent; // x1
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  struct UIScrollView_o *scrollView; // x1
  int32_t v49; // w2
  int32_t v50; // w3
  System_String_o *v51; // x4
  int32_t v52; // w5
  int64_t v53; // x6
  System_String_o *v54; // x7
  struct UnityEngine_GameObject_o *scrollArea; // x1
  int32_t v56; // w2
  int32_t v57; // w3
  System_String_o *v58; // x4
  int32_t v59; // w5
  int64_t v60; // x6
  System_String_o *v61; // x7
  const MethodInfo *v62; // x2
  __int64 v63; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v65; // x1
  const MethodInfo *v66; // x2
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v68; // x24
  int32_t *m_Items; // x27
  Il2CppObject *Item; // x25
  UILabel_o *useContentLabel; // x21
  System_String_o *v72; // x22
  long double inited; // q0
  _QWORD *v74; // x23
  __int64 v75; // x8
  __int64 v76; // x0
  __int64 v77; // x0
  int v78; // w8
  System_Collections_Generic_List_Enumerator_object__o v79; // [xsp+0h] [xbp-A0h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v81; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4CCAE52 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Array_Empty_object___);
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_UIGrid___);
    sub_1C713B0(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
    sub_1C713B0(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ServantClassIconComponent__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ServantClassIconComponent__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ServantClassIconComponent__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantClassIconComponent__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantClassIconComponent__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantClassIconComponent__get_Item__);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&StringLiteral_3358/*"CLASS_BOARD_ADD_CLASS_DIALOG_CLASS_ICON_TEXT_BEAST"*/);
    sub_1C713B0(&StringLiteral_3361/*"CLASS_BOARD_ADD_GRAND_CLASS_DIALOG_CONTENT_BEAST"*/);
    sub_1C713B0(&StringLiteral_3359/*"CLASS_BOARD_ADD_CLASS_DIALOG_CONTENT_FORMAT"*/);
    byte_4CCAE52 = 1;
  }
  memset(&v81, 0, sizeof(v81));
  entity = 0;
  if ( !classIds || !classIds->max_length )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ServantClassMaster_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_ServantClassMaster___);
  if ( !Master_object )
    goto LABEL_89;
  PlayableGrandBeastBaseClassId = ServantClassMaster__GetPlayableGrandBeastBaseClassId(Master_object, 0);
  v16 = System_Linq_Enumerable__Contains_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)classIds,
          PlayableGrandBeastBaseClassId,
          (const MethodInfo_3168198 *)Method_System_Linq_Enumerable_Contains_int___);
  if ( v16 )
  {
    grandContentLabel = this->fields.grandContentLabel;
    this->fields.useContentLabel = grandContentLabel;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&this->fields.useContentLabel,
      (int32_t)grandContentLabel,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
    grandIconListParent = this->fields.grandIconListParent;
    this->fields.useIconListParent = grandIconListParent;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&this->fields.useIconListParent,
      (int32_t)grandIconListParent,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
    grandScrollView = this->fields.grandScrollView;
    this->fields.useScrollView = grandScrollView;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&this->fields.useScrollView,
      (int32_t)grandScrollView,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
    grandScrollArea = this->fields.grandScrollArea;
    this->fields.useScrollArea = grandScrollArea;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&this->fields.useScrollArea,
      (int32_t)grandScrollArea,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
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
    v39 = 1;
  }
  else
  {
    contentLabel = this->fields.contentLabel;
    this->fields.useContentLabel = contentLabel;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&this->fields.useContentLabel,
      (int32_t)contentLabel,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
    iconListParent = this->fields.iconListParent;
    this->fields.useIconListParent = iconListParent;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&this->fields.useIconListParent,
      (int32_t)iconListParent,
      v42,
      v43,
      v44,
      v45,
      v46,
      v47);
    scrollView = this->fields.scrollView;
    this->fields.useScrollView = scrollView;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&this->fields.useScrollView,
      (int32_t)scrollView,
      v49,
      v50,
      v51,
      v52,
      v53,
      v54);
    scrollArea = this->fields.scrollArea;
    this->fields.useScrollArea = scrollArea;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&this->fields.useScrollArea,
      (int32_t)scrollArea,
      v56,
      v57,
      v58,
      v59,
      v60,
      v61);
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
    v39 = 0;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v39, 0);
  ClassBoardAddClassDialog__CreateServantClassIconComponents(this, classIds->max_length, v62);
  Master_object = (ServantClassMaster_o *)this->fields.iconList;
  if ( !Master_object )
    goto LABEL_89;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v79,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_ServantClassIconComponent__GetEnumerator__);
  v81 = v79;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v81,
            (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_ServantClassIconComponent__MoveNext__) )
  {
    if ( !v81.fields._current )
      sub_1C71608(0, v63);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v81.fields._current, 0);
    if ( !gameObject )
      sub_1C71608(0, v65);
    UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v81,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_ServantClassIconComponent__Dispose__);
  max_length = classIds->max_length;
  if ( (int)max_length >= 1 )
  {
    v68 = 0;
    m_Items = classIds->m_Items;
    while ( 1 )
    {
      Master_object = (ServantClassMaster_o *)this->fields.iconList;
      if ( !Master_object )
        break;
      if ( (__int64)v68 < SLODWORD(Master_object->fields._MasterName_k__BackingField) )
      {
        Master_object = (ServantClassMaster_o *)System_Collections_Generic_List_object___get_Item(
                                                  (System_Collections_Generic_List_object__o *)Master_object,
                                                  v68,
                                                  (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ServantClassIconComponent__get_Item__);
        if ( v68 >= LODWORD(classIds->max_length) )
          goto LABEL_92;
        if ( !Master_object )
          break;
        ServantClassIconComponent__Set_41266864((ServantClassIconComponent_o *)Master_object, m_Items[v68], 3, 0);
        if ( v68 >= LODWORD(classIds->max_length) )
LABEL_92:
          sub_1C71610(Master_object);
        if ( m_Items[v68] == PlayableGrandBeastBaseClassId )
        {
          Master_object = (ServantClassMaster_o *)this->fields.iconList;
          if ( !Master_object )
            break;
          Item = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)Master_object,
                   v68,
                   (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ServantClassIconComponent__get_Item__);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          Master_object = (ServantClassMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3358/*"CLASS_BOARD_ADD_CLASS_DIALOG_CLASS_ICON_TEXT_BEAST"*/, 0);
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
                                                  v68,
                                                  (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ServantClassIconComponent__get_Item__);
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
      if ( (__int64)++v68 >= (int)max_length )
        goto LABEL_59;
    }
LABEL_89:
    sub_1C71608(Master_object, v8);
  }
LABEL_59:
  ClassBoardAddClassDialog__SetupText(this, classBaseId, v66);
  if ( v16 )
  {
    useContentLabel = this->fields.useContentLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v72 = LocalizationManager__Get((System_String_o *)StringLiteral_3361/*"CLASS_BOARD_ADD_GRAND_CLASS_DIALOG_CONTENT_BEAST"*/, 0);
    v74 = Method_System_Array_Empty_object___;
    v75 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
    if ( !v75 )
    {
      sub_1C474A0(Method_System_Array_Empty_object___);
      v75 = v74[7];
    }
    v76 = *(_QWORD *)(v75 + 16);
    if ( (*(_BYTE *)(v76 + 309) & 1) == 0 )
      v76 = sub_1C47444(inited);
    if ( !*(_DWORD *)(v76 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v76);
    v77 = *(_QWORD *)(v74[7] + 16LL);
    if ( (*(_BYTE *)(v77 + 309) & 1) == 0 )
      v77 = sub_1C47444(inited);
    Master_object = (ServantClassMaster_o *)System_String__Format_64073168(
                                              v72,
                                              **(System_Object_array ***)(v77 + 184),
                                              0);
    if ( !useContentLabel )
      goto LABEL_89;
  }
  else
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (ServantClassMaster_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    if ( !Master_object )
      goto LABEL_89;
    if ( !DataMasterBase_object__object__int___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
            &entity,
            classBaseId,
            (const MethodInfo_3408ECC *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__) )
      goto LABEL_81;
    useContentLabel = this->fields.useContentLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Master_object = (ServantClassMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3359/*"CLASS_BOARD_ADD_CLASS_DIALOG_CONTENT_FORMAT"*/, 0);
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
                                            (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_UIGrid___);
  if ( !Master_object )
    goto LABEL_89;
  ((void (__fastcall *)(ServantClassMaster_o *, const MethodInfo *))Master_object->klass->vtable._8_ReplacedForThread.methodPtr)(
    Master_object,
    Master_object->klass->vtable._8_ReplacedForThread.method);
  Master_object = (ServantClassMaster_o *)this->fields.useScrollView;
  if ( !Master_object )
    goto LABEL_89;
  if ( SLODWORD(classIds->max_length) > 4 )
    v78 = 1;
  else
    v78 = 4;
  HIDWORD(Master_object[1].klass) = v78;
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

  if ( (byte_4CCAE55 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&StringLiteral_3360/*"CLASS_BOARD_ADD_CLASS_DIALOG_TITLE"*/);
    sub_1C713B0(&StringLiteral_3680/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C713B0(&StringLiteral_3362/*"CLASS_BOARD_ADD_GRAND_CLASS_DIALOG_TITLE"*/);
    byte_4CCAE55 = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_object )
    goto LABEL_17;
  DataMasterBase_object__object__int___TryGetEntity(
    Master_object,
    &entity,
    classBaseId,
    (const MethodInfo_3408ECC *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
  if ( !entity )
    goto LABEL_17;
  titleLabel = this->fields.titleLabel;
  IsGrand = ClassBoardBaseEntity__IsGrand((ClassBoardBaseEntity_o *)entity, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v9 = (System_String_o **)(IsGrand ? &StringLiteral_3362/*"CLASS_BOARD_ADD_GRAND_CLASS_DIALOG_TITLE"*/ : &StringLiteral_3360/*"CLASS_BOARD_ADD_CLASS_DIALOG_TITLE"*/);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(*v9, 0);
  if ( !titleLabel )
    goto LABEL_17;
  UILabel__set_text(titleLabel, (System_String_o *)Master_object, 0);
  closeButtonLabel = this->fields.closeButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_3680/*"COMMON_CONFIRM_CLOSE"*/,
                                                                  0);
  if ( !closeButtonLabel )
LABEL_17:
    sub_1C71608(Master_object, v6);
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