void ClassBoardClassReleaseDialog___ctor(ClassBoardClassReleaseDialog_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C3B369 & 1) == 0 )
  {
    sub_1C32C20(&BaseDialog_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__TypeInfo);
    byte_4C3B369 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent___ctor__);
  this->fields.iconList = (struct System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__o *)v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.iconList, (int32_t)v3, v4, v5);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void ClassBoardClassReleaseDialog__Close(
        ClassBoardClassReleaseDialog_o *this,
        System_Action_o *closeCallback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Action_o *v6; // x20

  if ( (byte_4C3B366 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_ClassBoardClassReleaseDialog_OnCloseEnd__);
    byte_4C3B366 = 1;
  }
  this->fields.closeCallback = closeCallback;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.closeCallback, (int32_t)closeCallback, (int32_t)method, v3);
  v6 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_ClassBoardClassReleaseDialog_OnCloseEnd__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0);
}


void ClassBoardClassReleaseDialog__CreateBaseClassIconNameComponents(
        ClassBoardClassReleaseDialog_o *this,
        int32_t count,
        const MethodInfo *method)
{
  ClassBoardClassReleaseDialog_o *v4; // x19
  struct System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__o *iconList; // x8
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
  ClassBoardClassReleaseDialog_o *v16; // x1
  Il2CppClass **v17; // x0

  v4 = this;
  if ( (byte_4C3B368 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_ClassBoardBaseClassIconNameComponent___);
    sub_1C32C20(&Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__get_Count__);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (ClassBoardClassReleaseDialog_o *)sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3B368 = 1;
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
            (UnityEngine_Component_o *)v4->fields.iconListParent,
            0);
          if ( !v9 )
            goto LABEL_17;
          v10 = (System_Collections_Generic_List_object__o *)v4->fields.iconList;
          this = (ClassBoardClassReleaseDialog_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)v9,
                                                     (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardBaseClassIconNameComponent___);
          if ( !v10 )
            goto LABEL_17;
          items = v10->fields._items;
          v14 = Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__Add__;
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


void ClassBoardClassReleaseDialog__Init(ClassBoardClassReleaseDialog_o *this, bool isGrand, const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  BaseDialog__Init((BaseDialog_o *)this, 0);
  ClassBoardClassReleaseDialog__SetupText(this, isGrand, v5);
}


void ClassBoardClassReleaseDialog__OnClickCloseButton(ClassBoardClassReleaseDialog_o *this, const MethodInfo *method)
{
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0
  Il2CppObject *Instance; // x0

  if ( (byte_4C3B365 & 1) == 0 )
  {
    sub_1C32C20(&Method_ClassBoardClassReleaseDialog_OnClickCloseButton__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3B365 = 1;
  }
  v2 = Method_ClassBoardClassReleaseDialog_OnClickCloseButton__;
  if ( (*((_BYTE *)Method_ClassBoardClassReleaseDialog_OnClickCloseButton__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1C32C38(Method_ClassBoardClassReleaseDialog_OnClickCloseButton__);
  v3 = (System_Reflection_MethodBase_o *)sub_1C32C04(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
  CommonUI__CloseClassBoardReleaseDialog((CommonUI_o *)Instance, 0);
}


void ClassBoardClassReleaseDialog__OnCloseEnd(ClassBoardClassReleaseDialog_o *this, const MethodInfo *method)
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


// local variable allocation has failed, the output may be wrong!
void ClassBoardClassReleaseDialog__Open(
        ClassBoardClassReleaseDialog_o *this,
        System_Int32_array *classBaseIds,
        bool isGrand,
        const MethodInfo *method)
{
  ClassBoardClassReleaseDialog_o *v6; // x19
  il2cpp_array_size_t max_length; // x8
  int32_t v8; // w23
  BalanceConfig_c *v9; // x0
  BalanceConfig_c *v10; // x8
  int v11; // w9
  struct BalanceConfig_StaticFields *static_fields; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  il2cpp_array_size_t v14; // x8
  unsigned __int64 v15; // x22
  const MethodInfo *v16; // x2
  int32_t v17; // w1
  il2cpp_array_size_t v18; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v19; // x21
  unsigned __int64 v20; // x22
  UILabel_o *contentLabel; // x21
  int v22; // w8
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-60h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-38h] BYREF

  v6 = this;
  if ( (byte_4C3B364 & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_UIGrid___);
    sub_1C32C20(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ClassBoardBaseClassIconNameComponent__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ClassBoardBaseClassIconNameComponent__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ClassBoardBaseClassIconNameComponent__get_Current__);
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__get_Item__);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    this = (ClassBoardClassReleaseDialog_o *)sub_1C32C20(&StringLiteral_6995/*"GRAND_CLASS_BOARD_RELEASE_DIALOG_CONTENT_BEAST"*/);
    byte_4C3B364 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  entity = 0;
  if ( !classBaseIds )
    return;
  max_length = classBaseIds->max_length;
  if ( !max_length )
    return;
  if ( !(_DWORD)max_length )
    goto LABEL_61;
  v8 = classBaseIds->m_Items[0];
  v9 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v9 = BalanceConfig_TypeInfo;
  }
  if ( v8 != v9->static_fields->GrandEx1Id )
    goto LABEL_15;
  this = (ClassBoardClassReleaseDialog_o *)sub_1C32CC8(int___TypeInfo, 2);
  v10 = BalanceConfig_TypeInfo;
  classBaseIds = (System_Int32_array *)this;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v10 = BalanceConfig_TypeInfo;
  }
  if ( !classBaseIds )
    goto LABEL_58;
  v11 = classBaseIds->max_length;
  if ( !v11 || (static_fields = v10->static_fields, classBaseIds->m_Items[0] = static_fields->GrandEx1Id, v11 == 1) )
LABEL_61:
    sub_1C32E84(this);
  classBaseIds->m_Items[1] = static_fields->GrandEx2Id;
LABEL_15:
  ClassBoardClassReleaseDialog__CreateBaseClassIconNameComponents(
    v6,
    classBaseIds->max_length,
    (const MethodInfo *)isGrand);
  this = (ClassBoardClassReleaseDialog_o *)v6->fields.iconList;
  if ( !this )
    goto LABEL_58;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__GetEnumerator__);
  v24 = v23;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardBaseClassIconNameComponent__MoveNext__) )
  {
    if ( !v24.fields._current )
      sub_1C32E7C(0);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v24.fields._current, 0);
    if ( !gameObject )
      sub_1C32E7C(0);
    UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardBaseClassIconNameComponent__Dispose__);
  v14 = classBaseIds->max_length;
  if ( (int)v14 >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      this = (ClassBoardClassReleaseDialog_o *)v6->fields.iconList;
      if ( !this )
        break;
      if ( (__int64)v15 < SLODWORD(this->fields.m_CancellationTokenSource) )
      {
        this = (ClassBoardClassReleaseDialog_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)this,
                                                   v15,
                                                   (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__get_Item__);
        if ( v15 >= LODWORD(classBaseIds->max_length) )
          goto LABEL_61;
        if ( !this )
          break;
        v17 = classBaseIds->m_Items[v15];
        if ( isGrand )
          ClassBoardBaseClassIconNameComponent__GrandSetup((ClassBoardBaseClassIconNameComponent_o *)this, v17, v16);
        else
          ClassBoardBaseClassIconNameComponent__Setup((ClassBoardBaseClassIconNameComponent_o *)this, v17, v16);
        this = (ClassBoardClassReleaseDialog_o *)v6->fields.iconList;
        if ( !this )
          break;
        this = (ClassBoardClassReleaseDialog_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)this,
                                                   v15,
                                                   (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__get_Item__);
        if ( !this )
          break;
        this = (ClassBoardClassReleaseDialog_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0);
        if ( !this )
          break;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
        v14 = classBaseIds->max_length;
      }
      if ( (__int64)++v15 >= (int)v14 )
        goto LABEL_35;
    }
LABEL_58:
    sub_1C32E7C(this);
  }
LABEL_35:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (ClassBoardClassReleaseDialog_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  v18 = classBaseIds->max_length;
  if ( (int)v18 >= 1 )
  {
    v19 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
    v20 = 0;
    while ( 1 )
    {
      if ( v20 >= (unsigned int)v18 )
        goto LABEL_61;
      if ( !v19 )
        goto LABEL_58;
      this = (ClassBoardClassReleaseDialog_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                 v19,
                                                 &entity,
                                                 classBaseIds->m_Items[v20],
                                                 (const MethodInfo_3396884 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (ClassBoardClassReleaseDialog_o *)entity;
        if ( !entity )
          goto LABEL_58;
        this = (ClassBoardClassReleaseDialog_o *)ClassBoardBaseEntity__IsDispBeastText(
                                                   (ClassBoardBaseEntity_o *)entity,
                                                   0);
        if ( ((unsigned __int8)this & 1) != 0 )
          break;
      }
      LODWORD(v18) = classBaseIds->max_length;
      if ( (__int64)++v20 >= (int)v18 )
        goto LABEL_50;
    }
    contentLabel = v6->fields.contentLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (ClassBoardClassReleaseDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6995/*"GRAND_CLASS_BOARD_RELEASE_DIALOG_CONTENT_BEAST"*/, 0);
    if ( !contentLabel )
      goto LABEL_58;
    UILabel__set_text(contentLabel, (System_String_o *)this, 0);
  }
LABEL_50:
  BaseDialog__Open((BaseDialog_o *)v6, 0, 0, 0, 0);
  this = (ClassBoardClassReleaseDialog_o *)v6->fields.iconListParent;
  if ( !this )
    goto LABEL_58;
  this = (ClassBoardClassReleaseDialog_o *)UnityEngine_Component__GetComponent_object_(
                                             (UnityEngine_Component_o *)this,
                                             (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
  if ( !this )
    goto LABEL_58;
  ((void (__fastcall *)(ClassBoardClassReleaseDialog_o *, const char *))this->klass[1]._1.name)(
    this,
    this->klass[1]._1.namespaze);
  this = (ClassBoardClassReleaseDialog_o *)v6->fields.scrollView;
  if ( !this )
    goto LABEL_58;
  if ( SLODWORD(classBaseIds->max_length) > 4 )
    v22 = 1;
  else
    v22 = 4;
  HIDWORD(this->fields.panelDepthList) = v22;
  UIScrollView__ResetPosition((UIScrollView_o *)this, 0);
}


void ClassBoardClassReleaseDialog__SetupText(
        ClassBoardClassReleaseDialog_o *this,
        bool isGrand,
        const MethodInfo *method)
{
  UILabel_o *titleLabel; // x21
  System_String_o *v6; // x0
  UILabel_o *contentLabel; // x20
  __int64 *v8; // x8
  UILabel_o *closeButtonLabel; // x19

  if ( (byte_4C3B367 & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_6996/*"GRAND_CLASS_BOARD_RELEASE_DIALOG_TITLE"*/);
    sub_1C32C20(&StringLiteral_3417/*"CLASS_BOARD_RELEASE_DIALOG_CONTENT"*/);
    sub_1C32C20(&StringLiteral_3685/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C32C20(&StringLiteral_6994/*"GRAND_CLASS_BOARD_RELEASE_DIALOG_CONTENT"*/);
    sub_1C32C20(&StringLiteral_3418/*"CLASS_BOARD_RELEASE_DIALOG_TITLE"*/);
    byte_4C3B367 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( isGrand )
    {
LABEL_5:
      v6 = LocalizationManager__Get((System_String_o *)StringLiteral_6996/*"GRAND_CLASS_BOARD_RELEASE_DIALOG_TITLE"*/, 0);
      if ( !titleLabel )
        goto LABEL_13;
      UILabel__set_text(titleLabel, v6, 0);
      contentLabel = this->fields.contentLabel;
      v8 = &StringLiteral_6994/*"GRAND_CLASS_BOARD_RELEASE_DIALOG_CONTENT"*/;
      goto LABEL_10;
    }
  }
  else
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( isGrand )
      goto LABEL_5;
  }
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_3418/*"CLASS_BOARD_RELEASE_DIALOG_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_13;
  UILabel__set_text(titleLabel, v6, 0);
  contentLabel = this->fields.contentLabel;
  v8 = &StringLiteral_3417/*"CLASS_BOARD_RELEASE_DIALOG_CONTENT"*/;
LABEL_10:
  v6 = LocalizationManager__Get((System_String_o *)*v8, 0);
  if ( !contentLabel
    || (UILabel__set_text(contentLabel, v6, 0),
        closeButtonLabel = this->fields.closeButtonLabel,
        v6 = LocalizationManager__Get((System_String_o *)StringLiteral_3685/*"COMMON_CONFIRM_CLOSE"*/, 0),
        !closeButtonLabel) )
  {
LABEL_13:
    sub_1C32E7C(v6);
  }
  UILabel__set_text(closeButtonLabel, v6, 0);
}


void ClassBoardClassReleaseDialog__Validation(ClassBoardClassReleaseDialog_o *this, const MethodInfo *method)
{
  ;
}


UnityEngine_GameObject_o *ClassBoardClassReleaseDialog__get_closeBtnObject(
        ClassBoardClassReleaseDialog_o *this,
        const MethodInfo *method)
{
  return this->fields.closeButtonObj;
}