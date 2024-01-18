void __fastcall ClassBoardClassReleaseDialog___ctor(ClassBoardClassReleaseDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4187D42 & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent___ctor__, v3);
    sub_B2C35C(&System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__TypeInfo, v4);
    byte_4187D42 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent___ctor__);
  this->fields.iconList = (struct System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__o *)v5;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.iconList,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
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
  __int64 v10; // x1
  System_Action_o *v11; // x20

  if ( (byte_4187D3F & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, closeCallback);
    sub_B2C35C(&Method_ClassBoardClassReleaseDialog_OnCloseEnd__, v10);
    byte_4187D3F = 1;
  }
  this->fields.closeCallback = closeCallback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.closeCallback,
    (System_Int32_array **)closeCallback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v11 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
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
  int i; // w23
  UnityEngine_UI_Dropdown_DropdownItem_o *iconPrefab; // x20
  UnityEngine_GameObject_o *v14; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x21

  v4 = this;
  if ( (byte_4187D41 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ClassBoardBaseClassIconNameComponent___, *(_QWORD *)&count);
    sub_B2C35C(&Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__Add__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__get_Count__, v6);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    this = (ClassBoardClassReleaseDialog_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    byte_4187D41 = 1;
  }
  iconList = v4->fields.iconList;
  if ( !iconList )
LABEL_16:
    sub_B2C434(this, *(_QWORD *)&count);
  size = iconList->fields._size;
  if ( size < count )
  {
    v11 = count - size;
    if ( count - size >= 1 )
    {
      for ( i = 0; i < v11; ++i )
      {
        iconPrefab = (UnityEngine_UI_Dropdown_DropdownItem_o *)v4->fields.iconPrefab;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v14 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                            iconPrefab,
                                            (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v14, 0LL, 0LL) )
        {
          GameObjectExtensions__SafeSetParent(v14, (UnityEngine_Component_o *)v4->fields.iconListParent, 0LL);
          if ( !v14 )
            goto LABEL_16;
          v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v4->fields.iconList;
          this = (ClassBoardClassReleaseDialog_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     v14,
                                                     (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ClassBoardBaseClassIconNameComponent___);
          if ( !v15 )
            goto LABEL_16;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v15,
            (EventMissionProgressRequest_Argument_ProgressData_o *)this,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__Add__);
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
  __int64 v2; // x1
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  CommonUI_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4187D3E & 1) == 0 )
  {
    sub_B2C35C(&Method_ClassBoardClassReleaseDialog_OnClickCloseButton__, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v2);
    byte_4187D3E = 1;
  }
  v3 = Method_ClassBoardClassReleaseDialog_OnClickCloseButton__;
  if ( (*((_BYTE *)Method_ClassBoardClassReleaseDialog_OnClickCloseButton__ + 75) & 2) != 0 )
    v3 = (_QWORD *)sub_B2C364(Method_ClassBoardClassReleaseDialog_OnClickCloseButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_B2C340(v3, v3[3]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v6);
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
  sub_B2C2F8(p_closeCallback, 0LL, v2, v3, v4, v5, v6, v7);
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *iconList; // x0
  __int64 v14; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x2
  __int64 v18; // x8
  unsigned __int64 v19; // x21
  struct System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__o *v20; // x23
  struct System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__o *v21; // x23
  struct UIScrollView_o *scrollView; // x8
  int v23; // w9
  __int64 v24; // x0
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4187D3D & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIGrid___, classBaseIds);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ClassBoardBaseClassIconNameComponent__Dispose__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ClassBoardBaseClassIconNameComponent__MoveNext__, v6);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardBaseClassIconNameComponent__get_Current__,
      v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__GetEnumerator__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__get_Count__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__get_Item__, v10);
    byte_4187D3D = 1;
  }
  memset(&v26, 0, sizeof(v26));
  if ( classBaseIds )
  {
    v11 = *(_QWORD *)&classBaseIds->max_length;
    if ( v11 )
    {
      ClassBoardClassReleaseDialog__CreateBaseClassIconNameComponents(this, v11, method);
      iconList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.iconList;
      if ( !iconList )
        goto LABEL_35;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v25,
        iconList,
        (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__GetEnumerator__);
      v26 = v25;
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v26,
                (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardBaseClassIconNameComponent__MoveNext__) )
      {
        if ( !v26.fields.current )
          sub_B2C434(0LL, v14);
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v26.fields.current, 0LL);
        if ( !gameObject )
          sub_B2C434(0LL, v16);
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v26,
        (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardBaseClassIconNameComponent__Dispose__);
      v18 = *(_QWORD *)&classBaseIds->max_length;
      if ( (int)v18 >= 1 )
      {
        v19 = 0LL;
        while ( 1 )
        {
          v20 = this->fields.iconList;
          if ( !v20 )
            break;
          if ( (__int64)v19 < v20->fields._size )
          {
            if ( v19 >= (unsigned int)v20->fields._size )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
            if ( v19 >= (unsigned int)v18 )
            {
              v24 = sub_B2C460(iconList);
              sub_B2C400(v24, 0LL);
            }
            iconList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v20->fields._items->m_Items[v19];
            if ( !iconList )
              break;
            ClassBoardBaseClassIconNameComponent__Setup(
              (ClassBoardBaseClassIconNameComponent_o *)iconList,
              classBaseIds->m_Items[v19 + 1],
              v17);
            v21 = this->fields.iconList;
            if ( !v21 )
              break;
            if ( v19 >= (unsigned int)v21->fields._size )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
            iconList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v21->fields._items->m_Items[v19];
            if ( !iconList )
              break;
            iconList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)iconList, 0LL);
            if ( !iconList )
              break;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)iconList, 1, 0LL);
            LODWORD(v18) = classBaseIds->max_length;
          }
          if ( (__int64)++v19 >= (int)v18 )
            goto LABEL_26;
        }
LABEL_35:
        sub_B2C434(iconList, v12);
      }
LABEL_26:
      BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
      iconList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.iconListParent;
      if ( !iconList )
        goto LABEL_35;
      iconList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                                                  (UnityEngine_Component_o *)iconList,
                                                                                                  (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
      if ( !iconList )
        goto LABEL_35;
      iconList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)((__int64 (__fastcall *)(System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *, Il2CppMethodPointer))iconList->klass->vtable._8_unknown.method)(
                                                                                                  iconList,
                                                                                                  iconList->klass->vtable._9_unknown.methodPtr);
      scrollView = this->fields.scrollView;
      if ( !scrollView )
        goto LABEL_35;
      v23 = (int)classBaseIds->max_length > 4 ? 1 : 4;
      HIDWORD(scrollView->fields.onDragStarted) = v23;
      iconList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.scrollView;
      if ( !iconList )
        goto LABEL_35;
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

  if ( (byte_4187D40 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_3028/*"CLASS_BOARD_RELEASE_DIALOG_CONTENT"*/, v3);
    sub_B2C35C(&StringLiteral_3261/*"COMMON_CONFIRM_CLOSE"*/, v4);
    sub_B2C35C(&StringLiteral_3029/*"CLASS_BOARD_RELEASE_DIALOG_TITLE"*/, v5);
    byte_4187D40 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_3029/*"CLASS_BOARD_RELEASE_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, v7, 0LL),
        contentLabel = this->fields.contentLabel,
        v7 = LocalizationManager__Get((System_String_o *)StringLiteral_3028/*"CLASS_BOARD_RELEASE_DIALOG_CONTENT"*/, 0LL),
        !contentLabel)
    || (UILabel__set_text(contentLabel, v7, 0LL),
        closeButtonLabel = this->fields.closeButtonLabel,
        v7 = LocalizationManager__Get((System_String_o *)StringLiteral_3261/*"COMMON_CONFIRM_CLOSE"*/, 0LL),
        !closeButtonLabel) )
  {
    sub_B2C434(v7, v8);
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