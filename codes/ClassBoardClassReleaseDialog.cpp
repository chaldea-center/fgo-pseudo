void __fastcall ClassBoardClassReleaseDialog___ctor(ClassBoardClassReleaseDialog_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_438C40D & 1) == 0 )
  {
    sub_B775C4(&BaseDialog_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent___ctor__);
    sub_B775C4(&System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__TypeInfo);
    byte_438C40D = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent___ctor__);
  this->fields.iconList = (struct System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__o *)v3;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.iconList, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ClassBoardClassReleaseDialog__Close(
        ClassBoardClassReleaseDialog_o *this,
        System_Action_o *closeCallback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_438C40A & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_ClassBoardClassReleaseDialog_OnCloseEnd__);
    byte_438C40A = 1;
  }
  this->fields.closeCallback = closeCallback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.closeCallback,
    (System_Int32_array **)closeCallback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_ClassBoardClassReleaseDialog_OnCloseEnd__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
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
  int i; // w23
  UnityEngine_UI_Dropdown_DropdownItem_o *iconPrefab; // x20
  UnityEngine_GameObject_o *v10; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x21

  v4 = this;
  if ( (byte_438C40C & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_ClassBoardBaseClassIconNameComponent___);
    sub_B775C4(&Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__get_Count__);
    sub_B775C4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (ClassBoardClassReleaseDialog_o *)sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438C40C = 1;
  }
  iconList = v4->fields.iconList;
  if ( !iconList )
LABEL_16:
    sub_B7769C(this, *(_QWORD *)&count);
  size = iconList->fields._size;
  if ( size < count )
  {
    v7 = count - size;
    if ( count - size >= 1 )
    {
      for ( i = 0; i < v7; ++i )
      {
        iconPrefab = (UnityEngine_UI_Dropdown_DropdownItem_o *)v4->fields.iconPrefab;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v10 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                            iconPrefab,
                                            (const MethodInfo_1DF9900 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v10, 0LL, 0LL) )
        {
          GameObjectExtensions__SafeSetParent(v10, (UnityEngine_Component_o *)v4->fields.iconListParent, 0LL);
          if ( !v10 )
            goto LABEL_16;
          v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v4->fields.iconList;
          this = (ClassBoardClassReleaseDialog_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     v10,
                                                     (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardBaseClassIconNameComponent___);
          if ( !v11 )
            goto LABEL_16;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v11,
            (EventMissionProgressRequest_Argument_ProgressData_o *)this,
            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__Add__);
        }
      }
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
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_438C409 & 1) == 0 )
  {
    sub_B775C4(&Method_ClassBoardClassReleaseDialog_OnClickCloseButton__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438C409 = 1;
  }
  v2 = Method_ClassBoardClassReleaseDialog_OnClickCloseButton__;
  if ( (*((_BYTE *)Method_ClassBoardClassReleaseDialog_OnClickCloseButton__ + 75) & 2) != 0 )
    v2 = (_QWORD *)sub_B775CC(Method_ClassBoardClassReleaseDialog_OnClickCloseButton__);
  v3 = (System_Reflection_MethodBase_o *)sub_B775A8(v2, v2[3]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B7769C(0LL, v5);
  CommonUI__CloseClassBoardReleaseDialog(Instance, 0LL);
}


void __fastcall ClassBoardClassReleaseDialog__OnCloseEnd(
        ClassBoardClassReleaseDialog_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_closeCallback; // x0
  System_Action_o *closeCallback; // t1

  closeCallback = this->fields.closeCallback;
  p_closeCallback = (BattleServantConfConponent_o *)&this->fields.closeCallback;
  p_closeCallback->klass = 0LL;
  sub_B77560(p_closeCallback, 0LL, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(closeCallback, 0LL);
}


void __fastcall ClassBoardClassReleaseDialog__Open(
        ClassBoardClassReleaseDialog_o *this,
        System_Int32_array *classBaseIds,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *iconList; // x0
  __int64 v8; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  __int64 v12; // x8
  unsigned __int64 v13; // x21
  struct System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__o *v14; // x23
  struct System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__o *v15; // x23
  struct UIScrollView_o *scrollView; // x8
  int v17; // w9
  __int64 v18; // x0
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_438C408 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_UIGrid___);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardBaseClassIconNameComponent__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardBaseClassIconNameComponent__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardBaseClassIconNameComponent__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__get_Item__);
    byte_438C408 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  if ( classBaseIds )
  {
    v5 = *(_QWORD *)&classBaseIds->max_length;
    if ( v5 )
    {
      ClassBoardClassReleaseDialog__CreateBaseClassIconNameComponents(this, v5, method);
      iconList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.iconList;
      if ( !iconList )
        goto LABEL_35;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v19,
        iconList,
        (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__GetEnumerator__);
      v20 = v19;
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v20,
                (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardBaseClassIconNameComponent__MoveNext__) )
      {
        if ( !v20.fields.current )
          sub_B7769C(0LL, v8);
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v20.fields.current, 0LL);
        if ( !gameObject )
          sub_B7769C(0LL, v10);
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v20,
        (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardBaseClassIconNameComponent__Dispose__);
      v12 = *(_QWORD *)&classBaseIds->max_length;
      if ( (int)v12 >= 1 )
      {
        v13 = 0LL;
        while ( 1 )
        {
          v14 = this->fields.iconList;
          if ( !v14 )
            break;
          if ( (__int64)v13 < v14->fields._size )
          {
            if ( v13 >= (unsigned int)v14->fields._size )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
            if ( v13 >= (unsigned int)v12 )
            {
              v18 = sub_B776C8(iconList);
              sub_B77668(v18, 0LL);
            }
            iconList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v14->fields._items->m_Items[v13];
            if ( !iconList )
              break;
            ClassBoardBaseClassIconNameComponent__Setup(
              (ClassBoardBaseClassIconNameComponent_o *)iconList,
              classBaseIds->m_Items[v13 + 1],
              v11);
            v15 = this->fields.iconList;
            if ( !v15 )
              break;
            if ( v13 >= (unsigned int)v15->fields._size )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
            iconList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v15->fields._items->m_Items[v13];
            if ( !iconList )
              break;
            iconList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)iconList, 0LL);
            if ( !iconList )
              break;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)iconList, 1, 0LL);
            LODWORD(v12) = classBaseIds->max_length;
          }
          if ( (__int64)++v13 >= (int)v12 )
            goto LABEL_26;
        }
LABEL_35:
        sub_B7769C(iconList, v6);
      }
LABEL_26:
      BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
      iconList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.iconListParent;
      if ( !iconList )
        goto LABEL_35;
      iconList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                                                  (UnityEngine_Component_o *)iconList,
                                                                                                  (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
      if ( !iconList )
        goto LABEL_35;
      iconList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)((__int64 (__fastcall *)(System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *, Il2CppMethodPointer))iconList->klass->vtable._8_unknown.method)(
                                                                                                  iconList,
                                                                                                  iconList->klass->vtable._9_unknown.methodPtr);
      scrollView = this->fields.scrollView;
      if ( !scrollView )
        goto LABEL_35;
      v17 = (int)classBaseIds->max_length > 4 ? 1 : 4;
      HIDWORD(scrollView->fields.onDragStarted) = v17;
      iconList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.scrollView;
      if ( !iconList )
        goto LABEL_35;
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

  if ( (byte_438C40B & 1) == 0 )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_3145/*"CLASS_BOARD_RELEASE_DIALOG_CONTENT"*/);
    sub_B775C4(&StringLiteral_3387/*"COMMON_CONFIRM_CLOSE"*/);
    sub_B775C4(&StringLiteral_3146/*"CLASS_BOARD_RELEASE_DIALOG_TITLE"*/);
    byte_438C40B = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_3146/*"CLASS_BOARD_RELEASE_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, v4, 0LL),
        contentLabel = this->fields.contentLabel,
        v4 = LocalizationManager__Get((System_String_o *)StringLiteral_3145/*"CLASS_BOARD_RELEASE_DIALOG_CONTENT"*/, 0LL),
        !contentLabel)
    || (UILabel__set_text(contentLabel, v4, 0LL),
        closeButtonLabel = this->fields.closeButtonLabel,
        v4 = LocalizationManager__Get((System_String_o *)StringLiteral_3387/*"COMMON_CONFIRM_CLOSE"*/, 0LL),
        !closeButtonLabel) )
  {
    sub_B7769C(v4, v5);
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