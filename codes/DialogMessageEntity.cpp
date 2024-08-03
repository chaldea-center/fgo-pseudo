void __fastcall DialogMessageEntity___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49FC285 & 1) == 0 )
  {
    sub_1B640C8(&DialogMessageEntity_TypeInfo, v1);
    byte_49FC285 = 1;
  }
  *DialogMessageEntity_TypeInfo->static_fields = (struct DialogMessageEntity_StaticFields)0x1E0000001ALL;
}


void __fastcall DialogMessageEntity___ctor(DialogMessageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FC284 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataEntityBase_int___ctor__, method);
    byte_49FC284 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_30D3CA4 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall DialogMessageEntity__CreatePrimaryKey(DialogMessageEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t __fastcall DialogMessageEntity__GetCommonReleaseId(DialogMessageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FC280 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_18100/*"commonReleaseId"*/, method);
    byte_49FC280 = 1;
  }
  return DialogMessageEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_18100/*"commonReleaseId"*/, 0, v2);
}


int32_t __fastcall DialogMessageEntity__GetOpenType(DialogMessageEntity_o *this, const MethodInfo *method)
{
  return this->fields.dialogOpenType;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall DialogMessageEntity__GetScriptIntParam(
        DialogMessageEntity_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  int32_t v4; // w19
  Il2CppObject *ScriptObj; // x0
  __int64 v8; // x2
  __int64 v9; // x3
  DialogMessageEntity_o *v11; // x0
  System_String_o *v12; // x1
  const MethodInfo *v13; // x2

  v4 = defVal;
  if ( (byte_49FC283 & 1) == 0 )
  {
    sub_1B640C8(&long_TypeInfo, key);
    byte_49FC283 = 1;
  }
  ScriptObj = DialogMessageEntity__GetScriptObj(this, key, *(const MethodInfo **)&defVal);
  if ( !ScriptObj )
    return v4;
  if ( ScriptObj->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObj, long_TypeInfo, v8, v9);
  sub_1B645E4(ScriptObj);
  return (unsigned int)DialogMessageEntity__GetScriptObj(v11, v12, v13);
}


Il2CppObject *__fastcall DialogMessageEntity__GetScriptObj(
        DialogMessageEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *result; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FC281 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    byte_49FC281 = 1;
  }
  value = 0LL;
  result = (Il2CppObject *)this->fields.script;
  if ( result )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)result,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_317AC04 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      return value;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}


System_String_o *__fastcall DialogMessageEntity__GetScriptStr(
        DialogMessageEntity_o *this,
        System_String_o *key,
        System_String_o *defVal,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v10; // x0
  Il2CppObject *Item; // x0
  DialogMessageEntity_o *v13; // x0
  System_String_o *v14; // x1
  int32_t v15; // w2
  const MethodInfo *v16; // x3

  if ( (byte_49FC282 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_1B640C8(&string_TypeInfo, v8);
    byte_49FC282 = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  v10 = this->fields.script;
  if ( !v10 )
    sub_1B64324(0LL);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)v10,
           (Il2CppObject *)key,
           (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  defVal = (System_String_o *)Item;
  if ( !Item || (System_String_c *)Item->klass == string_TypeInfo )
    return defVal;
  sub_1B645E4(Item);
  return (System_String_o *)DialogMessageEntity__GetScriptIntParam(v13, v14, v15, v16);
}


System_Int32_array_array *__fastcall DialogMessageEntity__GetTargets(
        DialogMessageEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_String_array *targetIds; // x8
  System_String_o *v11; // x0
  __int64 v12; // x1
  struct System_String_array *v13; // x8
  System_Int32_array_array *v14; // x20
  __int64 v15; // x25
  ServantStatusBattleListViewItem_o *p_monitor; // x21
  int max_length; // w9
  System_String_array *v18; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  DialogMessageEntity___c_c *v21; // x8
  System_Object_array *v22; // x22
  System_Converter_object__int__o *_9__14_0; // x23
  Il2CppObject *v24; // x24
  struct DialogMessageEntity___c_StaticFields *static_fields; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  int32_t v28; // w2
  int32_t v29; // w3

  if ( (byte_49FC279 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_ConvertAll_string__int___, method);
    sub_1B640C8(&System_Converter_string__int__TypeInfo, v3);
    sub_1B640C8(&int_____TypeInfo, v4);
    sub_1B640C8(&Method_DialogMessageEntity___c__GetTargets_b__14_0__, v5);
    sub_1B640C8(&DialogMessageEntity___c_TypeInfo, v6);
    sub_1B640C8(&StringLiteral_15744/*"["*/, v7);
    sub_1B640C8(&StringLiteral_1/*""*/, v8);
    sub_1B640C8(&StringLiteral_16000/*"]"*/, v9);
    byte_49FC279 = 1;
  }
  targetIds = this->fields.targetIds;
  if ( !targetIds )
    return (System_Int32_array_array *)sub_1B64170(int_____TypeInfo, 1LL);
  v11 = (System_String_o *)sub_1B64170(int_____TypeInfo, targetIds->max_length);
  v13 = this->fields.targetIds;
  if ( !v13 )
LABEL_20:
    sub_1B64324(v11);
  v14 = (System_Int32_array_array *)v11;
  v15 = 0LL;
  p_monitor = (ServantStatusBattleListViewItem_o *)&v11[1].monitor;
  while ( 1 )
  {
    max_length = v13->max_length;
    if ( (int)v15 >= max_length )
      return v14;
    if ( (unsigned int)v15 >= max_length )
      goto LABEL_23;
    v11 = v13->m_Items[v15];
    if ( v11 )
    {
      v11 = System_String__Replace_61395016(
              v11,
              (System_String_o *)StringLiteral_15744/*"["*/,
              (System_String_o *)StringLiteral_1/*""*/,
              0LL);
      if ( v11 )
      {
        v11 = System_String__Replace_61395016(
                v11,
                (System_String_o *)StringLiteral_16000/*"]"*/,
                (System_String_o *)StringLiteral_1/*""*/,
                0LL);
        if ( v11 )
        {
          v18 = System_String__Split(v11, 0x2Cu, 0, 0LL);
          v21 = DialogMessageEntity___c_TypeInfo;
          v22 = (System_Object_array *)v18;
          if ( !DialogMessageEntity___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DialogMessageEntity___c_TypeInfo);
            v21 = DialogMessageEntity___c_TypeInfo;
          }
          _9__14_0 = (System_Converter_object__int__o *)v21->static_fields->__9__14_0;
          if ( !_9__14_0 )
          {
            if ( !v21->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v21);
              v21 = DialogMessageEntity___c_TypeInfo;
            }
            v24 = (Il2CppObject *)v21->static_fields->__9;
            _9__14_0 = (System_Converter_object__int__o *)sub_1B64314(System_Converter_string__int__TypeInfo, v19, v20);
            System_Converter_object__int____ctor(
              _9__14_0,
              v24,
              Method_DialogMessageEntity___c__GetTargets_b__14_0__,
              0LL);
            static_fields = DialogMessageEntity___c_TypeInfo->static_fields;
            static_fields->__9__14_0 = (struct System_Converter_string__int__o *)_9__14_0;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__14_0, (int32_t)_9__14_0, v26, v27);
          }
          v11 = (System_String_o *)System_Array__ConvertAll_object__int_(
                                     v22,
                                     (System_Converter_TInput__TOutput__o *)_9__14_0,
                                     (const MethodInfo_2F2E8A0 *)Method_System_Array_ConvertAll_string__int___);
          if ( v14 )
          {
            if ( (unsigned int)v15 >= v14->max_length )
LABEL_23:
              sub_1B6432C(v11, v12);
            p_monitor->klass = (ServantStatusBattleListViewItem_c *)v11;
            sub_1B6406C(p_monitor, (int32_t)v11, v28, v29);
            v13 = this->fields.targetIds;
            ++v15;
            p_monitor = (ServantStatusBattleListViewItem_o *)((char *)p_monitor + 8);
            if ( v13 )
              continue;
          }
        }
      }
    }
    goto LABEL_20;
  }
}


System_String_array *__fastcall DialogMessageEntity__GetTransitionParam(
        DialogMessageEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1
  System_String_o *ScriptStr; // x0

  if ( (byte_49FC27F & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_23948/*"transitionParam"*/, method);
    sub_1B640C8(&StringLiteral_1/*""*/, v4);
    byte_49FC27F = 1;
  }
  ScriptStr = DialogMessageEntity__GetScriptStr(
                this,
                (System_String_o *)StringLiteral_23948/*"transitionParam"*/,
                (System_String_o *)StringLiteral_1/*""*/,
                v2);
  if ( !ScriptStr )
    sub_1B64324(0LL);
  return System_String__Split(ScriptStr, 0x2Fu, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall DialogMessageEntity__IsOpenCondition(
        DialogMessageEntity_o *this,
        int32_t ex1,
        int32_t ex2,
        int32_t ex3,
        int32_t ex4,
        const MethodInfo *method)
{
  __int64 v7; // x1
  unsigned int v8; // w21
  const MethodInfo *v9; // x1
  Il2CppObject *Master_object; // x20
  const MethodInfo *v11; // x1
  __int64 CommonReleaseId; // x0
  const MethodInfo *v13; // x4

  if ( (byte_49FC27C & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_CommonReleaseMaster___, *(_QWORD *)&ex1);
    sub_1B640C8(&DataManager_TypeInfo, v7);
    byte_49FC27C = 1;
  }
  DialogMessageEntity__GetTargets(this, *(const MethodInfo **)&ex1);
  v8 = this->fields.dialogOpenType - 1;
  if ( !DialogMessageEntity__GetCommonReleaseId(this, v9) )
    return v8 < 2;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  CommonReleaseId = DialogMessageEntity__GetCommonReleaseId(this, v11);
  if ( !Master_object )
    sub_1B64324(CommonReleaseId);
  return (v8 < 2) & CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Master_object, CommonReleaseId, 0LL, 0, v13);
}


bool __fastcall DialogMessageEntity__IsOpenTime(DialogMessageEntity_o *this, int64_t now, const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  DialogMessageEntity_o *v5; // x20
  __int64 v6; // x1
  int32_t openedAt; // w8
  Il2CppObject *Master_object; // x21
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x2

  v5 = this;
  if ( (byte_49FC27A & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_CommonReleaseMaster___, now);
    this = (DialogMessageEntity_o *)sub_1B640C8(&DataManager_TypeInfo, v6);
    byte_49FC27A = 1;
  }
  openedAt = v5->fields.openedAt;
  if ( openedAt )
    return DialogMessageEntity__IsOpenTimeInSpecifiedTimeRange(this, openedAt, v5->fields.closedAt, now, v3);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  this = (DialogMessageEntity_o *)DialogMessageEntity__GetCommonReleaseId(v5, v10);
  if ( !Master_object
    || (this = (DialogMessageEntity_o *)CommonReleaseMaster__getList(
                                          (CommonReleaseMaster_o *)Master_object,
                                          (int32_t)this,
                                          v11)) == 0LL )
  {
    sub_1B64324(this);
  }
  if ( !*(_QWORD *)&this->fields.dialogOpenType )
  {
    openedAt = v5->fields.openedAt;
    return DialogMessageEntity__IsOpenTimeInSpecifiedTimeRange(this, openedAt, v5->fields.closedAt, now, v3);
  }
  return 1;
}


bool __fastcall DialogMessageEntity__IsOpenTimeInSpecifiedTimeRange(
        DialogMessageEntity_o *this,
        int64_t start,
        int64_t end,
        int64_t now,
        const MethodInfo *method)
{
  if ( (byte_49FC27B & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, start);
    byte_49FC27B = 1;
  }
  if ( !now )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    now = NetworkManager__getTime(0LL);
  }
  return now >= start && now < end;
}


bool __fastcall DialogMessageEntity__IsRemindOpenTime(
        DialogMessageEntity_o *this,
        int64_t now,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  return DialogMessageEntity__IsOpenTimeInSpecifiedTimeRange(
           this,
           this->fields.remindAt,
           this->fields.closedAt,
           now,
           v3);
}


void __fastcall DialogMessageEntity__Open(
        DialogMessageEntity_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Int32_array *imageIds; // x9
  Il2CppObject *Instance; // x0
  System_Int32_array *v9; // x20
  CommonUI_o *v10; // x21
  __int64 v11; // x1
  __int64 v12; // x2
  System_Action_o *v13; // x22
  __int64 v14; // x0
  Il2CppObject *v15; // x0
  System_String_o *message; // x20
  System_String_o *title; // x21
  CommonUI_o *v18; // x22
  __int64 v19; // x1
  __int64 v20; // x2
  System_Action_o *v21; // x23

  if ( (byte_49FC27D & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Action_Invoke__, callback);
    sub_1B640C8(&System_Action_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_49FC27D = 1;
  }
  imageIds = this->fields.imageIds;
  if ( imageIds && *(_QWORD *)&imageIds->max_length )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v9 = this->fields.imageIds;
    v10 = (CommonUI_o *)Instance;
    v13 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v11, v12);
    System_Action___ctor(v13, (Il2CppObject *)callback, Method_System_Action_Invoke__, 0LL);
    if ( v10 )
    {
      CommonUI__OpenTutorialImageDialog_30371536(v10, v9, -1, 0, v13, 0LL, 0LL, 0LL);
      return;
    }
LABEL_9:
    sub_1B64324(v14);
  }
  v15 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  title = this->fields.title;
  message = this->fields.message;
  v18 = (CommonUI_o *)v15;
  v21 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v19, v20);
  System_Action___ctor(v21, (Il2CppObject *)callback, Method_System_Action_Invoke__, 0LL);
  if ( !v18 )
    goto LABEL_9;
  CommonUI__OpenNotificationDialog(v18, title, message, v21, -1, 0, 0, 0, 1, 0, 0, 0, 0LL, 0.0, 0LL);
}


void __fastcall DialogMessageEntity__OpenConfirmDecideDialog(
        DialogMessageEntity_o *this,
        System_String_o *decideTxt,
        System_Action_o *callback,
        System_Action_o *decideCallback,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x23
  DialogMessageEntity_c *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w2
  int32_t v20; // w3
  Il2CppObject *Instance; // x0
  System_String_o *message; // x20
  System_String_o *title; // x21
  CommonUI_o *v24; // x22
  System_String_o *v25; // x24
  __int64 v26; // x1
  __int64 v27; // x2
  CommonConfirmDialog_ClickDelegate_o *v28; // x25

  if ( (byte_49FC27E & 1) == 0 )
  {
    sub_1B640C8(&CommonConfirmDialog_ClickDelegate_TypeInfo, decideTxt);
    sub_1B640C8(&DialogMessageEntity_TypeInfo, v9);
    sub_1B640C8(&LocalizationManager_TypeInfo, v10);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_1B640C8(&Method_DialogMessageEntity___c__DisplayClass22_0__OpenConfirmDecideDialog_b__0__, v12);
    sub_1B640C8(&DialogMessageEntity___c__DisplayClass22_0_TypeInfo, v13);
    sub_1B640C8(&StringLiteral_3734/*"COMMON_CONFIRM_CLOSE"*/, v14);
    byte_49FC27E = 1;
  }
  v15 = sub_1B64314(DialogMessageEntity___c__DisplayClass22_0_TypeInfo, decideTxt, callback);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    goto LABEL_10;
  *(_QWORD *)(v15 + 16) = decideCallback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v15 + 16), (int32_t)decideCallback, v17, v18);
  *(_QWORD *)(v15 + 24) = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v15 + 24), (int32_t)callback, v19, v20);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  title = this->fields.title;
  message = this->fields.message;
  v24 = (CommonUI_o *)Instance;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_3734/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  v28 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B64314(CommonConfirmDialog_ClickDelegate_TypeInfo, v26, v27);
  CommonConfirmDialog_ClickDelegate___ctor(
    v28,
    (Il2CppObject *)v15,
    Method_DialogMessageEntity___c__DisplayClass22_0__OpenConfirmDecideDialog_b__0__,
    0LL);
  v16 = DialogMessageEntity_TypeInfo;
  if ( !DialogMessageEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DialogMessageEntity_TypeInfo);
    v16 = DialogMessageEntity_TypeInfo;
  }
  if ( !v24 )
LABEL_10:
    sub_1B64324(v16);
  CommonUI__OpenConfirmDecideDlg(
    v24,
    title,
    message,
    decideTxt,
    v25,
    v28,
    v16->static_fields->CONFIRM_DECIDE_FONT_SIZE,
    0.0,
    15.0,
    v16->static_fields->CONFIRM_SPACING_Y,
    1,
    0,
    240,
    0,
    1,
    0,
    0LL);
}


void __fastcall DialogMessageEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FC286 & 1) == 0 )
  {
    sub_1B640C8(&DialogMessageEntity___c_TypeInfo, v1);
    byte_49FC286 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(DialogMessageEntity___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  DialogMessageEntity___c_TypeInfo->static_fields->__9 = (struct DialogMessageEntity___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)DialogMessageEntity___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
}


void __fastcall DialogMessageEntity___c___ctor(DialogMessageEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall DialogMessageEntity___c___GetTargets_b__14_0(
        DialogMessageEntity___c_o *this,
        System_String_o *input,
        const MethodInfo *method)
{
  int32_t result; // [xsp+Ch] [xbp-4h] BYREF

  result = 0;
  if ( System_Int32__TryParse(input, &result, 0LL) )
    return result;
  else
    return 0;
}


void __fastcall DialogMessageEntity___c__DisplayClass22_0___ctor(
        DialogMessageEntity___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DialogMessageEntity___c__DisplayClass22_0___OpenConfirmDecideDialog_b__0(
        DialogMessageEntity___c__DisplayClass22_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  Il2CppObject *Instance; // x19
  __int64 v13; // x1
  __int64 v14; // x2
  System_Action_o *v15; // x20

  if ( (byte_49FC287 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, isDecide);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B640C8(&Method_DialogMessageEntity___c__DisplayClass22_1__OpenConfirmDecideDialog_b__1__, v6);
    sub_1B640C8(&DialogMessageEntity___c__DisplayClass22_1_TypeInfo, v7);
    byte_49FC287 = 1;
  }
  v8 = sub_1B64314(DialogMessageEntity___c__DisplayClass22_1_TypeInfo, isDecide, method);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_QWORD *)(v8 + 24) = this,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v8 + 24), (int32_t)this, v10, v11),
        *(_BYTE *)(v8 + 16) = isDecide,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v15 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v13, v14),
        System_Action___ctor(
          v15,
          (Il2CppObject *)v8,
          Method_DialogMessageEntity___c__DisplayClass22_1__OpenConfirmDecideDialog_b__1__,
          0LL),
        !Instance) )
  {
    sub_1B64324(v9);
  }
  CommonUI__CloseConfirmDialog_30345628((CommonUI_o *)Instance, v15, 0LL);
}


void __fastcall DialogMessageEntity___c__DisplayClass22_1___ctor(
        DialogMessageEntity___c__DisplayClass22_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall DialogMessageEntity___c__DisplayClass22_1___OpenConfirmDecideDialog_b__1(
        DialogMessageEntity___c__DisplayClass22_1_o *this,
        const MethodInfo *method)
{
  struct DialogMessageEntity___c__DisplayClass22_0_o *CS___8__locals1; // x8
  __int64 v3; // x9

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    sub_1B64324(this);
  v3 = 24LL;
  if ( this->fields.isDecide )
    v3 = 16LL;
  ActionExtensions__Call(*(System_Action_o **)((char *)&CS___8__locals1->klass + v3), 0LL);
}