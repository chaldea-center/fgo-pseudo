void __fastcall DialogMessageEntity___ctor(DialogMessageEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16061 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_int___ctor__, method, v2);
    byte_4B16061 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_31B2C40 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall DialogMessageEntity__CreatePrimaryKey(DialogMessageEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t __fastcall DialogMessageEntity__GetCommonReleaseId(DialogMessageEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1605C & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_18354/*"commonReleaseId"*/, method, v2);
    byte_4B1605C = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_18354/*"commonReleaseId"*/, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall DialogMessageEntity__GetMsgFontSize(
        DialogMessageEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  if ( (byte_4B1605E & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_21779/*"msgFontSize"*/, *(_QWORD *)&defaultValue, method);
    byte_4B1605E = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21779/*"msgFontSize"*/, defaultValue, 0LL);
}


System_Nullable_float__o __fastcall DialogMessageEntity__GetMsgPosY(
        DialogMessageEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  float FloatValue; // s0
  System_Nullable_float__o v8; // [xsp+8h] [xbp-28h] BYREF
  System_Nullable_float__o v9; // 0:x0.8

  if ( (byte_4B1605F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Nullable_float___ctor__, method, v2);
    sub_1BCA7E0(&StringLiteral_21780/*"msgPosY"*/, v4, v5);
    byte_4B1605F = 1;
  }
  if ( EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_21780/*"msgPosY"*/, 0LL) )
  {
    FloatValue = EntityScriptUtil__GetFloatValue(this->fields.script, (System_String_o *)StringLiteral_21780/*"msgPosY"*/, 0.0, 0LL);
    v9 = (System_Nullable_float__o)&v8;
    v8 = 0LL;
    System_Nullable_float____ctor(v9, FloatValue, (const MethodInfo_36C0CC4 *)Method_System_Nullable_float___ctor__);
    return v8;
  }
  else
  {
    return (System_Nullable_float__o)0LL;
  }
}


int32_t __fastcall DialogMessageEntity__GetMsgSpacingY(DialogMessageEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16060 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_21781/*"msgSpacingY"*/, method, v2);
    byte_4B16060 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21781/*"msgSpacingY"*/, 0, 0LL);
}


int32_t __fastcall DialogMessageEntity__GetOpenType(DialogMessageEntity_o *this, const MethodInfo *method)
{
  return this->fields.dialogOpenType;
}


System_Int32_array_array *__fastcall DialogMessageEntity__GetTargets(
        DialogMessageEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  struct System_String_array *targetIds; // x8
  System_String_o *v19; // x0
  __int64 v20; // x1
  struct System_String_array *v21; // x8
  System_Int32_array_array *v22; // x20
  __int64 v23; // x25
  PartyOrganizationUtility_o *p_monitor; // x21
  int max_length; // w9
  System_String_array *v26; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  DialogMessageEntity___c_c *v30; // x8
  System_Object_array *v31; // x22
  System_Converter_object__int__o *_9__14_0; // x23
  Il2CppObject *v33; // x24
  struct DialogMessageEntity___c_StaticFields *static_fields; // x0
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7

  if ( (byte_4B16055 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_ConvertAll_string__int___, method, v2);
    sub_1BCA7E0(&System_Converter_string__int__TypeInfo, v4, v5);
    sub_1BCA7E0(&int_____TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_DialogMessageEntity___c__GetTargets_b__14_0__, v8, v9);
    sub_1BCA7E0(&DialogMessageEntity___c_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_15978/*"["*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_16236/*"]"*/, v16, v17);
    byte_4B16055 = 1;
  }
  targetIds = this->fields.targetIds;
  if ( !targetIds )
    return (System_Int32_array_array *)sub_1BCA888(int_____TypeInfo, 1LL);
  v19 = (System_String_o *)sub_1BCA888(int_____TypeInfo, targetIds->max_length);
  v21 = this->fields.targetIds;
  if ( !v21 )
LABEL_20:
    sub_1BCAA3C(v19, v20);
  v22 = (System_Int32_array_array *)v19;
  v23 = 0LL;
  p_monitor = (PartyOrganizationUtility_o *)&v19[1].monitor;
  while ( 1 )
  {
    max_length = v21->max_length;
    if ( (int)v23 >= max_length )
      return v22;
    if ( (unsigned int)v23 >= max_length )
      goto LABEL_23;
    v19 = v21->m_Items[v23];
    if ( v19 )
    {
      v19 = System_String__Replace_62420848(
              v19,
              (System_String_o *)StringLiteral_15978/*"["*/,
              (System_String_o *)StringLiteral_1/*""*/,
              0LL);
      if ( v19 )
      {
        v19 = System_String__Replace_62420848(
                v19,
                (System_String_o *)StringLiteral_16236/*"]"*/,
                (System_String_o *)StringLiteral_1/*""*/,
                0LL);
        if ( v19 )
        {
          v26 = System_String__Split(v19, 0x2Cu, 0, 0LL);
          v30 = DialogMessageEntity___c_TypeInfo;
          v31 = (System_Object_array *)v26;
          if ( !DialogMessageEntity___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DialogMessageEntity___c_TypeInfo, v27);
            v30 = DialogMessageEntity___c_TypeInfo;
          }
          _9__14_0 = (System_Converter_object__int__o *)v30->static_fields->__9__14_0;
          if ( !_9__14_0 )
          {
            if ( !v30->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v30, v27);
              v30 = DialogMessageEntity___c_TypeInfo;
            }
            v33 = (Il2CppObject *)v30->static_fields->__9;
            _9__14_0 = (System_Converter_object__int__o *)sub_1BCAA2C(
                                                            System_Converter_string__int__TypeInfo,
                                                            v27,
                                                            v28,
                                                            v29);
            System_Converter_object__int____ctor(
              _9__14_0,
              v33,
              Method_DialogMessageEntity___c__GetTargets_b__14_0__,
              0LL);
            static_fields = DialogMessageEntity___c_TypeInfo->static_fields;
            static_fields->__9__14_0 = (struct System_Converter_string__int__o *)_9__14_0;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&static_fields->__9__14_0,
              (int64_t)_9__14_0,
              v35,
              v36,
              v37,
              v38,
              v39,
              v40);
          }
          v19 = (System_String_o *)System_Array__ConvertAll_object__int_(
                                     v31,
                                     (System_Converter_TInput__TOutput__o *)_9__14_0,
                                     (const MethodInfo_300B3D8 *)Method_System_Array_ConvertAll_string__int___);
          if ( v22 )
          {
            if ( (unsigned int)v23 >= v22->max_length )
LABEL_23:
              sub_1BCAA44(v19, v20);
            p_monitor->klass = (PartyOrganizationUtility_c *)v19;
            sub_1BCA784(p_monitor, (int64_t)v19, v41, v42, v43, v44, v45, v46);
            v21 = this->fields.targetIds;
            ++v23;
            p_monitor = (PartyOrganizationUtility_o *)((char *)p_monitor + 8);
            if ( v21 )
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
  __int64 v2; // x2

  if ( (byte_4B1605D & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_24209/*"titleFontSize"*/, method, v2);
    byte_4B1605D = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_24209/*"titleFontSize"*/, 0, 0LL);
}


System_String_array *__fastcall DialogMessageEntity__GetTransitionParam(
        DialogMessageEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_String_o *StringValue; // x0
  __int64 v7; // x1

  if ( (byte_4B1605B & 1) == 0 )
  {
    sub_1BCA7E0(&string_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_24299/*"transitionParam"*/, v4, v5);
    byte_4B1605B = 1;
  }
  StringValue = EntityScriptUtil__GetStringValue(
                  this->fields.script,
                  (System_String_o *)StringLiteral_24299/*"transitionParam"*/,
                  string_TypeInfo->static_fields->Empty,
                  0LL);
  if ( !StringValue )
    sub_1BCAA3C(0LL, v7);
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
  __int64 v7; // x1
  __int64 v8; // x2
  unsigned int v9; // w21
  const MethodInfo *v10; // x1
  __int64 v11; // x1
  Il2CppObject *Master_object; // x20
  const MethodInfo *v13; // x1
  __int64 CommonReleaseId; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x4

  if ( (byte_4B16058 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_CommonReleaseMaster___, *(_QWORD *)&ex1, *(_QWORD *)&ex2);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    byte_4B16058 = 1;
  }
  DialogMessageEntity__GetTargets(this, *(const MethodInfo **)&ex1);
  v9 = this->fields.dialogOpenType - 1;
  if ( !DialogMessageEntity__GetCommonReleaseId(this, v10) )
    return v9 < 2;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v11);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  CommonReleaseId = DialogMessageEntity__GetCommonReleaseId(this, v13);
  if ( !Master_object )
    sub_1BCAA3C(CommonReleaseId, v15);
  return (v9 < 2) & CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Master_object, CommonReleaseId, 0LL, 0, v16);
}


bool __fastcall DialogMessageEntity__IsOpenTime(DialogMessageEntity_o *this, int64_t now, const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  DialogMessageEntity_o *v5; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  int32_t openedAt; // w8
  Il2CppObject *Master_object; // x21
  const MethodInfo *v11; // x1
  __int64 v12; // x1
  const MethodInfo *v13; // x2

  v5 = this;
  if ( (byte_4B16056 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_CommonReleaseMaster___, now, method);
    this = (DialogMessageEntity_o *)sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    byte_4B16056 = 1;
  }
  openedAt = v5->fields.openedAt;
  if ( openedAt )
    return DialogMessageEntity__IsOpenTimeInSpecifiedTimeRange(this, openedAt, v5->fields.closedAt, now, v3);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, now);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  this = (DialogMessageEntity_o *)DialogMessageEntity__GetCommonReleaseId(v5, v11);
  if ( !Master_object
    || (this = (DialogMessageEntity_o *)CommonReleaseMaster__getList(
                                          (CommonReleaseMaster_o *)Master_object,
                                          (int32_t)this,
                                          v13)) == 0LL )
  {
    sub_1BCAA3C(this, v12);
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
  if ( (byte_4B16057 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, start, end);
    byte_4B16057 = 1;
  }
  if ( !now )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, start);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  struct System_Int32_array *imageIds; // x9
  Il2CppObject *Instance; // x0
  System_Int32_array *v11; // x19
  CommonUI_o *v12; // x21
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  System_Action_o *v16; // x22
  System_Nullable_float__o messagePosY; // x0
  __int64 v18; // x1
  Il2CppObject *v19; // x0
  System_String_o *title; // x21
  System_String_o *message; // x22
  CommonUI_o *v22; // x23
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  System_Action_o *v26; // x24
  const MethodInfo *v27; // x1
  int32_t TitleFontSize; // w20
  const MethodInfo *v29; // x2
  int32_t messageFontSize; // w25
  const MethodInfo *v31; // x1
  int32_t spacingY; // w26
  const MethodInfo *v33; // x1

  if ( (byte_4B16059 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Action_Invoke__, callback, method);
    sub_1BCA7E0(&System_Action_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7, v8);
    byte_4B16059 = 1;
  }
  imageIds = this->fields.imageIds;
  if ( imageIds && *(_QWORD *)&imageIds->max_length )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v11 = this->fields.imageIds;
    v12 = (CommonUI_o *)Instance;
    v16 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v13, v14, v15);
    System_Action___ctor(v16, (Il2CppObject *)callback, Method_System_Action_Invoke__, 0LL);
    if ( v12 )
    {
      CommonUI__OpenTutorialImageDialog_30792800(v12, v11, -1, 0, v16, 0LL, 0LL, 0LL);
      return;
    }
LABEL_9:
    sub_1BCAA3C(messagePosY, v18);
  }
  v19 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  title = this->fields.title;
  message = this->fields.message;
  v22 = (CommonUI_o *)v19;
  v26 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v23, v24, v25);
  System_Action___ctor(v26, (Il2CppObject *)callback, Method_System_Action_Invoke__, 0LL);
  TitleFontSize = DialogMessageEntity__GetTitleFontSize(this, v27);
  messageFontSize = DialogMessageEntity__GetMsgFontSize(this, 0, v29);
  spacingY = DialogMessageEntity__GetMsgSpacingY(this, v31);
  messagePosY = DialogMessageEntity__GetMsgPosY(this, v33);
  if ( !v22 )
    goto LABEL_9;
  CommonUI__OpenNotificationDialog(
    v22,
    title,
    message,
    v26,
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
  __int64 v23; // x26
  __int64 titleFontSize; // x0
  __int64 v25; // x1
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  Il2CppObject *Instance; // x0
  __int64 v39; // x1
  System_String_o *title; // x21
  System_String_o *message; // x22
  CommonUI_o *v42; // x23
  System_String_o *v43; // x24
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  CommonConfirmDialog_ClickDelegate_o *v47; // x25
  const MethodInfo *v48; // x2
  int32_t MsgFontSize; // w26
  const MethodInfo *v50; // x1
  System_Nullable_float__o MsgPosY; // x28
  const MethodInfo *v52; // x1
  int32_t MsgSpacingY; // w27
  const MethodInfo *v54; // x1
  float value; // s1

  if ( (byte_4B1605A & 1) == 0 )
  {
    sub_1BCA7E0(&CommonConfirmDialog_ClickDelegate_TypeInfo, decideTxt, callback);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Nullable_float__GetValueOrDefault__, v11, v12);
    sub_1BCA7E0(&Method_System_Nullable_float__get_HasValue__, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15, v16);
    sub_1BCA7E0(&Method_DialogMessageEntity___c__DisplayClass22_0__OpenConfirmDecideDialog_b__0__, v17, v18);
    sub_1BCA7E0(&DialogMessageEntity___c__DisplayClass22_0_TypeInfo, v19, v20);
    sub_1BCA7E0(&StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, v21, v22);
    byte_4B1605A = 1;
  }
  v23 = sub_1BCAA2C(DialogMessageEntity___c__DisplayClass22_0_TypeInfo, decideTxt, callback, decideCallback);
  System_Object___ctor((Il2CppObject *)v23, 0LL);
  if ( !v23 )
    goto LABEL_10;
  *(_QWORD *)(v23 + 16) = decideCallback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v23 + 16), (int64_t)decideCallback, v26, v27, v28, v29, v30, v31);
  *(_QWORD *)(v23 + 24) = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v23 + 24), (int64_t)callback, v32, v33, v34, v35, v36, v37);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  title = this->fields.title;
  message = this->fields.message;
  v42 = (CommonUI_o *)Instance;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v39);
  v43 = LocalizationManager__Get((System_String_o *)StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  v47 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(CommonConfirmDialog_ClickDelegate_TypeInfo, v44, v45, v46);
  CommonConfirmDialog_ClickDelegate___ctor(
    v47,
    (Il2CppObject *)v23,
    Method_DialogMessageEntity___c__DisplayClass22_0__OpenConfirmDecideDialog_b__0__,
    0LL);
  MsgFontSize = DialogMessageEntity__GetMsgFontSize(this, 26, v48);
  MsgPosY = DialogMessageEntity__GetMsgPosY(this, v50);
  MsgSpacingY = DialogMessageEntity__GetMsgSpacingY(this, v52);
  titleFontSize = DialogMessageEntity__GetTitleFontSize(this, v54);
  if ( !v42 )
LABEL_10:
    sub_1BCAA3C(titleFontSize, v25);
  value = MsgPosY.fields.value;
  if ( !MsgPosY.fields.hasValue )
    value = 15.0;
  CommonUI__OpenConfirmDecideDlg(
    v42,
    title,
    message,
    decideTxt,
    v43,
    v47,
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
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B16062 & 1) == 0 )
  {
    sub_1BCA7E0(&DialogMessageEntity___c_TypeInfo, v1, v2);
    byte_4B16062 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(DialogMessageEntity___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  DialogMessageEntity___c_TypeInfo->static_fields->__9 = (struct DialogMessageEntity___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)DialogMessageEntity___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  Il2CppObject *Instance; // x19
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  System_Action_o *v25; // x20

  if ( (byte_4B16063 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    sub_1BCA7E0(&Method_DialogMessageEntity___c__DisplayClass22_1__OpenConfirmDecideDialog_b__1__, v8, v9);
    sub_1BCA7E0(&DialogMessageEntity___c__DisplayClass22_1_TypeInfo, v10, v11);
    byte_4B16063 = 1;
  }
  v12 = sub_1BCAA2C(DialogMessageEntity___c__DisplayClass22_1_TypeInfo, isDecide, method, v3);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12
    || (*(_QWORD *)(v12 + 24) = this,
        sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 24), (int64_t)this, v15, v16, v17, v18, v19, v20),
        *(_BYTE *)(v12 + 16) = isDecide,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v25 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v22, v23, v24),
        System_Action___ctor(
          v25,
          (Il2CppObject *)v12,
          Method_DialogMessageEntity___c__DisplayClass22_1__OpenConfirmDecideDialog_b__1__,
          0LL),
        !Instance) )
  {
    sub_1BCAA3C(v13, v14);
  }
  CommonUI__CloseConfirmDialog_30766896((CommonUI_o *)Instance, v25, 0LL);
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
    sub_1BCAA3C(this, method);
  v3 = 24LL;
  if ( this->fields.isDecide )
    v3 = 16LL;
  ActionExtensions__Call(*(System_Action_o **)((char *)&CS___8__locals1->klass + v3), 0LL);
}