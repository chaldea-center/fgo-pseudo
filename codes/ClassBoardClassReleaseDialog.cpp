void __fastcall ClassBoardClassReleaseDialog___ctor(ClassBoardClassReleaseDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_49FF67F & 1) == 0 )
  {
    sub_1B640C8(&BaseDialog_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent___ctor__, v4);
    sub_1B640C8(&System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__TypeInfo, v5);
    byte_49FF67F = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__TypeInfo,
                                                      method,
                                                      v2);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent___ctor__);
  this->fields.iconList = (struct System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__o *)v6;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.iconList, (int32_t)v6, v7, v8);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ClassBoardClassReleaseDialog__Close(
        ClassBoardClassReleaseDialog_o *this,
        System_Action_o *closeCallback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2
  System_Action_o *v9; // x20

  if ( (byte_49FF67C & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, closeCallback);
    sub_1B640C8(&Method_ClassBoardClassReleaseDialog_OnCloseEnd__, v6);
    byte_49FF67C = 1;
  }
  this->fields.closeCallback = closeCallback;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.closeCallback,
    (int32_t)closeCallback,
    (int32_t)method,
    v3);
  v9 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v7, v8);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_ClassBoardClassReleaseDialog_OnCloseEnd__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v9, 0LL);
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
  int32_t v16; // w3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 v19; // x10
  ClassBoardClassReleaseDialog_o *v20; // x1
  Il2CppClass **v21; // x0

  v4 = this;
  if ( (byte_49FF67E & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_ClassBoardBaseClassIconNameComponent___, *(_QWORD *)&count);
    sub_1B640C8(&Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__Add__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__get_Count__, v6);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    this = (ClassBoardClassReleaseDialog_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, v8);
    byte_49FF67E = 1;
  }
  iconList = v4->fields.iconList;
  if ( !iconList )
LABEL_17:
    sub_1B64324(this);
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
                (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
                                                     (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardBaseClassIconNameComponent___);
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
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v21 = &items->obj.klass + v19;
            v14->fields._size = v19 + 1;
            v21[4] = (Il2CppClass *)v20;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v20, v15, v16);
          }
        }
        --v11;
      }
      while ( v11 );
    }
  }
}


void __fastcall ClassBoardClassReleaseDialog__Init(ClassBoardClassReleaseDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  ClassBoardClassReleaseDialog__SetupText(this, v3);
}


void __fastcall ClassBoardClassReleaseDialog__OnClickCloseButton(
        ClassBoardClassReleaseDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0

  if ( (byte_49FF67B & 1) == 0 )
  {
    sub_1B640C8(&Method_ClassBoardClassReleaseDialog_OnClickCloseButton__, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v2);
    byte_49FF67B = 1;
  }
  v3 = Method_ClassBoardClassReleaseDialog_OnClickCloseButton__;
  if ( (*((_BYTE *)Method_ClassBoardClassReleaseDialog_OnClickCloseButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B640E0(Method_ClassBoardClassReleaseDialog_OnClickCloseButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  CommonUI__CloseClassBoardReleaseDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall ClassBoardClassReleaseDialog__OnCloseEnd(
        ClassBoardClassReleaseDialog_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_closeCallback; // x0
  System_Action_o *closeCallback; // t1

  closeCallback = this->fields.closeCallback;
  p_closeCallback = (ServantStatusBattleListViewItem_o *)&this->fields.closeCallback;
  p_closeCallback->klass = 0LL;
  sub_1B6406C(p_closeCallback, 0, v2, v3);
  ActionExtensions__Call(closeCallback, 0LL);
}


void __fastcall ClassBoardClassReleaseDialog__Open(
        ClassBoardClassReleaseDialog_o *this,
        System_Int32_array *classBaseIds,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *iconList; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v14; // x8
  unsigned __int64 v15; // x21
  __int64 v16; // x1
  const MethodInfo *v17; // x2
  int v18; // w8
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_49FF67A & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UIGrid___, classBaseIds);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ClassBoardBaseClassIconNameComponent__Dispose__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ClassBoardBaseClassIconNameComponent__MoveNext__, v6);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardBaseClassIconNameComponent__get_Current__,
      v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__GetEnumerator__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__get_Count__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__get_Item__, v10);
    byte_49FF67A = 1;
  }
  memset(&v20, 0, sizeof(v20));
  if ( classBaseIds )
  {
    v11 = *(_QWORD *)&classBaseIds->max_length;
    if ( v11 )
    {
      ClassBoardClassReleaseDialog__CreateBaseClassIconNameComponents(this, v11, method);
      iconList = (System_Collections_Generic_List_object__o *)this->fields.iconList;
      if ( !iconList )
        goto LABEL_30;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v19,
        iconList,
        (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__GetEnumerator__);
      v20 = v19;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v20,
                (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardBaseClassIconNameComponent__MoveNext__) )
      {
        if ( !v20.fields._current )
          sub_1B64324(0LL);
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v20.fields._current, 0LL);
        if ( !gameObject )
          sub_1B64324(0LL);
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v20,
        (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ClassBoardBaseClassIconNameComponent__Dispose__);
      v14 = *(_QWORD *)&classBaseIds->max_length;
      if ( (int)v14 >= 1 )
      {
        v15 = 0LL;
        while ( 1 )
        {
          iconList = (System_Collections_Generic_List_object__o *)this->fields.iconList;
          if ( !iconList )
            break;
          if ( (__int64)v15 < iconList->fields._size )
          {
            iconList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      iconList,
                                                                      v15,
                                                                      (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__get_Item__);
            if ( v15 >= classBaseIds->max_length )
              sub_1B6432C(iconList, v16);
            if ( !iconList )
              break;
            ClassBoardBaseClassIconNameComponent__Setup(
              (ClassBoardBaseClassIconNameComponent_o *)iconList,
              classBaseIds->m_Items[v15 + 1],
              v17);
            iconList = (System_Collections_Generic_List_object__o *)this->fields.iconList;
            if ( !iconList )
              break;
            iconList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      iconList,
                                                                      v15,
                                                                      (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__get_Item__);
            if ( !iconList )
              break;
            iconList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                      (UnityEngine_Component_o *)iconList,
                                                                      0LL);
            if ( !iconList )
              break;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)iconList, 1, 0LL);
            v14 = *(_QWORD *)&classBaseIds->max_length;
          }
          if ( (__int64)++v15 >= (int)v14 )
            goto LABEL_22;
        }
LABEL_30:
        sub_1B64324(iconList);
      }
LABEL_22:
      BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
      iconList = (System_Collections_Generic_List_object__o *)this->fields.iconListParent;
      if ( !iconList )
        goto LABEL_30;
      iconList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__GetComponent_object_(
                                                                (UnityEngine_Component_o *)iconList,
                                                                (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
      if ( !iconList )
        goto LABEL_30;
      ((void (__fastcall *)(System_Collections_Generic_List_object__o *, Il2CppMethodPointer))iconList->klass->vtable._8_unknown.method)(
        iconList,
        iconList->klass->vtable._9_unknown.methodPtr);
      iconList = (System_Collections_Generic_List_object__o *)this->fields.scrollView;
      if ( !iconList )
        goto LABEL_30;
      if ( (int)classBaseIds->max_length > 4 )
        v18 = 1;
      else
        v18 = 4;
      HIDWORD(iconList[2].klass) = v18;
      UIScrollView__ResetPosition((UIScrollView_o *)iconList, 0LL);
    }
  }
}


void __fastcall ClassBoardClassReleaseDialog__SetupText(ClassBoardClassReleaseDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UILabel_o *titleLabel; // x20
  System_String_o *v7; // x0
  UILabel_o *contentLabel; // x20
  UILabel_o *closeButtonLabel; // x19

  if ( (byte_49FF67D & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, method);
    sub_1B640C8(&StringLiteral_3490/*"CLASS_BOARD_RELEASE_DIALOG_CONTENT"*/, v3);
    sub_1B640C8(&StringLiteral_3734/*"COMMON_CONFIRM_CLOSE"*/, v4);
    sub_1B640C8(&StringLiteral_3491/*"CLASS_BOARD_RELEASE_DIALOG_TITLE"*/, v5);
    byte_49FF67D = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_3491/*"CLASS_BOARD_RELEASE_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, v7, 0LL),
        contentLabel = this->fields.contentLabel,
        v7 = LocalizationManager__Get((System_String_o *)StringLiteral_3490/*"CLASS_BOARD_RELEASE_DIALOG_CONTENT"*/, 0LL),
        !contentLabel)
    || (UILabel__set_text(contentLabel, v7, 0LL),
        closeButtonLabel = this->fields.closeButtonLabel,
        v7 = LocalizationManager__Get((System_String_o *)StringLiteral_3734/*"COMMON_CONFIRM_CLOSE"*/, 0LL),
        !closeButtonLabel) )
  {
    sub_1B64324(v7);
  }
  UILabel__set_text(closeButtonLabel, v7, 0LL);
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