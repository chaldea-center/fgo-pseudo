void __fastcall ClassBoardClassReleaseDialog___ctor(ClassBoardClassReleaseDialog_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A5E53B & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__TypeInfo);
    byte_4A5E53B = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent___ctor__);
  this->fields.iconList = (struct System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.iconList, (int32_t)v3, v4, v5);
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
  System_Action_o *v6; // x20

  if ( (byte_4A5E538 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_ClassBoardClassReleaseDialog_OnCloseEnd__);
    byte_4A5E538 = 1;
  }
  this->fields.closeCallback = closeCallback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.closeCallback,
    (int32_t)closeCallback,
    (int32_t)method,
    v3);
  v6 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_ClassBoardClassReleaseDialog_OnCloseEnd__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardClassReleaseDialog__CreateBaseClassIconNameComponents(
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
  int32_t v12; // w3
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 v15; // x10
  ClassBoardClassReleaseDialog_o *v16; // x1
  Il2CppClass **v17; // x0

  v4 = this;
  if ( (byte_4A5E53A & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_ClassBoardBaseClassIconNameComponent___);
    sub_1B885B0(&Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__get_Count__);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (ClassBoardClassReleaseDialog_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E53A = 1;
  }
  iconList = v4->fields.iconList;
  if ( !iconList )
LABEL_17:
    sub_1B8880C(this, *(_QWORD *)&count);
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
               (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v9, 0LL, 0LL) )
        {
          GameObjectExtensions__SafeSetParent(
            (UnityEngine_GameObject_o *)v9,
            (UnityEngine_Component_o *)v4->fields.iconListParent,
            0LL);
          if ( !v9 )
            goto LABEL_17;
          v10 = (System_Collections_Generic_List_object__o *)v4->fields.iconList;
          this = (ClassBoardClassReleaseDialog_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)v9,
                                                     (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardBaseClassIconNameComponent___);
          if ( !v10 )
            goto LABEL_17;
          items = v10->fields._items;
          v14 = Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__Add__;
          ++v10->fields._version;
          if ( !items )
            goto LABEL_17;
          v15 = v10->fields._size;
          v16 = this;
          if ( (unsigned int)v15 >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v10,
              (Il2CppObject *)this,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
          }
          else
          {
            v17 = &items->obj.klass + v15;
            v10->fields._size = v15 + 1;
            v17[4] = (Il2CppClass *)v16;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 4), (int32_t)v16, v11, v12);
          }
        }
        --v7;
      }
      while ( v7 );
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
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4A5E537 & 1) == 0 )
  {
    sub_1B885B0(&Method_ClassBoardClassReleaseDialog_OnClickCloseButton__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5E537 = 1;
  }
  v2 = Method_ClassBoardClassReleaseDialog_OnClickCloseButton__;
  if ( (*((_BYTE *)Method_ClassBoardClassReleaseDialog_OnClickCloseButton__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1B885C8(Method_ClassBoardClassReleaseDialog_OnClickCloseButton__);
  v3 = (System_Reflection_MethodBase_o *)sub_1B88594(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v5);
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
  sub_1B88554(p_closeCallback, 0, v2, v3);
  ActionExtensions__Call(closeCallback, 0LL);
}


void __fastcall ClassBoardClassReleaseDialog__Open(
        ClassBoardClassReleaseDialog_o *this,
        System_Int32_array *classBaseIds,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *iconList; // x0
  __int64 v8; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1
  __int64 v11; // x8
  unsigned __int64 v12; // x21
  const MethodInfo *v13; // x2
  int v14; // w8
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4A5E536 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UIGrid___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardBaseClassIconNameComponent__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardBaseClassIconNameComponent__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardBaseClassIconNameComponent__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__get_Item__);
    byte_4A5E536 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  if ( classBaseIds )
  {
    v5 = *(_QWORD *)&classBaseIds->max_length;
    if ( v5 )
    {
      ClassBoardClassReleaseDialog__CreateBaseClassIconNameComponents(this, v5, method);
      iconList = (System_Collections_Generic_List_object__o *)this->fields.iconList;
      if ( !iconList )
        goto LABEL_30;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v15,
        iconList,
        (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__GetEnumerator__);
      v16 = v15;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v16,
                (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardBaseClassIconNameComponent__MoveNext__) )
      {
        if ( !v16.fields._current )
          sub_1B8880C(0LL, v8);
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v16.fields._current, 0LL);
        if ( !gameObject )
          sub_1B8880C(0LL, v10);
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v16,
        (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardBaseClassIconNameComponent__Dispose__);
      v11 = *(_QWORD *)&classBaseIds->max_length;
      if ( (int)v11 >= 1 )
      {
        v12 = 0LL;
        while ( 1 )
        {
          iconList = (System_Collections_Generic_List_object__o *)this->fields.iconList;
          if ( !iconList )
            break;
          if ( (__int64)v12 < iconList->fields._size )
          {
            iconList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      iconList,
                                                                      v12,
                                                                      (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__get_Item__);
            if ( v12 >= classBaseIds->max_length )
              sub_1B88814(iconList, v6);
            if ( !iconList )
              break;
            ClassBoardBaseClassIconNameComponent__Setup(
              (ClassBoardBaseClassIconNameComponent_o *)iconList,
              classBaseIds->m_Items[v12 + 1],
              v13);
            iconList = (System_Collections_Generic_List_object__o *)this->fields.iconList;
            if ( !iconList )
              break;
            iconList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      iconList,
                                                                      v12,
                                                                      (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__get_Item__);
            if ( !iconList )
              break;
            iconList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                      (UnityEngine_Component_o *)iconList,
                                                                      0LL);
            if ( !iconList )
              break;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)iconList, 1, 0LL);
            v11 = *(_QWORD *)&classBaseIds->max_length;
          }
          if ( (__int64)++v12 >= (int)v11 )
            goto LABEL_22;
        }
LABEL_30:
        sub_1B8880C(iconList, v6);
      }
LABEL_22:
      BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
      iconList = (System_Collections_Generic_List_object__o *)this->fields.iconListParent;
      if ( !iconList )
        goto LABEL_30;
      iconList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__GetComponent_object_(
                                                                (UnityEngine_Component_o *)iconList,
                                                                (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIGrid___);
      if ( !iconList )
        goto LABEL_30;
      ((void (__fastcall *)(System_Collections_Generic_List_object__o *, Il2CppMethodPointer))iconList->klass->vtable._8_unknown.method)(
        iconList,
        iconList->klass->vtable._9_unknown.methodPtr);
      iconList = (System_Collections_Generic_List_object__o *)this->fields.scrollView;
      if ( !iconList )
        goto LABEL_30;
      if ( (int)classBaseIds->max_length > 4 )
        v14 = 1;
      else
        v14 = 4;
      HIDWORD(iconList[2].klass) = v14;
      UIScrollView__ResetPosition((UIScrollView_o *)iconList, 0LL);
    }
  }
}


void __fastcall ClassBoardClassReleaseDialog__SetupText(ClassBoardClassReleaseDialog_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x20
  System_String_o *v4; // x0
  __int64 v5; // x1
  UILabel_o *contentLabel; // x20
  UILabel_o *closeButtonLabel; // x19

  if ( (byte_4A5E539 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_3512/*"CLASS_BOARD_RELEASE_DIALOG_CONTENT"*/);
    sub_1B885B0(&StringLiteral_3756/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1B885B0(&StringLiteral_3513/*"CLASS_BOARD_RELEASE_DIALOG_TITLE"*/);
    byte_4A5E539 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_3513/*"CLASS_BOARD_RELEASE_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, v4, 0LL),
        contentLabel = this->fields.contentLabel,
        v4 = LocalizationManager__Get((System_String_o *)StringLiteral_3512/*"CLASS_BOARD_RELEASE_DIALOG_CONTENT"*/, 0LL),
        !contentLabel)
    || (UILabel__set_text(contentLabel, v4, 0LL),
        closeButtonLabel = this->fields.closeButtonLabel,
        v4 = LocalizationManager__Get((System_String_o *)StringLiteral_3756/*"COMMON_CONFIRM_CLOSE"*/, 0LL),
        !closeButtonLabel) )
  {
    sub_1B8880C(v4, v5);
  }
  UILabel__set_text(closeButtonLabel, v4, 0LL);
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