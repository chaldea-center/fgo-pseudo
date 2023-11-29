void __fastcall ClassBoardClassReleaseDialog___ctor(ClassBoardClassReleaseDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_40FAFB1 & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent___ctor__, v6);
    sub_B16FFC(&System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__TypeInfo, v7);
    byte_40FAFB1 = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__TypeInfo,
                                                                                                 method,
                                                                                                 v2,
                                                                                                 v3,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent___ctor__);
  this->fields.iconList = (struct System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__o *)v8;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.iconList,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
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
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Action_o *v15; // x20

  if ( (byte_40FAFAE & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, closeCallback);
    sub_B16FFC(&Method_ClassBoardClassReleaseDialog_OnCloseEnd__, v10);
    byte_40FAFAE = 1;
  }
  this->fields.closeCallback = closeCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.closeCallback,
    (System_Int32_array **)closeCallback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v15 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_ClassBoardClassReleaseDialog_OnCloseEnd__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardClassReleaseDialog__CreateBaseClassIconNameComponents(
        ClassBoardClassReleaseDialog_o *this,
        int32_t count,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__o *iconList; // x8
  int32_t size; // w8
  int v11; // w22
  int i; // w23
  struct UnityEngine_GameObject_o *iconPrefab; // x20
  UnityEngine_GameObject_o *v14; // x20
  struct System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__o *v15; // x21
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0

  if ( (byte_40FAFB0 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ClassBoardBaseClassIconNameComponent___, *(_QWORD *)&count);
    sub_B16FFC(&Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__Add__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__get_Count__, v6);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    byte_40FAFB0 = 1;
  }
  iconList = this->fields.iconList;
  if ( !iconList )
LABEL_16:
    sub_B170D4();
  size = iconList->fields._size;
  if ( size < count )
  {
    v11 = count - size;
    if ( count - size >= 1 )
    {
      for ( i = 0; i < v11; ++i )
      {
        iconPrefab = this->fields.iconPrefab;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v14 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                            (UnityEngine_UI_Dropdown_DropdownItem_o *)iconPrefab,
                                            (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v14, 0LL, 0LL) )
        {
          GameObjectExtensions__SafeSetParent(v14, (UnityEngine_Component_o *)this->fields.iconListParent, 0LL);
          if ( !v14 )
            goto LABEL_16;
          v15 = this->fields.iconList;
          Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                             v14,
                                                                                             (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardBaseClassIconNameComponent___);
          if ( !v15 )
            goto LABEL_16;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v15,
            Component_srcLineSprite,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__Add__);
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

  if ( (byte_40FAFAD & 1) == 0 )
  {
    sub_B16FFC(&Method_ClassBoardClassReleaseDialog_OnClickCloseButton__, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v2);
    byte_40FAFAD = 1;
  }
  v3 = Method_ClassBoardClassReleaseDialog_OnClickCloseButton__;
  if ( (*((_BYTE *)Method_ClassBoardClassReleaseDialog_OnClickCloseButton__ + 75) & 2) != 0 )
    v3 = (_QWORD *)sub_B17004(Method_ClassBoardClassReleaseDialog_OnClickCloseButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_B16FE0(v3, v3[3]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
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
  sub_B16F98(p_closeCallback, 0LL, v2, v3, v4, v5, v6, v7);
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
  struct System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__o *iconList; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v14; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x2
  __int64 v17; // x8
  unsigned __int64 v18; // x21
  struct System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__o *v19; // x23
  ClassBoardBaseClassIconNameComponent_o *v20; // x0
  struct System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__o *v21; // x23
  UnityEngine_Component_o *v22; // x0
  UnityEngine_GameObject_o *v23; // x0
  UnityEngine_Component_o *iconListParent; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  struct UIScrollView_o *scrollView; // x8
  int v27; // w9
  UIScrollView_o *v28; // x0
  System_Collections_Generic_List_Enumerator_T__o v29; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v30; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_40FAFAC & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIGrid___, classBaseIds);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ClassBoardBaseClassIconNameComponent__Dispose__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ClassBoardBaseClassIconNameComponent__MoveNext__, v6);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardBaseClassIconNameComponent__get_Current__,
      v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__GetEnumerator__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__get_Count__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__get_Item__, v10);
    byte_40FAFAC = 1;
  }
  memset(&v30, 0, sizeof(v30));
  if ( classBaseIds )
  {
    v11 = *(_QWORD *)&classBaseIds->max_length;
    if ( v11 )
    {
      ClassBoardClassReleaseDialog__CreateBaseClassIconNameComponents(this, v11, method);
      iconList = this->fields.iconList;
      if ( !iconList )
        goto LABEL_35;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v29,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)iconList,
        (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ClassBoardBaseClassIconNameComponent__GetEnumerator__);
      v30 = v29;
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v30,
                (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardBaseClassIconNameComponent__MoveNext__) )
      {
        if ( !v30.fields.current )
          sub_B170D4();
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v30.fields.current, 0LL);
        if ( !gameObject )
          sub_B170D4();
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v30,
        (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardBaseClassIconNameComponent__Dispose__);
      v17 = *(_QWORD *)&classBaseIds->max_length;
      if ( (int)v17 >= 1 )
      {
        v18 = 0LL;
        while ( 1 )
        {
          v19 = this->fields.iconList;
          if ( !v19 )
            break;
          if ( (__int64)v18 < v19->fields._size )
          {
            if ( v18 >= (unsigned int)v19->fields._size )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
            if ( v18 >= (unsigned int)v17 )
            {
              sub_B17100(v14, v15, v16);
              sub_B170A0();
            }
            v20 = v19->fields._items->m_Items[v18];
            if ( !v20 )
              break;
            ClassBoardBaseClassIconNameComponent__Setup(v20, classBaseIds->m_Items[v18 + 1], v16);
            v21 = this->fields.iconList;
            if ( !v21 )
              break;
            if ( v18 >= (unsigned int)v21->fields._size )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
            v22 = (UnityEngine_Component_o *)v21->fields._items->m_Items[v18];
            if ( !v22 )
              break;
            v23 = UnityEngine_Component__get_gameObject(v22, 0LL);
            if ( !v23 )
              break;
            UnityEngine_GameObject__SetActive(v23, 1, 0LL);
            LODWORD(v17) = classBaseIds->max_length;
          }
          if ( (__int64)++v18 >= (int)v17 )
            goto LABEL_26;
        }
LABEL_35:
        sub_B170D4();
      }
LABEL_26:
      BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
      iconListParent = (UnityEngine_Component_o *)this->fields.iconListParent;
      if ( !iconListParent )
        goto LABEL_35;
      Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                  iconListParent,
                                  (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
      if ( !Component_WebViewObject )
        goto LABEL_35;
      (*(void (__fastcall **)(WebViewObject_o *, Il2CppClass *))&Component_WebViewObject->klass[1]._1.this_arg.bits)(
        Component_WebViewObject,
        Component_WebViewObject->klass[1]._1.element_class);
      scrollView = this->fields.scrollView;
      if ( !scrollView )
        goto LABEL_35;
      v27 = (int)classBaseIds->max_length > 4 ? 1 : 4;
      HIDWORD(scrollView->fields.onDragStarted) = v27;
      v28 = this->fields.scrollView;
      if ( !v28 )
        goto LABEL_35;
      UIScrollView__ResetPosition(v28, 0LL);
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
  System_String_o *v9; // x0
  UILabel_o *closeButtonLabel; // x19
  System_String_o *v11; // x0

  if ( (byte_40FAFAF & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_3019, v3);
    sub_B16FFC(&StringLiteral_3252, v4);
    sub_B16FFC(&StringLiteral_3020, v5);
    byte_40FAFAF = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_3020, 0LL);
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, v7, 0LL),
        contentLabel = this->fields.contentLabel,
        v9 = LocalizationManager__Get((System_String_o *)StringLiteral_3019, 0LL),
        !contentLabel)
    || (UILabel__set_text(contentLabel, v9, 0LL),
        closeButtonLabel = this->fields.closeButtonLabel,
        v11 = LocalizationManager__Get((System_String_o *)StringLiteral_3252, 0LL),
        !closeButtonLabel) )
  {
    sub_B170D4();
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