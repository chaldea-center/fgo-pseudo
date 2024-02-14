void __fastcall DialogMessageEntity___ctor(DialogMessageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_421626B & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_int___ctor__, method);
    byte_421626B = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_2669A80 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall DialogMessageEntity__CreatePrimaryKey(DialogMessageEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t __fastcall DialogMessageEntity__GetOpenType(DialogMessageEntity_o *this, const MethodInfo *method)
{
  return this->fields.dialogOpenType;
}


void __fastcall DialogMessageEntity__Open(
        DialogMessageEntity_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x20
  __int64 v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct System_Int32_array *imageIds; // x8
  WebViewManager_o *Instance; // x0
  System_Int32_array *v19; // x19
  CommonUI_o *v20; // x21
  __int64 v21; // x1
  __int64 v22; // x2
  System_Action_o *v23; // x22
  WebViewManager_o *v24; // x0
  System_String_o *message; // x19
  System_String_o *title; // x21
  CommonUI_o *v27; // x22
  __int64 v28; // x1
  __int64 v29; // x2
  System_Action_o *v30; // x23

  if ( (byte_421626A & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, callback);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B0D8A4(&Method_DialogMessageEntity___c__DisplayClass15_0__Open_b__0__, v6);
    sub_B0D8A4(&Method_DialogMessageEntity___c__DisplayClass15_0__Open_b__1__, v7);
    sub_B0D8A4(&DialogMessageEntity___c__DisplayClass15_0_TypeInfo, v8);
    byte_421626A = 1;
  }
  v9 = sub_B0D974(DialogMessageEntity___c__DisplayClass15_0_TypeInfo, callback, method);
  DialogMessageEntity___c__DisplayClass15_0___ctor((DialogMessageEntity___c__DisplayClass15_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_10;
  *(_QWORD *)(v9 + 16) = callback;
  sub_B0D840((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)callback, v11, v12, v13, v14, v15, v16);
  imageIds = this->fields.imageIds;
  if ( imageIds && *(_QWORD *)&imageIds->max_length )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v19 = this->fields.imageIds;
    v20 = (CommonUI_o *)Instance;
    v23 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v21, v22);
    System_Action___ctor(v23, (Il2CppObject *)v9, Method_DialogMessageEntity___c__DisplayClass15_0__Open_b__0__, 0LL);
    if ( v20 )
    {
      CommonUI__OpenTutorialImageDialog_17043120(v20, v19, -1, 0, v23, 0LL, 0LL, 0LL);
      return;
    }
LABEL_10:
    sub_B0D97C(v10);
  }
  v24 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  title = this->fields.title;
  message = this->fields.message;
  v27 = (CommonUI_o *)v24;
  v30 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v28, v29);
  System_Action___ctor(v30, (Il2CppObject *)v9, Method_DialogMessageEntity___c__DisplayClass15_0__Open_b__1__, 0LL);
  if ( !v27 )
    goto LABEL_10;
  CommonUI__OpenNotificationDialog(v27, title, message, v30, -1, 0, 0, 0, 1, 0, 0, 0, 0LL, 0LL);
}


System_Int32_array_array *__fastcall DialogMessageEntity__getTargets(
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
  __int64 v10; // x1
  __int64 v11; // x1
  struct System_String_array *targetIds; // x8
  System_String_o *v13; // x0
  struct System_String_array *v14; // x8
  System_Int32_array_array *v15; // x20
  __int64 v16; // x25
  BattleServantConfConponent_o *p_monitor; // x21
  int max_length; // w9
  System_String_o *v19; // x22
  System_String_array *v20; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  DialogMessageEntity___c_c *v23; // x8
  System_String_array *v24; // x22
  struct DialogMessageEntity___c_StaticFields *static_fields; // x9
  System_Converter_BattleActionData_HealData__int__o *_9__10_0; // x23
  Il2CppObject *v27; // x24
  struct DialogMessageEntity___c_StaticFields *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Int32_array **v41; // x22
  __int64 v43; // x0
  __int64 v44; // x0

  if ( (byte_4216268 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_ConvertAll_string__int___, method);
    sub_B0D8A4(&char___TypeInfo, v3);
    sub_B0D8A4(&Method_System_Converter_string__int___ctor__, v4);
    sub_B0D8A4(&System_Converter_string__int__TypeInfo, v5);
    sub_B0D8A4(&int_____TypeInfo, v6);
    sub_B0D8A4(&Method_DialogMessageEntity___c__getTargets_b__10_0__, v7);
    sub_B0D8A4(&DialogMessageEntity___c_TypeInfo, v8);
    sub_B0D8A4(&StringLiteral_15681/*"["*/, v9);
    sub_B0D8A4(&StringLiteral_1/*""*/, v10);
    sub_B0D8A4(&StringLiteral_15917/*"]"*/, v11);
    byte_4216268 = 1;
  }
  targetIds = this->fields.targetIds;
  if ( !targetIds )
    return (System_Int32_array_array *)sub_B0D8BC(int_____TypeInfo, 1LL);
  v13 = (System_String_o *)sub_B0D8BC(int_____TypeInfo, targetIds->max_length);
  v14 = this->fields.targetIds;
  if ( !v14 )
LABEL_26:
    sub_B0D97C(v13);
  v15 = (System_Int32_array_array *)v13;
  v16 = 0LL;
  p_monitor = (BattleServantConfConponent_o *)&v13[1].monitor;
  while ( 1 )
  {
    max_length = v14->max_length;
    if ( (int)v16 >= max_length )
      return v15;
    if ( (unsigned int)v16 >= max_length )
      goto LABEL_29;
    v13 = v14->m_Items[v16];
    if ( v13 )
    {
      v13 = System_String__Replace_43857140(
              v13,
              (System_String_o *)StringLiteral_15681/*"["*/,
              (System_String_o *)StringLiteral_1/*""*/,
              0LL);
      if ( v13 )
      {
        v19 = System_String__Replace_43857140(
                v13,
                (System_String_o *)StringLiteral_15917/*"]"*/,
                (System_String_o *)StringLiteral_1/*""*/,
                0LL);
        v13 = (System_String_o *)sub_B0D8BC(char___TypeInfo, 1LL);
        if ( v13 )
        {
          if ( !LODWORD(v13[1].klass) )
            goto LABEL_29;
          LOWORD(v13[1].monitor) = 44;
          if ( v19 )
          {
            v20 = System_String__Split(v19, (System_Char_array *)v13, 0LL);
            v23 = DialogMessageEntity___c_TypeInfo;
            v24 = v20;
            if ( (BYTE3(DialogMessageEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !DialogMessageEntity___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DialogMessageEntity___c_TypeInfo);
              v23 = DialogMessageEntity___c_TypeInfo;
            }
            static_fields = v23->static_fields;
            _9__10_0 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__10_0;
            if ( !_9__10_0 )
            {
              if ( (BYTE3(v23->vtable._0_Equals.methodPtr) & 4) != 0 && !v23->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v23);
                static_fields = DialogMessageEntity___c_TypeInfo->static_fields;
              }
              v27 = (Il2CppObject *)static_fields->__9;
              _9__10_0 = (System_Converter_BattleActionData_HealData__int__o *)sub_B0D974(
                                                                                 System_Converter_string__int__TypeInfo,
                                                                                 v21,
                                                                                 v22);
              System_Converter_BattleActionData_HealData__int____ctor(
                _9__10_0,
                v27,
                Method_DialogMessageEntity___c__getTargets_b__10_0__,
                (const MethodInfo_2665D70 *)Method_System_Converter_string__int___ctor__);
              v28 = DialogMessageEntity___c_TypeInfo->static_fields;
              v28->__9__10_0 = (struct System_Converter_string__int__o *)_9__10_0;
              sub_B0D840(
                (BattleServantConfConponent_o *)&v28->__9__10_0,
                (System_Int32_array **)_9__10_0,
                v29,
                v30,
                v31,
                v32,
                v33,
                v34);
            }
            v13 = (System_String_o *)System_Array__ConvertAll_string__int_(
                                       v24,
                                       (System_Converter_TInput__TOutput__o *)_9__10_0,
                                       (const MethodInfo_1F677F0 *)Method_System_Array_ConvertAll_string__int___);
            if ( v15 )
            {
              v41 = (System_Int32_array **)v13;
              if ( v13 )
              {
                v13 = (System_String_o *)sub_B0D964(v13, v15->obj.klass->_1.element_class);
                if ( !v13 )
                {
                  v44 = sub_B0D99C(0LL);
                  sub_B0D948(v44, 0LL);
                }
              }
              if ( (unsigned int)v16 >= v15->max_length )
              {
LABEL_29:
                v43 = sub_B0D9A8(v13);
                sub_B0D948(v43, 0LL);
              }
              p_monitor->klass = (BattleServantConfConponent_c *)v41;
              sub_B0D840(p_monitor, v41, v35, v36, v37, v38, v39, v40);
              v14 = this->fields.targetIds;
              ++v16;
              p_monitor = (BattleServantConfConponent_o *)((char *)p_monitor + 8);
              if ( v14 )
                continue;
            }
          }
        }
      }
    }
    goto LABEL_26;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall DialogMessageEntity__isOpenCondition(
        DialogMessageEntity_o *this,
        int32_t ex1,
        int32_t ex2,
        int32_t ex3,
        int32_t ex4,
        const MethodInfo *method)
{
  DialogMessageEntity__getTargets(this, *(const MethodInfo **)&ex1);
  return this->fields.dialogOpenType == 1;
}


bool __fastcall DialogMessageEntity__isOpenTime(DialogMessageEntity_o *this, int64_t now, const MethodInfo *method)
{
  int64_t Time; // x20

  Time = now;
  if ( (byte_4216269 & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, now);
    byte_4216269 = 1;
  }
  if ( !Time )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Time = NetworkManager__getTime(0LL);
  }
  return Time >= this->fields.openedAt && Time < this->fields.closedAt;
}


void __fastcall DialogMessageEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_42131D3 & 1) == 0 )
  {
    sub_B0D8A4(&DialogMessageEntity___c_TypeInfo, v1);
    byte_42131D3 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(DialogMessageEntity___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = (BattleServantConfConponent_o *)DialogMessageEntity___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v3;
  sub_B0D840(static_fields, (System_Int32_array **)v3, v5, v6, v7, v8, v9, v10);
}


void __fastcall DialogMessageEntity___c___ctor(DialogMessageEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall DialogMessageEntity___c___getTargets_b__10_0(
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


void __fastcall DialogMessageEntity___c__DisplayClass15_0___ctor(
        DialogMessageEntity___c__DisplayClass15_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall DialogMessageEntity___c__DisplayClass15_0___Open_b__0(
        DialogMessageEntity___c__DisplayClass15_0_o *this,
        const MethodInfo *method)
{
  System_Action_o *callback; // x0

  callback = this->fields.callback;
  if ( !callback )
    sub_B0D97C(0LL);
  System_Action__Invoke(callback, 0LL);
}


void __fastcall DialogMessageEntity___c__DisplayClass15_0___Open_b__1(
        DialogMessageEntity___c__DisplayClass15_0_o *this,
        const MethodInfo *method)
{
  System_Action_o *callback; // x0

  callback = this->fields.callback;
  if ( !callback )
    sub_B0D97C(0LL);
  System_Action__Invoke(callback, 0LL);
}