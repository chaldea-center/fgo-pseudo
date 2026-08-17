void ScriptPlayListViewMenu___ctor(ScriptPlayListViewMenu_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ScriptPlayListViewMenu__Callback(
        ScriptPlayListViewMenu_o *this,
        int32_t result,
        System_String_o *objectName,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x0
  struct ScriptPlayListViewMenu_CallbackFunc_o *v9; // x21
  struct ScriptPlayListViewMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_2213A04(p_callbackFunc, 0, objectName, (System_String_o *)method, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, _QWORD, System_String_o *, intptr_t))v9->fields.invoke_impl)(
      v9->fields.method_code,
      (unsigned int)result,
      objectName,
      v9->fields.method);
  }
}


void ScriptPlayListViewMenu__Close(ScriptPlayListViewMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  ListViewManager_o *listViewManager; // x0
  MissionNaviTransitionBoardItem_o *p_scriptFileList; // x0

  ScriptPlayListViewMenu__EndInput(this, method);
  if ( this->fields.state )
  {
    listViewManager = (ListViewManager_o *)this->fields.listViewManager;
    if ( !listViewManager )
      goto LABEL_8;
    ListViewManager__DestroyList(listViewManager, 0);
    this->fields.state = 0;
  }
  p_scriptFileList = (MissionNaviTransitionBoardItem_o *)&this->fields.scriptFileList;
  if ( this->fields.scriptFileList )
  {
    p_scriptFileList->klass = 0;
    sub_2213A04(p_scriptFileList, 0, v4, v5, v6, v7, v8, v9);
  }
  listViewManager = (ListViewManager_o *)this->fields.scriptTestObjectRootObject;
  if ( !listViewManager )
LABEL_8:
    sub_2213CDC(listViewManager, v3);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)listViewManager, 0, 0);
}


void ScriptPlayListViewMenu__EndInput(ScriptPlayListViewMenu_o *this, const MethodInfo *method)
{
  ListViewManager_o *listViewManager; // x0

  if ( this->fields.state )
  {
    listViewManager = (ListViewManager_o *)this->fields.listViewManager;
    if ( !listViewManager
      || (ListViewManager__set_IsInput(listViewManager, 0, 0),
          (listViewManager = (ListViewManager_o *)this->fields.scriptTestObjectCancelButton) == 0)
      || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)listViewManager, 0, 0),
          (listViewManager = (ListViewManager_o *)this->fields.scriptTestObjectUpdateButton) == 0)
      || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)listViewManager, 0, 0),
          (listViewManager = (ListViewManager_o *)this->fields.jumpLineObjectInput) == 0) )
    {
      sub_2213CDC(listViewManager, method);
    }
    UILineInput__SetInputEnable((UILineInput_o *)listViewManager, 0, 0);
  }
}


int32_t ScriptPlayListViewMenu__GetJumpLine(ScriptPlayListViewMenu_o *this, const MethodInfo *method)
{
  UILineInput_o *jumpLineObjectInput; // x0
  System_String_o *Text; // x19

  jumpLineObjectInput = this->fields.jumpLineObjectInput;
  if ( !jumpLineObjectInput )
    sub_2213CDC(0, method);
  Text = UILineInput__GetText(jumpLineObjectInput, 0);
  if ( System_String__IsNullOrEmpty(Text, 0) )
    return -1;
  else
    return System_Int32__Parse(Text, 0);
}


System_String_o *ScriptPlayListViewMenu__GetJumpLineString(ScriptPlayListViewMenu_o *this, const MethodInfo *method)
{
  UILineInput_o *jumpLineObjectInput; // x0

  jumpLineObjectInput = this->fields.jumpLineObjectInput;
  if ( !jumpLineObjectInput )
    sub_2213CDC(0, method);
  return UILineInput__GetText(jumpLineObjectInput, 0);
}


void ScriptPlayListViewMenu__OnClickCancel(ScriptPlayListViewMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( this->fields.state == 3 )
  {
    this->fields.state = 5;
    ScriptPlayListViewMenu__EndInput(this, method);
    ScriptPlayListViewMenu__Callback(this, 1, 0, v3);
  }
}


// local variable allocation has failed, the output may be wrong!
void ScriptPlayListViewMenu__OnClickErrorDialog(
        ScriptPlayListViewMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x3

  this->fields.state = 5;
  ScriptPlayListViewMenu__EndInput(this, (const MethodInfo *)isDecide);
  ScriptPlayListViewMenu__Callback(this, 1, 0, v4);
}


// local variable allocation has failed, the output may be wrong!
void ScriptPlayListViewMenu__OnClickItem(
        ScriptPlayListViewMenu_o *this,
        int32_t result,
        ScriptPlayListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3

  if ( this->fields.state == 3 && (result == 3 || result == 2) )
  {
    this->fields.state = 5;
    ScriptPlayListViewMenu__EndInput(this, *(const MethodInfo **)&result);
    if ( !item )
      sub_2213CDC(v7, v8);
    ScriptPlayListViewMenu__Callback(this, result, item->fields.path, v9);
  }
}


void ScriptPlayListViewMenu__OnClickUpdate(ScriptPlayListViewMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewManager_o *listViewManager; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  const MethodInfo *v11; // x2

  if ( this->fields.state == 3 )
  {
    this->fields.state = 1;
    ScriptPlayListViewMenu__EndInput(this, method);
    listViewManager = (ListViewManager_o *)this->fields.listViewManager;
    if ( !listViewManager )
      sub_2213CDC(0, v3);
    ListViewManager__DestroyList(listViewManager, 0);
    this->fields.scriptFileList = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.scriptFileList, 0, v5, v6, v7, v8, v9, v10);
    ScriptPlayListViewMenu__RequestList(this, this->fields.path, v11);
  }
}


void ScriptPlayListViewMenu__Open(
        ScriptPlayListViewMenu_o *this,
        System_String_o *path,
        System_String_o *objectName,
        System_String_o *jumpLine,
        ScriptPlayListViewMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  bool v6; // w6
  bool v7; // w7
  int32_t state; // w8
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  __int64 v19; // x1
  UnityEngine_GameObject_o *scriptTestObjectRootObject; // x0
  struct System_String_o *v21; // x8
  int stringLength; // w9
  UILabel_o *scriptTestDefaultNameLabel; // x21
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  const MethodInfo *v30; // x2
  const MethodInfo *v31; // x1

  if ( (byte_596DD57 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIInput___);
    byte_596DD57 = 1;
  }
  state = this->fields.state;
  switch ( state )
  {
    case 6:
      goto LABEL_6;
    case 5:
      this->fields.callbackFunc = callback;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
        (int32_t)callback,
        objectName,
        jumpLine,
        (int32_t)callback,
        (int32_t)method,
        v6,
        v7);
      ScriptPlayListViewMenu__StartInput(this, v31);
      return;
    case 0:
LABEL_6:
      this->fields.path = path;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.path,
        (int32_t)path,
        objectName,
        jumpLine,
        (int32_t)callback,
        (int32_t)method,
        v6,
        v7);
      this->fields.callbackFunc = callback;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
        (int32_t)callback,
        v13,
        v14,
        v15,
        v16,
        v17,
        v18);
      scriptTestObjectRootObject = this->fields.scriptTestObjectRootObject;
      if ( !scriptTestObjectRootObject )
        goto LABEL_20;
      UnityEngine_GameObject__SetActive(scriptTestObjectRootObject, 1, 0);
      scriptTestObjectRootObject = (UnityEngine_GameObject_o *)this->fields.listViewManager;
      if ( !scriptTestObjectRootObject )
        goto LABEL_20;
      ListViewManager__set_IsInput((ListViewManager_o *)scriptTestObjectRootObject, 0, 0);
      scriptTestObjectRootObject = (UnityEngine_GameObject_o *)this->fields.scriptTestObjectCancelButton;
      if ( !scriptTestObjectRootObject )
        goto LABEL_20;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)scriptTestObjectRootObject, 0, 0);
      scriptTestObjectRootObject = (UnityEngine_GameObject_o *)this->fields.scriptTestObjectUpdateButton;
      if ( !scriptTestObjectRootObject )
        goto LABEL_20;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)scriptTestObjectRootObject, 0, 0);
      scriptTestObjectRootObject = (UnityEngine_GameObject_o *)this->fields.jumpLineObjectInput;
      if ( !scriptTestObjectRootObject )
        goto LABEL_20;
      UILineInput__SetInputEnable((UILineInput_o *)scriptTestObjectRootObject, 0, 0);
      v21 = this->fields.path;
      if ( !v21 )
        goto LABEL_20;
      stringLength = v21->fields._stringLength;
      scriptTestDefaultNameLabel = this->fields.scriptTestDefaultNameLabel;
      if ( stringLength >= 31 )
      {
        scriptTestObjectRootObject = (UnityEngine_GameObject_o *)System_String__Substring(
                                                                   this->fields.path,
                                                                   stringLength - 30,
                                                                   0);
        v21 = (struct System_String_o *)scriptTestObjectRootObject;
      }
      if ( !scriptTestDefaultNameLabel
        || (UILabel__set_text(scriptTestDefaultNameLabel, v21, 0),
            (scriptTestObjectRootObject = (UnityEngine_GameObject_o *)this->fields.jumpLineObjectInput) == 0)
        || (scriptTestObjectRootObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                                       (UnityEngine_Component_o *)scriptTestObjectRootObject,
                                                                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIInput___)) == 0 )
      {
LABEL_20:
        sub_2213CDC(scriptTestObjectRootObject, v19);
      }
      UIInput__set_value((UIInput_o *)scriptTestObjectRootObject, jumpLine, 0);
      this->fields.state = 1;
      this->fields.scriptFileList = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.scriptFileList, 0, v24, v25, v26, v27, v28, v29);
      ScriptPlayListViewMenu__RequestList(this, this->fields.path, v30);
      break;
  }
}


bool ScriptPlayListViewMenu__RequestList(
        ScriptPlayListViewMenu_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  System_IO_DirectoryInfo_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_IO_FileInfo_array *Files_76917804; // x20
  System_Collections_Generic_List_object__o *v9; // x21
  _BOOL8 v10; // x0
  __int64 v11; // x1
  int max_length; // w8
  int i; // w25
  System_IO_FileInfo_o *v14; // x0
  System_String_o *v15; // x0
  __int64 v16; // x1
  System_String_o *v17; // x22
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0
  struct System_String_array *v32; // x0
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  __int64 v39; // x1
  const MethodInfo *v40; // x2
  System_String_o *v41; // x20
  Il2CppObject *Instance; // x21
  ErrorDialog_ClickDelegate_o *v43; // x22
  ScriptPlayListViewManager_o *listViewManager; // x0
  const MethodInfo *v46; // x1
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-70h]
  _WORD v48[2]; // [xsp+2Ch] [xbp-44h] BYREF

  if ( (byte_596DD58 & 1) == 0 )
  {
    sub_2213A60(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&System_IO_DirectoryInfo_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_string___ctor__);
    sub_2213A60(&System_Collections_Generic_List_string__TypeInfo);
    sub_2213A60(&Method_ScriptPlayListViewMenu_OnClickErrorDialog__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&StringLiteral_23421/*"not find directory ["*/);
    sub_2213A60(&StringLiteral_4838/*"Connect Script Error"*/);
    sub_2213A60(&StringLiteral_857/*"*.txt"*/);
    sub_2213A60(&StringLiteral_16691/*"]"*/);
    byte_596DD58 = 1;
  }
  v48[0] = 0;
  if ( System_IO_Directory__Exists(path, 0) )
  {
    v5 = (System_IO_DirectoryInfo_o *)sub_2213CCC(System_IO_DirectoryInfo_TypeInfo);
    System_IO_DirectoryInfo___ctor(v5, path, 0);
    if ( !v5 )
      sub_2213CDC(v6, v7);
    Files_76917804 = System_IO_DirectoryInfo__GetFiles_76917804(v5, (System_String_o *)StringLiteral_857/*"*.txt"*/, 0);
    v9 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v9,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_string___ctor__);
    if ( !Files_76917804 )
      sub_2213CDC(v10, v11);
    max_length = Files_76917804->max_length;
    if ( max_length >= 1 )
    {
      for ( i = 0; i < max_length; ++i )
      {
        if ( i >= (unsigned int)max_length )
          sub_2213CE4(v10);
        v14 = Files_76917804->m_Items[i];
        if ( !v14 )
          sub_2213CDC(0, v11);
        v15 = (System_String_o *)((__int64 (__fastcall *)(System_IO_FileInfo_o *, const MethodInfo *))v14->klass->vtable._9_get_Name.methodPtr)(
                                   v14,
                                   v14->klass->vtable._9_get_Name.method);
        v17 = v15;
        if ( !v15 )
          sub_2213CDC(0, v16);
        v48[0] = System_String__get_Chars(v15, 0, 0);
        if ( !*(_DWORD *)(qword_5984388 + 228) )
          j_il2cpp_runtime_class_init_0(qword_5984388, v18, v19);
        v10 = System_Char__Equals_76665424((uint16_t)v48, 0x2Eu, 0);
        if ( !v10 )
        {
          v48[0] = System_String__get_Chars(v17, 0, 0);
          if ( !*(_DWORD *)(qword_5984388 + 228) )
            j_il2cpp_runtime_class_init_0(qword_5984388, v20, v21);
          v10 = System_Char__Equals_76665424((uint16_t)v48, 0x5Fu, 0);
          if ( !v10 )
          {
            if ( !v9
              || (items = v9->fields._items,
                  v29 = Method_System_Collections_Generic_List_string__Add__,
                  ++v9->fields._version,
                  !items) )
            {
              sub_2213CDC(v10, v11);
            }
            size = v9->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v9,
                (Il2CppObject *)v17,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
            }
            else
            {
              v31 = &items->obj.klass + size;
              v9->fields._size = size + 1;
              v31[4] = (Il2CppClass *)v17;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v31 + 4), (int32_t)v17, v22, v23, v24, v25, v26, v27);
            }
          }
        }
        max_length = Files_76917804->max_length;
      }
    }
    if ( !v9 )
      sub_2213CDC(v10, v11);
    v32 = (struct System_String_array *)System_Collections_Generic_List_object___ToArray(
                                          v9,
                                          (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_string__ToArray__);
    this->fields.scriptFileList = v32;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.scriptFileList,
      (int32_t)v32,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
  }
  else
  {
    v41 = System_String__Concat_75694928(
            (System_String_o *)StringLiteral_23421/*"not find directory ["*/,
            path,
            (System_String_o *)StringLiteral_16691/*"]"*/,
            0);
    if ( v41 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v43 = (ErrorDialog_ClickDelegate_o *)sub_2213CCC(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(v43, (Il2CppObject *)this, Method_ScriptPlayListViewMenu_OnClickErrorDialog__, 0);
      if ( Instance )
      {
        *(_QWORD *)&effectDistance.fields.hasValue = 0;
        effectDistance.fields.value.fields.y = 0.0;
        CommonUI__OpenWarningDialog(
          (CommonUI_o *)Instance,
          (System_String_o *)StringLiteral_4838/*"Connect Script Error"*/,
          v41,
          v43,
          1,
          0,
          -1.0,
          1,
          effectDistance,
          0);
        return 0;
      }
LABEL_38:
      sub_2213CDC(listViewManager, v39);
    }
  }
  listViewManager = this->fields.listViewManager;
  if ( !listViewManager )
    goto LABEL_38;
  ScriptPlayListViewManager__CreateList(listViewManager, this->fields.scriptFileList, v40);
  ScriptPlayListViewMenu__StartInput(this, v46);
  return 1;
}


void ScriptPlayListViewMenu__StartInput(ScriptPlayListViewMenu_o *this, const MethodInfo *method)
{
  ScriptPlayListViewManager_CallbackFunc_c *v3; // x0
  ScriptPlayListViewManager_o *listViewManager; // x20
  ScriptPlayListViewManager_CallbackFunc_o *v5; // x21
  const MethodInfo *v6; // x3
  UnityEngine_Behaviour_o *scriptTestObjectCancelButton; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3

  if ( (byte_596DD59 & 1) == 0 )
  {
    sub_2213A60(&ScriptPlayListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_ScriptPlayListViewMenu_OnClickItem__);
    byte_596DD59 = 1;
  }
  v3 = ScriptPlayListViewManager_CallbackFunc_TypeInfo;
  listViewManager = this->fields.listViewManager;
  this->fields.state = 3;
  v5 = (ScriptPlayListViewManager_CallbackFunc_o *)sub_2213CCC(v3);
  ScriptPlayListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    Method_ScriptPlayListViewMenu_OnClickItem__,
    v6);
  if ( !listViewManager
    || (ScriptPlayListViewManager__SetMode_44373972(listViewManager, 1, v5, v9),
        (scriptTestObjectCancelButton = (UnityEngine_Behaviour_o *)this->fields.scriptTestObjectCancelButton) == 0)
    || (UnityEngine_Behaviour__set_enabled(scriptTestObjectCancelButton, 1, 0),
        (scriptTestObjectCancelButton = (UnityEngine_Behaviour_o *)this->fields.scriptTestObjectUpdateButton) == 0)
    || (UnityEngine_Behaviour__set_enabled(scriptTestObjectCancelButton, 1, 0),
        (scriptTestObjectCancelButton = (UnityEngine_Behaviour_o *)this->fields.jumpLineObjectInput) == 0) )
  {
    sub_2213CDC(scriptTestObjectCancelButton, v8);
  }
  UILineInput__SetInputEnable((UILineInput_o *)scriptTestObjectCancelButton, 1, 0);
}


void ScriptPlayListViewMenu__add_callbackFunc(
        ScriptPlayListViewMenu_o *this,
        ScriptPlayListViewMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ScriptPlayListViewMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ScriptPlayListViewMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  ScriptPlayListViewMenu_o *v13; // x0
  ScriptPlayListViewMenu_CallbackFunc_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_596DD55 & 1) == 0 )
  {
    sub_2213A60(&ScriptPlayListViewMenu_CallbackFunc_TypeInfo);
    byte_596DD55 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (ScriptPlayListViewMenu_CallbackFunc_c *)v8->klass != ScriptPlayListViewMenu_CallbackFunc_TypeInfo )
        break;
    }
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_221405C(v8, ScriptPlayListViewMenu_CallbackFunc_TypeInfo, v9, v10);
  ScriptPlayListViewMenu__remove_callbackFunc(v13, v14, v15);
}


void ScriptPlayListViewMenu__remove_callbackFunc(
        ScriptPlayListViewMenu_o *this,
        ScriptPlayListViewMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ScriptPlayListViewMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ScriptPlayListViewMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  ScriptPlayListViewMenu_o *v13; // x0
  System_String_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_596DD56 & 1) == 0 )
  {
    sub_2213A60(&ScriptPlayListViewMenu_CallbackFunc_TypeInfo);
    byte_596DD56 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (ScriptPlayListViewMenu_CallbackFunc_c *)v8->klass != ScriptPlayListViewMenu_CallbackFunc_TypeInfo )
        break;
    }
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_221405C(v8, ScriptPlayListViewMenu_CallbackFunc_TypeInfo, v9, v10);
  ScriptPlayListViewMenu__RequestList(v13, v14, v15);
}


void ScriptPlayListViewMenu_CallbackFunc___ctor(
        ScriptPlayListViewMenu_CallbackFunc_o *this,
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
  sub_2213A04(
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
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_2008C2C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_2008BD4;
}


System_IAsyncResult_o *ScriptPlayListViewMenu_CallbackFunc__BeginInvoke(
        ScriptPlayListViewMenu_CallbackFunc_o *this,
        int32_t result,
        System_String_o *objectName,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v11[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v12; // [xsp+2Ch] [xbp-34h] BYREF

  v12 = result;
  if ( (byte_596DD5A & 1) == 0 )
  {
    sub_2213A60(&ScriptPlayListViewMenu_ResultKind_TypeInfo);
    byte_596DD5A = 1;
  }
  v11[2] = 0;
  v11[0] = j_il2cpp_value_box_0(ScriptPlayListViewMenu_ResultKind_TypeInfo, &v12);
  v11[1] = objectName;
  return (System_IAsyncResult_o *)sub_2213A14(this, v11, callback, object);
}


void ScriptPlayListViewMenu_CallbackFunc__EndInvoke(
        ScriptPlayListViewMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
}


void ScriptPlayListViewMenu_CallbackFunc__Invoke(
        ScriptPlayListViewMenu_CallbackFunc_o *this,
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