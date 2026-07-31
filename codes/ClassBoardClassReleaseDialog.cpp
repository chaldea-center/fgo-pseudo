void ClassBoardClassReleaseDialog___ctor(ClassBoardClassReleaseDialog_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  __int64 v10; // x1

  if ( (byte_593C3DE & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__TypeInfo);
    byte_593C3DE = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent___ctor__);
  this->fields.iconList = (struct System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__o *)v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.iconList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, v10);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void ClassBoardClassReleaseDialog__Close(
        ClassBoardClassReleaseDialog_o *this,
        System_Action_o *closeCallback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Action_o *v10; // x20

  if ( (byte_593C3DB & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_ClassBoardClassReleaseDialog_OnCloseEnd__);
    byte_593C3DB = 1;
  }
  this->fields.closeCallback = closeCallback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallback,
    (int32_t)closeCallback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_ClassBoardClassReleaseDialog_OnCloseEnd__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0);
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
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 v19; // x10
  ClassBoardClassReleaseDialog_o *v20; // x1
  Il2CppClass **v21; // x0

  v4 = this;
  if ( (byte_593C3DD & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_ClassBoardBaseClassIconNameComponent___);
    sub_21FFC50(&Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__get_Count__);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (ClassBoardClassReleaseDialog_o *)sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593C3DD = 1;
  }
  iconList = v4->fields.iconList;
  if ( !iconList )
LABEL_17:
    sub_21FFECC(this, *(_QWORD *)&count);
  size = iconList->fields._size;
  v7 = count - size;
  if ( count > size && v7 >= 1 )
  {
    do
    {
      iconPrefab = (Il2CppObject *)v4->fields.iconPrefab;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&count);
      v9 = UnityEngine_Object__Instantiate_object_(
             iconPrefab,
             (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
                                                   (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardBaseClassIconNameComponent___);
        if ( !v10 )
          goto LABEL_17;
        items = v10->fields._items;
        v18 = Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__Add__;
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
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v21 = &items->obj.klass + v19;
          v10->fields._size = v19 + 1;
          v21[4] = (Il2CppClass *)v20;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v21 + 4), (int32_t)v20, v11, v12, v13, v14, v15, v16);
        }
      }
      --v7;
    }
    while ( v7 );
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

  if ( (byte_593C3DA & 1) == 0 )
  {
    sub_21FFC50(&Method_ClassBoardClassReleaseDialog_OnClickCloseButton__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_593C3DA = 1;
  }
  v2 = Method_ClassBoardClassReleaseDialog_OnClickCloseButton__;
  if ( (*((_BYTE *)Method_ClassBoardClassReleaseDialog_OnClickCloseButton__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_21FFC68(Method_ClassBoardClassReleaseDialog_OnClickCloseButton__);
  v3 = (System_Reflection_MethodBase_o *)sub_21FFC34(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v5);
  CommonUI__CloseClassBoardReleaseDialog((CommonUI_o *)Instance, 0);
}


void ClassBoardClassReleaseDialog__OnCloseEnd(ClassBoardClassReleaseDialog_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_closeCallback; // x0
  System_Action_o *closeCallback; // t1

  closeCallback = this->fields.closeCallback;
  p_closeCallback = (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallback;
  p_closeCallback->klass = 0;
  sub_21FFBF4(p_closeCallback, 0, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(closeCallback, 0);
}


// local variable allocation has failed, the output may be wrong!
void ClassBoardClassReleaseDialog__Open(
        ClassBoardClassReleaseDialog_o *this,
        System_Int32_array *classBaseIds,
        bool isGrand,
        const MethodInfo *method)
{
  char *v5; // x20
  ClassBoardClassReleaseDialog_o *v6; // x19
  __int64 v7; // x8
  int v8; // w23
  BalanceConfig_c *v9; // x0
  __int64 v10; // x1
  BalanceConfig_c *v11; // x8
  int32_t v12; // w1
  struct BalanceConfig_StaticFields *static_fields; // x8
  __int64 v14; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v16; // x1
  __int64 v17; // x8
  unsigned __int64 v18; // x22
  char *v19; // x24
  const MethodInfo *v20; // x2
  unsigned __int64 v21; // x8
  __int64 v22; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v23; // x21
  unsigned __int64 v24; // x22
  UILabel_o *contentLabel; // x21
  int v26; // w8
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+20h] [xbp-60h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-38h] BYREF

  v5 = (char *)classBaseIds;
  v6 = this;
  if ( (byte_593C3D9 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UIGrid___);
    sub_21FFC50(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ClassBoardBaseClassIconNameComponent__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ClassBoardBaseClassIconNameComponent__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ClassBoardBaseClassIconNameComponent__get_Current__);
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__get_Item__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    this = (ClassBoardClassReleaseDialog_o *)sub_21FFC50(&StringLiteral_7279/*"GRAND_CLASS_BOARD_RELEASE_DIALOG_CONTENT_BEAST"*/);
    byte_593C3D9 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  entity = 0;
  if ( !v5 )
    return;
  v7 = *((_QWORD *)v5 + 3);
  if ( !v7 )
    return;
  if ( !(_DWORD)v7 )
    goto LABEL_64;
  v8 = *((_DWORD *)v5 + 8);
  v9 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, classBaseIds);
    v9 = BalanceConfig_TypeInfo;
  }
  if ( v8 != v9->static_fields->GrandEx1Id )
  {
    v12 = *((_DWORD *)v5 + 6);
    goto LABEL_16;
  }
  this = (ClassBoardClassReleaseDialog_o *)sub_21FFD10(int___TypeInfo, 2);
  v11 = BalanceConfig_TypeInfo;
  v5 = (char *)this;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v10);
    v11 = BalanceConfig_TypeInfo;
  }
  if ( !v5 )
    goto LABEL_61;
  v12 = *((_DWORD *)v5 + 6);
  if ( !v12 || (static_fields = v11->static_fields, *((_DWORD *)v5 + 8) = static_fields->GrandEx1Id, v12 == 1) )
LABEL_64:
    sub_21FFED4(this);
  *((_DWORD *)v5 + 9) = static_fields->GrandEx2Id;
LABEL_16:
  ClassBoardClassReleaseDialog__CreateBaseClassIconNameComponents(v6, v12, (const MethodInfo *)isGrand);
  this = (ClassBoardClassReleaseDialog_o *)v6->fields.iconList;
  if ( !this )
    goto LABEL_61;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__GetEnumerator__);
  v28 = v27;
  v27.fields._list = 0;
  *(_QWORD *)&v27.fields._index = &v28;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v28,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardBaseClassIconNameComponent__MoveNext__) )
  {
    if ( !v28.fields._current )
      sub_21FFECC(0, v14);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v28.fields._current, 0);
    if ( !gameObject )
      sub_21FFECC(0, v16);
    UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v28,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardBaseClassIconNameComponent__Dispose__);
  v17 = *((_QWORD *)v5 + 3);
  if ( (int)v17 >= 1 )
  {
    v18 = 0;
    v19 = v5 + 32;
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
                                                   (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__get_Item__);
        v21 = *((unsigned int *)v5 + 6);
        if ( isGrand )
        {
          if ( v18 >= v21 )
            goto LABEL_64;
          if ( !this )
            break;
          ClassBoardBaseClassIconNameComponent__GrandSetup(
            (ClassBoardBaseClassIconNameComponent_o *)this,
            *(_DWORD *)&v19[4 * v18],
            v20);
        }
        else
        {
          if ( v18 >= v21 )
            goto LABEL_64;
          if ( !this )
            break;
          ClassBoardBaseClassIconNameComponent__Setup(
            (ClassBoardBaseClassIconNameComponent_o *)this,
            *(_DWORD *)&v19[4 * v18],
            v20);
        }
        this = (ClassBoardClassReleaseDialog_o *)v6->fields.iconList;
        if ( !this )
          break;
        this = (ClassBoardClassReleaseDialog_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)this,
                                                   v18,
                                                   (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__get_Item__);
        if ( !this )
          break;
        this = (ClassBoardClassReleaseDialog_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0);
        if ( !this )
          break;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
        v17 = *((_QWORD *)v5 + 3);
      }
      if ( (__int64)++v18 >= (int)v17 )
        goto LABEL_38;
    }
LABEL_61:
    sub_21FFECC(this, v10);
  }
LABEL_38:
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v10);
  this = (ClassBoardClassReleaseDialog_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  v22 = *((_QWORD *)v5 + 3);
  if ( (int)v22 >= 1 )
  {
    v23 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
    v24 = 0;
    while ( 1 )
    {
      if ( v24 >= (unsigned int)v22 )
        goto LABEL_64;
      if ( !v23 )
        goto LABEL_61;
      this = (ClassBoardClassReleaseDialog_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                 v23,
                                                 &entity,
                                                 *(_DWORD *)&v5[4 * v24 + 32],
                                                 (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (ClassBoardClassReleaseDialog_o *)entity;
        if ( !entity )
          goto LABEL_61;
        this = (ClassBoardClassReleaseDialog_o *)ClassBoardBaseEntity__IsDispBeastText(
                                                   (ClassBoardBaseEntity_o *)entity,
                                                   0);
        if ( ((unsigned __int8)this & 1) != 0 )
          break;
      }
      LODWORD(v22) = *((_DWORD *)v5 + 6);
      if ( (__int64)++v24 >= (int)v22 )
        goto LABEL_53;
    }
    contentLabel = v6->fields.contentLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v10);
    this = (ClassBoardClassReleaseDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7279/*"GRAND_CLASS_BOARD_RELEASE_DIALOG_CONTENT_BEAST"*/, 0);
    if ( !contentLabel )
      goto LABEL_61;
    UILabel__set_text(contentLabel, (System_String_o *)this, 0);
  }
LABEL_53:
  BaseDialog__Open((BaseDialog_o *)v6, 0, 0, 0, 0);
  this = (ClassBoardClassReleaseDialog_o *)v6->fields.iconListParent;
  if ( !this )
    goto LABEL_61;
  this = (ClassBoardClassReleaseDialog_o *)UnityEngine_Component__GetComponent_object_(
                                             (UnityEngine_Component_o *)this,
                                             (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
  if ( !this )
    goto LABEL_61;
  ((void (__fastcall *)(ClassBoardClassReleaseDialog_o *, const char *))this->klass[1]._1.name)(
    this,
    this->klass[1]._1.namespaze);
  this = (ClassBoardClassReleaseDialog_o *)v6->fields.scrollView;
  if ( !this )
    goto LABEL_61;
  if ( *((int *)v5 + 6) > 4 )
    v26 = 1;
  else
    v26 = 4;
  HIDWORD(this->fields.panelDepthList) = v26;
  UIScrollView__ResetPosition((UIScrollView_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void ClassBoardClassReleaseDialog__SetupText(
        ClassBoardClassReleaseDialog_o *this,
        bool isGrand,
        const MethodInfo *method)
{
  UILabel_o *titleLabel; // x20
  int v6; // w8
  System_String_o *v7; // x0
  __int64 v8; // x1
  __int64 *v9; // x8
  UILabel_o *contentLabel; // x20
  UILabel_o *closeButtonLabel; // x19

  if ( (byte_593C3DC & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_7280/*"GRAND_CLASS_BOARD_RELEASE_DIALOG_TITLE"*/);
    sub_21FFC50(&StringLiteral_3551/*"CLASS_BOARD_RELEASE_DIALOG_CONTENT"*/);
    sub_21FFC50(&StringLiteral_3823/*"COMMON_CONFIRM_CLOSE"*/);
    sub_21FFC50(&StringLiteral_7278/*"GRAND_CLASS_BOARD_RELEASE_DIALOG_CONTENT"*/);
    sub_21FFC50(&StringLiteral_3552/*"CLASS_BOARD_RELEASE_DIALOG_TITLE"*/);
    byte_593C3DC = 1;
  }
  titleLabel = this->fields.titleLabel;
  v6 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  if ( !isGrand )
  {
    if ( !v6 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, isGrand);
    v7 = LocalizationManager__Get((System_String_o *)StringLiteral_3552/*"CLASS_BOARD_RELEASE_DIALOG_TITLE"*/, 0);
    if ( titleLabel )
    {
      UILabel__set_text(titleLabel, v7, 0);
      v9 = &StringLiteral_3551/*"CLASS_BOARD_RELEASE_DIALOG_CONTENT"*/;
      goto LABEL_12;
    }
LABEL_15:
    sub_21FFECC(v7, v8);
  }
  if ( !v6 )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, isGrand);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_7280/*"GRAND_CLASS_BOARD_RELEASE_DIALOG_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, v7, 0);
  v9 = &StringLiteral_7278/*"GRAND_CLASS_BOARD_RELEASE_DIALOG_CONTENT"*/;
LABEL_12:
  contentLabel = this->fields.contentLabel;
  v7 = LocalizationManager__Get((System_String_o *)*v9, 0);
  if ( !contentLabel )
    goto LABEL_15;
  UILabel__set_text(contentLabel, v7, 0);
  closeButtonLabel = this->fields.closeButtonLabel;
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_3823/*"COMMON_CONFIRM_CLOSE"*/, 0);
  if ( !closeButtonLabel )
    goto LABEL_15;
  UILabel__set_text(closeButtonLabel, v7, 0);
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