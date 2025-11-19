void ClassBoardClassReleaseDialog___ctor(ClassBoardClassReleaseDialog_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4CB9D44 & 1) == 0 )
  {
    sub_1C6BA08(&BaseDialog_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__TypeInfo);
    byte_4CB9D44 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent___ctor__);
  this->fields.iconList = (struct System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__o *)v3;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.iconList, (int32_t)v3, v4, v5);
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

  if ( (byte_4CB9D41 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_ClassBoardClassReleaseDialog_OnCloseEnd__);
    byte_4CB9D41 = 1;
  }
  this->fields.closeCallback = closeCallback;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.closeCallback, (int32_t)closeCallback, (int32_t)method, v3);
  v6 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_ClassBoardClassReleaseDialog_OnCloseEnd__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0);
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_4CB9D43 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_ClassBoardBaseClassIconNameComponent___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__get_Count__);
    sub_1C6BA08(&Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (ClassBoardClassReleaseDialog_o *)sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB9D43 = 1;
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
            (UnityEngine_Component_o *)v4->fields.iconListParent,
            0);
          if ( !v9 )
            goto LABEL_17;
          v10 = (System_Collections_Generic_List_object__o *)v4->fields.iconList;
          this = (ClassBoardClassReleaseDialog_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)v9,
                                                     (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_ClassBoardBaseClassIconNameComponent___);
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
  __int64 v5; // x1

  if ( (byte_4CB9D40 & 1) == 0 )
  {
    sub_1C6BA08(&Method_ClassBoardClassReleaseDialog_OnClickCloseButton__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CB9D40 = 1;
  }
  v2 = Method_ClassBoardClassReleaseDialog_OnClickCloseButton__;
  if ( (*((_BYTE *)Method_ClassBoardClassReleaseDialog_OnClickCloseButton__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1C6BA20(Method_ClassBoardClassReleaseDialog_OnClickCloseButton__);
  v3 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C6BC60(0, v5);
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
  sub_1C6B9AC(p_closeCallback, 0, v2, v3);
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
  __int64 v10; // x1
  BalanceConfig_c *v11; // x8
  int v12; // w9
  struct BalanceConfig_StaticFields *static_fields; // x8
  __int64 v14; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v16; // x1
  il2cpp_array_size_t v17; // x8
  unsigned __int64 v18; // x22
  const MethodInfo *v19; // x2
  int32_t v20; // w1
  il2cpp_array_size_t v21; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v22; // x21
  unsigned __int64 v23; // x22
  UILabel_o *contentLabel; // x21
  int v25; // w8
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-60h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-38h] BYREF

  v6 = this;
  if ( (byte_4CB9D3F & 1) == 0 )
  {
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_UIGrid___);
    sub_1C6BA08(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ClassBoardBaseClassIconNameComponent__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ClassBoardBaseClassIconNameComponent__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ClassBoardBaseClassIconNameComponent__get_Current__);
    sub_1C6BA08(&int___TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__get_Item__);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    this = (ClassBoardClassReleaseDialog_o *)sub_1C6BA08(&StringLiteral_6989/*"GRAND_CLASS_BOARD_RELEASE_DIALOG_CONTENT_BEAST"*/);
    byte_4CB9D3F = 1;
  }
  memset(&v27, 0, sizeof(v27));
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
  this = (ClassBoardClassReleaseDialog_o *)sub_1C6BAB0(int___TypeInfo, 2);
  v11 = BalanceConfig_TypeInfo;
  classBaseIds = (System_Int32_array *)this;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v11 = BalanceConfig_TypeInfo;
  }
  if ( !classBaseIds )
    goto LABEL_58;
  v12 = classBaseIds->max_length;
  if ( !v12 || (static_fields = v11->static_fields, classBaseIds->m_Items[0] = static_fields->GrandEx1Id, v12 == 1) )
LABEL_61:
    sub_1C6BC68(this);
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
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__GetEnumerator__);
  v27 = v26;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardBaseClassIconNameComponent__MoveNext__) )
  {
    if ( !v27.fields._current )
      sub_1C6BC60(0, v14);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v27.fields._current, 0);
    if ( !gameObject )
      sub_1C6BC60(0, v16);
    UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardBaseClassIconNameComponent__Dispose__);
  v17 = classBaseIds->max_length;
  if ( (int)v17 >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      this = (ClassBoardClassReleaseDialog_o *)v6->fields.iconList;
      if ( !this )
        break;
      if ( (__int64)v18 < SLODWORD(this->fields.m_CancellationTokenSource) )
      {
        this = (ClassBoardClassReleaseDialog_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)this,
                                                   v18,
                                                   (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__get_Item__);
        if ( v18 >= LODWORD(classBaseIds->max_length) )
          goto LABEL_61;
        if ( !this )
          break;
        v20 = classBaseIds->m_Items[v18];
        if ( isGrand )
          ClassBoardBaseClassIconNameComponent__GrandSetup((ClassBoardBaseClassIconNameComponent_o *)this, v20, v19);
        else
          ClassBoardBaseClassIconNameComponent__Setup((ClassBoardBaseClassIconNameComponent_o *)this, v20, v19);
        this = (ClassBoardClassReleaseDialog_o *)v6->fields.iconList;
        if ( !this )
          break;
        this = (ClassBoardClassReleaseDialog_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)this,
                                                   v18,
                                                   (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__get_Item__);
        if ( !this )
          break;
        this = (ClassBoardClassReleaseDialog_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0);
        if ( !this )
          break;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
        v17 = classBaseIds->max_length;
      }
      if ( (__int64)++v18 >= (int)v17 )
        goto LABEL_35;
    }
LABEL_58:
    sub_1C6BC60(this, v10);
  }
LABEL_35:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (ClassBoardClassReleaseDialog_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  v21 = classBaseIds->max_length;
  if ( (int)v21 >= 1 )
  {
    v22 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
    v23 = 0;
    while ( 1 )
    {
      if ( v23 >= (unsigned int)v21 )
        goto LABEL_61;
      if ( !v22 )
        goto LABEL_58;
      this = (ClassBoardClassReleaseDialog_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                 v22,
                                                 &entity,
                                                 classBaseIds->m_Items[v23],
                                                 (const MethodInfo_33F9128 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
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
      LODWORD(v21) = classBaseIds->max_length;
      if ( (__int64)++v23 >= (int)v21 )
        goto LABEL_50;
    }
    contentLabel = v6->fields.contentLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (ClassBoardClassReleaseDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6989/*"GRAND_CLASS_BOARD_RELEASE_DIALOG_CONTENT_BEAST"*/, 0);
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
                                             (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
  if ( !this )
    goto LABEL_58;
  ((void (__fastcall *)(ClassBoardClassReleaseDialog_o *, const char *))this->klass[1]._1.name)(
    this,
    this->klass[1]._1.namespaze);
  this = (ClassBoardClassReleaseDialog_o *)v6->fields.scrollView;
  if ( !this )
    goto LABEL_58;
  if ( SLODWORD(classBaseIds->max_length) > 4 )
    v25 = 1;
  else
    v25 = 4;
  HIDWORD(this->fields.panelDepthList) = v25;
  UIScrollView__ResetPosition((UIScrollView_o *)this, 0);
}


void ClassBoardClassReleaseDialog__SetupText(
        ClassBoardClassReleaseDialog_o *this,
        bool isGrand,
        const MethodInfo *method)
{
  UILabel_o *titleLabel; // x21
  System_String_o *v6; // x0
  __int64 v7; // x1
  UILabel_o *contentLabel; // x20
  __int64 *v9; // x8
  UILabel_o *closeButtonLabel; // x19

  if ( (byte_4CB9D42 & 1) == 0 )
  {
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_6990/*"GRAND_CLASS_BOARD_RELEASE_DIALOG_TITLE"*/);
    sub_1C6BA08(&StringLiteral_3409/*"CLASS_BOARD_RELEASE_DIALOG_CONTENT"*/);
    sub_1C6BA08(&StringLiteral_3677/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C6BA08(&StringLiteral_6988/*"GRAND_CLASS_BOARD_RELEASE_DIALOG_CONTENT"*/);
    sub_1C6BA08(&StringLiteral_3410/*"CLASS_BOARD_RELEASE_DIALOG_TITLE"*/);
    byte_4CB9D42 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( isGrand )
    {
LABEL_5:
      v6 = LocalizationManager__Get((System_String_o *)StringLiteral_6990/*"GRAND_CLASS_BOARD_RELEASE_DIALOG_TITLE"*/, 0);
      if ( !titleLabel )
        goto LABEL_13;
      UILabel__set_text(titleLabel, v6, 0);
      contentLabel = this->fields.contentLabel;
      v9 = &StringLiteral_6988/*"GRAND_CLASS_BOARD_RELEASE_DIALOG_CONTENT"*/;
      goto LABEL_10;
    }
  }
  else
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( isGrand )
      goto LABEL_5;
  }
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_3410/*"CLASS_BOARD_RELEASE_DIALOG_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_13;
  UILabel__set_text(titleLabel, v6, 0);
  contentLabel = this->fields.contentLabel;
  v9 = &StringLiteral_3409/*"CLASS_BOARD_RELEASE_DIALOG_CONTENT"*/;
LABEL_10:
  v6 = LocalizationManager__Get((System_String_o *)*v9, 0);
  if ( !contentLabel
    || (UILabel__set_text(contentLabel, v6, 0),
        closeButtonLabel = this->fields.closeButtonLabel,
        v6 = LocalizationManager__Get((System_String_o *)StringLiteral_3677/*"COMMON_CONFIRM_CLOSE"*/, 0),
        !closeButtonLabel) )
  {
LABEL_13:
    sub_1C6BC60(v6, v7);
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