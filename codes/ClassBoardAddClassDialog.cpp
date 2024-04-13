void __fastcall ClassBoardAddClassDialog___ctor(ClassBoardAddClassDialog_o *this, const MethodInfo *method)
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

  if ( (byte_42E9BBD & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantClassIconComponent___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Collections_Generic_List_ServantClassIconComponent__TypeInfo, v8, v9, v10);
    byte_42E9BBD = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantClassIconComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantClassIconComponent___ctor__);
  this->fields.iconList = (struct System_Collections_Generic_List_ServantClassIconComponent__o *)v11;
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  System_Action_o *v13; // x20

  if ( (byte_42E9BBA & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)closeCallback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_ClassBoardAddClassDialog_OnCloseEnd__, v10, v11, v12);
    byte_42E9BBA = 1;
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
  System_Action___ctor(v13, (Il2CppObject *)this, Method_ClassBoardAddClassDialog_OnCloseEnd__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardAddClassDialog__CreateServantClassIconComponents(
        ClassBoardAddClassDialog_o *this,
        int32_t count,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ClassBoardAddClassDialog_o *v5; // x19
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
  struct System_Collections_Generic_List_ServantClassIconComponent__o *iconList; // x8
  int32_t size; // w8
  int v20; // w22
  int i; // w23
  UnityEngine_UI_Dropdown_DropdownItem_o *iconPrefab; // x20
  UnityEngine_GameObject_o *v23; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x21

  v5 = this;
  if ( (byte_42E9BBC & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ServantClassIconComponent___, count, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantClassIconComponent__Add__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantClassIconComponent__get_Count__, v9, v10, v11);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v12, v13, v14);
    this = (ClassBoardAddClassDialog_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v15, v16, v17);
    byte_42E9BBC = 1;
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
          this = (ClassBoardAddClassDialog_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                 v23,
                                                 (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ServantClassIconComponent___);
          if ( !v24 )
            goto LABEL_16;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v24,
            (EventMissionProgressRequest_Argument_ProgressData_o *)this,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantClassIconComponent__Add__);
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
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  CommonUI_o *Instance; // x0
  __int64 v10; // x1

  if ( (byte_42E9BB9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_ClassBoardAddClassDialog_OnClickCloseButton__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5, v6);
    byte_42E9BB9 = 1;
  }
  v7 = Method_ClassBoardAddClassDialog_OnClickCloseButton__;
  if ( (*((_BYTE *)Method_ClassBoardAddClassDialog_OnClickCloseButton__ + 75) & 2) != 0 )
    v7 = (_QWORD *)sub_B5D5CC(Method_ClassBoardAddClassDialog_OnClickCloseButton__);
  v8 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v7, v7[3]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v10);
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
  sub_B5D560(p_closeCallback, 0LL, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(closeCallback, 0LL);
}


void __fastcall ClassBoardAddClassDialog__Open(
        ClassBoardAddClassDialog_o *this,
        int32_t classBaseId,
        System_Int32_array *classIds,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  __int64 v40; // x1
  __int64 v41; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *iconList; // x0
  __int64 v43; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v45; // x1
  __int64 v46; // x8
  unsigned __int64 v47; // x22
  struct System_Collections_Generic_List_ServantClassIconComponent__o *v48; // x24
  struct System_Collections_Generic_List_ServantClassIconComponent__o *v49; // x24
  UILabel_o *contentLabel; // x21
  struct UIScrollView_o *scrollView; // x8
  int v52; // w9
  __int64 v53; // x0
  System_Collections_Generic_List_Enumerator_T__o v54; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v55; // [xsp+20h] [xbp-50h] BYREF
  WarEntity_o *entity; // [xsp+38h] [xbp-38h] BYREF

  if ( (byte_42E9BB8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIGrid___, classBaseId, (_DWORD)classIds, method);
    sub_B5D5C4(&Method_DataManager_GetMaster_ClassBoardBaseMaster___, v7, v8, v9);
    sub_B5D5C4(&DataManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantClassIconComponent__Dispose__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantClassIconComponent__MoveNext__, v19, v20, v21);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantClassIconComponent__get_Current__,
      v22,
      v23,
      v24);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantClassIconComponent__GetEnumerator__, v25, v26, v27);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantClassIconComponent__get_Count__, v28, v29, v30);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantClassIconComponent__get_Item__, v31, v32, v33);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v34, v35, v36);
    sub_B5D5C4(&StringLiteral_3048/*"CLASS_BOARD_ADD_CLASS_DIALOG_CONTENT_FORMAT"*/, v37, v38, v39);
    byte_42E9BB8 = 1;
  }
  entity = 0LL;
  memset(&v55, 0, sizeof(v55));
  if ( classIds )
  {
    v40 = *(_QWORD *)&classIds->max_length;
    if ( v40 )
    {
      ClassBoardAddClassDialog__CreateServantClassIconComponents(this, v40, (const MethodInfo *)classIds);
      iconList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.iconList;
      if ( !iconList )
        goto LABEL_46;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v54,
        iconList,
        (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ServantClassIconComponent__GetEnumerator__);
      v55 = v54;
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v55,
                (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ServantClassIconComponent__MoveNext__) )
      {
        if ( !v55.fields.current )
          sub_B5D69C(0LL, v43);
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v55.fields.current, 0LL);
        if ( !gameObject )
          sub_B5D69C(0LL, v45);
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v55,
        (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ServantClassIconComponent__Dispose__);
      v46 = *(_QWORD *)&classIds->max_length;
      if ( (int)v46 >= 1 )
      {
        v47 = 0LL;
        while ( 1 )
        {
          v48 = this->fields.iconList;
          if ( !v48 )
            break;
          if ( (__int64)v47 < v48->fields._size )
          {
            if ( v47 >= (unsigned int)v48->fields._size )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
            if ( v47 >= (unsigned int)v46 )
            {
              v53 = sub_B5D6C8(iconList);
              sub_B5D668(v53, 0LL);
            }
            iconList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v48->fields._items->m_Items[v47];
            if ( !iconList )
              break;
            ServantClassIconComponent__Set_27486708(
              (ServantClassIconComponent_o *)iconList,
              classIds->m_Items[v47 + 1],
              3,
              0LL);
            v49 = this->fields.iconList;
            if ( !v49 )
              break;
            if ( v47 >= (unsigned int)v49->fields._size )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
            iconList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v49->fields._items->m_Items[v47];
            if ( !iconList )
              break;
            iconList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)iconList, 0LL);
            if ( !iconList )
              break;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)iconList, 1, 0LL);
            LODWORD(v46) = classIds->max_length;
          }
          if ( (__int64)++v47 >= (int)v46 )
            goto LABEL_26;
        }
LABEL_46:
        sub_B5D69C(iconList, v41);
      }
LABEL_26:
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      iconList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
      if ( !iconList )
        goto LABEL_46;
      if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)iconList,
             &entity,
             classBaseId,
             (const MethodInfo_23FAE6C *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__) )
      {
        contentLabel = this->fields.contentLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        iconList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)LocalizationManager__Get(
                                                                                                    (System_String_o *)StringLiteral_3048/*"CLASS_BOARD_ADD_CLASS_DIALOG_CONTENT_FORMAT"*/,
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
                                                                                                  (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
      if ( !iconList )
        goto LABEL_46;
      iconList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)((__int64 (__fastcall *)(System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *, Il2CppMethodPointer))iconList->klass->vtable._8_unknown.method)(
                                                                                                  iconList,
                                                                                                  iconList->klass->vtable._9_unknown.methodPtr);
      scrollView = this->fields.scrollView;
      if ( !scrollView )
        goto LABEL_46;
      v52 = (int)classIds->max_length > 4 ? 1 : 4;
      HIDWORD(scrollView->fields.onDragStarted) = v52;
      iconList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.scrollView;
      if ( !iconList )
        goto LABEL_46;
      UIScrollView__ResetPosition((UIScrollView_o *)iconList, 0LL);
    }
  }
}


void __fastcall ClassBoardAddClassDialog__SetupText(ClassBoardAddClassDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UILabel_o *titleLabel; // x20
  System_String_o *v12; // x0
  __int64 v13; // x1
  UILabel_o *closeButtonLabel; // x19

  if ( (byte_42E9BBB & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_3049/*"CLASS_BOARD_ADD_CLASS_DIALOG_TITLE"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_3327/*"COMMON_CONFIRM_CLOSE"*/, v8, v9, v10);
    byte_42E9BBB = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_3049/*"CLASS_BOARD_ADD_CLASS_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, v12, 0LL),
        closeButtonLabel = this->fields.closeButtonLabel,
        v12 = LocalizationManager__Get((System_String_o *)StringLiteral_3327/*"COMMON_CONFIRM_CLOSE"*/, 0LL),
        !closeButtonLabel) )
  {
    sub_B5D69C(v12, v13);
  }
  UILabel__set_text(closeButtonLabel, v12, 0LL);
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