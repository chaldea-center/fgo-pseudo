void __fastcall ClassBoardClassReleaseDialog___ctor(ClassBoardClassReleaseDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *v5; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4B48242 & 1) == 0 )
  {
    sub_1BDB878(&BaseDialog_TypeInfo, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent___ctor__, v3);
    sub_1BDB878(&System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__TypeInfo, v4);
    byte_4B48242 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent___ctor__);
  this->fields.iconList = (struct System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__o *)v5;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.iconList, (int32_t)v5, v6, v7);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ClassBoardClassReleaseDialog__Close(
        ClassBoardClassReleaseDialog_o *this,
        System_Action_o *closeCallback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  System_Action_o *v7; // x20

  if ( (byte_4B4823F & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, closeCallback);
    sub_1BDB878(&Method_ClassBoardClassReleaseDialog_OnCloseEnd__, v6);
    byte_4B4823F = 1;
  }
  this->fields.closeCallback = closeCallback;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.closeCallback, (int32_t)closeCallback, (int32_t)method, v3);
  v7 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_ClassBoardClassReleaseDialog_OnCloseEnd__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardClassReleaseDialog__CreateBaseClassIconNameComponents(
        ClassBoardClassReleaseDialog_o *this,
        int32_t count,
        const MethodInfo *method)
{
  ClassBoardClassReleaseDialog_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__o *iconList; // x8
  int32_t size; // w8
  int v11; // w22
  Il2CppObject *iconPrefab; // x20
  Il2CppObject *v13; // x21
  System_Collections_Generic_List_object__o *v14; // x20
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 v19; // x10
  ClassBoardClassReleaseDialog_o *v20; // x1
  Il2CppClass **v21; // x0

  v4 = this;
  if ( (byte_4B48241 & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_ClassBoardBaseClassIconNameComponent___, *(_QWORD *)&count);
    sub_1BDB878(&Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__Add__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__get_Count__, v6);
    sub_1BDB878(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    this = (ClassBoardClassReleaseDialog_o *)sub_1BDB878(&UnityEngine_Object_TypeInfo, v8);
    byte_4B48241 = 1;
  }
  iconList = v4->fields.iconList;
  if ( !iconList )
LABEL_17:
    sub_1BDBAD4(this, *(_QWORD *)&count);
  size = iconList->fields._size;
  if ( size < count )
  {
    v11 = count - size;
    if ( count - size >= 1 )
    {
      do
      {
        iconPrefab = (Il2CppObject *)v4->fields.iconPrefab;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v13 = UnityEngine_Object__Instantiate_object_(
                iconPrefab,
                (const MethodInfo_30BDAA4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v13, 0LL, 0LL) )
        {
          GameObjectExtensions__SafeSetParent(
            (UnityEngine_GameObject_o *)v13,
            (UnityEngine_Component_o *)v4->fields.iconListParent,
            0LL);
          if ( !v13 )
            goto LABEL_17;
          v14 = (System_Collections_Generic_List_object__o *)v4->fields.iconList;
          this = (ClassBoardClassReleaseDialog_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)v13,
                                                     (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardBaseClassIconNameComponent___);
          if ( !v14 )
            goto LABEL_17;
          items = v14->fields._items;
          v18 = Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__Add__;
          ++v14->fields._version;
          if ( !items )
            goto LABEL_17;
          v19 = v14->fields._size;
          v20 = this;
          if ( (unsigned int)v19 >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v14,
              (Il2CppObject *)this,
              *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v21 = &items->obj.klass + v19;
            v14->fields._size = v19 + 1;
            v21[4] = (Il2CppClass *)v20;
            sub_1BDB81C((CGThumbnailListItem_o *)(v21 + 4), (int32_t)v20, v15, v16);
          }
        }
        --v11;
      }
      while ( v11 );
    }
  }
}


void __fastcall ClassBoardClassReleaseDialog__Init(
        ClassBoardClassReleaseDialog_o *this,
        bool isGrand,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  ClassBoardClassReleaseDialog__SetupText(this, isGrand, v5);
}


void __fastcall ClassBoardClassReleaseDialog__OnClickCloseButton(
        ClassBoardClassReleaseDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4B4823E & 1) == 0 )
  {
    sub_1BDB878(&Method_ClassBoardClassReleaseDialog_OnClickCloseButton__, method);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v2);
    byte_4B4823E = 1;
  }
  v3 = Method_ClassBoardClassReleaseDialog_OnClickCloseButton__;
  if ( (*((_BYTE *)Method_ClassBoardClassReleaseDialog_OnClickCloseButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1BDB890(Method_ClassBoardClassReleaseDialog_OnClickCloseButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BDBAD4(0LL, v6);
  CommonUI__CloseClassBoardReleaseDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall ClassBoardClassReleaseDialog__OnCloseEnd(
        ClassBoardClassReleaseDialog_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_closeCallback; // x0
  System_Action_o *closeCallback; // t1

  closeCallback = this->fields.closeCallback;
  p_closeCallback = (CGThumbnailListItem_o *)&this->fields.closeCallback;
  p_closeCallback->klass = 0LL;
  sub_1BDB81C(p_closeCallback, 0, v2, v3);
  ActionExtensions__Call(closeCallback, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardClassReleaseDialog__Open(
        ClassBoardClassReleaseDialog_o *this,
        System_Int32_array *classBaseIds,
        bool isGrand,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_object__o *iconList; // x0
  __int64 v16; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v18; // x1
  __int64 v19; // x8
  unsigned __int64 v20; // x22
  const MethodInfo *v21; // x2
  int32_t v22; // w1
  int v23; // w8
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B4823D & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_Component_GetComponent_UIGrid___, classBaseIds);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ClassBoardBaseClassIconNameComponent__Dispose__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ClassBoardBaseClassIconNameComponent__MoveNext__, v8);
    sub_1BDB878(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardBaseClassIconNameComponent__get_Current__,
      v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__GetEnumerator__, v10);
    sub_1BDB878(&Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__get_Count__, v11);
    sub_1BDB878(&Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__get_Item__, v12);
    byte_4B4823D = 1;
  }
  memset(&v25, 0, sizeof(v25));
  if ( classBaseIds )
  {
    v13 = *(_QWORD *)&classBaseIds->max_length;
    if ( v13 )
    {
      ClassBoardClassReleaseDialog__CreateBaseClassIconNameComponents(this, v13, (const MethodInfo *)isGrand);
      iconList = (System_Collections_Generic_List_object__o *)this->fields.iconList;
      if ( !iconList )
        goto LABEL_33;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v24,
        iconList,
        (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__GetEnumerator__);
      v25 = v24;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v25,
                (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardBaseClassIconNameComponent__MoveNext__) )
      {
        if ( !v25.fields._current )
          sub_1BDBAD4(0LL, v16);
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v25.fields._current, 0LL);
        if ( !gameObject )
          sub_1BDBAD4(0LL, v18);
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v25,
        (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardBaseClassIconNameComponent__Dispose__);
      v19 = *(_QWORD *)&classBaseIds->max_length;
      if ( (int)v19 >= 1 )
      {
        v20 = 0LL;
        while ( 1 )
        {
          iconList = (System_Collections_Generic_List_object__o *)this->fields.iconList;
          if ( !iconList )
            break;
          if ( (__int64)v20 < iconList->fields._size )
          {
            iconList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      iconList,
                                                                      v20,
                                                                      (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__get_Item__);
            if ( v20 >= classBaseIds->max_length )
              sub_1BDBADC(iconList, v14, v21);
            if ( !iconList )
              break;
            v22 = classBaseIds->m_Items[v20 + 1];
            if ( isGrand )
              ClassBoardBaseClassIconNameComponent__GrandSetup(
                (ClassBoardBaseClassIconNameComponent_o *)iconList,
                v22,
                v21);
            else
              ClassBoardBaseClassIconNameComponent__Setup((ClassBoardBaseClassIconNameComponent_o *)iconList, v22, v21);
            iconList = (System_Collections_Generic_List_object__o *)this->fields.iconList;
            if ( !iconList )
              break;
            iconList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      iconList,
                                                                      v20,
                                                                      (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__get_Item__);
            if ( !iconList )
              break;
            iconList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                      (UnityEngine_Component_o *)iconList,
                                                                      0LL);
            if ( !iconList )
              break;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)iconList, 1, 0LL);
            v19 = *(_QWORD *)&classBaseIds->max_length;
          }
          if ( (__int64)++v20 >= (int)v19 )
            goto LABEL_25;
        }
LABEL_33:
        sub_1BDBAD4(iconList, v14);
      }
LABEL_25:
      BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
      iconList = (System_Collections_Generic_List_object__o *)this->fields.iconListParent;
      if ( !iconList )
        goto LABEL_33;
      iconList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__GetComponent_object_(
                                                                (UnityEngine_Component_o *)iconList,
                                                                (const MethodInfo_302A12C *)Method_UnityEngine_Component_GetComponent_UIGrid___);
      if ( !iconList )
        goto LABEL_33;
      ((void (__fastcall *)(System_Collections_Generic_List_object__o *, Il2CppMethodPointer))iconList->klass->vtable._8_unknown.method)(
        iconList,
        iconList->klass->vtable._9_unknown.methodPtr);
      iconList = (System_Collections_Generic_List_object__o *)this->fields.scrollView;
      if ( !iconList )
        goto LABEL_33;
      if ( (int)classBaseIds->max_length > 4 )
        v23 = 1;
      else
        v23 = 4;
      HIDWORD(iconList[2].klass) = v23;
      UIScrollView__ResetPosition((UIScrollView_o *)iconList, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardClassReleaseDialog__SetupText(
        ClassBoardClassReleaseDialog_o *this,
        bool isGrand,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UILabel_o *titleLabel; // x21
  System_String_o *v11; // x0
  __int64 v12; // x1
  UILabel_o *contentLabel; // x20
  __int64 *v14; // x8
  UILabel_o *closeButtonLabel; // x19

  if ( (byte_4B48240 & 1) == 0 )
  {
    sub_1BDB878(&LocalizationManager_TypeInfo, isGrand);
    sub_1BDB878(&StringLiteral_7004/*"GRAND_CLASS_BOARD_RELEASE_DIALOG_TITLE"*/, v5);
    sub_1BDB878(&StringLiteral_3455/*"CLASS_BOARD_RELEASE_DIALOG_CONTENT"*/, v6);
    sub_1BDB878(&StringLiteral_3717/*"COMMON_CONFIRM_CLOSE"*/, v7);
    sub_1BDB878(&StringLiteral_7003/*"GRAND_CLASS_BOARD_RELEASE_DIALOG_CONTENT"*/, v8);
    sub_1BDB878(&StringLiteral_3456/*"CLASS_BOARD_RELEASE_DIALOG_TITLE"*/, v9);
    byte_4B48240 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( isGrand )
    {
LABEL_5:
      v11 = LocalizationManager__Get((System_String_o *)StringLiteral_7004/*"GRAND_CLASS_BOARD_RELEASE_DIALOG_TITLE"*/, 0LL);
      if ( !titleLabel )
        goto LABEL_13;
      UILabel__set_text(titleLabel, v11, 0LL);
      contentLabel = this->fields.contentLabel;
      v14 = &StringLiteral_7003/*"GRAND_CLASS_BOARD_RELEASE_DIALOG_CONTENT"*/;
      goto LABEL_10;
    }
  }
  else
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( isGrand )
      goto LABEL_5;
  }
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_3456/*"CLASS_BOARD_RELEASE_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_13;
  UILabel__set_text(titleLabel, v11, 0LL);
  contentLabel = this->fields.contentLabel;
  v14 = &StringLiteral_3455/*"CLASS_BOARD_RELEASE_DIALOG_CONTENT"*/;
LABEL_10:
  v11 = LocalizationManager__Get((System_String_o *)*v14, 0LL);
  if ( !contentLabel
    || (UILabel__set_text(contentLabel, v11, 0LL),
        closeButtonLabel = this->fields.closeButtonLabel,
        v11 = LocalizationManager__Get((System_String_o *)StringLiteral_3717/*"COMMON_CONFIRM_CLOSE"*/, 0LL),
        !closeButtonLabel) )
  {
LABEL_13:
    sub_1BDBAD4(v11, v12);
  }
  UILabel__set_text(closeButtonLabel, v11, 0LL);
}


void __fastcall ClassBoardClassReleaseDialog__Validation(
        ClassBoardClassReleaseDialog_o *this,
        const MethodInfo *method)
{
  ;
}


UnityEngine_GameObject_o *__fastcall ClassBoardClassReleaseDialog__get_closeBtnObject(
        ClassBoardClassReleaseDialog_o *this,
        const MethodInfo *method)
{
  return this->fields.closeButtonObj;
}