void ImageViewListViewMenu___ctor(ImageViewListViewMenu_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.MOVE_SPEED = 0x3A83126F3F000000LL;
  TestScript_DebugTest_DebugItem_DebugItemMenuBase___ctor((TestScript_DebugTest_DebugItem_DebugItemMenuBase_o *)this, 0);
}


void ImageViewListViewMenu__Callback(ImageViewListViewMenu_o *this, bool result, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x0
  struct ImageViewListViewMenu_CallbackFunc_o *v9; // x20
  struct ImageViewListViewMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1D0F058(p_callbackFunc, 0, (int32_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, bool, intptr_t))v9->fields.invoke_impl)(
      v9->fields.method_code,
      result,
      v9->fields.method);
  }
}


void ImageViewListViewMenu__CharaMove(ImageViewListViewMenu_o *this, const MethodInfo *method)
{
  ;
}


void ImageViewListViewMenu__CharaScale(ImageViewListViewMenu_o *this, const MethodInfo *method)
{
  ;
}


void ImageViewListViewMenu__Close(ImageViewListViewMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewManager_o *listViewManager; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  ImageViewListViewMenu__EndInput(this, method);
  if ( this->fields.state )
  {
    listViewManager = (ListViewManager_o *)this->fields.listViewManager;
    if ( !listViewManager )
      goto LABEL_6;
    ListViewManager__DestroyList(listViewManager, 0);
    this->fields.imageAssetList = 0;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.imageAssetList, 0, v5, v6, v7, v8, v9, v10);
    this->fields.state = 0;
  }
  listViewManager = (ListViewManager_o *)this->fields.rootObject;
  if ( !listViewManager )
LABEL_6:
    sub_1D0F30C(listViewManager, v3);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)listViewManager, 0, 0);
}


void ImageViewListViewMenu__EndInput(ImageViewListViewMenu_o *this, const MethodInfo *method)
{
  ListViewManager_o *listViewManager; // x0

  if ( this->fields.state )
  {
    listViewManager = (ListViewManager_o *)this->fields.listViewManager;
    if ( !listViewManager
      || (ListViewManager__set_IsInput(listViewManager, 0, 0),
          (listViewManager = (ListViewManager_o *)this->fields.cancelButton) == 0) )
    {
      sub_1D0F30C(listViewManager, method);
    }
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)listViewManager, 0, 0);
  }
}


void ImageViewListViewMenu__OnClickCancel(ImageViewListViewMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( this->fields.state == 2 )
  {
    ImageViewListViewMenu__EndInput(this, method);
    this->fields.state = 4;
    ImageViewListViewMenu__Callback(this, 0, v3);
  }
}


void ImageViewListViewMenu__OnClickClear(ImageViewListViewMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4E74BA2 & 1) == 0 )
  {
    sub_1D0F0B4(&ScriptManager_TypeInfo);
    byte_4E74BA2 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    ScriptManager__ImageViewClear(0);
  }
}


void ImageViewListViewMenu__OnClickItem(ImageViewListViewMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ImageViewListViewManager_o *listViewManager; // x0
  int32_t callbackIndex; // w1
  System_String_o *dragParentObject; // x20
  System_String_array *imageAssetList; // x21
  ScriptManager_CallbackFunc_o *v8; // x22

  if ( (byte_4E74BA0 & 1) == 0 )
  {
    sub_1D0F0B4(&ScriptManager_CallbackFunc_TypeInfo);
    sub_1D0F0B4(&Method_ImageViewListViewMenu_OnEndImageView__);
    sub_1D0F0B4(&ScriptManager_TypeInfo);
    byte_4E74BA0 = 1;
  }
  if ( this->fields.state == 2 )
  {
    listViewManager = this->fields.listViewManager;
    if ( !listViewManager )
      goto LABEL_11;
    callbackIndex = listViewManager->fields.callbackIndex;
    if ( callbackIndex < 0 )
      return;
    listViewManager = (ImageViewListViewManager_o *)ImageViewListViewManager__GetItem(
                                                      listViewManager,
                                                      callbackIndex,
                                                      v2);
    this->fields.state = 3;
    if ( !listViewManager )
LABEL_11:
      sub_1D0F30C(listViewManager, method);
    dragParentObject = (System_String_o *)listViewManager->fields.dragParentObject;
    imageAssetList = this->fields.imageAssetList;
    v8 = (ScriptManager_CallbackFunc_o *)sub_1D0F300(ScriptManager_CallbackFunc_TypeInfo);
    ScriptManager_CallbackFunc___ctor(v8, (Il2CppObject *)this, Method_ImageViewListViewMenu_OnEndImageView__, 0);
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    ScriptManager__ImageViewPlay(dragParentObject, imageAssetList, v8, 0);
  }
}


void ImageViewListViewMenu__OnEndImageView(ImageViewListViewMenu_o *this, bool isExit, const MethodInfo *method)
{
  ImageViewListViewManager_o *listViewManager; // x20
  System_Action_o *v5; // x21
  UnityEngine_Behaviour_o *cancelButton; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_4E74BA1 & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&Method_ImageViewListViewMenu_OnClickItem__);
    byte_4E74BA1 = 1;
  }
  if ( this->fields.state == 3 )
  {
    this->fields.state = 2;
    listViewManager = this->fields.listViewManager;
    v5 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_ImageViewListViewMenu_OnClickItem__, 0);
    if ( !listViewManager
      || (ImageViewListViewManager__SetMode_38714140(listViewManager, 1, v5, v8),
          (cancelButton = (UnityEngine_Behaviour_o *)this->fields.cancelButton) == 0) )
    {
      sub_1D0F30C(cancelButton, v7);
    }
    UnityEngine_Behaviour__set_enabled(cancelButton, 1, 0);
  }
}


void ImageViewListViewMenu__OnSearchLabelChange(ImageViewListViewMenu_o *this, const MethodInfo *method)
{
  ListViewManager_o *listViewManager; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  ImageViewListViewMenu_CallbackFunc_o *callbackFunc; // x1
  const MethodInfo *v11; // x2

  listViewManager = (ListViewManager_o *)this->fields.listViewManager;
  if ( !listViewManager )
    sub_1D0F30C(0, method);
  ListViewManager__DestroyList(listViewManager, 0);
  this->fields.imageAssetList = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.imageAssetList, 0, v4, v5, v6, v7, v8, v9);
  callbackFunc = this->fields.callbackFunc;
  this->fields.state = 0;
  ImageViewListViewMenu__Open(this, callbackFunc, v11);
}


void ImageViewListViewMenu__Open(
        ImageViewListViewMenu_o *this,
        ImageViewListViewMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  System_Collections_Generic_IEnumerable_T__o *AssetStorageList; // x22
  System_Collections_Generic_List_object__o *v13; // x20
  __int64 v14; // x1
  void *rootObject; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  _QWORD *v22; // x22
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  System_Predicate_object__o *v29; // x22
  System_Comparison_T__o *v30; // x21
  Il2CppObject *v31; // x22
  struct ImageViewListViewMenu___c_StaticFields *static_fields; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  struct System_String_array *v39; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  System_String_o *v46; // x2
  const MethodInfo *v47; // x3

  if ( (byte_4E74B9E & 1) == 0 )
  {
    sub_1D0F0B4(&AssetManager_TypeInfo);
    sub_1D0F0B4(&System_Comparison_string__TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_string__RemoveAll__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_string__Sort___80331304);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_string___ctor___80331160);
    sub_1D0F0B4(&System_Collections_Generic_List_string__TypeInfo);
    sub_1D0F0B4(&System_Predicate_string__TypeInfo);
    sub_1D0F0B4(&ScriptManager_TypeInfo);
    sub_1D0F0B4(&Method_ImageViewListViewMenu___c__Open_b__16_1__);
    sub_1D0F0B4(&Method_ImageViewListViewMenu___c__DisplayClass16_0__Open_b__0__);
    sub_1D0F0B4(&ImageViewListViewMenu___c__DisplayClass16_0_TypeInfo);
    sub_1D0F0B4(&ImageViewListViewMenu___c_TypeInfo);
    sub_1D0F0B4(&StringLiteral_7663/*"Image"*/);
    byte_4E74B9E = 1;
  }
  if ( !this->fields.state )
  {
    v5 = sub_1D0F300(ImageViewListViewMenu___c__DisplayClass16_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v5, 0);
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    ScriptManager__BackViewClear(0);
    ScriptManager__FigureViewClear(0);
    ScriptManager__ImageViewClear(0);
    this->fields.callbackFunc = callback;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc, (int32_t)callback, v6, v7, v8, v9, v10, v11);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetStorageList = (System_Collections_Generic_IEnumerable_T__o *)AssetManager__getAssetStorageList(
                                                                        (System_String_o *)StringLiteral_7663/*"Image"*/,
                                                                        0);
    v13 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor_60144900(
      v13,
      AssetStorageList,
      (const MethodInfo_395BD04 *)Method_System_Collections_Generic_List_string___ctor___80331160);
    rootObject = this->fields.rootObject;
    if ( rootObject )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)rootObject, 1, 0);
      rootObject = this->fields.listViewManager;
      if ( rootObject )
      {
        ListViewManager__set_IsInput((ListViewManager_o *)rootObject, 0, 0);
        rootObject = this->fields.cancelButton;
        if ( rootObject )
        {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)rootObject, 0, 0);
          rootObject = this->fields.searchInput;
          if ( rootObject )
          {
            rootObject = UILineInput__GetText((UILineInput_o *)rootObject, 0);
            if ( v5 )
            {
              *(_QWORD *)(v5 + 16) = rootObject;
              v22 = (_QWORD *)(v5 + 16);
              sub_1D0F058((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)rootObject, v16, v17, v18, v19, v20, v21);
              if ( System_String__IsNullOrEmpty(*(System_String_o **)(v5 + 16), 0) )
              {
                *v22 = 0;
                sub_1D0F058((GrandQuestFolderBoardItem_o *)(v5 + 16), 0, v23, v24, v25, v26, v27, v28);
              }
              if ( *v22 )
              {
                v29 = (System_Predicate_object__o *)sub_1D0F300(System_Predicate_string__TypeInfo);
                System_Predicate_object____ctor(
                  v29,
                  (Il2CppObject *)v5,
                  Method_ImageViewListViewMenu___c__DisplayClass16_0__Open_b__0__,
                  0);
                if ( !v13 )
                  goto LABEL_28;
                System_Collections_Generic_List_object___RemoveAll(
                  v13,
                  (System_Predicate_T__o *)v29,
                  (const MethodInfo_395DA6C *)Method_System_Collections_Generic_List_string__RemoveAll__);
              }
              rootObject = ImageViewListViewMenu___c_TypeInfo;
              if ( !ImageViewListViewMenu___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ImageViewListViewMenu___c_TypeInfo);
                rootObject = ImageViewListViewMenu___c_TypeInfo;
              }
              v30 = *(System_Comparison_T__o **)(*((_QWORD *)rootObject + 23) + 8LL);
              if ( !v30 )
              {
                if ( !*((_DWORD *)rootObject + 56) )
                {
                  j_il2cpp_runtime_class_init_0(rootObject);
                  rootObject = ImageViewListViewMenu___c_TypeInfo;
                }
                v31 = (Il2CppObject *)**((_QWORD **)rootObject + 23);
                v30 = (System_Comparison_T__o *)sub_1D0F300(System_Comparison_string__TypeInfo);
                System_Comparison_object____ctor(v30, v31, Method_ImageViewListViewMenu___c__Open_b__16_1__, 0);
                static_fields = ImageViewListViewMenu___c_TypeInfo->static_fields;
                static_fields->__9__16_1 = (struct System_Comparison_string__o *)v30;
                sub_1D0F058(
                  (GrandQuestFolderBoardItem_o *)&static_fields->__9__16_1,
                  (int32_t)v30,
                  v33,
                  v34,
                  v35,
                  v36,
                  v37,
                  v38);
              }
              if ( v13 )
              {
                System_Collections_Generic_List_object___Sort_60153556(
                  v13,
                  v30,
                  (const MethodInfo_395DED4 *)Method_System_Collections_Generic_List_string__Sort___80331304);
                v39 = (struct System_String_array *)System_Collections_Generic_List_object___ToArray(
                                                      v13,
                                                      (const MethodInfo_395DF68 *)Method_System_Collections_Generic_List_string__ToArray__);
                this->fields.imageAssetList = v39;
                sub_1D0F058(
                  (GrandQuestFolderBoardItem_o *)&this->fields.imageAssetList,
                  (int32_t)v39,
                  v40,
                  v41,
                  v42,
                  v43,
                  v44,
                  v45);
                rootObject = this->fields.listViewManager;
                if ( rootObject )
                {
                  ImageViewListViewManager__CreateList(
                    (ImageViewListViewManager_o *)rootObject,
                    this->fields.imageAssetList,
                    v46,
                    v47);
                  goto LABEL_27;
                }
              }
            }
          }
        }
      }
    }
LABEL_28:
    sub_1D0F30C(rootObject, v14);
  }
LABEL_27:
  ImageViewListViewMenu__StartInput(this, (const MethodInfo *)callback);
}


void ImageViewListViewMenu__StartInput(ImageViewListViewMenu_o *this, const MethodInfo *method)
{
  ImageViewListViewManager_o *listViewManager; // x20
  System_Action_o *v4; // x21
  UnityEngine_Behaviour_o *cancelButton; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4E74B9F & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&Method_ImageViewListViewMenu_OnClickItem__);
    byte_4E74B9F = 1;
  }
  this->fields.state = 2;
  listViewManager = this->fields.listViewManager;
  v4 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_ImageViewListViewMenu_OnClickItem__, 0);
  if ( !listViewManager
    || (ImageViewListViewManager__SetMode_38714140(listViewManager, 1, v4, v7),
        (cancelButton = (UnityEngine_Behaviour_o *)this->fields.cancelButton) == 0) )
  {
    sub_1D0F30C(cancelButton, v6);
  }
  UnityEngine_Behaviour__set_enabled(cancelButton, 1, 0);
}


void ImageViewListViewMenu__StartMenu(ImageViewListViewMenu_o *this, const MethodInfo *method)
{
  ImageViewListViewMenu_CallbackFunc_o *v3; // x20
  const MethodInfo *v4; // x3
  const MethodInfo *v5; // x2

  if ( (byte_4E74B9D & 1) == 0 )
  {
    sub_1D0F0B4(&ImageViewListViewMenu_CallbackFunc_TypeInfo);
    sub_1D0F0B4(&Method_ImageViewListViewMenu__StartMenu_b__15_0__);
    byte_4E74B9D = 1;
  }
  TestScript_DebugTest_DebugItem_DebugItemMenuBase__StartMenu(
    (TestScript_DebugTest_DebugItem_DebugItemMenuBase_o *)this,
    0);
  v3 = (ImageViewListViewMenu_CallbackFunc_o *)sub_1D0F300(ImageViewListViewMenu_CallbackFunc_TypeInfo);
  ImageViewListViewMenu_CallbackFunc___ctor(
    v3,
    (Il2CppObject *)this,
    Method_ImageViewListViewMenu__StartMenu_b__15_0__,
    v4);
  ImageViewListViewMenu__Open(this, v3, v5);
}


void ImageViewListViewMenu__Update(ImageViewListViewMenu_o *this, const MethodInfo *method)
{
  ;
}


void ImageViewListViewMenu__add_callbackFunc(
        ImageViewListViewMenu_o *this,
        ImageViewListViewMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ImageViewListViewMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ImageViewListViewMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ImageViewListViewMenu_o *v11; // x0
  ImageViewListViewMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4E74B9B & 1) == 0 )
  {
    sub_1D0F0B4(&ImageViewListViewMenu_CallbackFunc_TypeInfo);
    byte_4E74B9B = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (ImageViewListViewMenu_CallbackFunc_c *)v8->klass != ImageViewListViewMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1D6AE88(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1D0F6A8(v8);
  ImageViewListViewMenu__remove_callbackFunc(v11, v12, v13);
}


void ImageViewListViewMenu__remove_callbackFunc(
        ImageViewListViewMenu_o *this,
        ImageViewListViewMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ImageViewListViewMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ImageViewListViewMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ImageViewListViewMenu_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4E74B9C & 1) == 0 )
  {
    sub_1D0F0B4(&ImageViewListViewMenu_CallbackFunc_TypeInfo);
    byte_4E74B9C = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (ImageViewListViewMenu_CallbackFunc_c *)v8->klass != ImageViewListViewMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1D6AE88(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1D0F6A8(v8);
  ImageViewListViewMenu__StartMenu(v11, v12);
}


void ImageViewListViewMenu_CallbackFunc___ctor(
        ImageViewListViewMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1D0F174(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1D0F328(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1D0F1DC(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1B3A58C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1B3A544;
}


System_IAsyncResult_o *ImageViewListViewMenu_CallbackFunc__BeginInvoke(
        ImageViewListViewMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = result;
  if ( (byte_4E74BA3 & 1) == 0 )
  {
    sub_1D0F0B4(&bool_TypeInfo);
    byte_4E74BA3 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1D0F068(this, v9, callback, object);
}


void ImageViewListViewMenu_CallbackFunc__EndInvoke(
        ImageViewListViewMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1D0F06C(result, 0, method);
}


void ImageViewListViewMenu_CallbackFunc__Invoke(
        ImageViewListViewMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}


void ImageViewListViewMenu___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4E74BA4 & 1) == 0 )
  {
    sub_1D0F0B4(&ImageViewListViewMenu___c_TypeInfo);
    byte_4E74BA4 = 1;
  }
  v1 = (Il2CppObject *)sub_1D0F300(ImageViewListViewMenu___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ImageViewListViewMenu___c_TypeInfo->static_fields->__9 = (struct ImageViewListViewMenu___c_o *)v1;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)ImageViewListViewMenu___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ImageViewListViewMenu___c___ctor(ImageViewListViewMenu___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t ImageViewListViewMenu___c___Open_b__16_1(
        ImageViewListViewMenu___c_o *this,
        System_String_o *a,
        System_String_o *b,
        const MethodInfo *method)
{
  int32_t stringLength; // w8
  int32_t v5; // w9
  int32_t result; // w0

  if ( !a || !b )
    sub_1D0F30C(this, a);
  stringLength = a->fields._stringLength;
  v5 = b->fields._stringLength;
  result = stringLength - v5;
  if ( stringLength == v5 )
    return System_String__Compare(a, b, 0);
  return result;
}


void ImageViewListViewMenu___c__DisplayClass16_0___ctor(
        ImageViewListViewMenu___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ImageViewListViewMenu___c__DisplayClass16_0___Open_b__0(
        ImageViewListViewMenu___c__DisplayClass16_0_o *this,
        System_String_o *X,
        const MethodInfo *method)
{
  if ( !X )
    sub_1D0F30C(this, 0);
  return !System_String__Contains(X, this->fields.searchStr, 0);
}