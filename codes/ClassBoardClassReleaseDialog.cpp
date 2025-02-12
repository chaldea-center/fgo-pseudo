void __fastcall ClassBoardClassReleaseDialog___ctor(ClassBoardClassReleaseDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4BCAFFD & 1) == 0 )
  {
    sub_1C1ABD4(&BaseDialog_TypeInfo, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent___ctor__, v3);
    sub_1C1ABD4(&System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__TypeInfo, v4);
    byte_4BCAFFD = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent___ctor__);
  this->fields.iconList = (struct System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__o *)v5;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.iconList, (int64_t)v5, v6, v7, v8, v9, v10, v11);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  System_Action_o *v11; // x20

  if ( (byte_4BCAFFA & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, closeCallback);
    sub_1C1ABD4(&Method_ClassBoardClassReleaseDialog_OnCloseEnd__, v10);
    byte_4BCAFFA = 1;
  }
  this->fields.closeCallback = closeCallback;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.closeCallback,
    (int64_t)closeCallback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v11 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_ClassBoardClassReleaseDialog_OnCloseEnd__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
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
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 v23; // x10
  ClassBoardClassReleaseDialog_o *v24; // x1
  Il2CppClass **v25; // x0

  v4 = this;
  if ( (byte_4BCAFFC & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_ClassBoardBaseClassIconNameComponent___, *(_QWORD *)&count);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__Add__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__get_Count__, v6);
    sub_1C1ABD4(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    this = (ClassBoardClassReleaseDialog_o *)sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v8);
    byte_4BCAFFC = 1;
  }
  iconList = v4->fields.iconList;
  if ( !iconList )
LABEL_17:
    sub_1C1AE30(this, *(_QWORD *)&count);
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
                (const MethodInfo_3024F48 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
                                                     (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardBaseClassIconNameComponent___);
          if ( !v14 )
            goto LABEL_17;
          items = v14->fields._items;
          v22 = Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__Add__;
          ++v14->fields._version;
          if ( !items )
            goto LABEL_17;
          v23 = v14->fields._size;
          v24 = this;
          if ( (unsigned int)v23 >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v14,
              (Il2CppObject *)this,
              *(const MethodInfo_363C890 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
          }
          else
          {
            v25 = &items->obj.klass + v23;
            v14->fields._size = v23 + 1;
            v25[4] = (Il2CppClass *)v24;
            sub_1C1AB78((PartyOrganizationUtility_o *)(v25 + 4), (int64_t)v24, v15, v16, v17, v18, v19, v20);
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
  __int64 v6; // x1

  if ( (byte_4BCAFF9 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_ClassBoardClassReleaseDialog_OnClickCloseButton__, method);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v2);
    byte_4BCAFF9 = 1;
  }
  v3 = Method_ClassBoardClassReleaseDialog_OnClickCloseButton__;
  if ( (*((_BYTE *)Method_ClassBoardClassReleaseDialog_OnClickCloseButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C1ABEC(Method_ClassBoardClassReleaseDialog_OnClickCloseButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C1AE30(0LL, v6);
  CommonUI__CloseClassBoardReleaseDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall ClassBoardClassReleaseDialog__OnCloseEnd(
        ClassBoardClassReleaseDialog_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_closeCallback; // x0
  System_Action_o *closeCallback; // t1

  closeCallback = this->fields.closeCallback;
  p_closeCallback = (PartyOrganizationUtility_o *)&this->fields.closeCallback;
  p_closeCallback->klass = 0LL;
  sub_1C1AB78(p_closeCallback, 0LL, v2, v3, v4, v5, v6, v7);
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
  __int64 v12; // x1
  System_Collections_Generic_List_object__o *iconList; // x0
  __int64 v14; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v16; // x1
  __int64 v17; // x8
  unsigned __int64 v18; // x21
  const MethodInfo *v19; // x2
  int v20; // w8
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4BCAFF8 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_Component_GetComponent_UIGrid___, classBaseIds);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardBaseClassIconNameComponent__Dispose__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardBaseClassIconNameComponent__MoveNext__, v6);
    sub_1C1ABD4(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardBaseClassIconNameComponent__get_Current__,
      v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__GetEnumerator__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__get_Count__, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__get_Item__, v10);
    byte_4BCAFF8 = 1;
  }
  memset(&v22, 0, sizeof(v22));
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
        (System_Collections_Generic_List_Enumerator_T__o *)&v21,
        iconList,
        (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__GetEnumerator__);
      v22 = v21;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v22,
                (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardBaseClassIconNameComponent__MoveNext__) )
      {
        if ( !v22.fields._current )
          sub_1C1AE30(0LL, v14);
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v22.fields._current, 0LL);
        if ( !gameObject )
          sub_1C1AE30(0LL, v16);
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v22,
        (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardBaseClassIconNameComponent__Dispose__);
      v17 = *(_QWORD *)&classBaseIds->max_length;
      if ( (int)v17 >= 1 )
      {
        v18 = 0LL;
        while ( 1 )
        {
          iconList = (System_Collections_Generic_List_object__o *)this->fields.iconList;
          if ( !iconList )
            break;
          if ( (__int64)v18 < iconList->fields._size )
          {
            iconList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      iconList,
                                                                      v18,
                                                                      (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__get_Item__);
            if ( v18 >= classBaseIds->max_length )
              sub_1C1AE38(iconList, v12);
            if ( !iconList )
              break;
            ClassBoardBaseClassIconNameComponent__Setup(
              (ClassBoardBaseClassIconNameComponent_o *)iconList,
              classBaseIds->m_Items[v18 + 1],
              v19);
            iconList = (System_Collections_Generic_List_object__o *)this->fields.iconList;
            if ( !iconList )
              break;
            iconList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      iconList,
                                                                      v18,
                                                                      (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__get_Item__);
            if ( !iconList )
              break;
            iconList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                      (UnityEngine_Component_o *)iconList,
                                                                      0LL);
            if ( !iconList )
              break;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)iconList, 1, 0LL);
            v17 = *(_QWORD *)&classBaseIds->max_length;
          }
          if ( (__int64)++v18 >= (int)v17 )
            goto LABEL_22;
        }
LABEL_30:
        sub_1C1AE30(iconList, v12);
      }
LABEL_22:
      BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
      iconList = (System_Collections_Generic_List_object__o *)this->fields.iconListParent;
      if ( !iconList )
        goto LABEL_30;
      iconList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__GetComponent_object_(
                                                                (UnityEngine_Component_o *)iconList,
                                                                (const MethodInfo_2F95F34 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
      if ( !iconList )
        goto LABEL_30;
      ((void (__fastcall *)(System_Collections_Generic_List_object__o *, Il2CppMethodPointer))iconList->klass->vtable._8_unknown.method)(
        iconList,
        iconList->klass->vtable._9_unknown.methodPtr);
      iconList = (System_Collections_Generic_List_object__o *)this->fields.scrollView;
      if ( !iconList )
        goto LABEL_30;
      if ( (int)classBaseIds->max_length > 4 )
        v20 = 1;
      else
        v20 = 4;
      HIDWORD(iconList[2].klass) = v20;
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
  __int64 v8; // x1
  UILabel_o *contentLabel; // x20
  UILabel_o *closeButtonLabel; // x19

  if ( (byte_4BCAFFB & 1) == 0 )
  {
    sub_1C1ABD4(&LocalizationManager_TypeInfo, method);
    sub_1C1ABD4(&StringLiteral_3553/*"CLASS_BOARD_RELEASE_DIALOG_CONTENT"*/, v3);
    sub_1C1ABD4(&StringLiteral_3802/*"COMMON_CONFIRM_CLOSE"*/, v4);
    sub_1C1ABD4(&StringLiteral_3554/*"CLASS_BOARD_RELEASE_DIALOG_TITLE"*/, v5);
    byte_4BCAFFB = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_3554/*"CLASS_BOARD_RELEASE_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, v7, 0LL),
        contentLabel = this->fields.contentLabel,
        v7 = LocalizationManager__Get((System_String_o *)StringLiteral_3553/*"CLASS_BOARD_RELEASE_DIALOG_CONTENT"*/, 0LL),
        !contentLabel)
    || (UILabel__set_text(contentLabel, v7, 0LL),
        closeButtonLabel = this->fields.closeButtonLabel,
        v7 = LocalizationManager__Get((System_String_o *)StringLiteral_3802/*"COMMON_CONFIRM_CLOSE"*/, 0LL),
        !closeButtonLabel) )
  {
    sub_1C1AE30(v7, v8);
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