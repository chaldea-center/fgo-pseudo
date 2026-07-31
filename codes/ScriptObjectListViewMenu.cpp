void ScriptObjectListViewMenu___ctor(ScriptObjectListViewMenu_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ScriptObjectListViewMenu__Awake(ScriptObjectListViewMenu_o *this, const MethodInfo *method)
{
  ;
}


void ScriptObjectListViewMenu__Callback(
        ScriptObjectListViewMenu_o *this,
        int32_t result,
        System_String_o *objectName,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x0
  struct ScriptObjectListViewMenu_CallbackFunc_o *v9; // x21
  struct ScriptObjectListViewMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_21FFBF4(p_callbackFunc, 0, objectName, (System_String_o *)method, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, _QWORD, System_String_o *, intptr_t))v9->fields.invoke_impl)(
      v9->fields.method_code,
      (unsigned int)result,
      objectName,
      v9->fields.method);
  }
}


void ScriptObjectListViewMenu__CheckSerializeField(ScriptObjectListViewMenu_o *this, const MethodInfo *method)
{
  ;
}


void ScriptObjectListViewMenu__Close(ScriptObjectListViewMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  __int64 v4; // x1
  __int64 v5; // x2
  ListViewManager_o *listViewManager; // x0
  AssetData_o *scriptAsset; // x21
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  if ( (byte_5935BF5 & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&StringLiteral_2400/*"ApplyFilterScriptId"*/);
    byte_5935BF5 = 1;
  }
  UnityEngine_MonoBehaviour__CancelInvoke_83229692(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_2400/*"ApplyFilterScriptId"*/,
    0);
  ScriptObjectListViewMenu__EndInput(this, v3);
  if ( this->fields.state )
  {
    listViewManager = (ListViewManager_o *)this->fields.listViewManager;
    if ( !listViewManager )
      goto LABEL_12;
    ListViewManager__DestroyList(listViewManager, 0);
    this->fields.state = 0;
  }
  scriptAsset = this->fields.scriptAsset;
  if ( scriptAsset )
  {
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v4, v5);
    AssetManager__releaseAsset_47465556(scriptAsset, 0);
    this->fields.scriptAsset = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.scriptAsset, 0, v8, v9, v10, v11, v12, v13);
  }
  listViewManager = (ListViewManager_o *)this->fields.scriptTestObjectRootObject;
  if ( !listViewManager )
LABEL_12:
    sub_21FFECC(listViewManager, v4);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)listViewManager, 0, 0);
}


void ScriptObjectListViewMenu__CreateListViewItem(ScriptObjectListViewMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  UILineInput_o *listViewManager; // x0
  System_String_o *Text; // x20
  System_String_array *v6; // x1
  System_Collections_Generic_List_object__o *v7; // x21
  struct System_String_array *cacheScriptNames; // x8
  unsigned int v9; // w24
  unsigned int max_length; // w9
  Il2CppClass **v11; // x8
  Il2CppObject *v12; // x22
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  struct ScriptObjectListViewManager_o *v23; // x19

  if ( (byte_5935BF4 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_string__TypeInfo);
    byte_5935BF4 = 1;
  }
  if ( !this->fields.cacheScriptNames )
  {
    listViewManager = (UILineInput_o *)this->fields.listViewManager;
    if ( listViewManager )
    {
      v6 = 0;
      goto LABEL_26;
    }
LABEL_22:
    sub_21FFECC(listViewManager, method);
  }
  listViewManager = this->fields.filterScriptIdInput;
  if ( !listViewManager )
    goto LABEL_22;
  Text = UILineInput__GetText(listViewManager, 0);
  if ( !System_String__IsNullOrEmpty(Text, 0) )
  {
    v7 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v7,
      (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_string___ctor__);
    cacheScriptNames = this->fields.cacheScriptNames;
    if ( cacheScriptNames )
    {
      v9 = 0;
      while ( 1 )
      {
        max_length = cacheScriptNames->max_length;
        if ( (int)v9 >= (int)max_length )
          break;
        if ( v9 >= max_length )
          sub_21FFED4(listViewManager);
        v11 = &cacheScriptNames->obj.klass + (int)v9;
        v12 = (Il2CppObject *)v11[4];
        if ( !v12 )
          goto LABEL_22;
        listViewManager = (UILineInput_o *)System_String__IndexOf_75500444((System_String_o *)v11[4], Text, 4, 0);
        if ( ((unsigned int)listViewManager & 0x80000000) == 0 )
        {
          if ( !v7 )
            goto LABEL_22;
          items = v7->fields._items;
          v20 = Method_System_Collections_Generic_List_string__Add__;
          ++v7->fields._version;
          if ( !items )
            goto LABEL_22;
          size = v7->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v7,
              v12,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
          }
          else
          {
            v22 = &items->obj.klass + size;
            v7->fields._size = size + 1;
            v22[4] = (Il2CppClass *)v12;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v12, v13, v14, v15, v16, v17, v18);
          }
        }
        cacheScriptNames = this->fields.cacheScriptNames;
        ++v9;
        if ( !cacheScriptNames )
          goto LABEL_22;
      }
      if ( v7 )
      {
        v23 = this->fields.listViewManager;
        listViewManager = (UILineInput_o *)System_Collections_Generic_List_object___ToArray(
                                             v7,
                                             (const MethodInfo_445164C *)Method_System_Collections_Generic_List_string__ToArray__);
        if ( v23 )
        {
          v6 = (System_String_array *)listViewManager;
          listViewManager = (UILineInput_o *)v23;
          goto LABEL_26;
        }
      }
    }
    goto LABEL_22;
  }
  listViewManager = (UILineInput_o *)this->fields.listViewManager;
  if ( !listViewManager )
    goto LABEL_22;
  v6 = this->fields.cacheScriptNames;
LABEL_26:
  ScriptObjectListViewManager__CreateList_44343476((ScriptObjectListViewManager_o *)listViewManager, v6, v2);
}


void ScriptObjectListViewMenu__EndInput(ScriptObjectListViewMenu_o *this, const MethodInfo *method)
{
  ListViewManager_o *listViewManager; // x0

  if ( this->fields.state )
  {
    listViewManager = (ListViewManager_o *)this->fields.listViewManager;
    if ( !listViewManager )
      goto LABEL_12;
    ListViewManager__set_IsInput(listViewManager, 0, 0);
    listViewManager = (ListViewManager_o *)this->fields.forceCheckOnButton;
    if ( !listViewManager )
      goto LABEL_12;
    ((void (__fastcall *)(ListViewManager_o *, _QWORD, const MethodInfo *))listViewManager->klass->vtable._5_SetSortButtonImage.methodPtr)(
      listViewManager,
      0,
      listViewManager->klass->vtable._5_SetSortButtonImage.method);
    listViewManager = (ListViewManager_o *)this->fields.forceObi169Button;
    if ( !listViewManager )
      goto LABEL_12;
    ((void (__fastcall *)(ListViewManager_o *, _QWORD, const MethodInfo *))listViewManager->klass->vtable._5_SetSortButtonImage.methodPtr)(
      listViewManager,
      0,
      listViewManager->klass->vtable._5_SetSortButtonImage.method);
    listViewManager = (ListViewManager_o *)this->fields.scriptTestObjectCancelButton;
    if ( !listViewManager )
      goto LABEL_12;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)listViewManager, 0, 0);
    listViewManager = (ListViewManager_o *)this->fields.jumpLineObjectInput;
    if ( !listViewManager
      || (UILineInput__SetInputEnable((UILineInput_o *)listViewManager, 0, 0),
          (listViewManager = (ListViewManager_o *)this->fields.filterScriptIdInput) == 0)
      || (UILineInput__SetInputEnable((UILineInput_o *)listViewManager, 0, 0),
          (listViewManager = (ListViewManager_o *)this->fields.dispDisableDecryptScriptButton) == 0)
      || (((void (__fastcall *)(ListViewManager_o *, _QWORD, const MethodInfo *))listViewManager->klass->vtable._5_SetSortButtonImage.methodPtr)(
            listViewManager,
            0,
            listViewManager->klass->vtable._5_SetSortButtonImage.method),
          (listViewManager = (ListViewManager_o *)this->fields.dispEnableDecryptScriptButton) == 0) )
    {
LABEL_12:
      sub_21FFECC(listViewManager, method);
    }
    ((void (__fastcall *)(ListViewManager_o *, _QWORD, const MethodInfo *))listViewManager->klass->vtable._5_SetSortButtonImage.methodPtr)(
      listViewManager,
      0,
      listViewManager->klass->vtable._5_SetSortButtonImage.method);
  }
}


void ScriptObjectListViewMenu__EndLoadAsset(
        ScriptObjectListViewMenu_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  AssetData_o **p_scriptAsset; // x20
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct System_String_array *ObjectNameList; // x1
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x1

  this->fields.scriptAsset = data;
  p_scriptAsset = &this->fields.scriptAsset;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.scriptAsset,
    (int32_t)data,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( *p_scriptAsset )
    ObjectNameList = AssetData__GetObjectNameList(*p_scriptAsset, 0);
  else
    ObjectNameList = 0;
  this->fields.cacheScriptNames = ObjectNameList;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.cacheScriptNames,
    (int32_t)ObjectNameList,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  ScriptObjectListViewMenu__CreateListViewItem(this, v17);
  ScriptObjectListViewMenu__StartInput(this, v18);
}


System_String_o *ScriptObjectListViewMenu__GetFilterScriptIdText(
        ScriptObjectListViewMenu_o *this,
        const MethodInfo *method)
{
  UILineInput_o *filterScriptIdInput; // x0

  filterScriptIdInput = this->fields.filterScriptIdInput;
  if ( !filterScriptIdInput )
    sub_21FFECC(0, method);
  return UILineInput__GetText(filterScriptIdInput, 0);
}


int32_t ScriptObjectListViewMenu__GetJumpLine(ScriptObjectListViewMenu_o *this, const MethodInfo *method)
{
  UILineInput_o *jumpLineObjectInput; // x0
  System_String_o *Text; // x19

  jumpLineObjectInput = this->fields.jumpLineObjectInput;
  if ( !jumpLineObjectInput )
    sub_21FFECC(0, method);
  Text = UILineInput__GetText(jumpLineObjectInput, 0);
  if ( System_String__IsNullOrEmpty(Text, 0) )
    return -1;
  else
    return System_Int32__Parse(Text, 0);
}


System_String_o *ScriptObjectListViewMenu__GetJumpLineString(
        ScriptObjectListViewMenu_o *this,
        const MethodInfo *method)
{
  UILineInput_o *jumpLineObjectInput; // x0

  jumpLineObjectInput = this->fields.jumpLineObjectInput;
  if ( !jumpLineObjectInput )
    sub_21FFECC(0, method);
  return UILineInput__GetText(jumpLineObjectInput, 0);
}


void ScriptObjectListViewMenu__ListUpdate(ScriptObjectListViewMenu_o *this, const MethodInfo *method)
{
  ListViewManager_o *listViewManager; // x0

  listViewManager = (ListViewManager_o *)this->fields.listViewManager;
  if ( !listViewManager )
    sub_21FFECC(0, method);
  ListViewManager__SortItem(listViewManager, -1, 0, -1, 0);
}


void ScriptObjectListViewMenu__OnChangeFilterScriptIdText(ScriptObjectListViewMenu_o *this, const MethodInfo *method)
{
  if ( (byte_5935BFB & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_2400/*"ApplyFilterScriptId"*/);
    byte_5935BFB = 1;
  }
  UnityEngine_MonoBehaviour__CancelInvoke_83229692(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_2400/*"ApplyFilterScriptId"*/,
    0);
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_2400/*"ApplyFilterScriptId"*/, 0.15, 0);
}


void ScriptObjectListViewMenu__OnClickCancel(ScriptObjectListViewMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( this->fields.state == 2 )
  {
    this->fields.state = 4;
    ScriptObjectListViewMenu__EndInput(this, method);
    ScriptObjectListViewMenu__Callback(this, 1, 0, v3);
  }
}


void ScriptObjectListViewMenu__OnClickForceCheckOn(ScriptObjectListViewMenu_o *this, const MethodInfo *method)
{
  struct UISprite_o *forceCheckOnSprite; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  bool enabled; // w19
  ScriptManager_c *v7; // x0

  if ( (byte_5935BF7 & 1) == 0 )
  {
    sub_21FFC50(&ScriptManager_TypeInfo);
    byte_5935BF7 = 1;
  }
  forceCheckOnSprite = this->fields.forceCheckOnSprite;
  if ( !forceCheckOnSprite
    || (forceCheckOnSprite = (struct UISprite_o *)UnityEngine_Behaviour__get_enabled(
                                                    (UnityEngine_Behaviour_o *)forceCheckOnSprite,
                                                    0),
        !this->fields.forceCheckOnSprite)
    || (UnityEngine_Behaviour__set_enabled(
          (UnityEngine_Behaviour_o *)this->fields.forceCheckOnSprite,
          ((unsigned __int8)forceCheckOnSprite & 1) == 0,
          0),
        (forceCheckOnSprite = this->fields.forceCheckOnSprite) == 0) )
  {
    sub_21FFECC(forceCheckOnSprite, method);
  }
  enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)forceCheckOnSprite, 0);
  if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v4, v5);
  if ( !byte_5935C43 )
  {
    sub_21FFC50(&ScriptManager_TypeInfo);
    byte_5935C43 = 1;
  }
  v7 = ScriptManager_TypeInfo;
  if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v4, v5);
    v7 = ScriptManager_TypeInfo;
  }
  v7->static_fields->debugIsForceCheckOn = enabled;
}


void ScriptObjectListViewMenu__OnClickForceObi169(ScriptObjectListViewMenu_o *this, const MethodInfo *method)
{
  struct UISprite_o *forceObi169Sprite; // x0
  bool enabled; // w0
  __int64 v5; // x1
  __int64 v6; // x2
  ScriptManager_c *v7; // x8
  bool v8; // w19

  if ( (byte_5935BF8 & 1) == 0 )
  {
    sub_21FFC50(&ScriptManager_TypeInfo);
    byte_5935BF8 = 1;
  }
  forceObi169Sprite = this->fields.forceObi169Sprite;
  if ( !forceObi169Sprite
    || (forceObi169Sprite = (struct UISprite_o *)UnityEngine_Behaviour__get_enabled(
                                                   (UnityEngine_Behaviour_o *)forceObi169Sprite,
                                                   0),
        !this->fields.forceObi169Sprite)
    || (UnityEngine_Behaviour__set_enabled(
          (UnityEngine_Behaviour_o *)this->fields.forceObi169Sprite,
          ((unsigned __int8)forceObi169Sprite & 1) == 0,
          0),
        (forceObi169Sprite = this->fields.forceObi169Sprite) == 0) )
  {
    sub_21FFECC(forceObi169Sprite, method);
  }
  enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)forceObi169Sprite, 0);
  v7 = ScriptManager_TypeInfo;
  v8 = enabled;
  if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v5, v6);
    v7 = ScriptManager_TypeInfo;
  }
  v7->static_fields->defaultForceObi_16_9 = v8;
}


// local variable allocation has failed, the output may be wrong!
void ScriptObjectListViewMenu__OnClickItem(
        ScriptObjectListViewMenu_o *this,
        int32_t result,
        ScriptObjectListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3

  if ( this->fields.state == 2 && (result == 3 || result == 2) )
  {
    this->fields.state = 4;
    ScriptObjectListViewMenu__EndInput(this, *(const MethodInfo **)&result);
    if ( !item )
      sub_21FFECC(v7, v8);
    ScriptObjectListViewMenu__Callback(this, result, item->fields.path, v9);
  }
}


void ScriptObjectListViewMenu__OnDispChangeDisableDecrypt(ScriptObjectListViewMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ScriptObjectListViewItem_c *v4; // x0
  struct ScriptObjectListViewItem_StaticFields *static_fields; // x9
  UnityEngine_Behaviour_o *dispDisableDecryptScriptSprite; // x0
  int v7; // w8
  const MethodInfo *v8; // x1

  if ( (byte_5935BFA & 1) == 0 )
  {
    sub_21FFC50(&ScriptObjectListViewItem_TypeInfo);
    byte_5935BFA = 1;
  }
  v4 = ScriptObjectListViewItem_TypeInfo;
  if ( !*(&ScriptObjectListViewItem_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ScriptObjectListViewItem_TypeInfo, method, v2);
    v4 = ScriptObjectListViewItem_TypeInfo;
  }
  static_fields = v4->static_fields;
  dispDisableDecryptScriptSprite = (UnityEngine_Behaviour_o *)this->fields.dispDisableDecryptScriptSprite;
  v7 = !static_fields->DispDisableEncrypt;
  static_fields->DispDisableEncrypt ^= 1u;
  if ( !dispDisableDecryptScriptSprite )
    sub_21FFECC(0, method);
  UnityEngine_Behaviour__set_enabled(dispDisableDecryptScriptSprite, v7 != 0, 0);
  ScriptObjectListViewMenu__ListUpdate(this, v8);
}


void ScriptObjectListViewMenu__OnDispChangeEnableDecrypt(ScriptObjectListViewMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ScriptObjectListViewItem_c *v4; // x0
  struct ScriptObjectListViewItem_StaticFields *static_fields; // x9
  UnityEngine_Behaviour_o *dispEnableDecryptScriptSprite; // x0
  int v7; // w8
  const MethodInfo *v8; // x1

  if ( (byte_5935BF9 & 1) == 0 )
  {
    sub_21FFC50(&ScriptObjectListViewItem_TypeInfo);
    byte_5935BF9 = 1;
  }
  v4 = ScriptObjectListViewItem_TypeInfo;
  if ( !*(&ScriptObjectListViewItem_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ScriptObjectListViewItem_TypeInfo, method, v2);
    v4 = ScriptObjectListViewItem_TypeInfo;
  }
  static_fields = v4->static_fields;
  dispEnableDecryptScriptSprite = (UnityEngine_Behaviour_o *)this->fields.dispEnableDecryptScriptSprite;
  v7 = !static_fields->DispEnableEncrypt;
  static_fields->DispEnableEncrypt ^= 1u;
  if ( !dispEnableDecryptScriptSprite )
    sub_21FFECC(0, method);
  UnityEngine_Behaviour__set_enabled(dispEnableDecryptScriptSprite, v7 != 0, 0);
  ScriptObjectListViewMenu__ListUpdate(this, v8);
}


void ScriptObjectListViewMenu__Open(
        ScriptObjectListViewMenu_o *this,
        System_String_o *assetName,
        ScriptObjectListViewMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t state; // w8
  struct System_String_o **p_path; // x20
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  __int64 v19; // x1
  UnityEngine_GameObject_o *scriptTestObjectRootObject; // x0
  UILabel_o *scriptTestDefaultNameLabel; // x20
  System_String_o *path; // x8
  __int64 v23; // x1
  __int64 v24; // x2
  AssetData_o *scriptAsset; // x21
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  System_String_o *v32; // x20
  AssetLoader_LoadEndDataHandler_o *v33; // x21
  __int64 v34; // x1
  __int64 v35; // x2
  const MethodInfo *v36; // x1

  if ( (byte_5935BF3 & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UIInput___);
    sub_21FFC50(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_21FFC50(&Method_ScriptObjectListViewMenu_EndLoadAsset__);
    sub_21FFC50(&StringLiteral_2400/*"ApplyFilterScriptId"*/);
    byte_5935BF3 = 1;
  }
  state = this->fields.state;
  switch ( state )
  {
    case 5:
      goto LABEL_6;
    case 4:
      this->fields.callbackFunc = callback;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
        (int32_t)callback,
        (System_String_o *)callback,
        (System_String_o *)method,
        v4,
        v5,
        v6,
        v7);
      ScriptObjectListViewMenu__StartInput(this, v36);
      return;
    case 0:
LABEL_6:
      this->fields.path = assetName;
      p_path = &this->fields.path;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.path,
        (int32_t)assetName,
        (System_String_o *)callback,
        (System_String_o *)method,
        v4,
        v5,
        v6,
        v7);
      this->fields.callbackFunc = callback;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
        (int32_t)callback,
        v13,
        v14,
        v15,
        v16,
        v17,
        v18);
      scriptTestObjectRootObject = this->fields.scriptTestObjectRootObject;
      if ( scriptTestObjectRootObject )
      {
        UnityEngine_GameObject__SetActive(scriptTestObjectRootObject, 1, 0);
        scriptTestObjectRootObject = (UnityEngine_GameObject_o *)this->fields.listViewManager;
        if ( scriptTestObjectRootObject )
        {
          ListViewManager__set_IsInput((ListViewManager_o *)scriptTestObjectRootObject, 0, 0);
          scriptTestObjectRootObject = (UnityEngine_GameObject_o *)this->fields.scriptTestObjectCancelButton;
          if ( scriptTestObjectRootObject )
          {
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)scriptTestObjectRootObject, 0, 0);
            scriptTestObjectRootObject = (UnityEngine_GameObject_o *)this->fields.jumpLineObjectInput;
            if ( scriptTestObjectRootObject )
            {
              UILineInput__SetInputEnable((UILineInput_o *)scriptTestObjectRootObject, 0, 0);
              scriptTestObjectRootObject = (UnityEngine_GameObject_o *)this->fields.filterScriptIdInput;
              if ( scriptTestObjectRootObject )
              {
                UILineInput__SetInputEnable((UILineInput_o *)scriptTestObjectRootObject, 0, 0);
                scriptTestObjectRootObject = (UnityEngine_GameObject_o *)this->fields.filterScriptIdInput;
                if ( scriptTestObjectRootObject )
                {
                  scriptTestObjectRootObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                                             (UnityEngine_Component_o *)scriptTestObjectRootObject,
                                                                             (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIInput___);
                  if ( scriptTestObjectRootObject )
                  {
                    UIInput__set_value(
                      (UIInput_o *)scriptTestObjectRootObject,
                      **(System_String_o ***)(qword_594C0B8 + 184),
                      0);
                    scriptTestObjectRootObject = (UnityEngine_GameObject_o *)*p_path;
                    if ( *p_path )
                    {
                      scriptTestObjectRootObject = (UnityEngine_GameObject_o *)System_String__LastIndexOf(
                                                                                 (System_String_o *)scriptTestObjectRootObject,
                                                                                 0x2Fu,
                                                                                 0);
                      scriptTestDefaultNameLabel = this->fields.scriptTestDefaultNameLabel;
                      path = this->fields.path;
                      if ( ((unsigned int)scriptTestObjectRootObject & 0x80000000) == 0 )
                      {
                        if ( !path )
                          goto LABEL_27;
                        scriptTestObjectRootObject = (UnityEngine_GameObject_o *)System_String__Substring(
                                                                                   this->fields.path,
                                                                                   (int)scriptTestObjectRootObject + 1,
                                                                                   0);
                        path = (System_String_o *)scriptTestObjectRootObject;
                      }
                      if ( scriptTestDefaultNameLabel )
                      {
                        UILabel__set_text(scriptTestDefaultNameLabel, path, 0);
                        scriptAsset = this->fields.scriptAsset;
                        if ( scriptAsset )
                        {
                          if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
                            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v23, v24);
                          AssetManager__releaseAsset_47465556(scriptAsset, 0);
                          this->fields.scriptAsset = 0;
                          sub_21FFBF4(
                            (MissionNaviTransitionBoardItem_o *)&this->fields.scriptAsset,
                            0,
                            v26,
                            v27,
                            v28,
                            v29,
                            v30,
                            v31);
                        }
                        UnityEngine_MonoBehaviour__CancelInvoke_83229692(
                          (UnityEngine_MonoBehaviour_o *)this,
                          (System_String_o *)StringLiteral_2400/*"ApplyFilterScriptId"*/,
                          0);
                        v32 = this->fields.path;
                        this->fields.state = 1;
                        v33 = (AssetLoader_LoadEndDataHandler_o *)sub_21FFEBC(AssetLoader_LoadEndDataHandler_TypeInfo);
                        AssetLoader_LoadEndDataHandler___ctor(
                          v33,
                          (Il2CppObject *)this,
                          Method_ScriptObjectListViewMenu_EndLoadAsset__,
                          0);
                        if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
                          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v34, v35);
                        AssetManager__loadAssetStorage(v32, v33, 1, 0, 0);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_27:
      sub_21FFECC(scriptTestObjectRootObject, v19);
  }
}


void ScriptObjectListViewMenu__StartInput(ScriptObjectListViewMenu_o *this, const MethodInfo *method)
{
  ScriptObjectListViewManager_CallbackFunc_c *v3; // x0
  ScriptObjectListViewManager_o *listViewManager; // x20
  ScriptObjectListViewManager_CallbackFunc_o *v5; // x21
  const MethodInfo *v6; // x3
  UnityEngine_Behaviour_o *scriptTestObjectCancelButton; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  __int64 v10; // x2
  UnityEngine_Behaviour_o *forceCheckOnSprite; // x20
  __int64 v12; // x2
  UnityEngine_Behaviour_o *dispDisableDecryptScriptSprite; // x20

  if ( (byte_5935BF6 & 1) == 0 )
  {
    sub_21FFC50(&ScriptObjectListViewManager_CallbackFunc_TypeInfo);
    sub_21FFC50(&ScriptManager_TypeInfo);
    sub_21FFC50(&ScriptObjectListViewItem_TypeInfo);
    sub_21FFC50(&Method_ScriptObjectListViewMenu_OnClickItem__);
    byte_5935BF6 = 1;
  }
  v3 = ScriptObjectListViewManager_CallbackFunc_TypeInfo;
  listViewManager = this->fields.listViewManager;
  this->fields.state = 2;
  v5 = (ScriptObjectListViewManager_CallbackFunc_o *)sub_21FFEBC(v3);
  ScriptObjectListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    Method_ScriptObjectListViewMenu_OnClickItem__,
    v6);
  if ( !listViewManager )
    goto LABEL_24;
  ScriptObjectListViewManager__SetMode_44344260(listViewManager, 1, v5, v9);
  scriptTestObjectCancelButton = (UnityEngine_Behaviour_o *)this->fields.scriptTestObjectCancelButton;
  if ( !scriptTestObjectCancelButton )
    goto LABEL_24;
  UnityEngine_Behaviour__set_enabled(scriptTestObjectCancelButton, 1, 0);
  scriptTestObjectCancelButton = (UnityEngine_Behaviour_o *)this->fields.jumpLineObjectInput;
  if ( !scriptTestObjectCancelButton )
    goto LABEL_24;
  UILineInput__SetInputEnable((UILineInput_o *)scriptTestObjectCancelButton, 1, 0);
  scriptTestObjectCancelButton = (UnityEngine_Behaviour_o *)this->fields.filterScriptIdInput;
  if ( !scriptTestObjectCancelButton )
    goto LABEL_24;
  UILineInput__SetInputEnable((UILineInput_o *)scriptTestObjectCancelButton, 1, 0);
  scriptTestObjectCancelButton = (UnityEngine_Behaviour_o *)this->fields.forceCheckOnButton;
  if ( !scriptTestObjectCancelButton )
    goto LABEL_24;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, const char *))scriptTestObjectCancelButton->klass[1]._1.name)(
    scriptTestObjectCancelButton,
    1,
    scriptTestObjectCancelButton->klass[1]._1.namespaze);
  forceCheckOnSprite = (UnityEngine_Behaviour_o *)this->fields.forceCheckOnSprite;
  if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v8, v10);
  if ( !byte_5935C42 )
  {
    sub_21FFC50(&ScriptManager_TypeInfo);
    byte_5935C42 = 1;
  }
  scriptTestObjectCancelButton = (UnityEngine_Behaviour_o *)ScriptManager_TypeInfo;
  if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v8, v10);
    scriptTestObjectCancelButton = (UnityEngine_Behaviour_o *)ScriptManager_TypeInfo;
  }
  if ( !forceCheckOnSprite )
    goto LABEL_24;
  UnityEngine_Behaviour__set_enabled(
    forceCheckOnSprite,
    *(_BYTE *)(scriptTestObjectCancelButton[7].fields.m_CachedPtr + 185),
    0);
  scriptTestObjectCancelButton = (UnityEngine_Behaviour_o *)this->fields.forceObi169Button;
  if ( !scriptTestObjectCancelButton )
    goto LABEL_24;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, const char *))scriptTestObjectCancelButton->klass[1]._1.name)(
    scriptTestObjectCancelButton,
    1,
    scriptTestObjectCancelButton->klass[1]._1.namespaze);
  scriptTestObjectCancelButton = (UnityEngine_Behaviour_o *)this->fields.forceObi169Sprite;
  if ( !scriptTestObjectCancelButton )
    goto LABEL_24;
  UnityEngine_Behaviour__set_enabled(
    scriptTestObjectCancelButton,
    ScriptManager_TypeInfo->static_fields->defaultForceObi_16_9,
    0);
  scriptTestObjectCancelButton = (UnityEngine_Behaviour_o *)this->fields.dispDisableDecryptScriptButton;
  if ( !scriptTestObjectCancelButton )
    goto LABEL_24;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, const char *))scriptTestObjectCancelButton->klass[1]._1.name)(
    scriptTestObjectCancelButton,
    1,
    scriptTestObjectCancelButton->klass[1]._1.namespaze);
  scriptTestObjectCancelButton = (UnityEngine_Behaviour_o *)ScriptObjectListViewItem_TypeInfo;
  dispDisableDecryptScriptSprite = (UnityEngine_Behaviour_o *)this->fields.dispDisableDecryptScriptSprite;
  if ( !*(&ScriptObjectListViewItem_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptObjectListViewItem_TypeInfo, v8, v12);
  if ( !dispDisableDecryptScriptSprite
    || (UnityEngine_Behaviour__set_enabled(
          dispDisableDecryptScriptSprite,
          ScriptObjectListViewItem_TypeInfo->static_fields->DispDisableEncrypt,
          0),
        (scriptTestObjectCancelButton = (UnityEngine_Behaviour_o *)this->fields.dispEnableDecryptScriptButton) == 0)
    || (((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, const char *))scriptTestObjectCancelButton->klass[1]._1.name)(
          scriptTestObjectCancelButton,
          1,
          scriptTestObjectCancelButton->klass[1]._1.namespaze),
        (scriptTestObjectCancelButton = (UnityEngine_Behaviour_o *)this->fields.dispEnableDecryptScriptSprite) == 0) )
  {
LABEL_24:
    sub_21FFECC(scriptTestObjectCancelButton, v8);
  }
  UnityEngine_Behaviour__set_enabled(
    scriptTestObjectCancelButton,
    ScriptObjectListViewItem_TypeInfo->static_fields->DispEnableEncrypt,
    0);
}


void ScriptObjectListViewMenu__add_callbackFunc(
        ScriptObjectListViewMenu_o *this,
        ScriptObjectListViewMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ScriptObjectListViewMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ScriptObjectListViewMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  ScriptObjectListViewMenu_o *v13; // x0
  ScriptObjectListViewMenu_CallbackFunc_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_5935BF1 & 1) == 0 )
  {
    sub_21FFC50(&ScriptObjectListViewMenu_CallbackFunc_TypeInfo);
    byte_5935BF1 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (ScriptObjectListViewMenu_CallbackFunc_c *)v8->klass != ScriptObjectListViewMenu_CallbackFunc_TypeInfo )
        break;
    }
    v11 = sub_223767C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_220024C(v8, ScriptObjectListViewMenu_CallbackFunc_TypeInfo, v9, v10);
  ScriptObjectListViewMenu__remove_callbackFunc(v13, v14, v15);
}


void ScriptObjectListViewMenu__remove_callbackFunc(
        ScriptObjectListViewMenu_o *this,
        ScriptObjectListViewMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ScriptObjectListViewMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ScriptObjectListViewMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  ScriptObjectListViewMenu_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_5935BF2 & 1) == 0 )
  {
    sub_21FFC50(&ScriptObjectListViewMenu_CallbackFunc_TypeInfo);
    byte_5935BF2 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (ScriptObjectListViewMenu_CallbackFunc_c *)v8->klass != ScriptObjectListViewMenu_CallbackFunc_TypeInfo )
        break;
    }
    v11 = sub_223767C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_220024C(v8, ScriptObjectListViewMenu_CallbackFunc_TypeInfo, v9, v10);
  ScriptObjectListViewMenu__Awake(v13, v14);
}


void ScriptObjectListViewMenu_CallbackFunc___ctor(
        ScriptObjectListViewMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_21FFD28(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1FF5AB0;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1FF5A58;
}


System_IAsyncResult_o *ScriptObjectListViewMenu_CallbackFunc__BeginInvoke(
        ScriptObjectListViewMenu_CallbackFunc_o *this,
        int32_t result,
        System_String_o *objectName,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v11[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v12; // [xsp+2Ch] [xbp-34h] BYREF

  v12 = result;
  if ( (byte_5935BFC & 1) == 0 )
  {
    sub_21FFC50(&ScriptObjectListViewMenu_ResultKind_TypeInfo);
    byte_5935BFC = 1;
  }
  v11[2] = 0;
  v11[0] = j_il2cpp_value_box_0(ScriptObjectListViewMenu_ResultKind_TypeInfo, &v12);
  v11[1] = objectName;
  return (System_IAsyncResult_o *)sub_21FFC04(this, v11, callback, object);
}


void ScriptObjectListViewMenu_CallbackFunc__EndInvoke(
        ScriptObjectListViewMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
}


void ScriptObjectListViewMenu_CallbackFunc__Invoke(
        ScriptObjectListViewMenu_CallbackFunc_o *this,
        int32_t result,
        System_String_o *objectName,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, System_String_o *, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    objectName,
    this->fields.method);
}