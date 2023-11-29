void __fastcall ClassBoardAddClassDialog___ctor(ClassBoardAddClassDialog_o *this, const MethodInfo *method)
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

  if ( (byte_40FAF84 & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantClassIconComponent___ctor__, v6);
    sub_B16FFC(&System_Collections_Generic_List_ServantClassIconComponent__TypeInfo, v7);
    byte_40FAF84 = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_ServantClassIconComponent__TypeInfo,
                                                                                                 method,
                                                                                                 v2,
                                                                                                 v3,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantClassIconComponent___ctor__);
  this->fields.iconList = (struct System_Collections_Generic_List_ServantClassIconComponent__o *)v8;
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
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Action_o *v15; // x20

  if ( (byte_40FAF81 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, closeCallback);
    sub_B16FFC(&Method_ClassBoardAddClassDialog_OnCloseEnd__, v10);
    byte_40FAF81 = 1;
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
  System_Action___ctor(v15, (Il2CppObject *)this, Method_ClassBoardAddClassDialog_OnCloseEnd__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardAddClassDialog__CreateServantClassIconComponents(
        ClassBoardAddClassDialog_o *this,
        int32_t count,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_List_ServantClassIconComponent__o *iconList; // x8
  int32_t size; // w8
  int v11; // w22
  int i; // w23
  struct UnityEngine_GameObject_o *iconPrefab; // x20
  UnityEngine_GameObject_o *v14; // x20
  struct System_Collections_Generic_List_ServantClassIconComponent__o *v15; // x21
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0

  if ( (byte_40FAF83 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ServantClassIconComponent___, *(_QWORD *)&count);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantClassIconComponent__Add__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantClassIconComponent__get_Count__, v6);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    byte_40FAF83 = 1;
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
                                                                                             (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ServantClassIconComponent___);
          if ( !v15 )
            goto LABEL_16;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v15,
            Component_srcLineSprite,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantClassIconComponent__Add__);
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

  if ( (byte_40FAF80 & 1) == 0 )
  {
    sub_B16FFC(&Method_ClassBoardAddClassDialog_OnClickCloseButton__, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v2);
    byte_40FAF80 = 1;
  }
  v3 = Method_ClassBoardAddClassDialog_OnClickCloseButton__;
  if ( (*((_BYTE *)Method_ClassBoardAddClassDialog_OnClickCloseButton__ + 75) & 2) != 0 )
    v3 = (_QWORD *)sub_B17004(Method_ClassBoardAddClassDialog_OnClickCloseButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_B16FE0(v3, v3[3]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
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
  sub_B16F98(p_closeCallback, 0LL, v2, v3, v4, v5, v6, v7);
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
  struct System_Collections_Generic_List_ServantClassIconComponent__o *iconList; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x8
  unsigned __int64 v25; // x22
  struct System_Collections_Generic_List_ServantClassIconComponent__o *v26; // x24
  ServantClassIconComponent_o *v27; // x0
  struct System_Collections_Generic_List_ServantClassIconComponent__o *v28; // x24
  UnityEngine_Component_o *v29; // x0
  UnityEngine_GameObject_o *v30; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  UILabel_o *contentLabel; // x21
  System_String_o *v33; // x0
  System_String_o *v34; // x0
  UnityEngine_Component_o *iconListParent; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  struct UIScrollView_o *scrollView; // x8
  int v38; // w9
  UIScrollView_o *v39; // x0
  System_Collections_Generic_List_Enumerator_T__o v40; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v41; // [xsp+20h] [xbp-50h] BYREF
  WarEntity_o *entity; // [xsp+38h] [xbp-38h] BYREF

  if ( (byte_40FAF7F & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIGrid___, *(_QWORD *)&classBaseId);
    sub_B16FFC(&Method_DataManager_GetMaster_ClassBoardBaseMaster___, v7);
    sub_B16FFC(&DataManager_TypeInfo, v8);
    sub_B16FFC(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantClassIconComponent__Dispose__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantClassIconComponent__MoveNext__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantClassIconComponent__get_Current__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantClassIconComponent__GetEnumerator__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantClassIconComponent__get_Count__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantClassIconComponent__get_Item__, v15);
    sub_B16FFC(&LocalizationManager_TypeInfo, v16);
    sub_B16FFC(&StringLiteral_2980, v17);
    byte_40FAF7F = 1;
  }
  entity = 0LL;
  memset(&v41, 0, sizeof(v41));
  if ( classIds )
  {
    v18 = *(_QWORD *)&classIds->max_length;
    if ( v18 )
    {
      ClassBoardAddClassDialog__CreateServantClassIconComponents(this, v18, (const MethodInfo *)classIds);
      iconList = this->fields.iconList;
      if ( !iconList )
        goto LABEL_46;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v40,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)iconList,
        (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ServantClassIconComponent__GetEnumerator__);
      v41 = v40;
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v41,
                (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ServantClassIconComponent__MoveNext__) )
      {
        if ( !v41.fields.current )
          sub_B170D4();
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v41.fields.current, 0LL);
        if ( !gameObject )
          sub_B170D4();
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v41,
        (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ServantClassIconComponent__Dispose__);
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
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
            if ( v25 >= (unsigned int)v24 )
            {
              sub_B17100(v21, v22, v23);
              sub_B170A0();
            }
            v27 = v26->fields._items->m_Items[v25];
            if ( !v27 )
              break;
            ServantClassIconComponent__Set_30430364(v27, classIds->m_Items[v25 + 1], 3, 0LL);
            v28 = this->fields.iconList;
            if ( !v28 )
              break;
            if ( v25 >= (unsigned int)v28->fields._size )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
            v29 = (UnityEngine_Component_o *)v28->fields._items->m_Items[v25];
            if ( !v29 )
              break;
            v30 = UnityEngine_Component__get_gameObject(v29, 0LL);
            if ( !v30 )
              break;
            UnityEngine_GameObject__SetActive(v30, 1, 0LL);
            LODWORD(v24) = classIds->max_length;
          }
          if ( (__int64)++v25 >= (int)v24 )
            goto LABEL_26;
        }
LABEL_46:
        sub_B170D4();
      }
LABEL_26:
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_46;
      if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
             Master_WarQuestSelectionMaster,
             &entity,
             classBaseId,
             (const MethodInfo_266F3E4 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__) )
      {
        contentLabel = this->fields.contentLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v33 = LocalizationManager__Get((System_String_o *)StringLiteral_2980, 0LL);
        if ( !entity )
          goto LABEL_46;
        v34 = System_String__Format(v33, (Il2CppObject *)entity->fields.age, 0LL);
        if ( !contentLabel )
          goto LABEL_46;
        UILabel__set_text(contentLabel, v34, 0LL);
      }
      BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
      iconListParent = (UnityEngine_Component_o *)this->fields.iconListParent;
      if ( !iconListParent )
        goto LABEL_46;
      Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                  iconListParent,
                                  (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
      if ( !Component_WebViewObject )
        goto LABEL_46;
      (*(void (__fastcall **)(WebViewObject_o *, Il2CppClass *))&Component_WebViewObject->klass[1]._1.this_arg.bits)(
        Component_WebViewObject,
        Component_WebViewObject->klass[1]._1.element_class);
      scrollView = this->fields.scrollView;
      if ( !scrollView )
        goto LABEL_46;
      v38 = (int)classIds->max_length > 4 ? 1 : 4;
      HIDWORD(scrollView->fields.onDragStarted) = v38;
      v39 = this->fields.scrollView;
      if ( !v39 )
        goto LABEL_46;
      UIScrollView__ResetPosition(v39, 0LL);
    }
  }
}


void __fastcall ClassBoardAddClassDialog__SetupText(ClassBoardAddClassDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UILabel_o *titleLabel; // x20
  System_String_o *v6; // x0
  UILabel_o *closeButtonLabel; // x19
  System_String_o *v8; // x0

  if ( (byte_40FAF82 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_2981, v3);
    sub_B16FFC(&StringLiteral_3252, v4);
    byte_40FAF82 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_2981, 0LL);
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, v6, 0LL),
        closeButtonLabel = this->fields.closeButtonLabel,
        v8 = LocalizationManager__Get((System_String_o *)StringLiteral_3252, 0LL),
        !closeButtonLabel) )
  {
    sub_B170D4();
  }
  UILabel__set_text(closeButtonLabel, v8, 0LL);
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