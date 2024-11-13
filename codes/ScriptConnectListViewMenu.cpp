void __fastcall ScriptConnectListViewMenu___ctor(ScriptConnectListViewMenu_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ScriptConnectListViewMenu__Callback(
        ScriptConnectListViewMenu_o *this,
        int32_t result,
        System_String_o *objectName,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_callbackFunc; // x0
  struct ScriptConnectListViewMenu_CallbackFunc_o *v9; // x21
  struct ScriptConnectListViewMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (PartyOrganizationUtility_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1BCA784(p_callbackFunc, 0LL, (int64_t)objectName, (int32_t)method, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, System_String_o *, _QWORD))v9->fields.m_target)(
      v9->fields.original_method_info,
      (unsigned int)result,
      objectName,
      *(_QWORD *)&v9->fields.extra_arg);
  }
}


void __fastcall ScriptConnectListViewMenu__Close(ScriptConnectListViewMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  ListViewManager_o *listViewManager; // x0
  PartyOrganizationUtility_o *p_scriptFileList; // x0

  ScriptConnectListViewMenu__EndInput(this, method);
  if ( this->fields.state )
  {
    listViewManager = (ListViewManager_o *)this->fields.listViewManager;
    if ( !listViewManager )
      goto LABEL_8;
    ListViewManager__DestroyList(listViewManager, 0LL);
    this->fields.state = 0;
  }
  p_scriptFileList = (PartyOrganizationUtility_o *)&this->fields.scriptFileList;
  if ( this->fields.scriptFileList )
  {
    p_scriptFileList->klass = 0LL;
    sub_1BCA784(p_scriptFileList, 0LL, v4, v5, v6, v7, v8, v9);
  }
  listViewManager = (ListViewManager_o *)this->fields.scriptTestObjectRootObject;
  if ( !listViewManager )
LABEL_8:
    sub_1BCAA3C(listViewManager, v3);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)listViewManager, 0, 0LL);
}


void __fastcall ScriptConnectListViewMenu__EndInput(ScriptConnectListViewMenu_o *this, const MethodInfo *method)
{
  ListViewManager_o *listViewManager; // x0

  if ( this->fields.state )
  {
    listViewManager = (ListViewManager_o *)this->fields.listViewManager;
    if ( !listViewManager
      || (ListViewManager__set_IsInput(listViewManager, 0, 0LL),
          (listViewManager = (ListViewManager_o *)this->fields.scriptTestObjectCancelButton) == 0LL)
      || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)listViewManager, 0, 0LL),
          (listViewManager = (ListViewManager_o *)this->fields.scriptTestObjectUpdateButton) == 0LL)
      || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)listViewManager, 0, 0LL),
          (listViewManager = (ListViewManager_o *)this->fields.jumpLineObjectInput) == 0LL) )
    {
      sub_1BCAA3C(listViewManager, method);
    }
    UILineInput__SetInputEnable((UILineInput_o *)listViewManager, 0, 0LL);
  }
}


int32_t __fastcall ScriptConnectListViewMenu__GetJumpLine(ScriptConnectListViewMenu_o *this, const MethodInfo *method)
{
  UILineInput_o *jumpLineObjectInput; // x0
  System_String_o *Text; // x19

  jumpLineObjectInput = this->fields.jumpLineObjectInput;
  if ( !jumpLineObjectInput )
    sub_1BCAA3C(0LL, method);
  Text = UILineInput__GetText(jumpLineObjectInput, 0LL);
  if ( System_String__IsNullOrEmpty(Text, 0LL) )
    return -1;
  else
    return System_Int32__Parse(Text, 0LL);
}


System_String_o *__fastcall ScriptConnectListViewMenu__GetJumpLineString(
        ScriptConnectListViewMenu_o *this,
        const MethodInfo *method)
{
  UILineInput_o *jumpLineObjectInput; // x0

  jumpLineObjectInput = this->fields.jumpLineObjectInput;
  if ( !jumpLineObjectInput )
    sub_1BCAA3C(0LL, method);
  return UILineInput__GetText(jumpLineObjectInput, 0LL);
}


void __fastcall ScriptConnectListViewMenu__OnClickCancel(ScriptConnectListViewMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( this->fields.state == 3 )
  {
    this->fields.state = 5;
    ScriptConnectListViewMenu__EndInput(this, method);
    ScriptConnectListViewMenu__Callback(this, 1, 0LL, v3);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptConnectListViewMenu__OnClickErrorDialog(
        ScriptConnectListViewMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x3

  this->fields.state = 5;
  ScriptConnectListViewMenu__EndInput(this, (const MethodInfo *)isDecide);
  ScriptConnectListViewMenu__Callback(this, 1, 0LL, v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptConnectListViewMenu__OnClickItem(
        ScriptConnectListViewMenu_o *this,
        int32_t result,
        ScriptConnectListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  System_String_o *path; // x2
  int32_t v10; // w1

  if ( this->fields.state == 3 )
  {
    if ( result == 3 )
    {
      this->fields.state = 5;
      ScriptConnectListViewMenu__EndInput(this, *(const MethodInfo **)&result);
      if ( item )
      {
        path = item->fields.path;
        v10 = 3;
        goto LABEL_9;
      }
LABEL_10:
      sub_1BCAA3C(v6, v7);
    }
    if ( result == 2 )
    {
      this->fields.state = 5;
      ScriptConnectListViewMenu__EndInput(this, *(const MethodInfo **)&result);
      if ( item )
      {
        path = item->fields.path;
        v10 = (unsigned int)&dword_0 + 2;
LABEL_9:
        ScriptConnectListViewMenu__Callback(this, v10, path, v8);
        return;
      }
      goto LABEL_10;
    }
  }
}


void __fastcall ScriptConnectListViewMenu__OnClickUpdate(ScriptConnectListViewMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewManager_o *listViewManager; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  const MethodInfo *v11; // x2

  if ( this->fields.state == 3 )
  {
    this->fields.state = 1;
    ScriptConnectListViewMenu__EndInput(this, method);
    listViewManager = (ListViewManager_o *)this->fields.listViewManager;
    if ( !listViewManager )
      sub_1BCAA3C(0LL, v3);
    ListViewManager__DestroyList(listViewManager, 0LL);
    this->fields.scriptFileList = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.scriptFileList, 0LL, v5, v6, v7, v8, v9, v10);
    ScriptConnectListViewMenu__RequestList(this, this->fields.path, v11);
  }
}


void __fastcall ScriptConnectListViewMenu__Open(
        ScriptConnectListViewMenu_o *this,
        System_String_o *path,
        System_String_o *objectName,
        System_String_o *jumpLine,
        ScriptConnectListViewMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int32_t state; // w8
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  __int64 v19; // x1
  UnityEngine_GameObject_o *scriptTestObjectRootObject; // x0
  struct System_String_o *v21; // x8
  int stringLength; // w9
  UILabel_o *scriptTestDefaultNameLabel; // x21
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  const MethodInfo *v30; // x2
  const MethodInfo *v31; // x1

  if ( (byte_4B13983 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIInput___, path, objectName);
    byte_4B13983 = 1;
  }
  state = this->fields.state;
  switch ( state )
  {
    case 6:
      goto LABEL_6;
    case 5:
      this->fields.callbackFunc = callback;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
        (int64_t)callback,
        (int64_t)objectName,
        (int32_t)jumpLine,
        (System_String_o *)callback,
        (BattleSetupInfo_o *)method,
        v6,
        v7);
      ScriptConnectListViewMenu__StartInput(this, v31);
      return;
    case 0:
LABEL_6:
      this->fields.path = path;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.path,
        (int64_t)path,
        (int64_t)objectName,
        (int32_t)jumpLine,
        (System_String_o *)callback,
        (BattleSetupInfo_o *)method,
        v6,
        v7);
      this->fields.callbackFunc = callback;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
        (int64_t)callback,
        v13,
        v14,
        v15,
        v16,
        v17,
        v18);
      scriptTestObjectRootObject = this->fields.scriptTestObjectRootObject;
      if ( !scriptTestObjectRootObject )
        goto LABEL_20;
      UnityEngine_GameObject__SetActive(scriptTestObjectRootObject, 1, 0LL);
      scriptTestObjectRootObject = (UnityEngine_GameObject_o *)this->fields.listViewManager;
      if ( !scriptTestObjectRootObject )
        goto LABEL_20;
      ListViewManager__set_IsInput((ListViewManager_o *)scriptTestObjectRootObject, 0, 0LL);
      scriptTestObjectRootObject = (UnityEngine_GameObject_o *)this->fields.scriptTestObjectCancelButton;
      if ( !scriptTestObjectRootObject )
        goto LABEL_20;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)scriptTestObjectRootObject, 0, 0LL);
      scriptTestObjectRootObject = (UnityEngine_GameObject_o *)this->fields.scriptTestObjectUpdateButton;
      if ( !scriptTestObjectRootObject )
        goto LABEL_20;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)scriptTestObjectRootObject, 0, 0LL);
      scriptTestObjectRootObject = (UnityEngine_GameObject_o *)this->fields.jumpLineObjectInput;
      if ( !scriptTestObjectRootObject )
        goto LABEL_20;
      UILineInput__SetInputEnable((UILineInput_o *)scriptTestObjectRootObject, 0, 0LL);
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
                                                                   0LL);
        v21 = (struct System_String_o *)scriptTestObjectRootObject;
      }
      if ( !scriptTestDefaultNameLabel
        || (UILabel__set_text(scriptTestDefaultNameLabel, v21, 0LL),
            (scriptTestObjectRootObject = (UnityEngine_GameObject_o *)this->fields.jumpLineObjectInput) == 0LL)
        || (scriptTestObjectRootObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                                       (UnityEngine_Component_o *)scriptTestObjectRootObject,
                                                                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIInput___)) == 0LL )
      {
LABEL_20:
        sub_1BCAA3C(scriptTestObjectRootObject, v19);
      }
      UIInput__set_value((UIInput_o *)scriptTestObjectRootObject, jumpLine, 0LL);
      this->fields.state = 1;
      this->fields.scriptFileList = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.scriptFileList, 0LL, v24, v25, v26, v27, v28, v29);
      ScriptConnectListViewMenu__RequestList(this, this->fields.path, v30);
      break;
  }
}


bool __fastcall ScriptConnectListViewMenu__RequestList(
        ScriptConnectListViewMenu_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  System_String_o *v35; // x20
  __int64 v36; // x1
  bool IsNullOrEmpty; // w8
  System_String_o *listViewManager; // x0
  System_String_o *v39; // x21
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  System_IO_DirectoryInfo_o *v43; // x22
  __int64 v44; // x0
  __int64 v45; // x1
  System_IO_FileInfo_array *Files_62589576; // x21
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  System_Collections_Generic_List_object__o *v50; // x22
  _BOOL8 v51; // x0
  __int64 v52; // x1
  int max_length; // w8
  int i; // w24
  System_IO_FileInfo_o *v55; // x0
  System_String_o *v56; // x0
  __int64 v57; // x1
  System_String_o *v58; // x23
  __int64 v59; // x1
  __int64 v60; // x1
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  struct System_Object_array *items; // x8
  _QWORD *v68; // x9
  __int64 size; // x10
  Il2CppClass **v70; // x0
  struct System_String_array *v71; // x0
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  const MethodInfo *v78; // x2
  const MethodInfo *v79; // x1
  Il2CppObject *Instance; // x21
  __int64 v81; // x1
  __int64 v82; // x2
  __int64 v83; // x3
  ErrorDialog_ClickDelegate_o *v84; // x22
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-70h]
  __int16 v87[2]; // [xsp+2Ch] [xbp-44h] BYREF

  if ( (byte_4B13984 & 1) == 0 )
  {
    sub_1BCA7E0(&char_TypeInfo, path, method);
    sub_1BCA7E0(&ErrorDialog_ClickDelegate_TypeInfo, v5, v6);
    sub_1BCA7E0(&System_IO_DirectoryInfo_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Add__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__ToArray__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string___ctor__, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_List_string__TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_ScriptConnectListViewMenu_OnClickErrorDialog__, v17, v18);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v19, v20);
    sub_1BCA7E0(&StringLiteral_19621/*"file://"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_22376/*"not find directory ["*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_4757/*"Connect Script Error"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_19622/*"file:///"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_851/*"*.txt"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_16236/*"]"*/, v33, v34);
    byte_4B13984 = 1;
  }
  v35 = (System_String_o *)StringLiteral_1/*""*/;
  v87[0] = 0;
  IsNullOrEmpty = System_String__IsNullOrEmpty(path, 0LL);
  listViewManager = 0LL;
  if ( !IsNullOrEmpty )
  {
    if ( path )
    {
      listViewManager = System_String__Replace_62420848(
                          path,
                          (System_String_o *)StringLiteral_19622/*"file:///"*/,
                          (System_String_o *)StringLiteral_1/*""*/,
                          0LL);
      if ( listViewManager )
      {
        v39 = System_String__Replace_62420848(
                listViewManager,
                (System_String_o *)StringLiteral_19621/*"file://"*/,
                (System_String_o *)StringLiteral_1/*""*/,
                0LL);
        if ( System_IO_Directory__Exists(v39, 0LL) )
        {
          v43 = (System_IO_DirectoryInfo_o *)sub_1BCAA2C(System_IO_DirectoryInfo_TypeInfo, v40, v41, v42);
          System_IO_DirectoryInfo___ctor(v43, v39, 0LL);
          if ( !v43 )
            sub_1BCAA3C(v44, v45);
          Files_62589576 = System_IO_DirectoryInfo__GetFiles_62589576(v43, (System_String_o *)StringLiteral_851/*"*.txt"*/, 0LL);
          v50 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                               System_Collections_Generic_List_string__TypeInfo,
                                                               v47,
                                                               v48,
                                                               v49);
          System_Collections_Generic_List_object____ctor(
            v50,
            (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
          if ( !Files_62589576 )
            sub_1BCAA3C(v51, v52);
          max_length = Files_62589576->max_length;
          if ( max_length >= 1 )
          {
            for ( i = 0; i < max_length; ++i )
            {
              if ( i >= (unsigned int)max_length )
                sub_1BCAA44(v51, v52);
              v55 = Files_62589576->m_Items[i];
              if ( !v55 )
                sub_1BCAA3C(0LL, v52);
              v56 = (System_String_o *)((__int64 (__fastcall *)(System_IO_FileInfo_o *, Il2CppMethodPointer))v55->klass->vtable._9_get_Name.method)(
                                         v55,
                                         v55->klass->vtable._10_get_Exists.methodPtr);
              v58 = v56;
              if ( !v56 )
                sub_1BCAA3C(0LL, v57);
              v87[0] = System_String__get_Chars(v56, 0, 0LL);
              if ( !char_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(char_TypeInfo, v59);
              v51 = System_Char__Equals_63033184((uint16_t)v87, 0x2Eu, 0LL);
              if ( !v51 )
              {
                v87[0] = System_String__get_Chars(v58, 0, 0LL);
                if ( !char_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(char_TypeInfo, v60);
                v51 = System_Char__Equals_63033184((uint16_t)v87, 0x5Fu, 0LL);
                if ( !v51 )
                {
                  if ( !v50 )
                    sub_1BCAA3C(v51, v52);
                  items = v50->fields._items;
                  v68 = Method_System_Collections_Generic_List_string__Add__;
                  ++v50->fields._version;
                  if ( !items )
                    sub_1BCAA3C(v51, v52);
                  size = v50->fields._size;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v50,
                      (Il2CppObject *)v58,
                      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v70 = &items->obj.klass + size;
                    v50->fields._size = size + 1;
                    v70[4] = (Il2CppClass *)v58;
                    sub_1BCA784((PartyOrganizationUtility_o *)(v70 + 4), (int64_t)v58, v61, v62, v63, v64, v65, v66);
                  }
                }
              }
              max_length = Files_62589576->max_length;
            }
          }
          if ( !v50 )
            sub_1BCAA3C(v51, v52);
          v71 = (struct System_String_array *)System_Collections_Generic_List_object___ToArray(
                                                v50,
                                                (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_string__ToArray__);
          this->fields.scriptFileList = v71;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&this->fields.scriptFileList,
            (int64_t)v71,
            v72,
            v73,
            v74,
            v75,
            v76,
            v77);
        }
        else
        {
          v35 = System_String__Concat_62412480(
                  (System_String_o *)StringLiteral_22376/*"not find directory ["*/,
                  v39,
                  (System_String_o *)StringLiteral_16236/*"]"*/,
                  0LL);
        }
        if ( System_String__IsNullOrEmpty(v35, 0LL) )
        {
          listViewManager = (System_String_o *)this->fields.listViewManager;
          if ( listViewManager )
          {
            ScriptConnectListViewManager__CreateList(
              (ScriptConnectListViewManager_o *)listViewManager,
              this->fields.scriptFileList,
              v78);
            ScriptConnectListViewMenu__StartInput(this, v79);
            LOBYTE(listViewManager) = 1;
            return (char)listViewManager;
          }
        }
        else
        {
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v84 = (ErrorDialog_ClickDelegate_o *)sub_1BCAA2C(ErrorDialog_ClickDelegate_TypeInfo, v81, v82, v83);
          ErrorDialog_ClickDelegate___ctor(
            v84,
            (Il2CppObject *)this,
            Method_ScriptConnectListViewMenu_OnClickErrorDialog__,
            0LL);
          if ( Instance )
          {
            *(_QWORD *)&effectDistance.fields.hasValue = 0LL;
            effectDistance.fields.value.fields.y = 0.0;
            CommonUI__OpenWarningDialog(
              (CommonUI_o *)Instance,
              (System_String_o *)StringLiteral_4757/*"Connect Script Error"*/,
              v35,
              v84,
              1,
              0,
              -1.0,
              1,
              effectDistance,
              0LL);
            LOBYTE(listViewManager) = 0;
            return (char)listViewManager;
          }
        }
      }
    }
    sub_1BCAA3C(listViewManager, v36);
  }
  return (char)listViewManager;
}


void __fastcall ScriptConnectListViewMenu__StartInput(ScriptConnectListViewMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  ScriptConnectListViewManager_o *listViewManager; // x20
  ScriptConnectListViewManager_CallbackFunc_o *v8; // x21
  const MethodInfo *v9; // x3
  UnityEngine_Behaviour_o *scriptTestObjectCancelButton; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3

  if ( (byte_4B13985 & 1) == 0 )
  {
    sub_1BCA7E0(&ScriptConnectListViewManager_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_ScriptConnectListViewMenu_OnClickItem__, v5, v6);
    byte_4B13985 = 1;
  }
  this->fields.state = 3;
  listViewManager = this->fields.listViewManager;
  v8 = (ScriptConnectListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                        ScriptConnectListViewManager_CallbackFunc_TypeInfo,
                                                        method,
                                                        v2,
                                                        v3);
  ScriptConnectListViewManager_CallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    Method_ScriptConnectListViewMenu_OnClickItem__,
    v9);
  if ( !listViewManager
    || (ScriptConnectListViewManager__SetMode_35538768(listViewManager, 1, v8, v12),
        (scriptTestObjectCancelButton = (UnityEngine_Behaviour_o *)this->fields.scriptTestObjectCancelButton) == 0LL)
    || (UnityEngine_Behaviour__set_enabled(scriptTestObjectCancelButton, 1, 0LL),
        (scriptTestObjectCancelButton = (UnityEngine_Behaviour_o *)this->fields.scriptTestObjectUpdateButton) == 0LL)
    || (UnityEngine_Behaviour__set_enabled(scriptTestObjectCancelButton, 1, 0LL),
        (scriptTestObjectCancelButton = (UnityEngine_Behaviour_o *)this->fields.jumpLineObjectInput) == 0LL) )
  {
    sub_1BCAA3C(scriptTestObjectCancelButton, v11);
  }
  UILineInput__SetInputEnable((UILineInput_o *)scriptTestObjectCancelButton, 1, 0LL);
}


void __fastcall ScriptConnectListViewMenu__add_callbackFunc(
        ScriptConnectListViewMenu_o *this,
        ScriptConnectListViewMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ScriptConnectListViewMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ScriptConnectListViewMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ScriptConnectListViewMenu_o *v11; // x0
  ScriptConnectListViewMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4B13981 & 1) == 0 )
  {
    sub_1BCA7E0(&ScriptConnectListViewMenu_CallbackFunc_TypeInfo, value, method);
    byte_4B13981 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ScriptConnectListViewMenu_CallbackFunc_c *)v8->klass != ScriptConnectListViewMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BCACFC(v8);
  ScriptConnectListViewMenu__remove_callbackFunc(v11, v12, v13);
}


void __fastcall ScriptConnectListViewMenu__remove_callbackFunc(
        ScriptConnectListViewMenu_o *this,
        ScriptConnectListViewMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ScriptConnectListViewMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ScriptConnectListViewMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ScriptConnectListViewMenu_o *v11; // x0
  System_String_o *v12; // x1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  ScriptConnectListViewMenu_CallbackFunc_o *v15; // x4
  const MethodInfo *v16; // x5

  if ( (byte_4B13982 & 1) == 0 )
  {
    sub_1BCA7E0(&ScriptConnectListViewMenu_CallbackFunc_TypeInfo, value, method);
    byte_4B13982 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ScriptConnectListViewMenu_CallbackFunc_c *)v8->klass != ScriptConnectListViewMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BCACFC(v8);
  ScriptConnectListViewMenu__Open(v11, v12, v13, v14, v15, v16);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptConnectListViewMenu_CallbackFunc___ctor(
        ScriptConnectListViewMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 2 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A0A080;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0A028;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall ScriptConnectListViewMenu_CallbackFunc__BeginInvoke(
        ScriptConnectListViewMenu_CallbackFunc_o *this,
        int32_t result,
        System_String_o *objectName,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v11[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v12; // [xsp+2Ch] [xbp-34h] BYREF

  v12 = result;
  if ( (byte_4B13986 & 1) == 0 )
  {
    sub_1BCA7E0(&ScriptConnectListViewMenu_ResultKind_TypeInfo, *(_QWORD *)&result, objectName);
    byte_4B13986 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(ScriptConnectListViewMenu_ResultKind_TypeInfo, &v12);
  v11[1] = (__int64)objectName;
  return (System_IAsyncResult_o *)sub_1BCA794(this, v11, callback, object);
}


void __fastcall ScriptConnectListViewMenu_CallbackFunc__EndInvoke(
        ScriptConnectListViewMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
}


void __fastcall ScriptConnectListViewMenu_CallbackFunc__Invoke(
        ScriptConnectListViewMenu_CallbackFunc_o *this,
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