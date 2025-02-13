void __fastcall DialogMessageEntity___ctor(DialogMessageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BDC3A4 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataEntityBase_int___ctor__);
    byte_4BDC3A4 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_32598E4 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall DialogMessageEntity__CreatePrimaryKey(DialogMessageEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t __fastcall DialogMessageEntity__GetCommonReleaseId(DialogMessageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BDC39F & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_18479/*"commonReleaseId"*/);
    byte_4BDC39F = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_18479/*"commonReleaseId"*/, 0, 0LL);
}


int32_t __fastcall DialogMessageEntity__GetMsgFontSize(
        DialogMessageEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  if ( (byte_4BDC3A1 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_21933/*"msgFontSize"*/);
    byte_4BDC3A1 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21933/*"msgFontSize"*/, defaultValue, 0LL);
}


System_Nullable_float__o __fastcall DialogMessageEntity__GetMsgPosY(
        DialogMessageEntity_o *this,
        const MethodInfo *method)
{
  float FloatValue; // s0
  System_Nullable_float__o v5; // [xsp+8h] [xbp-28h] BYREF
  System_Nullable_float__o v6; // 0:x0.8

  if ( (byte_4BDC3A2 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Nullable_float___ctor__);
    sub_1C21E38(&StringLiteral_21934/*"msgPosY"*/);
    byte_4BDC3A2 = 1;
  }
  if ( EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_21934/*"msgPosY"*/, 0LL) )
  {
    FloatValue = EntityScriptUtil__GetFloatValue(this->fields.script, (System_String_o *)StringLiteral_21934/*"msgPosY"*/, 0.0, 0LL);
    v6 = (System_Nullable_float__o)&v5;
    v5 = 0LL;
    System_Nullable_float____ctor(v6, FloatValue, (const MethodInfo_376D9C4 *)Method_System_Nullable_float___ctor__);
    return v5;
  }
  else
  {
    return (System_Nullable_float__o)0LL;
  }
}


int32_t __fastcall DialogMessageEntity__GetMsgSpacingY(DialogMessageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BDC3A3 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_21935/*"msgSpacingY"*/);
    byte_4BDC3A3 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21935/*"msgSpacingY"*/, 0, 0LL);
}


int32_t __fastcall DialogMessageEntity__GetOpenType(DialogMessageEntity_o *this, const MethodInfo *method)
{
  return this->fields.dialogOpenType;
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
  PartyOrganizationUtility_o *p_monitor; // x21
  int max_length; // w9
  System_String_array *v11; // x0
  DialogMessageEntity___c_c *v12; // x8
  System_Object_array *v13; // x22
  System_Converter_object__int__o *_9__14_0; // x23
  Il2CppObject *v15; // x24
  struct DialogMessageEntity___c_StaticFields *static_fields; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7

  if ( (byte_4BDC398 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Array_ConvertAll_string__int___);
    sub_1C21E38(&System_Converter_string__int__TypeInfo);
    sub_1C21E38(&int_____TypeInfo);
    sub_1C21E38(&Method_DialogMessageEntity___c__GetTargets_b__14_0__);
    sub_1C21E38(&DialogMessageEntity___c_TypeInfo);
    sub_1C21E38(&StringLiteral_16086/*"["*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    sub_1C21E38(&StringLiteral_16345/*"]"*/);
    byte_4BDC398 = 1;
  }
  targetIds = this->fields.targetIds;
  if ( !targetIds )
    return (System_Int32_array_array *)sub_1C21EE0(int_____TypeInfo, 1LL);
  v4 = (System_String_o *)sub_1C21EE0(int_____TypeInfo, targetIds->max_length);
  v6 = this->fields.targetIds;
  if ( !v6 )
LABEL_20:
    sub_1C22094(v4, v5);
  v7 = (System_Int32_array_array *)v4;
  v8 = 0LL;
  p_monitor = (PartyOrganizationUtility_o *)&v4[1].monitor;
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
      v4 = System_String__Replace_63135104(
             v4,
             (System_String_o *)StringLiteral_16086/*"["*/,
             (System_String_o *)StringLiteral_1/*""*/,
             0LL);
      if ( v4 )
      {
        v4 = System_String__Replace_63135104(
               v4,
               (System_String_o *)StringLiteral_16345/*"]"*/,
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
            _9__14_0 = (System_Converter_object__int__o *)sub_1C22084(System_Converter_string__int__TypeInfo);
            System_Converter_object__int____ctor(
              _9__14_0,
              v15,
              Method_DialogMessageEntity___c__GetTargets_b__14_0__,
              0LL);
            static_fields = DialogMessageEntity___c_TypeInfo->static_fields;
            static_fields->__9__14_0 = (struct System_Converter_string__int__o *)_9__14_0;
            sub_1C21DDC(
              (PartyOrganizationUtility_o *)&static_fields->__9__14_0,
              (int64_t)_9__14_0,
              v17,
              v18,
              v19,
              v20,
              v21,
              v22);
          }
          v4 = (System_String_o *)System_Array__ConvertAll_object__int_(
                                    v13,
                                    (System_Converter_TInput__TOutput__o *)_9__14_0,
                                    (const MethodInfo_30A96A8 *)Method_System_Array_ConvertAll_string__int___);
          if ( v7 )
          {
            if ( (unsigned int)v8 >= v7->max_length )
LABEL_23:
              sub_1C2209C(v4, v5);
            p_monitor->klass = (PartyOrganizationUtility_c *)v4;
            sub_1C21DDC(p_monitor, (int64_t)v4, v23, v24, v25, v26, v27, v28);
            v6 = this->fields.targetIds;
            ++v8;
            p_monitor = (PartyOrganizationUtility_o *)((char *)p_monitor + 8);
            if ( v6 )
              continue;
          }
        }
      }
    }
    goto LABEL_20;
  }
}


int32_t __fastcall DialogMessageEntity__GetTitleFontSize(DialogMessageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BDC3A0 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_24391/*"titleFontSize"*/);
    byte_4BDC3A0 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_24391/*"titleFontSize"*/, 0, 0LL);
}


System_String_array *__fastcall DialogMessageEntity__GetTransitionParam(
        DialogMessageEntity_o *this,
        const MethodInfo *method)
{
  System_String_o *StringValue; // x0
  __int64 v4; // x1

  if ( (byte_4BDC39E & 1) == 0 )
  {
    sub_1C21E38(&string_TypeInfo);
    sub_1C21E38(&StringLiteral_24481/*"transitionParam"*/);
    byte_4BDC39E = 1;
  }
  StringValue = EntityScriptUtil__GetStringValue(
                  this->fields.script,
                  (System_String_o *)StringLiteral_24481/*"transitionParam"*/,
                  string_TypeInfo->static_fields->Empty,
                  0LL);
  if ( !StringValue )
    sub_1C22094(0LL, v4);
  return System_String__Split(StringValue, 0x2Fu, 0, 0LL);
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

  if ( (byte_4BDC39B & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    byte_4BDC39B = 1;
  }
  DialogMessageEntity__GetTargets(this, *(const MethodInfo **)&ex1);
  v7 = this->fields.dialogOpenType - 1;
  if ( !DialogMessageEntity__GetCommonReleaseId(this, v8) )
    return v7 < 2;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  CommonReleaseId = DialogMessageEntity__GetCommonReleaseId(this, v10);
  if ( !Master_object )
    sub_1C22094(CommonReleaseId, v12);
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
  if ( (byte_4BDC399 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    this = (DialogMessageEntity_o *)sub_1C21E38(&DataManager_TypeInfo);
    byte_4BDC399 = 1;
  }
  openedAt = v5->fields.openedAt;
  if ( openedAt )
    return DialogMessageEntity__IsOpenTimeInSpecifiedTimeRange(this, openedAt, v5->fields.closedAt, now, v3);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  this = (DialogMessageEntity_o *)DialogMessageEntity__GetCommonReleaseId(v5, v9);
  if ( !Master_object
    || (this = (DialogMessageEntity_o *)CommonReleaseMaster__getList(
                                          (CommonReleaseMaster_o *)Master_object,
                                          (int32_t)this,
                                          v11)) == 0LL )
  {
    sub_1C22094(this, v10);
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
  if ( (byte_4BDC39A & 1) == 0 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BDC39A = 1;
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
  System_Int32_array *v7; // x19
  CommonUI_o *v8; // x21
  System_Action_o *v9; // x22
  System_Nullable_float__o messagePosY; // x0
  __int64 v11; // x1
  Il2CppObject *v12; // x0
  System_String_o *title; // x21
  System_String_o *message; // x22
  CommonUI_o *v15; // x23
  System_Action_o *v16; // x24
  const MethodInfo *v17; // x1
  int32_t TitleFontSize; // w20
  const MethodInfo *v19; // x2
  int32_t messageFontSize; // w25
  const MethodInfo *v21; // x1
  int32_t spacingY; // w26
  const MethodInfo *v23; // x1

  if ( (byte_4BDC39C & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Action_Invoke__);
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BDC39C = 1;
  }
  imageIds = this->fields.imageIds;
  if ( imageIds && *(_QWORD *)&imageIds->max_length )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v7 = this->fields.imageIds;
    v8 = (CommonUI_o *)Instance;
    v9 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(v9, (Il2CppObject *)callback, Method_System_Action_Invoke__, 0LL);
    if ( v8 )
    {
      CommonUI__OpenTutorialImageDialog_31154684(v8, v7, -1, 0, v9, 0LL, 0LL, 0LL);
      return;
    }
LABEL_9:
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1C22094)(messagePosY, v11);
  }
  v12 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  title = this->fields.title;
  message = this->fields.message;
  v15 = (CommonUI_o *)v12;
  v16 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v16, (Il2CppObject *)callback, Method_System_Action_Invoke__, 0LL);
  TitleFontSize = DialogMessageEntity__GetTitleFontSize(this, v17);
  messageFontSize = DialogMessageEntity__GetMsgFontSize(this, 0, v19);
  spacingY = DialogMessageEntity__GetMsgSpacingY(this, v21);
  messagePosY = DialogMessageEntity__GetMsgPosY(this, v23);
  if ( !v15 )
    goto LABEL_9;
  CommonUI__OpenNotificationDialog(
    v15,
    title,
    message,
    v16,
    -1,
    0,
    TitleFontSize,
    0,
    1,
    messageFontSize,
    0,
    spacingY,
    messagePosY,
    0.0,
    0LL);
}


void __fastcall DialogMessageEntity__OpenConfirmDecideDialog(
        DialogMessageEntity_o *this,
        System_String_o *decideTxt,
        System_Action_o *callback,
        System_Action_o *decideCallback,
        const MethodInfo *method)
{
  __int64 v9; // x26
  __int64 titleFontSize; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  Il2CppObject *Instance; // x0
  System_String_o *title; // x21
  System_String_o *message; // x22
  CommonUI_o *v27; // x23
  System_String_o *v28; // x24
  CommonConfirmDialog_ClickDelegate_o *v29; // x25
  const MethodInfo *v30; // x2
  int32_t MsgFontSize; // w26
  const MethodInfo *v32; // x1
  System_Nullable_float__o MsgPosY; // x28
  const MethodInfo *v34; // x1
  int32_t MsgSpacingY; // w27
  const MethodInfo *v36; // x1
  float value; // s1

  if ( (byte_4BDC39D & 1) == 0 )
  {
    sub_1C21E38(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_System_Nullable_float__GetValueOrDefault__);
    sub_1C21E38(&Method_System_Nullable_float__get_HasValue__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_DialogMessageEntity___c__DisplayClass22_0__OpenConfirmDecideDialog_b__0__);
    sub_1C21E38(&DialogMessageEntity___c__DisplayClass22_0_TypeInfo);
    sub_1C21E38(&StringLiteral_3811/*"COMMON_CONFIRM_CLOSE"*/);
    byte_4BDC39D = 1;
  }
  v9 = sub_1C22084(DialogMessageEntity___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_10;
  *(_QWORD *)(v9 + 16) = decideCallback;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 16), (int64_t)decideCallback, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = callback;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 24), (int64_t)callback, v18, v19, v20, v21, v22, v23);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  title = this->fields.title;
  message = this->fields.message;
  v27 = (CommonUI_o *)Instance;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v28 = LocalizationManager__Get((System_String_o *)StringLiteral_3811/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  v29 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C22084(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v29,
    (Il2CppObject *)v9,
    Method_DialogMessageEntity___c__DisplayClass22_0__OpenConfirmDecideDialog_b__0__,
    0LL);
  MsgFontSize = DialogMessageEntity__GetMsgFontSize(this, 26, v30);
  MsgPosY = DialogMessageEntity__GetMsgPosY(this, v32);
  MsgSpacingY = DialogMessageEntity__GetMsgSpacingY(this, v34);
  titleFontSize = DialogMessageEntity__GetTitleFontSize(this, v36);
  if ( !v27 )
LABEL_10:
    sub_1C22094(titleFontSize, v11);
  value = MsgPosY.fields.value;
  if ( !MsgPosY.fields.hasValue )
    value = 15.0;
  CommonUI__OpenConfirmDecideDlg(
    v27,
    title,
    message,
    decideTxt,
    v28,
    v29,
    MsgFontSize,
    0.0,
    value,
    MsgSpacingY,
    1,
    0,
    240,
    0,
    1,
    0,
    titleFontSize,
    0LL);
}


void __fastcall DialogMessageEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDC3A5 & 1) == 0 )
  {
    sub_1C21E38(&DialogMessageEntity___c_TypeInfo);
    byte_4BDC3A5 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(DialogMessageEntity___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  DialogMessageEntity___c_TypeInfo->static_fields->__9 = (struct DialogMessageEntity___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)DialogMessageEntity___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  Il2CppObject *Instance; // x19
  System_Action_o *v15; // x20

  if ( (byte_4BDC3A6 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_DialogMessageEntity___c__DisplayClass22_1__OpenConfirmDecideDialog_b__1__);
    sub_1C21E38(&DialogMessageEntity___c__DisplayClass22_1_TypeInfo);
    byte_4BDC3A6 = 1;
  }
  v5 = sub_1C22084(DialogMessageEntity___c__DisplayClass22_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5
    || (*(_QWORD *)(v5 + 24) = this,
        sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 24), (int64_t)this, v8, v9, v10, v11, v12, v13),
        *(_BYTE *)(v5 + 16) = isDecide,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v15 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo),
        System_Action___ctor(
          v15,
          (Il2CppObject *)v5,
          Method_DialogMessageEntity___c__DisplayClass22_1__OpenConfirmDecideDialog_b__1__,
          0LL),
        !Instance) )
  {
    sub_1C22094(v6, v7);
  }
  CommonUI__CloseConfirmDialog_31128756((CommonUI_o *)Instance, v15, 0LL);
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
    sub_1C22094(this, method);
  v3 = 24LL;
  if ( this->fields.isDecide )
    v3 = 16LL;
  ActionExtensions__Call(*(System_Action_o **)((char *)&CS___8__locals1->klass + v3), 0LL);
}