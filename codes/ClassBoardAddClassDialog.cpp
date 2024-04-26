void __fastcall ClassBoardAddClassDialog___ctor(ClassBoardAddClassDialog_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_4352B84 & 1) == 0 )
  {
    sub_B70694(&BaseDialog_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_ServantClassIconComponent___ctor__);
    sub_B70694(&System_Collections_Generic_List_ServantClassIconComponent__TypeInfo);
    byte_4352B84 = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_ServantClassIconComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_ServantClassIconComponent___ctor__);
  this->fields.iconList = (struct System_Collections_Generic_List_ServantClassIconComponent__o *)v3;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.iconList, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ClassBoardAddClassDialog__Close(
        ClassBoardAddClassDialog_o *this,
        System_Action_o *closeCallback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_4352B81 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_ClassBoardAddClassDialog_OnCloseEnd__);
    byte_4352B81 = 1;
  }
  this->fields.closeCallback = closeCallback;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.closeCallback,
    (System_Int32_array **)closeCallback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_ClassBoardAddClassDialog_OnCloseEnd__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardAddClassDialog__CreateServantClassIconComponents(
        ClassBoardAddClassDialog_o *this,
        int32_t count,
        const MethodInfo *method)
{
  ClassBoardAddClassDialog_o *v4; // x19
  struct System_Collections_Generic_List_ServantClassIconComponent__o *iconList; // x8
  int32_t size; // w8
  int v7; // w22
  int i; // w23
  UnityEngine_UI_Dropdown_DropdownItem_o *iconPrefab; // x20
  UnityEngine_GameObject_o *v10; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x21

  v4 = this;
  if ( (byte_4352B83 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_ServantClassIconComponent___);
    sub_B70694(&Method_System_Collections_Generic_List_ServantClassIconComponent__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantClassIconComponent__get_Count__);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (ClassBoardAddClassDialog_o *)sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4352B83 = 1;
  }
  iconList = v4->fields.iconList;
  if ( !iconList )
LABEL_16:
    sub_B7076C(this, *(_QWORD *)&count);
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
                                            (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v10, 0LL, 0LL) )
        {
          GameObjectExtensions__SafeSetParent(v10, (UnityEngine_Component_o *)v4->fields.iconListParent, 0LL);
          if ( !v10 )
            goto LABEL_16;
          v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v4->fields.iconList;
          this = (ClassBoardAddClassDialog_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                 v10,
                                                 (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_ServantClassIconComponent___);
          if ( !v11 )
            goto LABEL_16;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v11,
            (EventMissionProgressRequest_Argument_ProgressData_o *)this,
            (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_ServantClassIconComponent__Add__);
        }
      }
    }
  }
}


void __fastcall ClassBoardAddClassDialog__Init(ClassBoardAddClassDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  ClassBoardAddClassDialog__SetupText(this, v3);
}


void __fastcall ClassBoardAddClassDialog__OnClickCloseButton(
        ClassBoardAddClassDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4352B80 & 1) == 0 )
  {
    sub_B70694(&Method_ClassBoardAddClassDialog_OnClickCloseButton__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4352B80 = 1;
  }
  v2 = Method_ClassBoardAddClassDialog_OnClickCloseButton__;
  if ( (*((_BYTE *)Method_ClassBoardAddClassDialog_OnClickCloseButton__ + 75) & 2) != 0 )
    v2 = (_QWORD *)sub_B7069C(Method_ClassBoardAddClassDialog_OnClickCloseButton__);
  v3 = (System_Reflection_MethodBase_o *)sub_B70678(v2, v2[3]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v5);
  CommonUI__CloseClassBoardAddClassDialog(Instance, 0LL);
}


void __fastcall ClassBoardAddClassDialog__OnCloseEnd(ClassBoardAddClassDialog_o *this, const MethodInfo *method)
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
  sub_B70630(p_closeCallback, 0LL, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(closeCallback, 0LL);
}


void __fastcall ClassBoardAddClassDialog__Open(
        ClassBoardAddClassDialog_o *this,
        int32_t classBaseId,
        System_Int32_array *classIds,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *iconList; // x0
  __int64 v10; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v12; // x1
  __int64 v13; // x8
  unsigned __int64 v14; // x22
  struct System_Collections_Generic_List_ServantClassIconComponent__o *v15; // x24
  struct System_Collections_Generic_List_ServantClassIconComponent__o *v16; // x24
  UILabel_o *contentLabel; // x21
  struct UIScrollView_o *scrollView; // x8
  int v19; // w9
  __int64 v20; // x0
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+20h] [xbp-50h] BYREF
  WarEntity_o *entity; // [xsp+38h] [xbp-38h] BYREF

  if ( (byte_4352B7F & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Component_GetComponent_UIGrid___);
    sub_B70694(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ServantClassIconComponent__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ServantClassIconComponent__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ServantClassIconComponent__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantClassIconComponent__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantClassIconComponent__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantClassIconComponent__get_Item__);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&StringLiteral_3057/*"CLASS_BOARD_ADD_CLASS_DIALOG_CONTENT_FORMAT"*/);
    byte_4352B7F = 1;
  }
  entity = 0LL;
  memset(&v22, 0, sizeof(v22));
  if ( classIds )
  {
    v7 = *(_QWORD *)&classIds->max_length;
    if ( v7 )
    {
      ClassBoardAddClassDialog__CreateServantClassIconComponents(this, v7, (const MethodInfo *)classIds);
      iconList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.iconList;
      if ( !iconList )
        goto LABEL_46;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v21,
        iconList,
        (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_ServantClassIconComponent__GetEnumerator__);
      v22 = v21;
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v22,
                (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_ServantClassIconComponent__MoveNext__) )
      {
        if ( !v22.fields.current )
          sub_B7076C(0LL, v10);
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v22.fields.current, 0LL);
        if ( !gameObject )
          sub_B7076C(0LL, v12);
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v22,
        (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_ServantClassIconComponent__Dispose__);
      v13 = *(_QWORD *)&classIds->max_length;
      if ( (int)v13 >= 1 )
      {
        v14 = 0LL;
        while ( 1 )
        {
          v15 = this->fields.iconList;
          if ( !v15 )
            break;
          if ( (__int64)v14 < v15->fields._size )
          {
            if ( v14 >= (unsigned int)v15->fields._size )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
            if ( v14 >= (unsigned int)v13 )
            {
              v20 = sub_B70798(iconList);
              sub_B70738(v20, 0LL);
            }
            iconList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v15->fields._items->m_Items[v14];
            if ( !iconList )
              break;
            ServantClassIconComponent__Set_27422456(
              (ServantClassIconComponent_o *)iconList,
              classIds->m_Items[v14 + 1],
              3,
              0LL);
            v16 = this->fields.iconList;
            if ( !v16 )
              break;
            if ( v14 >= (unsigned int)v16->fields._size )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
            iconList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v16->fields._items->m_Items[v14];
            if ( !iconList )
              break;
            iconList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)iconList, 0LL);
            if ( !iconList )
              break;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)iconList, 1, 0LL);
            LODWORD(v13) = classIds->max_length;
          }
          if ( (__int64)++v14 >= (int)v13 )
            goto LABEL_26;
        }
LABEL_46:
        sub_B7076C(iconList, v8);
      }
LABEL_26:
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      iconList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
      if ( !iconList )
        goto LABEL_46;
      if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)iconList,
             &entity,
             classBaseId,
             (const MethodInfo_21C049C *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__) )
      {
        contentLabel = this->fields.contentLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        iconList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)LocalizationManager__Get(
                                                                                                    (System_String_o *)StringLiteral_3057/*"CLASS_BOARD_ADD_CLASS_DIALOG_CONTENT_FORMAT"*/,
                                                                                                    0LL);
        if ( !entity )
          goto LABEL_46;
        iconList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)System_String__Format(
                                                                                                    (System_String_o *)iconList,
                                                                                                    (Il2CppObject *)entity->fields.age,
                                                                                                    0LL);
        if ( !contentLabel )
          goto LABEL_46;
        UILabel__set_text(contentLabel, (System_String_o *)iconList, 0LL);
      }
      BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
      iconList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.iconListParent;
      if ( !iconList )
        goto LABEL_46;
      iconList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                                                  (UnityEngine_Component_o *)iconList,
                                                                                                  (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
      if ( !iconList )
        goto LABEL_46;
      iconList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)((__int64 (__fastcall *)(System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *, Il2CppMethodPointer))iconList->klass->vtable._8_unknown.method)(
                                                                                                  iconList,
                                                                                                  iconList->klass->vtable._9_unknown.methodPtr);
      scrollView = this->fields.scrollView;
      if ( !scrollView )
        goto LABEL_46;
      v19 = (int)classIds->max_length > 4 ? 1 : 4;
      HIDWORD(scrollView->fields.onDragStarted) = v19;
      iconList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.scrollView;
      if ( !iconList )
        goto LABEL_46;
      UIScrollView__ResetPosition((UIScrollView_o *)iconList, 0LL);
    }
  }
}


void __fastcall ClassBoardAddClassDialog__SetupText(ClassBoardAddClassDialog_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x20
  System_String_o *v4; // x0
  __int64 v5; // x1
  UILabel_o *closeButtonLabel; // x19

  if ( (byte_4352B82 & 1) == 0 )
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&StringLiteral_3058/*"CLASS_BOARD_ADD_CLASS_DIALOG_TITLE"*/);
    sub_B70694(&StringLiteral_3336/*"COMMON_CONFIRM_CLOSE"*/);
    byte_4352B82 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_3058/*"CLASS_BOARD_ADD_CLASS_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, v4, 0LL),
        closeButtonLabel = this->fields.closeButtonLabel,
        v4 = LocalizationManager__Get((System_String_o *)StringLiteral_3336/*"COMMON_CONFIRM_CLOSE"*/, 0LL),
        !closeButtonLabel) )
  {
    sub_B7076C(v4, v5);
  }
  UILabel__set_text(closeButtonLabel, v4, 0LL);
}


void __fastcall ClassBoardAddClassDialog__Validation(ClassBoardAddClassDialog_o *this, const MethodInfo *method)
{
  ;
}


UnityEngine_GameObject_o *__fastcall ClassBoardAddClassDialog__get_closeBtnObject(
        ClassBoardAddClassDialog_o *this,
        const MethodInfo *method)
{
  return this->fields.closeButtonObj;
}