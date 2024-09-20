void __fastcall DialogMessageEntity___cctor(const MethodInfo *method)
{
  if ( (byte_4A5AFD3 & 1) == 0 )
  {
    sub_1B885B0(&DialogMessageEntity_TypeInfo);
    byte_4A5AFD3 = 1;
  }
  *DialogMessageEntity_TypeInfo->static_fields = (struct DialogMessageEntity_StaticFields)0x1E0000001ALL;
}


void __fastcall DialogMessageEntity___ctor(DialogMessageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5AFD2 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_int___ctor__);
    byte_4A5AFD2 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_311D734 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall DialogMessageEntity__CreatePrimaryKey(DialogMessageEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t __fastcall DialogMessageEntity__GetCommonReleaseId(DialogMessageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5AFCE & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_18170/*"commonReleaseId"*/);
    byte_4A5AFCE = 1;
  }
  return DialogMessageEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_18170/*"commonReleaseId"*/, 0, v2);
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
  if ( (byte_4A5AFD1 & 1) == 0 )
  {
    sub_1B885B0(&long_TypeInfo);
    byte_4A5AFD1 = 1;
  }
  ScriptObj = DialogMessageEntity__GetScriptObj(this, key, *(const MethodInfo **)&defVal);
  if ( !ScriptObj )
    return v4;
  if ( ScriptObj->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObj, long_TypeInfo, v8, v9);
  sub_1B88ACC(ScriptObj);
  return (unsigned int)DialogMessageEntity__GetScriptObj(v11, v12, v13);
}


Il2CppObject *__fastcall DialogMessageEntity__GetScriptObj(
        DialogMessageEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *result; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5AFCF & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_4A5AFCF = 1;
  }
  value = 0LL;
  result = (Il2CppObject *)this->fields.script;
  if ( result )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)result,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_31C89D4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v8; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *v9; // x0
  Il2CppObject *Item; // x0
  DialogMessageEntity_o *v12; // x0
  System_String_o *v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_4A5AFD0 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&string_TypeInfo);
    byte_4A5AFD0 = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  v9 = this->fields.script;
  if ( !v9 )
    sub_1B8880C(0LL, v8);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)v9,
           (Il2CppObject *)key,
           (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  defVal = (System_String_o *)Item;
  if ( !Item || (System_String_c *)Item->klass == string_TypeInfo )
    return defVal;
  sub_1B88ACC(Item);
  return (System_String_o *)DialogMessageEntity__GetScriptIntParam(v12, v13, v14, v15);
}


System_Int32_array_array *__fastcall DialogMessageEntity__GetTargets(
        DialogMessageEntity_o *this,
        const MethodInfo *method)
{
  struct System_String_array *targetIds; // x8
  System_String_o *v4; // x0
  __int64 v5; // x1
  struct System_String_array *v6; // x8
  System_Int32_array_array *v7; // x20
  __int64 v8; // x25
  ServantStatusBattleListViewItem_o *p_monitor; // x21
  int max_length; // w9
  System_String_array *v11; // x0
  DialogMessageEntity___c_c *v12; // x8
  System_Object_array *v13; // x22
  System_Converter_object__int__o *_9__14_0; // x23
  Il2CppObject *v15; // x24
  struct DialogMessageEntity___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w2
  int32_t v20; // w3

  if ( (byte_4A5AFC7 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_ConvertAll_string__int___);
    sub_1B885B0(&System_Converter_string__int__TypeInfo);
    sub_1B885B0(&int_____TypeInfo);
    sub_1B885B0(&Method_DialogMessageEntity___c__GetTargets_b__14_0__);
    sub_1B885B0(&DialogMessageEntity___c_TypeInfo);
    sub_1B885B0(&StringLiteral_15812/*"["*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_16069/*"]"*/);
    byte_4A5AFC7 = 1;
  }
  targetIds = this->fields.targetIds;
  if ( !targetIds )
    return (System_Int32_array_array *)sub_1B88658(int_____TypeInfo, 1LL);
  v4 = (System_String_o *)sub_1B88658(int_____TypeInfo, targetIds->max_length);
  v6 = this->fields.targetIds;
  if ( !v6 )
LABEL_20:
    sub_1B8880C(v4, v5);
  v7 = (System_Int32_array_array *)v4;
  v8 = 0LL;
  p_monitor = (ServantStatusBattleListViewItem_o *)&v4[1].monitor;
  while ( 1 )
  {
    max_length = v6->max_length;
    if ( (int)v8 >= max_length )
      return v7;
    if ( (unsigned int)v8 >= max_length )
      goto LABEL_23;
    v4 = v6->m_Items[v8];
    if ( v4 )
    {
      v4 = System_String__Replace_61726660(
             v4,
             (System_String_o *)StringLiteral_15812/*"["*/,
             (System_String_o *)StringLiteral_1/*""*/,
             0LL);
      if ( v4 )
      {
        v4 = System_String__Replace_61726660(
               v4,
               (System_String_o *)StringLiteral_16069/*"]"*/,
               (System_String_o *)StringLiteral_1/*""*/,
               0LL);
        if ( v4 )
        {
          v11 = System_String__Split(v4, 0x2Cu, 0, 0LL);
          v12 = DialogMessageEntity___c_TypeInfo;
          v13 = (System_Object_array *)v11;
          if ( !DialogMessageEntity___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DialogMessageEntity___c_TypeInfo);
            v12 = DialogMessageEntity___c_TypeInfo;
          }
          _9__14_0 = (System_Converter_object__int__o *)v12->static_fields->__9__14_0;
          if ( !_9__14_0 )
          {
            if ( !v12->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v12);
              v12 = DialogMessageEntity___c_TypeInfo;
            }
            v15 = (Il2CppObject *)v12->static_fields->__9;
            _9__14_0 = (System_Converter_object__int__o *)sub_1B887FC(System_Converter_string__int__TypeInfo);
            System_Converter_object__int____ctor(
              _9__14_0,
              v15,
              Method_DialogMessageEntity___c__GetTargets_b__14_0__,
              0LL);
            static_fields = DialogMessageEntity___c_TypeInfo->static_fields;
            static_fields->__9__14_0 = (struct System_Converter_string__int__o *)_9__14_0;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__14_0, (int32_t)_9__14_0, v17, v18);
          }
          v4 = (System_String_o *)System_Array__ConvertAll_object__int_(
                                    v13,
                                    (System_Converter_TInput__TOutput__o *)_9__14_0,
                                    (const MethodInfo_2F76E10 *)Method_System_Array_ConvertAll_string__int___);
          if ( v7 )
          {
            if ( (unsigned int)v8 >= v7->max_length )
LABEL_23:
              sub_1B88814(v4, v5);
            p_monitor->klass = (ServantStatusBattleListViewItem_c *)v4;
            sub_1B88554(p_monitor, (int32_t)v4, v19, v20);
            v6 = this->fields.targetIds;
            ++v8;
            p_monitor = (ServantStatusBattleListViewItem_o *)((char *)p_monitor + 8);
            if ( v6 )
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
  System_String_o *ScriptStr; // x0
  __int64 v5; // x1

  if ( (byte_4A5AFCD & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_24047/*"transitionParam"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5AFCD = 1;
  }
  ScriptStr = DialogMessageEntity__GetScriptStr(
                this,
                (System_String_o *)StringLiteral_24047/*"transitionParam"*/,
                (System_String_o *)StringLiteral_1/*""*/,
                v2);
  if ( !ScriptStr )
    sub_1B8880C(0LL, v5);
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
  unsigned int v7; // w21
  const MethodInfo *v8; // x1
  Il2CppObject *Master_object; // x20
  const MethodInfo *v10; // x1
  __int64 CommonReleaseId; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x4

  if ( (byte_4A5AFCA & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    byte_4A5AFCA = 1;
  }
  DialogMessageEntity__GetTargets(this, *(const MethodInfo **)&ex1);
  v7 = this->fields.dialogOpenType - 1;
  if ( !DialogMessageEntity__GetCommonReleaseId(this, v8) )
    return v7 < 2;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  CommonReleaseId = DialogMessageEntity__GetCommonReleaseId(this, v10);
  if ( !Master_object )
    sub_1B8880C(CommonReleaseId, v12);
  return (v7 < 2) & CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Master_object, CommonReleaseId, 0LL, 0, v13);
}


bool __fastcall DialogMessageEntity__IsOpenTime(DialogMessageEntity_o *this, int64_t now, const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  DialogMessageEntity_o *v5; // x20
  int32_t openedAt; // w8
  Il2CppObject *Master_object; // x21
  const MethodInfo *v9; // x1
  __int64 v10; // x1
  const MethodInfo *v11; // x2

  v5 = this;
  if ( (byte_4A5AFC8 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    this = (DialogMessageEntity_o *)sub_1B885B0(&DataManager_TypeInfo);
    byte_4A5AFC8 = 1;
  }
  openedAt = v5->fields.openedAt;
  if ( openedAt )
    return DialogMessageEntity__IsOpenTimeInSpecifiedTimeRange(this, openedAt, v5->fields.closedAt, now, v3);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  this = (DialogMessageEntity_o *)DialogMessageEntity__GetCommonReleaseId(v5, v9);
  if ( !Master_object
    || (this = (DialogMessageEntity_o *)CommonReleaseMaster__getList(
                                          (CommonReleaseMaster_o *)Master_object,
                                          (int32_t)this,
                                          v11)) == 0LL )
  {
    sub_1B8880C(this, v10);
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
  if ( (byte_4A5AFC9 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5AFC9 = 1;
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
  struct System_Int32_array *imageIds; // x9
  Il2CppObject *Instance; // x0
  System_Int32_array *v7; // x20
  CommonUI_o *v8; // x21
  System_Action_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  Il2CppObject *v12; // x0
  System_String_o *message; // x20
  System_String_o *title; // x21
  CommonUI_o *v15; // x22
  System_Action_o *v16; // x23

  if ( (byte_4A5AFCB & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Action_Invoke__);
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5AFCB = 1;
  }
  imageIds = this->fields.imageIds;
  if ( imageIds && *(_QWORD *)&imageIds->max_length )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v7 = this->fields.imageIds;
    v8 = (CommonUI_o *)Instance;
    v9 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v9, (Il2CppObject *)callback, Method_System_Action_Invoke__, 0LL);
    if ( v8 )
    {
      CommonUI__OpenTutorialImageDialog_30520500(v8, v7, -1, 0, v9, 0LL, 0LL, 0LL);
      return;
    }
LABEL_9:
    sub_1B8880C(v10, v11);
  }
  v12 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  title = this->fields.title;
  message = this->fields.message;
  v15 = (CommonUI_o *)v12;
  v16 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v16, (Il2CppObject *)callback, Method_System_Action_Invoke__, 0LL);
  if ( !v15 )
    goto LABEL_9;
  CommonUI__OpenNotificationDialog(v15, title, message, v16, -1, 0, 0, 0, 1, 0, 0, 0, 0LL, 0.0, 0LL);
}


void __fastcall DialogMessageEntity__OpenConfirmDecideDialog(
        DialogMessageEntity_o *this,
        System_String_o *decideTxt,
        System_Action_o *callback,
        System_Action_o *decideCallback,
        const MethodInfo *method)
{
  __int64 v9; // x23
  DialogMessageEntity_c *v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w2
  int32_t v15; // w3
  Il2CppObject *Instance; // x0
  System_String_o *message; // x20
  System_String_o *title; // x21
  CommonUI_o *v19; // x22
  System_String_o *v20; // x24
  CommonConfirmDialog_ClickDelegate_o *v21; // x25

  if ( (byte_4A5AFCC & 1) == 0 )
  {
    sub_1B885B0(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&DialogMessageEntity_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_DialogMessageEntity___c__DisplayClass22_0__OpenConfirmDecideDialog_b__0__);
    sub_1B885B0(&DialogMessageEntity___c__DisplayClass22_0_TypeInfo);
    sub_1B885B0(&StringLiteral_3756/*"COMMON_CONFIRM_CLOSE"*/);
    byte_4A5AFCC = 1;
  }
  v9 = sub_1B887FC(DialogMessageEntity___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_10;
  *(_QWORD *)(v9 + 16) = decideCallback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)decideCallback, v12, v13);
  *(_QWORD *)(v9 + 24) = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 24), (int32_t)callback, v14, v15);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  title = this->fields.title;
  message = this->fields.message;
  v19 = (CommonUI_o *)Instance;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_3756/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  v21 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B887FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v21,
    (Il2CppObject *)v9,
    Method_DialogMessageEntity___c__DisplayClass22_0__OpenConfirmDecideDialog_b__0__,
    0LL);
  v10 = DialogMessageEntity_TypeInfo;
  if ( !DialogMessageEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DialogMessageEntity_TypeInfo);
    v10 = DialogMessageEntity_TypeInfo;
  }
  if ( !v19 )
LABEL_10:
    sub_1B8880C(v10, v11);
  CommonUI__OpenConfirmDecideDlg(
    v19,
    title,
    message,
    decideTxt,
    v20,
    v21,
    v10->static_fields->CONFIRM_DECIDE_FONT_SIZE,
    0.0,
    15.0,
    v10->static_fields->CONFIRM_SPACING_Y,
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
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5AFD4 & 1) == 0 )
  {
    sub_1B885B0(&DialogMessageEntity___c_TypeInfo);
    byte_4A5AFD4 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(DialogMessageEntity___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  DialogMessageEntity___c_TypeInfo->static_fields->__9 = (struct DialogMessageEntity___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)DialogMessageEntity___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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


void __fastcall DialogMessageEntity___c__DisplayClass22_0___OpenConfirmDecideDialog_b__0(
        DialogMessageEntity___c__DisplayClass22_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  Il2CppObject *Instance; // x19
  System_Action_o *v11; // x20

  if ( (byte_4A5AFD5 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_DialogMessageEntity___c__DisplayClass22_1__OpenConfirmDecideDialog_b__1__);
    sub_1B885B0(&DialogMessageEntity___c__DisplayClass22_1_TypeInfo);
    byte_4A5AFD5 = 1;
  }
  v5 = sub_1B887FC(DialogMessageEntity___c__DisplayClass22_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5
    || (*(_QWORD *)(v5 + 24) = this,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)this, v8, v9),
        *(_BYTE *)(v5 + 16) = isDecide,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v11 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo),
        System_Action___ctor(
          v11,
          (Il2CppObject *)v5,
          Method_DialogMessageEntity___c__DisplayClass22_1__OpenConfirmDecideDialog_b__1__,
          0LL),
        !Instance) )
  {
    sub_1B8880C(v6, v7);
  }
  CommonUI__CloseConfirmDialog_30494572((CommonUI_o *)Instance, v11, 0LL);
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
    sub_1B8880C(this, method);
  v3 = 24LL;
  if ( this->fields.isDecide )
    v3 = 16LL;
  ActionExtensions__Call(*(System_Action_o **)((char *)&CS___8__locals1->klass + v3), 0LL);
}