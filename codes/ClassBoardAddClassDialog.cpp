void __fastcall ClassBoardAddClassDialog___ctor(ClassBoardAddClassDialog_o *this, const MethodInfo *method)
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

  if ( (byte_4187D15 & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantClassIconComponent___ctor__, v3);
    sub_B2C35C(&System_Collections_Generic_List_ServantClassIconComponent__TypeInfo, v4);
    byte_4187D15 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantClassIconComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantClassIconComponent___ctor__);
  this->fields.iconList = (struct System_Collections_Generic_List_ServantClassIconComponent__o *)v5;
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
  __int64 v10; // x1
  System_Action_o *v11; // x20

  if ( (byte_4187D12 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, closeCallback);
    sub_B2C35C(&Method_ClassBoardAddClassDialog_OnCloseEnd__, v10);
    byte_4187D12 = 1;
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
  System_Action___ctor(v11, (Il2CppObject *)this, Method_ClassBoardAddClassDialog_OnCloseEnd__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardAddClassDialog__CreateServantClassIconComponents(
        ClassBoardAddClassDialog_o *this,
        int32_t count,
        const MethodInfo *method)
{
  ClassBoardAddClassDialog_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_List_ServantClassIconComponent__o *iconList; // x8
  int32_t size; // w8
  int v11; // w22
  int i; // w23
  UnityEngine_UI_Dropdown_DropdownItem_o *iconPrefab; // x20
  UnityEngine_GameObject_o *v14; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x21

  v4 = this;
  if ( (byte_4187D14 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ServantClassIconComponent___, *(_QWORD *)&count);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantClassIconComponent__Add__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantClassIconComponent__get_Count__, v6);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    this = (ClassBoardAddClassDialog_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    byte_4187D14 = 1;
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
          this = (ClassBoardAddClassDialog_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                 v14,
                                                 (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ServantClassIconComponent___);
          if ( !v15 )
            goto LABEL_16;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v15,
            (EventMissionProgressRequest_Argument_ProgressData_o *)this,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantClassIconComponent__Add__);
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
  __int64 v2; // x1
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  CommonUI_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4187D11 & 1) == 0 )
  {
    sub_B2C35C(&Method_ClassBoardAddClassDialog_OnClickCloseButton__, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v2);
    byte_4187D11 = 1;
  }
  v3 = Method_ClassBoardAddClassDialog_OnClickCloseButton__;
  if ( (*((_BYTE *)Method_ClassBoardAddClassDialog_OnClickCloseButton__ + 75) & 2) != 0 )
    v3 = (_QWORD *)sub_B2C364(Method_ClassBoardAddClassDialog_OnClickCloseButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_B2C340(v3, v3[3]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v6);
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
  sub_B2C2F8(p_closeCallback, 0LL, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(closeCallback, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardAddClassDialog__Open(
        ClassBoardAddClassDialog_o *this,
        int32_t classBaseId,
        System_Int32_array *classIds,
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *iconList; // x0
  __int64 v21; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v23; // x1
  __int64 v24; // x8
  unsigned __int64 v25; // x22
  struct System_Collections_Generic_List_ServantClassIconComponent__o *v26; // x24
  struct System_Collections_Generic_List_ServantClassIconComponent__o *v27; // x24
  UILabel_o *contentLabel; // x21
  struct UIScrollView_o *scrollView; // x8
  int v30; // w9
  __int64 v31; // x0
  System_Collections_Generic_List_Enumerator_T__o v32; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v33; // [xsp+20h] [xbp-50h] BYREF
  WarEntity_o *entity; // [xsp+38h] [xbp-38h] BYREF

  if ( (byte_4187D10 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIGrid___, *(_QWORD *)&classBaseId);
    sub_B2C35C(&Method_DataManager_GetMaster_ClassBoardBaseMaster___, v7);
    sub_B2C35C(&DataManager_TypeInfo, v8);
    sub_B2C35C(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantClassIconComponent__Dispose__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantClassIconComponent__MoveNext__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantClassIconComponent__get_Current__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantClassIconComponent__GetEnumerator__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantClassIconComponent__get_Count__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantClassIconComponent__get_Item__, v15);
    sub_B2C35C(&LocalizationManager_TypeInfo, v16);
    sub_B2C35C(&StringLiteral_2989/*"CLASS_BOARD_ADD_CLASS_DIALOG_CONTENT_FORMAT"*/, v17);
    byte_4187D10 = 1;
  }
  entity = 0LL;
  memset(&v33, 0, sizeof(v33));
  if ( classIds )
  {
    v18 = *(_QWORD *)&classIds->max_length;
    if ( v18 )
    {
      ClassBoardAddClassDialog__CreateServantClassIconComponents(this, v18, (const MethodInfo *)classIds);
      iconList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.iconList;
      if ( !iconList )
        goto LABEL_46;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v32,
        iconList,
        (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ServantClassIconComponent__GetEnumerator__);
      v33 = v32;
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v33,
                (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ServantClassIconComponent__MoveNext__) )
      {
        if ( !v33.fields.current )
          sub_B2C434(0LL, v21);
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v33.fields.current, 0LL);
        if ( !gameObject )
          sub_B2C434(0LL, v23);
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v33,
        (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ServantClassIconComponent__Dispose__);
      v24 = *(_QWORD *)&classIds->max_length;
      if ( (int)v24 >= 1 )
      {
        v25 = 0LL;
        while ( 1 )
        {
          v26 = this->fields.iconList;
          if ( !v26 )
            break;
          if ( (__int64)v25 < v26->fields._size )
          {
            if ( v25 >= (unsigned int)v26->fields._size )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
            if ( v25 >= (unsigned int)v24 )
            {
              v31 = sub_B2C460(iconList);
              sub_B2C400(v31, 0LL);
            }
            iconList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v26->fields._items->m_Items[v25];
            if ( !iconList )
              break;
            ServantClassIconComponent__Set_29187064(
              (ServantClassIconComponent_o *)iconList,
              classIds->m_Items[v25 + 1],
              3,
              0LL);
            v27 = this->fields.iconList;
            if ( !v27 )
              break;
            if ( v25 >= (unsigned int)v27->fields._size )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
            iconList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v27->fields._items->m_Items[v25];
            if ( !iconList )
              break;
            iconList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)iconList, 0LL);
            if ( !iconList )
              break;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)iconList, 1, 0LL);
            LODWORD(v24) = classIds->max_length;
          }
          if ( (__int64)++v25 >= (int)v24 )
            goto LABEL_26;
        }
LABEL_46:
        sub_B2C434(iconList, v19);
      }
LABEL_26:
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      iconList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
      if ( !iconList )
        goto LABEL_46;
      if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)iconList,
             &entity,
             classBaseId,
             (const MethodInfo_24E412C *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__) )
      {
        contentLabel = this->fields.contentLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        iconList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)LocalizationManager__Get(
                                                                                                    (System_String_o *)StringLiteral_2989/*"CLASS_BOARD_ADD_CLASS_DIALOG_CONTENT_FORMAT"*/,
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
                                                                                                  (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
      if ( !iconList )
        goto LABEL_46;
      iconList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)((__int64 (__fastcall *)(System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *, Il2CppMethodPointer))iconList->klass->vtable._8_unknown.method)(
                                                                                                  iconList,
                                                                                                  iconList->klass->vtable._9_unknown.methodPtr);
      scrollView = this->fields.scrollView;
      if ( !scrollView )
        goto LABEL_46;
      v30 = (int)classIds->max_length > 4 ? 1 : 4;
      HIDWORD(scrollView->fields.onDragStarted) = v30;
      iconList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.scrollView;
      if ( !iconList )
        goto LABEL_46;
      UIScrollView__ResetPosition((UIScrollView_o *)iconList, 0LL);
    }
  }
}


void __fastcall ClassBoardAddClassDialog__SetupText(ClassBoardAddClassDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UILabel_o *titleLabel; // x20
  System_String_o *v6; // x0
  __int64 v7; // x1
  UILabel_o *closeButtonLabel; // x19

  if ( (byte_4187D13 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_2990/*"CLASS_BOARD_ADD_CLASS_DIALOG_TITLE"*/, v3);
    sub_B2C35C(&StringLiteral_3261/*"COMMON_CONFIRM_CLOSE"*/, v4);
    byte_4187D13 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_2990/*"CLASS_BOARD_ADD_CLASS_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, v6, 0LL),
        closeButtonLabel = this->fields.closeButtonLabel,
        v6 = LocalizationManager__Get((System_String_o *)StringLiteral_3261/*"COMMON_CONFIRM_CLOSE"*/, 0LL),
        !closeButtonLabel) )
  {
    sub_B2C434(v6, v7);
  }
  UILabel__set_text(closeButtonLabel, v6, 0LL);
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