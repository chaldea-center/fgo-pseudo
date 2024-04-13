void __fastcall ClassBoardClassReleaseDialog___ctor(ClassBoardClassReleaseDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_42E9BEE & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__TypeInfo, v8, v9, v10);
    byte_42E9BEE = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent___ctor__);
  this->fields.iconList = (struct System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__o *)v11;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.iconList,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  System_Action_o *v13; // x20

  if ( (byte_42E9BEB & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)closeCallback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_ClassBoardClassReleaseDialog_OnCloseEnd__, v10, v11, v12);
    byte_42E9BEB = 1;
  }
  this->fields.closeCallback = closeCallback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.closeCallback,
    (System_Int32_array **)closeCallback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v13 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_ClassBoardClassReleaseDialog_OnCloseEnd__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardClassReleaseDialog__CreateBaseClassIconNameComponents(
        ClassBoardClassReleaseDialog_o *this,
        int32_t count,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ClassBoardClassReleaseDialog_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  struct System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__o *iconList; // x8
  int32_t size; // w8
  int v20; // w22
  int i; // w23
  UnityEngine_UI_Dropdown_DropdownItem_o *iconPrefab; // x20
  UnityEngine_GameObject_o *v23; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x21

  v5 = this;
  if ( (byte_42E9BED & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponent_ClassBoardBaseClassIconNameComponent___,
      count,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__Add__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__get_Count__, v9, v10, v11);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v12, v13, v14);
    this = (ClassBoardClassReleaseDialog_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v15, v16, v17);
    byte_42E9BED = 1;
  }
  iconList = v5->fields.iconList;
  if ( !iconList )
LABEL_16:
    sub_B5D69C(this, *(_QWORD *)&count);
  size = iconList->fields._size;
  if ( size < count )
  {
    v20 = count - size;
    if ( count - size >= 1 )
    {
      for ( i = 0; i < v20; ++i )
      {
        iconPrefab = (UnityEngine_UI_Dropdown_DropdownItem_o *)v5->fields.iconPrefab;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v23 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                            iconPrefab,
                                            (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v23, 0LL, 0LL) )
        {
          GameObjectExtensions__SafeSetParent(v23, (UnityEngine_Component_o *)v5->fields.iconListParent, 0LL);
          if ( !v23 )
            goto LABEL_16;
          v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v5->fields.iconList;
          this = (ClassBoardClassReleaseDialog_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     v23,
                                                     (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ClassBoardBaseClassIconNameComponent___);
          if ( !v24 )
            goto LABEL_16;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v24,
            (EventMissionProgressRequest_Argument_ProgressData_o *)this,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__Add__);
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
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  CommonUI_o *Instance; // x0
  __int64 v10; // x1

  if ( (byte_42E9BEA & 1) == 0 )
  {
    sub_B5D5C4(&Method_ClassBoardClassReleaseDialog_OnClickCloseButton__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5, v6);
    byte_42E9BEA = 1;
  }
  v7 = Method_ClassBoardClassReleaseDialog_OnClickCloseButton__;
  if ( (*((_BYTE *)Method_ClassBoardClassReleaseDialog_OnClickCloseButton__ + 75) & 2) != 0 )
    v7 = (_QWORD *)sub_B5D5CC(Method_ClassBoardClassReleaseDialog_OnClickCloseButton__);
  v8 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v7, v7[3]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v10);
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
  sub_B5D560(p_closeCallback, 0LL, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(closeCallback, 0LL);
}


void __fastcall ClassBoardClassReleaseDialog__Open(
        ClassBoardClassReleaseDialog_o *this,
        System_Int32_array *classBaseIds,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  __int64 v24; // x1
  __int64 v25; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *iconList; // x0
  __int64 v27; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v29; // x1
  const MethodInfo *v30; // x2
  __int64 v31; // x8
  unsigned __int64 v32; // x21
  struct System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__o *v33; // x23
  struct System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__o *v34; // x23
  struct UIScrollView_o *scrollView; // x8
  int v36; // w9
  __int64 v37; // x0
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v39; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42E9BE9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIGrid___, (_DWORD)classBaseIds, (_DWORD)method, v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardBaseClassIconNameComponent__Dispose__,
      v6,
      v7,
      v8);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardBaseClassIconNameComponent__MoveNext__,
      v9,
      v10,
      v11);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardBaseClassIconNameComponent__get_Current__,
      v12,
      v13,
      v14);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__GetEnumerator__,
      v15,
      v16,
      v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__get_Count__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__get_Item__, v21, v22, v23);
    byte_42E9BE9 = 1;
  }
  memset(&v39, 0, sizeof(v39));
  if ( classBaseIds )
  {
    v24 = *(_QWORD *)&classBaseIds->max_length;
    if ( v24 )
    {
      ClassBoardClassReleaseDialog__CreateBaseClassIconNameComponents(this, v24, method);
      iconList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.iconList;
      if ( !iconList )
        goto LABEL_35;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v38,
        iconList,
        (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__GetEnumerator__);
      v39 = v38;
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v39,
                (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardBaseClassIconNameComponent__MoveNext__) )
      {
        if ( !v39.fields.current )
          sub_B5D69C(0LL, v27);
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v39.fields.current, 0LL);
        if ( !gameObject )
          sub_B5D69C(0LL, v29);
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v39,
        (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ClassBoardBaseClassIconNameComponent__Dispose__);
      v31 = *(_QWORD *)&classBaseIds->max_length;
      if ( (int)v31 >= 1 )
      {
        v32 = 0LL;
        while ( 1 )
        {
          v33 = this->fields.iconList;
          if ( !v33 )
            break;
          if ( (__int64)v32 < v33->fields._size )
          {
            if ( v32 >= (unsigned int)v33->fields._size )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
            if ( v32 >= (unsigned int)v31 )
            {
              v37 = sub_B5D6C8(iconList);
              sub_B5D668(v37, 0LL);
            }
            iconList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v33->fields._items->m_Items[v32];
            if ( !iconList )
              break;
            ClassBoardBaseClassIconNameComponent__Setup(
              (ClassBoardBaseClassIconNameComponent_o *)iconList,
              classBaseIds->m_Items[v32 + 1],
              v30);
            v34 = this->fields.iconList;
            if ( !v34 )
              break;
            if ( v32 >= (unsigned int)v34->fields._size )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
            iconList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v34->fields._items->m_Items[v32];
            if ( !iconList )
              break;
            iconList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)iconList, 0LL);
            if ( !iconList )
              break;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)iconList, 1, 0LL);
            LODWORD(v31) = classBaseIds->max_length;
          }
          if ( (__int64)++v32 >= (int)v31 )
            goto LABEL_26;
        }
LABEL_35:
        sub_B5D69C(iconList, v25);
      }
LABEL_26:
      BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
      iconList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.iconListParent;
      if ( !iconList )
        goto LABEL_35;
      iconList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                                                  (UnityEngine_Component_o *)iconList,
                                                                                                  (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
      if ( !iconList )
        goto LABEL_35;
      iconList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)((__int64 (__fastcall *)(System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *, Il2CppMethodPointer))iconList->klass->vtable._8_unknown.method)(
                                                                                                  iconList,
                                                                                                  iconList->klass->vtable._9_unknown.methodPtr);
      scrollView = this->fields.scrollView;
      if ( !scrollView )
        goto LABEL_35;
      v36 = (int)classBaseIds->max_length > 4 ? 1 : 4;
      HIDWORD(scrollView->fields.onDragStarted) = v36;
      iconList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.scrollView;
      if ( !iconList )
        goto LABEL_35;
      UIScrollView__ResetPosition((UIScrollView_o *)iconList, 0LL);
    }
  }
}


void __fastcall ClassBoardClassReleaseDialog__SetupText(ClassBoardClassReleaseDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  UILabel_o *titleLabel; // x20
  System_String_o *v15; // x0
  __int64 v16; // x1
  UILabel_o *contentLabel; // x20
  UILabel_o *closeButtonLabel; // x19

  if ( (byte_42E9BEC & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_3087/*"CLASS_BOARD_RELEASE_DIALOG_CONTENT"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_3327/*"COMMON_CONFIRM_CLOSE"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_3088/*"CLASS_BOARD_RELEASE_DIALOG_TITLE"*/, v11, v12, v13);
    byte_42E9BEC = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_3088/*"CLASS_BOARD_RELEASE_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, v15, 0LL),
        contentLabel = this->fields.contentLabel,
        v15 = LocalizationManager__Get((System_String_o *)StringLiteral_3087/*"CLASS_BOARD_RELEASE_DIALOG_CONTENT"*/, 0LL),
        !contentLabel)
    || (UILabel__set_text(contentLabel, v15, 0LL),
        closeButtonLabel = this->fields.closeButtonLabel,
        v15 = LocalizationManager__Get((System_String_o *)StringLiteral_3327/*"COMMON_CONFIRM_CLOSE"*/, 0LL),
        !closeButtonLabel) )
  {
    sub_B5D69C(v15, v16);
  }
  UILabel__set_text(closeButtonLabel, v15, 0LL);
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