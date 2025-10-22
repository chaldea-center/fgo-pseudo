void ScriptObjectListViewMenu___ctor(ScriptObjectListViewMenu_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ScriptObjectListViewMenu__Callback(
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
    p_callbackFunc->klass = 0;
    sub_1C3E508(p_callbackFunc, 0, (int32_t)objectName, method);
    ((void (__fastcall *)(intptr_t, _QWORD, System_String_o *, intptr_t))v5->fields.invoke_impl)(
      v5->fields.method_code,
      (unsigned int)result,
      objectName,
      v5->fields.method);
  }
}


void ScriptObjectListViewMenu__Close(ScriptObjectListViewMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewManager_o *listViewManager; // x0
  AssetData_o *scriptAsset; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C5435B & 1) == 0 )
  {
    sub_1C3E564(&AssetManager_TypeInfo);
    byte_4C5435B = 1;
  }
  ScriptObjectListViewMenu__EndInput(this, method);
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
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_40580972(scriptAsset, 0);
    this->fields.scriptAsset = 0;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.scriptAsset, 0, v6, v7);
  }
  listViewManager = (ListViewManager_o *)this->fields.scriptTestObjectRootObject;
  if ( !listViewManager )
LABEL_12:
    sub_1C3E7C0(listViewManager, v3);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)listViewManager, 0, 0);
}


void ScriptObjectListViewMenu__EndInput(ScriptObjectListViewMenu_o *this, const MethodInfo *method)
{
  ListViewManager_o *listViewManager; // x0

  if ( this->fields.state )
  {
    listViewManager = (ListViewManager_o *)this->fields.listViewManager;
    if ( !listViewManager )
      goto LABEL_11;
    ListViewManager__set_IsInput(listViewManager, 0, 0);
    listViewManager = (ListViewManager_o *)this->fields.forceCheckOnButton;
    if ( !listViewManager )
      goto LABEL_11;
    ((void (__fastcall *)(ListViewManager_o *, _QWORD, const MethodInfo *))listViewManager->klass->vtable._5_SetSortButtonImage.methodPtr)(
      listViewManager,
      0,
      listViewManager->klass->vtable._5_SetSortButtonImage.method);
    listViewManager = (ListViewManager_o *)this->fields.forceObi169Button;
    if ( !listViewManager )
      goto LABEL_11;
    ((void (__fastcall *)(ListViewManager_o *, _QWORD, const MethodInfo *))listViewManager->klass->vtable._5_SetSortButtonImage.methodPtr)(
      listViewManager,
      0,
      listViewManager->klass->vtable._5_SetSortButtonImage.method);
    listViewManager = (ListViewManager_o *)this->fields.scriptTestObjectCancelButton;
    if ( !listViewManager
      || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)listViewManager, 0, 0),
          (listViewManager = (ListViewManager_o *)this->fields.jumpLineObjectInput) == 0)
      || (UILineInput__SetInputEnable((UILineInput_o *)listViewManager, 0, 0),
          (listViewManager = (ListViewManager_o *)this->fields.dispDisableDecryptScriptButton) == 0)
      || (((void (__fastcall *)(ListViewManager_o *, _QWORD, const MethodInfo *))listViewManager->klass->vtable._5_SetSortButtonImage.methodPtr)(
            listViewManager,
            0,
            listViewManager->klass->vtable._5_SetSortButtonImage.method),
          (listViewManager = (ListViewManager_o *)this->fields.dispEnableDecryptScriptButton) == 0) )
    {
LABEL_11:
      sub_1C3E7C0(listViewManager, method);
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
  const MethodInfo *v3; // x3
  struct AssetData_o **p_scriptAsset; // x21
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  ScriptObjectListViewManager_o *v9; // x0
  const MethodInfo *v10; // x1

  this->fields.scriptAsset = data;
  p_scriptAsset = &this->fields.scriptAsset;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.scriptAsset, (int32_t)data, (int32_t)method, v3);
  v9 = (ScriptObjectListViewManager_o *)*(p_scriptAsset - 13);
  if ( !v9 )
    sub_1C3E7C0(0, v7);
  ScriptObjectListViewManager__CreateList(v9, data, v8);
  ScriptObjectListViewMenu__StartInput(this, v10);
}


int32_t ScriptObjectListViewMenu__GetJumpLine(ScriptObjectListViewMenu_o *this, const MethodInfo *method)
{
  UILineInput_o *jumpLineObjectInput; // x0
  System_String_o *Text; // x19

  jumpLineObjectInput = this->fields.jumpLineObjectInput;
  if ( !jumpLineObjectInput )
    sub_1C3E7C0(0, method);
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
    sub_1C3E7C0(0, method);
  return UILineInput__GetText(jumpLineObjectInput, 0);
}


void ScriptObjectListViewMenu__ListUpdate(ScriptObjectListViewMenu_o *this, const MethodInfo *method)
{
  ListViewManager_o *listViewManager; // x0

  listViewManager = (ListViewManager_o *)this->fields.listViewManager;
  if ( !listViewManager )
    sub_1C3E7C0(0, method);
  ListViewManager__SortItem(listViewManager, -1, 0, -1, 0);
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
  bool enabled; // w19
  ScriptManager_c *v5; // x0

  if ( (byte_4C5435D & 1) == 0 )
  {
    sub_1C3E564(&ScriptManager_TypeInfo);
    byte_4C5435D = 1;
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
    sub_1C3E7C0(forceCheckOnSprite, method);
  }
  enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)forceCheckOnSprite, 0);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  if ( !byte_4C543CD )
  {
    sub_1C3E564(&ScriptManager_TypeInfo);
    byte_4C543CD = 1;
  }
  v5 = ScriptManager_TypeInfo;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    v5 = ScriptManager_TypeInfo;
  }
  v5->static_fields->debugIsForceCheckOn = enabled;
}


void ScriptObjectListViewMenu__OnClickForceObi169(ScriptObjectListViewMenu_o *this, const MethodInfo *method)
{
  struct UISprite_o *forceObi169Sprite; // x0
  bool enabled; // w0
  ScriptManager_c *v5; // x8
  bool v6; // w19

  if ( (byte_4C5435E & 1) == 0 )
  {
    sub_1C3E564(&ScriptManager_TypeInfo);
    byte_4C5435E = 1;
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
    sub_1C3E7C0(forceObi169Sprite, method);
  }
  enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)forceObi169Sprite, 0);
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
void ScriptObjectListViewMenu__OnClickItem(
        ScriptObjectListViewMenu_o *this,
        int32_t result,
        ScriptObjectListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  System_String_o *path; // x2
  char *v10; // x1

  if ( this->fields.state == 2 )
  {
    if ( result == 3 )
    {
      this->fields.state = 4;
      ScriptObjectListViewMenu__EndInput(this, *(const MethodInfo **)&result);
      if ( item )
      {
        path = item->fields.path;
        LODWORD(v10) = 3;
        goto LABEL_9;
      }
LABEL_10:
      sub_1C3E7C0(v6, v7);
    }
    if ( result == 2 )
    {
      this->fields.state = 4;
      ScriptObjectListViewMenu__EndInput(this, *(const MethodInfo **)&result);
      if ( item )
      {
        path = item->fields.path;
        v10 = (char *)&dword_0 + 2;
LABEL_9:
        ScriptObjectListViewMenu__Callback(this, (int32_t)v10, path, v8);
        return;
      }
      goto LABEL_10;
    }
  }
}


void ScriptObjectListViewMenu__OnDispChangeDisableDecrypt(ScriptObjectListViewMenu_o *this, const MethodInfo *method)
{
  ScriptObjectListViewItem_c *v3; // x0
  struct ScriptObjectListViewItem_StaticFields *static_fields; // x9
  bool v5; // w8
  UnityEngine_Behaviour_o *dispDisableDecryptScriptSprite; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4C54360 & 1) == 0 )
  {
    sub_1C3E564(&ScriptObjectListViewItem_TypeInfo);
    byte_4C54360 = 1;
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
    sub_1C3E7C0(0, method);
  UnityEngine_Behaviour__set_enabled(dispDisableDecryptScriptSprite, v5, 0);
  ScriptObjectListViewMenu__ListUpdate(this, v7);
}


void ScriptObjectListViewMenu__OnDispChangeEnableDecrypt(ScriptObjectListViewMenu_o *this, const MethodInfo *method)
{
  ScriptObjectListViewItem_c *v3; // x0
  struct ScriptObjectListViewItem_StaticFields *static_fields; // x9
  bool v5; // w8
  UnityEngine_Behaviour_o *dispEnableDecryptScriptSprite; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4C5435F & 1) == 0 )
  {
    sub_1C3E564(&ScriptObjectListViewItem_TypeInfo);
    byte_4C5435F = 1;
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
    sub_1C3E7C0(0, method);
  UnityEngine_Behaviour__set_enabled(dispEnableDecryptScriptSprite, v5, 0);
  ScriptObjectListViewMenu__ListUpdate(this, v7);
}


void ScriptObjectListViewMenu__Open(
        ScriptObjectListViewMenu_o *this,
        System_String_o *assetName,
        ScriptObjectListViewMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t state; // w8
  struct System_String_o **p_path; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  __int64 v11; // x1
  UnityEngine_GameObject_o *scriptTestObjectRootObject; // x0
  UILabel_o *scriptTestDefaultNameLabel; // x20
  System_String_o *path; // x8
  AssetData_o *scriptAsset; // x21
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_String_o *v18; // x20
  AssetLoader_LoadEndDataHandler_o *v19; // x21
  const MethodInfo *v20; // x1

  if ( (byte_4C5435A & 1) == 0 )
  {
    sub_1C3E564(&AssetManager_TypeInfo);
    sub_1C3E564(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C3E564(&Method_ScriptObjectListViewMenu_EndLoadAsset__);
    byte_4C5435A = 1;
  }
  state = this->fields.state;
  switch ( state )
  {
    case 5:
      goto LABEL_6;
    case 4:
      this->fields.callbackFunc = callback;
      sub_1C3E508((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)callback, method);
      ScriptObjectListViewMenu__StartInput(this, v20);
      return;
    case 0:
LABEL_6:
      this->fields.path = assetName;
      p_path = &this->fields.path;
      sub_1C3E508((CGThumbnailListItem_o *)&this->fields.path, (int32_t)assetName, (int32_t)callback, method);
      this->fields.callbackFunc = callback;
      sub_1C3E508((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v9, v10);
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
                    goto LABEL_24;
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
                    if ( !AssetManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
                    AssetManager__releaseAsset_40580972(scriptAsset, 0);
                    this->fields.scriptAsset = 0;
                    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.scriptAsset, 0, v16, v17);
                  }
                  this->fields.state = 1;
                  v18 = this->fields.path;
                  v19 = (AssetLoader_LoadEndDataHandler_o *)sub_1C3E7B0(AssetLoader_LoadEndDataHandler_TypeInfo);
                  AssetLoader_LoadEndDataHandler___ctor(
                    v19,
                    (Il2CppObject *)this,
                    Method_ScriptObjectListViewMenu_EndLoadAsset__,
                    0);
                  if ( !AssetManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
                  AssetManager__loadAssetStorage(v18, v19, 1, 0);
                  return;
                }
              }
            }
          }
        }
      }
LABEL_24:
      sub_1C3E7C0(scriptTestObjectRootObject, v11);
  }
}


void ScriptObjectListViewMenu__StartInput(ScriptObjectListViewMenu_o *this, const MethodInfo *method)
{
  ScriptObjectListViewManager_o *listViewManager; // x20
  ScriptObjectListViewManager_CallbackFunc_o *v4; // x21
  const MethodInfo *v5; // x3
  UnityEngine_Behaviour_o *scriptTestObjectCancelButton; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  UnityEngine_Behaviour_o *forceCheckOnSprite; // x20
  UnityEngine_Behaviour_o *dispDisableDecryptScriptSprite; // x20

  if ( (byte_4C5435C & 1) == 0 )
  {
    sub_1C3E564(&ScriptObjectListViewManager_CallbackFunc_TypeInfo);
    sub_1C3E564(&ScriptManager_TypeInfo);
    sub_1C3E564(&ScriptObjectListViewItem_TypeInfo);
    sub_1C3E564(&Method_ScriptObjectListViewMenu_OnClickItem__);
    byte_4C5435C = 1;
  }
  this->fields.state = 2;
  listViewManager = this->fields.listViewManager;
  v4 = (ScriptObjectListViewManager_CallbackFunc_o *)sub_1C3E7B0(ScriptObjectListViewManager_CallbackFunc_TypeInfo);
  ScriptObjectListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    Method_ScriptObjectListViewMenu_OnClickItem__,
    v5);
  if ( !listViewManager )
    goto LABEL_23;
  ScriptObjectListViewManager__SetMode_37506200(listViewManager, 1, v4, v8);
  scriptTestObjectCancelButton = (UnityEngine_Behaviour_o *)this->fields.scriptTestObjectCancelButton;
  if ( !scriptTestObjectCancelButton )
    goto LABEL_23;
  UnityEngine_Behaviour__set_enabled(scriptTestObjectCancelButton, 1, 0);
  scriptTestObjectCancelButton = (UnityEngine_Behaviour_o *)this->fields.jumpLineObjectInput;
  if ( !scriptTestObjectCancelButton )
    goto LABEL_23;
  UILineInput__SetInputEnable((UILineInput_o *)scriptTestObjectCancelButton, 1, 0);
  scriptTestObjectCancelButton = (UnityEngine_Behaviour_o *)this->fields.forceCheckOnButton;
  if ( !scriptTestObjectCancelButton )
    goto LABEL_23;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, const char *))scriptTestObjectCancelButton->klass[1]._1.name)(
    scriptTestObjectCancelButton,
    1,
    scriptTestObjectCancelButton->klass[1]._1.namespaze);
  forceCheckOnSprite = (UnityEngine_Behaviour_o *)this->fields.forceCheckOnSprite;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  if ( !byte_4C543CC )
  {
    sub_1C3E564(&ScriptManager_TypeInfo);
    byte_4C543CC = 1;
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
    *(_BYTE *)(scriptTestObjectCancelButton[7].fields.m_CachedPtr + 169),
    0);
  scriptTestObjectCancelButton = (UnityEngine_Behaviour_o *)this->fields.forceObi169Button;
  if ( !scriptTestObjectCancelButton )
    goto LABEL_23;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, const char *))scriptTestObjectCancelButton->klass[1]._1.name)(
    scriptTestObjectCancelButton,
    1,
    scriptTestObjectCancelButton->klass[1]._1.namespaze);
  scriptTestObjectCancelButton = (UnityEngine_Behaviour_o *)this->fields.forceObi169Sprite;
  if ( !scriptTestObjectCancelButton )
    goto LABEL_23;
  UnityEngine_Behaviour__set_enabled(
    scriptTestObjectCancelButton,
    ScriptManager_TypeInfo->static_fields->defaultForceObi_16_9,
    0);
  scriptTestObjectCancelButton = (UnityEngine_Behaviour_o *)this->fields.dispDisableDecryptScriptButton;
  if ( !scriptTestObjectCancelButton )
    goto LABEL_23;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, const char *))scriptTestObjectCancelButton->klass[1]._1.name)(
    scriptTestObjectCancelButton,
    1,
    scriptTestObjectCancelButton->klass[1]._1.namespaze);
  scriptTestObjectCancelButton = (UnityEngine_Behaviour_o *)ScriptObjectListViewItem_TypeInfo;
  dispDisableDecryptScriptSprite = (UnityEngine_Behaviour_o *)this->fields.dispDisableDecryptScriptSprite;
  if ( !ScriptObjectListViewItem_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptObjectListViewItem_TypeInfo);
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
LABEL_23:
    sub_1C3E7C0(scriptTestObjectCancelButton, v7);
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
  __int64 v9; // x0
  bool v10; // zf
  ScriptObjectListViewMenu_o *v11; // x0
  ScriptObjectListViewMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4C54358 & 1) == 0 )
  {
    sub_1C3E564(&ScriptObjectListViewMenu_CallbackFunc_TypeInfo);
    byte_4C54358 = 1;
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
    v9 = sub_1C787BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C3EA80(v8);
  ScriptObjectListViewMenu__remove_callbackFunc(v11, v12, v13);
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
  __int64 v9; // x0
  bool v10; // zf
  ScriptObjectListViewMenu_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4C54359 & 1) == 0 )
  {
    sub_1C3E564(&ScriptObjectListViewMenu_CallbackFunc_TypeInfo);
    byte_4C54359 = 1;
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
    v9 = sub_1C787BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C3EA80(v8);
  ScriptObjectListViewMenu__StartInput(v11, v12);
}


void ScriptObjectListViewMenu_CallbackFunc___ctor(
        ScriptObjectListViewMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C3E624(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C3E7DC(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C3E68C(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A8029C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A80244;
}


System_IAsyncResult_o *ScriptObjectListViewMenu_CallbackFunc__BeginInvoke(
        ScriptObjectListViewMenu_CallbackFunc_o *this,
        int32_t result,
        System_String_o *objectName,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v6; // x6
  __int64 v7; // x7
  _QWORD v13[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v14; // [xsp+2Ch] [xbp-34h] BYREF

  v14 = result;
  if ( (byte_4C54361 & 1) == 0 )
  {
    sub_1C3E564(&ScriptObjectListViewMenu_ResultKind_TypeInfo);
    byte_4C54361 = 1;
  }
  v13[2] = 0;
  v13[0] = j_il2cpp_value_box_0(
             ScriptObjectListViewMenu_ResultKind_TypeInfo,
             &v14,
             objectName,
             callback,
             object,
             method,
             v6,
             v7);
  v13[1] = objectName;
  return (System_IAsyncResult_o *)sub_1C3E518(this, v13, callback, object);
}


void ScriptObjectListViewMenu_CallbackFunc__EndInvoke(
        ScriptObjectListViewMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C3E51C(result, 0, method);
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