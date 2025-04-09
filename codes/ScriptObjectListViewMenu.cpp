void __fastcall ScriptObjectListViewMenu___ctor(ScriptObjectListViewMenu_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ScriptObjectListViewMenu__Callback(
        ScriptObjectListViewMenu_o *this,
        int32_t result,
        System_String_o *objectName,
        const MethodInfo *method)
{
  CGThumbnailListItem_o *p_callbackFunc; // x0
  struct ScriptObjectListViewMenu_CallbackFunc_o *v5; // x21
  struct ScriptObjectListViewMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
  v5 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1B4CF34(p_callbackFunc, 0, (int32_t)objectName, method);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, System_String_o *, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      (unsigned int)result,
      objectName,
      *(_QWORD *)&v5->fields.extra_arg);
  }
}


void __fastcall ScriptObjectListViewMenu__Close(ScriptObjectListViewMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewManager_o *listViewManager; // x0
  AssetData_o *scriptAsset; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_49B85BE & 1) == 0 )
  {
    sub_1B4CF90(&AssetManager_TypeInfo, method);
    byte_49B85BE = 1;
  }
  ScriptObjectListViewMenu__EndInput(this, method);
  if ( this->fields.state )
  {
    listViewManager = (ListViewManager_o *)this->fields.listViewManager;
    if ( !listViewManager )
      goto LABEL_12;
    ListViewManager__DestroyList(listViewManager, 0LL);
    this->fields.state = 0;
  }
  scriptAsset = this->fields.scriptAsset;
  if ( scriptAsset )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_38328408(scriptAsset, 0LL);
    this->fields.scriptAsset = 0LL;
    sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.scriptAsset, 0, v6, v7);
  }
  listViewManager = (ListViewManager_o *)this->fields.scriptTestObjectRootObject;
  if ( !listViewManager )
LABEL_12:
    sub_1B4D1EC(listViewManager, v3);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)listViewManager, 0, 0LL);
}


void __fastcall ScriptObjectListViewMenu__EndInput(ScriptObjectListViewMenu_o *this, const MethodInfo *method)
{
  ListViewManager_o *listViewManager; // x0

  if ( this->fields.state )
  {
    listViewManager = (ListViewManager_o *)this->fields.listViewManager;
    if ( !listViewManager )
      goto LABEL_11;
    ListViewManager__set_IsInput(listViewManager, 0, 0LL);
    listViewManager = (ListViewManager_o *)this->fields.forceCheckOnButton;
    if ( !listViewManager )
      goto LABEL_11;
    ((void (__fastcall *)(ListViewManager_o *, _QWORD, Il2CppMethodPointer))listViewManager->klass->vtable._5_SetSortButtonImage.method)(
      listViewManager,
      0LL,
      listViewManager->klass->vtable._6_GetFocusItemIndex.methodPtr);
    listViewManager = (ListViewManager_o *)this->fields.forceObi169Button;
    if ( !listViewManager )
      goto LABEL_11;
    ((void (__fastcall *)(ListViewManager_o *, _QWORD, Il2CppMethodPointer))listViewManager->klass->vtable._5_SetSortButtonImage.method)(
      listViewManager,
      0LL,
      listViewManager->klass->vtable._6_GetFocusItemIndex.methodPtr);
    listViewManager = (ListViewManager_o *)this->fields.scriptTestObjectCancelButton;
    if ( !listViewManager
      || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)listViewManager, 0, 0LL),
          (listViewManager = (ListViewManager_o *)this->fields.jumpLineObjectInput) == 0LL)
      || (UILineInput__SetInputEnable((UILineInput_o *)listViewManager, 0, 0LL),
          (listViewManager = (ListViewManager_o *)this->fields.dispDisableDecryptScriptButton) == 0LL)
      || (((void (__fastcall *)(ListViewManager_o *, _QWORD, Il2CppMethodPointer))listViewManager->klass->vtable._5_SetSortButtonImage.method)(
            listViewManager,
            0LL,
            listViewManager->klass->vtable._6_GetFocusItemIndex.methodPtr),
          (listViewManager = (ListViewManager_o *)this->fields.dispEnableDecryptScriptButton) == 0LL) )
    {
LABEL_11:
      sub_1B4D1EC(listViewManager, method);
    }
    ((void (__fastcall *)(ListViewManager_o *, _QWORD, Il2CppMethodPointer))listViewManager->klass->vtable._5_SetSortButtonImage.method)(
      listViewManager,
      0LL,
      listViewManager->klass->vtable._6_GetFocusItemIndex.methodPtr);
  }
}


void __fastcall ScriptObjectListViewMenu__EndLoadAsset(
        ScriptObjectListViewMenu_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct AssetData_o **p_scriptAsset; // x21
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  ScriptObjectListViewManager_o *v9; // x0
  const MethodInfo *v10; // x1

  this->fields.scriptAsset = data;
  p_scriptAsset = &this->fields.scriptAsset;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.scriptAsset, (int32_t)data, (int32_t)method, v3);
  v9 = (ScriptObjectListViewManager_o *)*(p_scriptAsset - 13);
  if ( !v9 )
    sub_1B4D1EC(0LL, v7);
  ScriptObjectListViewManager__CreateList(v9, data, v8);
  ScriptObjectListViewMenu__StartInput(this, v10);
}


int32_t __fastcall ScriptObjectListViewMenu__GetJumpLine(ScriptObjectListViewMenu_o *this, const MethodInfo *method)
{
  UILineInput_o *jumpLineObjectInput; // x0
  System_String_o *Text; // x19

  jumpLineObjectInput = this->fields.jumpLineObjectInput;
  if ( !jumpLineObjectInput )
    sub_1B4D1EC(0LL, method);
  Text = UILineInput__GetText(jumpLineObjectInput, 0LL);
  if ( System_String__IsNullOrEmpty(Text, 0LL) )
    return -1;
  else
    return System_Int32__Parse(Text, 0LL);
}


System_String_o *__fastcall ScriptObjectListViewMenu__GetJumpLineString(
        ScriptObjectListViewMenu_o *this,
        const MethodInfo *method)
{
  UILineInput_o *jumpLineObjectInput; // x0

  jumpLineObjectInput = this->fields.jumpLineObjectInput;
  if ( !jumpLineObjectInput )
    sub_1B4D1EC(0LL, method);
  return UILineInput__GetText(jumpLineObjectInput, 0LL);
}


void __fastcall ScriptObjectListViewMenu__ListUpdate(ScriptObjectListViewMenu_o *this, const MethodInfo *method)
{
  ListViewManager_o *listViewManager; // x0

  listViewManager = (ListViewManager_o *)this->fields.listViewManager;
  if ( !listViewManager )
    sub_1B4D1EC(0LL, method);
  ListViewManager__SortItem(listViewManager, -1, 0, -1, 0LL);
}


void __fastcall ScriptObjectListViewMenu__OnClickCancel(ScriptObjectListViewMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( this->fields.state == 2 )
  {
    this->fields.state = 4;
    ScriptObjectListViewMenu__EndInput(this, method);
    ScriptObjectListViewMenu__Callback(this, 1, 0LL, v3);
  }
}


void __fastcall ScriptObjectListViewMenu__OnClickForceCheckOn(
        ScriptObjectListViewMenu_o *this,
        const MethodInfo *method)
{
  struct UISprite_o *forceCheckOnSprite; // x0
  __int64 v4; // x1
  bool enabled; // w19
  ScriptManager_c *v6; // x0

  if ( (byte_49B85C0 & 1) == 0 )
  {
    sub_1B4CF90(&ScriptManager_TypeInfo, method);
    byte_49B85C0 = 1;
  }
  forceCheckOnSprite = this->fields.forceCheckOnSprite;
  if ( !forceCheckOnSprite
    || (forceCheckOnSprite = (struct UISprite_o *)UnityEngine_Behaviour__get_enabled(
                                                    (UnityEngine_Behaviour_o *)forceCheckOnSprite,
                                                    0LL),
        !this->fields.forceCheckOnSprite)
    || (UnityEngine_Behaviour__set_enabled(
          (UnityEngine_Behaviour_o *)this->fields.forceCheckOnSprite,
          ((unsigned __int8)forceCheckOnSprite & 1) == 0,
          0LL),
        (forceCheckOnSprite = this->fields.forceCheckOnSprite) == 0LL) )
  {
    sub_1B4D1EC(forceCheckOnSprite, method);
  }
  enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)forceCheckOnSprite, 0LL);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  if ( !byte_49B8630 )
  {
    sub_1B4CF90(&ScriptManager_TypeInfo, v4);
    byte_49B8630 = 1;
  }
  v6 = ScriptManager_TypeInfo;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    v6 = ScriptManager_TypeInfo;
  }
  v6->static_fields->debugIsForceCheckOn = enabled;
}


void __fastcall ScriptObjectListViewMenu__OnClickForceObi169(
        ScriptObjectListViewMenu_o *this,
        const MethodInfo *method)
{
  struct UISprite_o *forceObi169Sprite; // x0
  bool enabled; // w0
  ScriptManager_c *v5; // x8
  bool v6; // w19

  if ( (byte_49B85C1 & 1) == 0 )
  {
    sub_1B4CF90(&ScriptManager_TypeInfo, method);
    byte_49B85C1 = 1;
  }
  forceObi169Sprite = this->fields.forceObi169Sprite;
  if ( !forceObi169Sprite
    || (forceObi169Sprite = (struct UISprite_o *)UnityEngine_Behaviour__get_enabled(
                                                   (UnityEngine_Behaviour_o *)forceObi169Sprite,
                                                   0LL),
        !this->fields.forceObi169Sprite)
    || (UnityEngine_Behaviour__set_enabled(
          (UnityEngine_Behaviour_o *)this->fields.forceObi169Sprite,
          ((unsigned __int8)forceObi169Sprite & 1) == 0,
          0LL),
        (forceObi169Sprite = this->fields.forceObi169Sprite) == 0LL) )
  {
    sub_1B4D1EC(forceObi169Sprite, method);
  }
  enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)forceObi169Sprite, 0LL);
  v5 = ScriptManager_TypeInfo;
  v6 = enabled;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    v5 = ScriptManager_TypeInfo;
  }
  v5->static_fields->defaultForceObi_16_9 = v6;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptObjectListViewMenu__OnClickItem(
        ScriptObjectListViewMenu_o *this,
        int32_t result,
        ScriptObjectListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  System_String_o *path; // x2
  int32_t v10; // w1

  if ( this->fields.state == 2 )
  {
    if ( result == 3 )
    {
      this->fields.state = 4;
      ScriptObjectListViewMenu__EndInput(this, *(const MethodInfo **)&result);
      if ( item )
      {
        path = item->fields.path;
        v10 = 3;
        goto LABEL_9;
      }
LABEL_10:
      sub_1B4D1EC(v6, v7);
    }
    if ( result == 2 )
    {
      this->fields.state = 4;
      ScriptObjectListViewMenu__EndInput(this, *(const MethodInfo **)&result);
      if ( item )
      {
        path = item->fields.path;
        v10 = (unsigned int)&dword_0 + 2;
LABEL_9:
        ScriptObjectListViewMenu__Callback(this, v10, path, v8);
        return;
      }
      goto LABEL_10;
    }
  }
}


void __fastcall ScriptObjectListViewMenu__OnDispChangeDisableDecrypt(
        ScriptObjectListViewMenu_o *this,
        const MethodInfo *method)
{
  ScriptObjectListViewItem_c *v3; // x0
  struct ScriptObjectListViewItem_StaticFields *static_fields; // x9
  bool v5; // w8
  UnityEngine_Behaviour_o *dispDisableDecryptScriptSprite; // x0
  const MethodInfo *v7; // x1

  if ( (byte_49B85C3 & 1) == 0 )
  {
    sub_1B4CF90(&ScriptObjectListViewItem_TypeInfo, method);
    byte_49B85C3 = 1;
  }
  v3 = ScriptObjectListViewItem_TypeInfo;
  if ( !ScriptObjectListViewItem_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptObjectListViewItem_TypeInfo);
    v3 = ScriptObjectListViewItem_TypeInfo;
  }
  static_fields = v3->static_fields;
  v5 = !static_fields->DispDisableEncrypt;
  static_fields->DispDisableEncrypt = v5;
  dispDisableDecryptScriptSprite = (UnityEngine_Behaviour_o *)this->fields.dispDisableDecryptScriptSprite;
  if ( !dispDisableDecryptScriptSprite )
    sub_1B4D1EC(0LL, method);
  UnityEngine_Behaviour__set_enabled(dispDisableDecryptScriptSprite, v5, 0LL);
  ScriptObjectListViewMenu__ListUpdate(this, v7);
}


void __fastcall ScriptObjectListViewMenu__OnDispChangeEnableDecrypt(
        ScriptObjectListViewMenu_o *this,
        const MethodInfo *method)
{
  ScriptObjectListViewItem_c *v3; // x0
  struct ScriptObjectListViewItem_StaticFields *static_fields; // x9
  bool v5; // w8
  UnityEngine_Behaviour_o *dispEnableDecryptScriptSprite; // x0
  const MethodInfo *v7; // x1

  if ( (byte_49B85C2 & 1) == 0 )
  {
    sub_1B4CF90(&ScriptObjectListViewItem_TypeInfo, method);
    byte_49B85C2 = 1;
  }
  v3 = ScriptObjectListViewItem_TypeInfo;
  if ( !ScriptObjectListViewItem_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptObjectListViewItem_TypeInfo);
    v3 = ScriptObjectListViewItem_TypeInfo;
  }
  static_fields = v3->static_fields;
  v5 = !static_fields->DispEnableEncrypt;
  static_fields->DispEnableEncrypt = v5;
  dispEnableDecryptScriptSprite = (UnityEngine_Behaviour_o *)this->fields.dispEnableDecryptScriptSprite;
  if ( !dispEnableDecryptScriptSprite )
    sub_1B4D1EC(0LL, method);
  UnityEngine_Behaviour__set_enabled(dispEnableDecryptScriptSprite, v5, 0LL);
  ScriptObjectListViewMenu__ListUpdate(this, v7);
}


void __fastcall ScriptObjectListViewMenu__Open(
        ScriptObjectListViewMenu_o *this,
        System_String_o *assetName,
        ScriptObjectListViewMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t state; // w8
  struct System_String_o **p_path; // x20
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  __int64 v13; // x1
  UnityEngine_GameObject_o *scriptTestObjectRootObject; // x0
  UILabel_o *scriptTestDefaultNameLabel; // x20
  System_String_o *path; // x8
  AssetData_o *scriptAsset; // x21
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_String_o *v20; // x20
  AssetLoader_LoadEndDataHandler_o *v21; // x21
  const MethodInfo *v22; // x1

  if ( (byte_49B85BD & 1) == 0 )
  {
    sub_1B4CF90(&AssetManager_TypeInfo, assetName);
    sub_1B4CF90(&AssetLoader_LoadEndDataHandler_TypeInfo, v7);
    sub_1B4CF90(&Method_ScriptObjectListViewMenu_EndLoadAsset__, v8);
    byte_49B85BD = 1;
  }
  state = this->fields.state;
  switch ( state )
  {
    case 5:
      goto LABEL_6;
    case 4:
      this->fields.callbackFunc = callback;
      sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)callback, method);
      ScriptObjectListViewMenu__StartInput(this, v22);
      return;
    case 0:
LABEL_6:
      this->fields.path = assetName;
      p_path = &this->fields.path;
      sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.path, (int32_t)assetName, (int32_t)callback, method);
      this->fields.callbackFunc = callback;
      sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v11, v12);
      scriptTestObjectRootObject = this->fields.scriptTestObjectRootObject;
      if ( scriptTestObjectRootObject )
      {
        UnityEngine_GameObject__SetActive(scriptTestObjectRootObject, 1, 0LL);
        scriptTestObjectRootObject = (UnityEngine_GameObject_o *)this->fields.listViewManager;
        if ( scriptTestObjectRootObject )
        {
          ListViewManager__set_IsInput((ListViewManager_o *)scriptTestObjectRootObject, 0, 0LL);
          scriptTestObjectRootObject = (UnityEngine_GameObject_o *)this->fields.scriptTestObjectCancelButton;
          if ( scriptTestObjectRootObject )
          {
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)scriptTestObjectRootObject, 0, 0LL);
            scriptTestObjectRootObject = (UnityEngine_GameObject_o *)this->fields.jumpLineObjectInput;
            if ( scriptTestObjectRootObject )
            {
              UILineInput__SetInputEnable((UILineInput_o *)scriptTestObjectRootObject, 0, 0LL);
              scriptTestObjectRootObject = (UnityEngine_GameObject_o *)*p_path;
              if ( *p_path )
              {
                scriptTestObjectRootObject = (UnityEngine_GameObject_o *)System_String__LastIndexOf(
                                                                           (System_String_o *)scriptTestObjectRootObject,
                                                                           0x2Fu,
                                                                           0LL);
                scriptTestDefaultNameLabel = this->fields.scriptTestDefaultNameLabel;
                path = this->fields.path;
                if ( ((unsigned int)scriptTestObjectRootObject & 0x80000000) == 0 )
                {
                  if ( !path )
                    goto LABEL_24;
                  scriptTestObjectRootObject = (UnityEngine_GameObject_o *)System_String__Substring(
                                                                             this->fields.path,
                                                                             (int)scriptTestObjectRootObject + 1,
                                                                             0LL);
                  path = (System_String_o *)scriptTestObjectRootObject;
                }
                if ( scriptTestDefaultNameLabel )
                {
                  UILabel__set_text(scriptTestDefaultNameLabel, path, 0LL);
                  scriptAsset = this->fields.scriptAsset;
                  if ( scriptAsset )
                  {
                    if ( !AssetManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
                    AssetManager__releaseAsset_38328408(scriptAsset, 0LL);
                    this->fields.scriptAsset = 0LL;
                    sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.scriptAsset, 0, v18, v19);
                  }
                  this->fields.state = 1;
                  v20 = this->fields.path;
                  v21 = (AssetLoader_LoadEndDataHandler_o *)sub_1B4D1DC(AssetLoader_LoadEndDataHandler_TypeInfo);
                  AssetLoader_LoadEndDataHandler___ctor(
                    v21,
                    (Il2CppObject *)this,
                    Method_ScriptObjectListViewMenu_EndLoadAsset__,
                    0LL);
                  if ( !AssetManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
                  AssetManager__loadAssetStorage(v20, v21, 1, 0LL);
                  return;
                }
              }
            }
          }
        }
      }
LABEL_24:
      sub_1B4D1EC(scriptTestObjectRootObject, v13);
  }
}


void __fastcall ScriptObjectListViewMenu__StartInput(ScriptObjectListViewMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  ScriptObjectListViewManager_o *listViewManager; // x20
  ScriptObjectListViewManager_CallbackFunc_o *v7; // x21
  const MethodInfo *v8; // x3
  UnityEngine_Behaviour_o *scriptTestObjectCancelButton; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x3
  UnityEngine_Behaviour_o *forceCheckOnSprite; // x20
  UnityEngine_Behaviour_o *dispDisableDecryptScriptSprite; // x20

  if ( (byte_49B85BF & 1) == 0 )
  {
    sub_1B4CF90(&ScriptObjectListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B4CF90(&ScriptManager_TypeInfo, v3);
    sub_1B4CF90(&ScriptObjectListViewItem_TypeInfo, v4);
    sub_1B4CF90(&Method_ScriptObjectListViewMenu_OnClickItem__, v5);
    byte_49B85BF = 1;
  }
  this->fields.state = 2;
  listViewManager = this->fields.listViewManager;
  v7 = (ScriptObjectListViewManager_CallbackFunc_o *)sub_1B4D1DC(ScriptObjectListViewManager_CallbackFunc_TypeInfo);
  ScriptObjectListViewManager_CallbackFunc___ctor(
    v7,
    (Il2CppObject *)this,
    Method_ScriptObjectListViewMenu_OnClickItem__,
    v8);
  if ( !listViewManager )
    goto LABEL_23;
  ScriptObjectListViewManager__SetMode_35336496(listViewManager, 1, v7, v11);
  scriptTestObjectCancelButton = (UnityEngine_Behaviour_o *)this->fields.scriptTestObjectCancelButton;
  if ( !scriptTestObjectCancelButton )
    goto LABEL_23;
  UnityEngine_Behaviour__set_enabled(scriptTestObjectCancelButton, 1, 0LL);
  scriptTestObjectCancelButton = (UnityEngine_Behaviour_o *)this->fields.jumpLineObjectInput;
  if ( !scriptTestObjectCancelButton )
    goto LABEL_23;
  UILineInput__SetInputEnable((UILineInput_o *)scriptTestObjectCancelButton, 1, 0LL);
  scriptTestObjectCancelButton = (UnityEngine_Behaviour_o *)this->fields.forceCheckOnButton;
  if ( !scriptTestObjectCancelButton )
    goto LABEL_23;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *))scriptTestObjectCancelButton->klass[1]._1.namespaze)(
    scriptTestObjectCancelButton,
    1LL,
    scriptTestObjectCancelButton->klass[1]._1.byval_arg.data);
  forceCheckOnSprite = (UnityEngine_Behaviour_o *)this->fields.forceCheckOnSprite;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  if ( !byte_49B862F )
  {
    sub_1B4CF90(&ScriptManager_TypeInfo, v10);
    byte_49B862F = 1;
  }
  scriptTestObjectCancelButton = (UnityEngine_Behaviour_o *)ScriptManager_TypeInfo;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    scriptTestObjectCancelButton = (UnityEngine_Behaviour_o *)ScriptManager_TypeInfo;
  }
  if ( !forceCheckOnSprite )
    goto LABEL_23;
  UnityEngine_Behaviour__set_enabled(
    forceCheckOnSprite,
    *(_BYTE *)(*(_QWORD *)&scriptTestObjectCancelButton[7].fields.m_CachedPtr + 161LL),
    0LL);
  scriptTestObjectCancelButton = (UnityEngine_Behaviour_o *)this->fields.forceObi169Button;
  if ( !scriptTestObjectCancelButton )
    goto LABEL_23;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *))scriptTestObjectCancelButton->klass[1]._1.namespaze)(
    scriptTestObjectCancelButton,
    1LL,
    scriptTestObjectCancelButton->klass[1]._1.byval_arg.data);
  scriptTestObjectCancelButton = (UnityEngine_Behaviour_o *)this->fields.forceObi169Sprite;
  if ( !scriptTestObjectCancelButton )
    goto LABEL_23;
  UnityEngine_Behaviour__set_enabled(
    scriptTestObjectCancelButton,
    ScriptManager_TypeInfo->static_fields->defaultForceObi_16_9,
    0LL);
  scriptTestObjectCancelButton = (UnityEngine_Behaviour_o *)this->fields.dispDisableDecryptScriptButton;
  if ( !scriptTestObjectCancelButton )
    goto LABEL_23;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *))scriptTestObjectCancelButton->klass[1]._1.namespaze)(
    scriptTestObjectCancelButton,
    1LL,
    scriptTestObjectCancelButton->klass[1]._1.byval_arg.data);
  scriptTestObjectCancelButton = (UnityEngine_Behaviour_o *)ScriptObjectListViewItem_TypeInfo;
  dispDisableDecryptScriptSprite = (UnityEngine_Behaviour_o *)this->fields.dispDisableDecryptScriptSprite;
  if ( !ScriptObjectListViewItem_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptObjectListViewItem_TypeInfo);
  if ( !dispDisableDecryptScriptSprite
    || (UnityEngine_Behaviour__set_enabled(
          dispDisableDecryptScriptSprite,
          ScriptObjectListViewItem_TypeInfo->static_fields->DispDisableEncrypt,
          0LL),
        (scriptTestObjectCancelButton = (UnityEngine_Behaviour_o *)this->fields.dispEnableDecryptScriptButton) == 0LL)
    || (((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *))scriptTestObjectCancelButton->klass[1]._1.namespaze)(
          scriptTestObjectCancelButton,
          1LL,
          scriptTestObjectCancelButton->klass[1]._1.byval_arg.data),
        (scriptTestObjectCancelButton = (UnityEngine_Behaviour_o *)this->fields.dispEnableDecryptScriptSprite) == 0LL) )
  {
LABEL_23:
    sub_1B4D1EC(scriptTestObjectCancelButton, v10);
  }
  UnityEngine_Behaviour__set_enabled(
    scriptTestObjectCancelButton,
    ScriptObjectListViewItem_TypeInfo->static_fields->DispEnableEncrypt,
    0LL);
}


void __fastcall ScriptObjectListViewMenu__add_callbackFunc(
        ScriptObjectListViewMenu_o *this,
        ScriptObjectListViewMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ScriptObjectListViewMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ScriptObjectListViewMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ScriptObjectListViewMenu_o *v11; // x0
  ScriptObjectListViewMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_49B85BB & 1) == 0 )
  {
    sub_1B4CF90(&ScriptObjectListViewMenu_CallbackFunc_TypeInfo, value);
    byte_49B85BB = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ScriptObjectListViewMenu_CallbackFunc_c *)v8->klass != ScriptObjectListViewMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1B8724C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B4D4AC(v8);
  ScriptObjectListViewMenu__remove_callbackFunc(v11, v12, v13);
}


void __fastcall ScriptObjectListViewMenu__remove_callbackFunc(
        ScriptObjectListViewMenu_o *this,
        ScriptObjectListViewMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ScriptObjectListViewMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ScriptObjectListViewMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ScriptObjectListViewMenu_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_49B85BC & 1) == 0 )
  {
    sub_1B4CF90(&ScriptObjectListViewMenu_CallbackFunc_TypeInfo, value);
    byte_49B85BC = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ScriptObjectListViewMenu_CallbackFunc_c *)v8->klass != ScriptObjectListViewMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1B8724C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B4D4AC(v8);
  ScriptObjectListViewMenu__StartInput(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptObjectListViewMenu_CallbackFunc___ctor(
        ScriptObjectListViewMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B4D050(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B4D208(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B4D0B8(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 2 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1999B70;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1999B18;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall ScriptObjectListViewMenu_CallbackFunc__BeginInvoke(
        ScriptObjectListViewMenu_CallbackFunc_o *this,
        int32_t result,
        System_String_o *objectName,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v11[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v12; // [xsp+2Ch] [xbp-34h] BYREF

  v12 = result;
  if ( (byte_49B85C4 & 1) == 0 )
  {
    sub_1B4CF90(&ScriptObjectListViewMenu_ResultKind_TypeInfo, *(_QWORD *)&result);
    byte_49B85C4 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(ScriptObjectListViewMenu_ResultKind_TypeInfo, &v12, objectName, callback, object);
  v11[1] = (__int64)objectName;
  return (System_IAsyncResult_o *)sub_1B4CF44(this, v11, callback, object);
}


void __fastcall ScriptObjectListViewMenu_CallbackFunc__EndInvoke(
        ScriptObjectListViewMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B4CF48(result, 0LL, method);
}


void __fastcall ScriptObjectListViewMenu_CallbackFunc__Invoke(
        ScriptObjectListViewMenu_CallbackFunc_o *this,
        int32_t result,
        System_String_o *objectName,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, System_String_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    objectName,
    *(_QWORD *)&this->fields.extra_arg);
}